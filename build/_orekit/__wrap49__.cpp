#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialFunction::class$ = NULL;
        jmethodID *FieldPolynomialFunction::mids$ = NULL;
        bool FieldPolynomialFunction::live$ = false;

        jclass FieldPolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8b0f7facc8a6a46e] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_add_3540fbdca36a9a2d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_antiDerivative_8acb8b6f60143fc2] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_degree_55546ef6a647f39b] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_getCoefficients_883be608cfc68c26] = env->getMethodID(cls, "getCoefficients", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_integrate_7cdd86319cd5fd7c] = env->getMethodID(cls, "integrate", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_c6408fdce2cc6c1a] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_multiply_3540fbdca36a9a2d] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_negate_8acb8b6f60143fc2] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_polynomialDerivative_8acb8b6f60143fc2] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_subtract_3540fbdca36a9a2d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_value_1d3e368d09a6f8a6] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_a753398bd4e84b37] = env->getStaticMethodID(cls, "evaluate", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_differentiate_1cc99f34da9b4a7b] = env->getStaticMethodID(cls, "differentiate", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialFunction::FieldPolynomialFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b0f7facc8a6a46e, a0.this$)) {}

        FieldPolynomialFunction FieldPolynomialFunction::add(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_3540fbdca36a9a2d], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::antiDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_8acb8b6f60143fc2]));
        }

        jint FieldPolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_55546ef6a647f39b]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialFunction::getCoefficients() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCoefficients_883be608cfc68c26]));
        }

        ::org::hipparchus::Field FieldPolynomialFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_7cdd86319cd5fd7c], a0, a1));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_c6408fdce2cc6c1a], a0.this$, a1.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::multiply(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_3540fbdca36a9a2d], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::negate() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_8acb8b6f60143fc2]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::polynomialDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_8acb8b6f60143fc2]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::subtract(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_3540fbdca36a9a2d], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_1d3e368d09a6f8a6], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
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
        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args);
        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, coefficients),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialFunction, t_FieldPolynomialFunction, FieldPolynomialFunction);
        PyObject *t_FieldPolynomialFunction::wrap_Object(const FieldPolynomialFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialFunction), &PY_TYPE_DEF(FieldPolynomialFunction), module, "FieldPolynomialFunction", 0);
        }

        void t_FieldPolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "class_", make_descriptor(FieldPolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "wrapfn_", make_descriptor(t_FieldPolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialFunction::wrap_Object(FieldPolynomialFunction(((t_FieldPolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldPolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldDateDetector::class$ = NULL;
        jmethodID *FieldDateDetector::mids$ = NULL;
        bool FieldDateDetector::live$ = false;
        jdouble FieldDateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldDateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldDateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2db260886c47962b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/orekit/time/FieldTimeStamped;)V");
            mids$[mid_addEventDate_382e93bb0508f0e4] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getDates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_dd92e8644626e7e1] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/FieldDateDetector;");
            mids$[mid_create_ac22377e890bc84d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldDateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDateDetector::FieldDateDetector(const ::org::hipparchus::Field & a0, const JArray< ::org::orekit::time::FieldTimeStamped > & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2db260886c47962b, a0.this$, a1.this$)) {}

        void FieldDateDetector::addEventDate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_382e93bb0508f0e4], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldDateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldDateDetector::getDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
        }

        ::java::util::List FieldDateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_e62d3bb06d56d7e3]));
        }

        FieldDateDetector FieldDateDetector::withMinGap(jdouble a0) const
        {
          return FieldDateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_dd92e8644626e7e1], a0));
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
        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args);
        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args);
        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data);
        static PyGetSetDef t_FieldDateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDateDetector, date),
          DECLARE_GET_FIELD(t_FieldDateDetector, dates),
          DECLARE_GET_FIELD(t_FieldDateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldDateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_FieldDateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDateDetector)[] = {
          { Py_tp_methods, t_FieldDateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldDateDetector_init_ },
          { Py_tp_getset, t_FieldDateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldDateDetector, t_FieldDateDetector, FieldDateDetector);
        PyObject *t_FieldDateDetector::wrap_Object(const FieldDateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDateDetector), &PY_TYPE_DEF(FieldDateDetector), module, "FieldDateDetector", 0);
        }

        void t_FieldDateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "class_", make_descriptor(FieldDateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "wrapfn_", make_descriptor(t_FieldDateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldDateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MAX_CHECK", make_descriptor(FieldDateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MIN_GAP", make_descriptor(FieldDateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldDateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldDateDetector::wrap_Object(FieldDateDetector(((t_FieldDateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::time::FieldTimeStamped > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDateDetector object((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
          {
            INT_CALL(object = FieldDateDetector(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldDateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldDateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_FieldDateDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDates());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *SourceTable::class$ = NULL;
          jmethodID *SourceTable::mids$ = NULL;
          bool SourceTable::live$ = false;

          jclass SourceTable::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/SourceTable");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCasters_e62d3bb06d56d7e3] = env->getMethodID(cls, "getCasters", "()Ljava/util/List;");
              mids$[mid_getDataStreams_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDataStreams", "()Ljava/util/List;");
              mids$[mid_getNetworks_e62d3bb06d56d7e3] = env->getMethodID(cls, "getNetworks", "()Ljava/util/List;");
              mids$[mid_getNtripFlags_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNtripFlags", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List SourceTable::getCasters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCasters_e62d3bb06d56d7e3]));
          }

          ::java::util::List SourceTable::getDataStreams() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataStreams_e62d3bb06d56d7e3]));
          }

          ::java::util::List SourceTable::getNetworks() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNetworks_e62d3bb06d56d7e3]));
          }

          ::java::lang::String SourceTable::getNtripFlags() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNtripFlags_1c1fa1e935d6cdcf]));
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
          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_getCasters(t_SourceTable *self);
          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self);
          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self);
          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self);
          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data);
          static PyGetSetDef t_SourceTable__fields_[] = {
            DECLARE_GET_FIELD(t_SourceTable, casters),
            DECLARE_GET_FIELD(t_SourceTable, dataStreams),
            DECLARE_GET_FIELD(t_SourceTable, networks),
            DECLARE_GET_FIELD(t_SourceTable, ntripFlags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SourceTable__methods_[] = {
            DECLARE_METHOD(t_SourceTable, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, getCasters, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getDataStreams, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNetworks, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNtripFlags, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SourceTable)[] = {
            { Py_tp_methods, t_SourceTable__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SourceTable__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SourceTable)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SourceTable, t_SourceTable, SourceTable);

          void t_SourceTable::install(PyObject *module)
          {
            installType(&PY_TYPE(SourceTable), &PY_TYPE_DEF(SourceTable), module, "SourceTable", 0);
          }

          void t_SourceTable::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "class_", make_descriptor(SourceTable::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "wrapfn_", make_descriptor(t_SourceTable::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SourceTable::initializeClass, 1)))
              return NULL;
            return t_SourceTable::wrap_Object(SourceTable(((t_SourceTable *) arg)->object.this$));
          }
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SourceTable::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SourceTable_getCasters(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(CasterRecord));
          }

          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(DataStreamRecord));
          }

          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NetworkRecord));
          }

          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNtripFlags());
            return j2p(result);
          }

          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNtripFlags());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *RegressionResults::class$ = NULL;
        jmethodID *RegressionResults::mids$ = NULL;
        bool RegressionResults::live$ = false;

        jclass RegressionResults::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/RegressionResults");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9d4bc8dcfca683ea] = env->getMethodID(cls, "<init>", "([D[[DZJIDDDZZ)V");
            mids$[mid_getAdjustedRSquared_b74f83833fdad017] = env->getMethodID(cls, "getAdjustedRSquared", "()D");
            mids$[mid_getCovarianceOfParameters_cad98089d00f8a5b] = env->getMethodID(cls, "getCovarianceOfParameters", "(II)D");
            mids$[mid_getErrorSumSquares_b74f83833fdad017] = env->getMethodID(cls, "getErrorSumSquares", "()D");
            mids$[mid_getMeanSquareError_b74f83833fdad017] = env->getMethodID(cls, "getMeanSquareError", "()D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getNumberOfParameters_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfParameters", "()I");
            mids$[mid_getParameterEstimate_2afcbc21f4e57ab2] = env->getMethodID(cls, "getParameterEstimate", "(I)D");
            mids$[mid_getParameterEstimates_25e1757a36c4dde2] = env->getMethodID(cls, "getParameterEstimates", "()[D");
            mids$[mid_getRSquared_b74f83833fdad017] = env->getMethodID(cls, "getRSquared", "()D");
            mids$[mid_getRegressionSumSquares_b74f83833fdad017] = env->getMethodID(cls, "getRegressionSumSquares", "()D");
            mids$[mid_getStdErrorOfEstimate_2afcbc21f4e57ab2] = env->getMethodID(cls, "getStdErrorOfEstimate", "(I)D");
            mids$[mid_getStdErrorOfEstimates_25e1757a36c4dde2] = env->getMethodID(cls, "getStdErrorOfEstimates", "()[D");
            mids$[mid_getTotalSumSquares_b74f83833fdad017] = env->getMethodID(cls, "getTotalSumSquares", "()D");
            mids$[mid_hasIntercept_9ab94ac1dc23b105] = env->getMethodID(cls, "hasIntercept", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegressionResults::RegressionResults(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jboolean a2, jlong a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jboolean a8, jboolean a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9d4bc8dcfca683ea, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        jdouble RegressionResults::getAdjustedRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAdjustedRSquared_b74f83833fdad017]);
        }

        jdouble RegressionResults::getCovarianceOfParameters(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovarianceOfParameters_cad98089d00f8a5b], a0, a1);
        }

        jdouble RegressionResults::getErrorSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getErrorSumSquares_b74f83833fdad017]);
        }

        jdouble RegressionResults::getMeanSquareError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMeanSquareError_b74f83833fdad017]);
        }

        jlong RegressionResults::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jint RegressionResults::getNumberOfParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfParameters_55546ef6a647f39b]);
        }

        jdouble RegressionResults::getParameterEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getParameterEstimate_2afcbc21f4e57ab2], a0);
        }

        JArray< jdouble > RegressionResults::getParameterEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterEstimates_25e1757a36c4dde2]));
        }

        jdouble RegressionResults::getRSquared() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRSquared_b74f83833fdad017]);
        }

        jdouble RegressionResults::getRegressionSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRegressionSumSquares_b74f83833fdad017]);
        }

        jdouble RegressionResults::getStdErrorOfEstimate(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStdErrorOfEstimate_2afcbc21f4e57ab2], a0);
        }

        JArray< jdouble > RegressionResults::getStdErrorOfEstimates() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStdErrorOfEstimates_25e1757a36c4dde2]));
        }

        jdouble RegressionResults::getTotalSumSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalSumSquares_b74f83833fdad017]);
        }

        jboolean RegressionResults::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_9ab94ac1dc23b105]);
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
      namespace regression {
        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args);
        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getN(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg);
        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self);
        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self);
        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self);
        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data);
        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data);
        static PyGetSetDef t_RegressionResults__fields_[] = {
          DECLARE_GET_FIELD(t_RegressionResults, adjustedRSquared),
          DECLARE_GET_FIELD(t_RegressionResults, errorSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, meanSquareError),
          DECLARE_GET_FIELD(t_RegressionResults, n),
          DECLARE_GET_FIELD(t_RegressionResults, numberOfParameters),
          DECLARE_GET_FIELD(t_RegressionResults, parameterEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, rSquared),
          DECLARE_GET_FIELD(t_RegressionResults, regressionSumSquares),
          DECLARE_GET_FIELD(t_RegressionResults, stdErrorOfEstimates),
          DECLARE_GET_FIELD(t_RegressionResults, totalSumSquares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegressionResults__methods_[] = {
          DECLARE_METHOD(t_RegressionResults, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegressionResults, getAdjustedRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getCovarianceOfParameters, METH_VARARGS),
          DECLARE_METHOD(t_RegressionResults, getErrorSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getMeanSquareError, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getN, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getNumberOfParameters, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getParameterEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRSquared, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getRegressionSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimate, METH_O),
          DECLARE_METHOD(t_RegressionResults, getStdErrorOfEstimates, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, getTotalSumSquares, METH_NOARGS),
          DECLARE_METHOD(t_RegressionResults, hasIntercept, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegressionResults)[] = {
          { Py_tp_methods, t_RegressionResults__methods_ },
          { Py_tp_init, (void *) t_RegressionResults_init_ },
          { Py_tp_getset, t_RegressionResults__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegressionResults)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegressionResults, t_RegressionResults, RegressionResults);

        void t_RegressionResults::install(PyObject *module)
        {
          installType(&PY_TYPE(RegressionResults), &PY_TYPE_DEF(RegressionResults), module, "RegressionResults", 0);
        }

        void t_RegressionResults::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "class_", make_descriptor(RegressionResults::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "wrapfn_", make_descriptor(t_RegressionResults::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegressionResults), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegressionResults_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegressionResults::initializeClass, 1)))
            return NULL;
          return t_RegressionResults::wrap_Object(RegressionResults(((t_RegressionResults *) arg)->object.this$));
        }
        static PyObject *t_RegressionResults_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegressionResults::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RegressionResults_init_(t_RegressionResults *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          jboolean a2;
          jlong a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jboolean a8;
          jboolean a9;
          RegressionResults object((jobject) NULL);

          if (!parseArgs(args, "[D[[DZJIDDDZZ", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = RegressionResults(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RegressionResults_getAdjustedRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getCovarianceOfParameters(t_RegressionResults *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovarianceOfParameters(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovarianceOfParameters", args);
          return NULL;
        }

        static PyObject *t_RegressionResults_getErrorSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getMeanSquareError(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getN(t_RegressionResults *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_RegressionResults_getNumberOfParameters(t_RegressionResults *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RegressionResults_getParameterEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getParameterEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getParameterEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParameterEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getRSquared(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRSquared());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getRegressionSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimate(t_RegressionResults *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStdErrorOfEstimate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStdErrorOfEstimate", arg);
          return NULL;
        }

        static PyObject *t_RegressionResults_getStdErrorOfEstimates(t_RegressionResults *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStdErrorOfEstimates());
          return result.wrap();
        }

        static PyObject *t_RegressionResults_getTotalSumSquares(t_RegressionResults *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RegressionResults_hasIntercept(t_RegressionResults *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RegressionResults_get__adjustedRSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAdjustedRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__errorSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getErrorSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__meanSquareError(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMeanSquareError());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__n(t_RegressionResults *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_RegressionResults_get__numberOfParameters(t_RegressionResults *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RegressionResults_get__parameterEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParameterEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__rSquared(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRSquared());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__regressionSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRegressionSumSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RegressionResults_get__stdErrorOfEstimates(t_RegressionResults *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStdErrorOfEstimates());
          return value.wrap();
        }

        static PyObject *t_RegressionResults_get__totalSumSquares(t_RegressionResults *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalSumSquares());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldEquationsMapper::class$ = NULL;
      jmethodID *FieldEquationsMapper::mids$ = NULL;
      bool FieldEquationsMapper::live$ = false;

      jclass FieldEquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldEquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_a513190ee23c08a2] = env->getMethodID(cls, "extractEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNumberOfEquations_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_55546ef6a647f39b] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_d2db5bedc2716798] = env->getMethodID(cls, "insertEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapStateAndDerivative_3bcb34e82e5225d3] = env->getMethodID(cls, "mapStateAndDerivative", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldEquationsMapper::extractEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractEquationData_a513190ee23c08a2], a0, a1.this$));
      }

      jint FieldEquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_55546ef6a647f39b]);
      }

      jint FieldEquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_55546ef6a647f39b]);
      }

      void FieldEquationsMapper::insertEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_d2db5bedc2716798], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldEquationsMapper::mapStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_3bcb34e82e5225d3], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data);
      static PyGetSetDef t_FieldEquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, totalDimension),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquationsMapper__methods_[] = {
        DECLARE_METHOD(t_FieldEquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquationsMapper)[] = {
        { Py_tp_methods, t_FieldEquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEquationsMapper, t_FieldEquationsMapper, FieldEquationsMapper);
      PyObject *t_FieldEquationsMapper::wrap_Object(const FieldEquationsMapper& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquationsMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquationsMapper), &PY_TYPE_DEF(FieldEquationsMapper), module, "FieldEquationsMapper", 0);
      }

      void t_FieldEquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "class_", make_descriptor(FieldEquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "wrapfn_", make_descriptor(t_FieldEquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquationsMapper::initializeClass, 1)))
          return NULL;
        return t_FieldEquationsMapper::wrap_Object(FieldEquationsMapper(((t_FieldEquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "I[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
              mids$[mid_init$_65a195fe57e45aec] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Segment;)V");
              mids$[mid_init$_d2188b18eb0641eb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;)V");
              mids$[mid_init$_4fbea8fa1cddeb2d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_9efff305bd180435] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/SubLine;Z)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Segment & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65a195fe57e45aec, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::oned::IntervalsSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d2188b18eb0641eb, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fbea8fa1cddeb2d, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_9efff305bd180435], a0.this$, a1));
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
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getActualOdSpan_b74f83833fdad017] = env->getMethodID(cls, "getActualOdSpan", "()D");
                mids$[mid_getObsAvailable_55546ef6a647f39b] = env->getMethodID(cls, "getObsAvailable", "()I");
                mids$[mid_getObsUsed_55546ef6a647f39b] = env->getMethodID(cls, "getObsUsed", "()I");
                mids$[mid_getOdEpoch_c325492395d89b24] = env->getMethodID(cls, "getOdEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getRecommendedOdSpan_b74f83833fdad017] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                mids$[mid_getResidualsAccepted_b74f83833fdad017] = env->getMethodID(cls, "getResidualsAccepted", "()D");
                mids$[mid_getTimeLastObsEnd_c325492395d89b24] = env->getMethodID(cls, "getTimeLastObsEnd", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeLastObsStart_c325492395d89b24] = env->getMethodID(cls, "getTimeLastObsStart", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTracksAvailable_55546ef6a647f39b] = env->getMethodID(cls, "getTracksAvailable", "()I");
                mids$[mid_getTracksUsed_55546ef6a647f39b] = env->getMethodID(cls, "getTracksUsed", "()I");
                mids$[mid_getWeightedRMS_b74f83833fdad017] = env->getMethodID(cls, "getWeightedRMS", "()D");
                mids$[mid_setActualOdSpan_8ba9fe7a847cecad] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                mids$[mid_setObsAvailable_44ed599e93e8a30c] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                mids$[mid_setObsUsed_44ed599e93e8a30c] = env->getMethodID(cls, "setObsUsed", "(I)V");
                mids$[mid_setOdEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setOdEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setRecommendedOdSpan_8ba9fe7a847cecad] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                mids$[mid_setResidualsAccepted_8ba9fe7a847cecad] = env->getMethodID(cls, "setResidualsAccepted", "(D)V");
                mids$[mid_setTimeLastObsEnd_02135a6ef25adb4b] = env->getMethodID(cls, "setTimeLastObsEnd", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeLastObsStart_02135a6ef25adb4b] = env->getMethodID(cls, "setTimeLastObsStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTracksAvailable_44ed599e93e8a30c] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                mids$[mid_setTracksUsed_44ed599e93e8a30c] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                mids$[mid_setWeightedRMS_8ba9fe7a847cecad] = env->getMethodID(cls, "setWeightedRMS", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ODParameters::ODParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble ODParameters::getActualOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_b74f83833fdad017]);
            }

            jint ODParameters::getObsAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsAvailable_55546ef6a647f39b]);
            }

            jint ODParameters::getObsUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getObsUsed_55546ef6a647f39b]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getOdEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOdEpoch_c325492395d89b24]));
            }

            jdouble ODParameters::getRecommendedOdSpan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_b74f83833fdad017]);
            }

            jdouble ODParameters::getResidualsAccepted() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getResidualsAccepted_b74f83833fdad017]);
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsEnd() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsEnd_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate ODParameters::getTimeLastObsStart() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTimeLastObsStart_c325492395d89b24]));
            }

            jint ODParameters::getTracksAvailable() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksAvailable_55546ef6a647f39b]);
            }

            jint ODParameters::getTracksUsed() const
            {
              return env->callIntMethod(this$, mids$[mid_getTracksUsed_55546ef6a647f39b]);
            }

            jdouble ODParameters::getWeightedRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getWeightedRMS_b74f83833fdad017]);
            }

            void ODParameters::setActualOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setActualOdSpan_8ba9fe7a847cecad], a0);
            }

            void ODParameters::setObsAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsAvailable_44ed599e93e8a30c], a0);
            }

            void ODParameters::setObsUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsUsed_44ed599e93e8a30c], a0);
            }

            void ODParameters::setOdEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdEpoch_02135a6ef25adb4b], a0.this$);
            }

            void ODParameters::setRecommendedOdSpan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_8ba9fe7a847cecad], a0);
            }

            void ODParameters::setResidualsAccepted(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setResidualsAccepted_8ba9fe7a847cecad], a0);
            }

            void ODParameters::setTimeLastObsEnd(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsEnd_02135a6ef25adb4b], a0.this$);
            }

            void ODParameters::setTimeLastObsStart(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeLastObsStart_02135a6ef25adb4b], a0.this$);
            }

            void ODParameters::setTracksAvailable(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksAvailable_44ed599e93e8a30c], a0);
            }

            void ODParameters::setTracksUsed(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTracksUsed_44ed599e93e8a30c], a0);
            }

            void ODParameters::setWeightedRMS(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeightedRMS_8ba9fe7a847cecad], a0);
            }

            void ODParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction$ConvergenceTest::class$ = NULL;
      jmethodID *BigFraction$ConvergenceTest::mids$ = NULL;
      bool BigFraction$ConvergenceTest::live$ = false;

      jclass BigFraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_1b137d4ac927d5c5] = env->getMethodID(cls, "test", "(JJ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFraction$ConvergenceTest::test(jlong a0, jlong a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_1b137d4ac927d5c5], a0, a1);
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
      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_BigFraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_BigFraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFraction$ConvergenceTest, t_BigFraction$ConvergenceTest, BigFraction$ConvergenceTest);

      void t_BigFraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction$ConvergenceTest), &PY_TYPE_DEF(BigFraction$ConvergenceTest), module, "BigFraction$ConvergenceTest", 0);
      }

      void t_BigFraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "class_", make_descriptor(BigFraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "wrapfn_", make_descriptor(t_BigFraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_BigFraction$ConvergenceTest::wrap_Object(BigFraction$ConvergenceTest(((t_BigFraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jboolean result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/CauchyDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *CauchyDistribution::class$ = NULL;
        jmethodID *CauchyDistribution::mids$ = NULL;
        bool CauchyDistribution::live$ = false;

        jclass CauchyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/CauchyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMedian_b74f83833fdad017] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CauchyDistribution::CauchyDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        CauchyDistribution::CauchyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble CauchyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble CauchyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble CauchyDistribution::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_b74f83833fdad017]);
        }

        jdouble CauchyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble CauchyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble CauchyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble CauchyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble CauchyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble CauchyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean CauchyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data);
        static PyGetSetDef t_CauchyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_CauchyDistribution, median),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_CauchyDistribution, scale),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CauchyDistribution__methods_[] = {
          DECLARE_METHOD(t_CauchyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CauchyDistribution)[] = {
          { Py_tp_methods, t_CauchyDistribution__methods_ },
          { Py_tp_init, (void *) t_CauchyDistribution_init_ },
          { Py_tp_getset, t_CauchyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CauchyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(CauchyDistribution, t_CauchyDistribution, CauchyDistribution);

        void t_CauchyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(CauchyDistribution), &PY_TYPE_DEF(CauchyDistribution), module, "CauchyDistribution", 0);
        }

        void t_CauchyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "class_", make_descriptor(CauchyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "wrapfn_", make_descriptor(t_CauchyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CauchyDistribution::initializeClass, 1)))
            return NULL;
          return t_CauchyDistribution::wrap_Object(CauchyDistribution(((t_CauchyDistribution *) arg)->object.this$));
        }
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CauchyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CauchyDistribution object((jobject) NULL);

              INT_CALL(object = CauchyDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              CauchyDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CauchyDistribution(a0, a1));
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

        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BisectionSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BisectionSolver::class$ = NULL;
        jmethodID *BisectionSolver::mids$ = NULL;
        bool BisectionSolver::live$ = false;

        jclass BisectionSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BisectionSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BisectionSolver::BisectionSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        BisectionSolver::BisectionSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        BisectionSolver::BisectionSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}
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
        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args);
        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data);
        static PyGetSetDef t_BisectionSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BisectionSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BisectionSolver__methods_[] = {
          DECLARE_METHOD(t_BisectionSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BisectionSolver)[] = {
          { Py_tp_methods, t_BisectionSolver__methods_ },
          { Py_tp_init, (void *) t_BisectionSolver_init_ },
          { Py_tp_getset, t_BisectionSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BisectionSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BisectionSolver, t_BisectionSolver, BisectionSolver);
        PyObject *t_BisectionSolver::wrap_Object(const BisectionSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BisectionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BisectionSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BisectionSolver), &PY_TYPE_DEF(BisectionSolver), module, "BisectionSolver", 0);
        }

        void t_BisectionSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "class_", make_descriptor(BisectionSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "wrapfn_", make_descriptor(t_BisectionSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BisectionSolver::initializeClass, 1)))
            return NULL;
          return t_BisectionSolver::wrap_Object(BisectionSolver(((t_BisectionSolver *) arg)->object.this$));
        }
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BisectionSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BisectionSolver object((jobject) NULL);

              INT_CALL(object = BisectionSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BisectionSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BisectionSolver(a0, a1));
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
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ElevationFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ElevationFilter::class$ = NULL;
          jmethodID *ElevationFilter::mids$ = NULL;
          bool ElevationFilter::live$ = false;

          jclass ElevationFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ElevationFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_32ec6e08b820ba55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;D)V");
              mids$[mid_filter_5714f5cbb8239657] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ElevationFilter::ElevationFilter(const ::org::orekit::estimation::measurements::GroundStation & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32ec6e08b820ba55, a0.this$, a1)) {}

          void ElevationFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_5714f5cbb8239657], a0.this$, a1.this$);
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
        namespace filtering {
          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args);
          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args);
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data);
          static PyGetSetDef t_ElevationFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ElevationFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ElevationFilter__methods_[] = {
            DECLARE_METHOD(t_ElevationFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ElevationFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ElevationFilter)[] = {
            { Py_tp_methods, t_ElevationFilter__methods_ },
            { Py_tp_init, (void *) t_ElevationFilter_init_ },
            { Py_tp_getset, t_ElevationFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ElevationFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ElevationFilter, t_ElevationFilter, ElevationFilter);
          PyObject *t_ElevationFilter::wrap_Object(const ElevationFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ElevationFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ElevationFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ElevationFilter), &PY_TYPE_DEF(ElevationFilter), module, "ElevationFilter", 0);
          }

          void t_ElevationFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "class_", make_descriptor(ElevationFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "wrapfn_", make_descriptor(t_ElevationFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ElevationFilter::initializeClass, 1)))
              return NULL;
            return t_ElevationFilter::wrap_Object(ElevationFilter(((t_ElevationFilter *) arg)->object.this$));
          }
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ElevationFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            jdouble a1;
            ElevationFilter object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::estimation::measurements::GroundStation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ElevationFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMessageWriter::class$ = NULL;
            jmethodID *CdmMessageWriter::mids$ = NULL;
            bool CdmMessageWriter::live$ = false;
            ::java::lang::String *CdmMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass CdmMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_171dbda6f9dc03f2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_f24ed3335bf508bc] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_b74f83833fdad017] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_cf100f800540ff49] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_b74f83833fdad017] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_db5d6d07a090d1f4] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_fb222e851cd27682] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_6a412104eaccbb1b] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)V");
                mids$[mid_writeRelativeMetadataContent_d31fad1cabdbc982] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegment_9224bf4e294cad7a] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmSegment;)V");
                mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMessageWriter::CdmMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_171dbda6f9dc03f2, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding CdmMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_f24ed3335bf508bc]));
            }

            jdouble CdmMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_b74f83833fdad017]);
            }

            ::java::lang::String CdmMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter CdmMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_cf100f800540ff49]));
            }

            jdouble CdmMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_b74f83833fdad017]);
            }

            void CdmMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_db5d6d07a090d1f4], a0.this$);
            }

            void CdmMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_fb222e851cd27682], a0.this$);
            }

            void CdmMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_6a412104eaccbb1b], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_d31fad1cabdbc982], a0.this$, a1, a2.this$);
            }

            void CdmMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmSegment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_9224bf4e294cad7a], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_309d7ce7156c8c23], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data);
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data);
            static PyGetSetDef t_CdmMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMessageWriter, context),
              DECLARE_GET_FIELD(t_CdmMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_CdmMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_CdmMessageWriter, root),
              DECLARE_GET_FIELD(t_CdmMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_CdmMessageWriter, version),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMessageWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegment, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMessageWriter)[] = {
              { Py_tp_methods, t_CdmMessageWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMessageWriter_init_ },
              { Py_tp_getset, t_CdmMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmMessageWriter, t_CdmMessageWriter, CdmMessageWriter);

            void t_CdmMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMessageWriter), &PY_TYPE_DEF(CdmMessageWriter), module, "CdmMessageWriter", 0);
            }

            void t_CdmMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "class_", make_descriptor(CdmMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "wrapfn_", make_descriptor(t_CdmMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*CdmMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMessageWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMessageWriter::wrap_Object(CdmMessageWriter(((t_CdmMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              CdmMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CdmMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeRelativeMetadataContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmSegment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmSegment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args)
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

              PyErr_SetArgsError((PyObject *) self, "writeSegmentContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivative::class$ = NULL;
        jmethodID *FieldDerivative::mids$ = NULL;
        bool FieldDerivative::live$ = false;

        jclass FieldDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_8224159d85a4681d] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_81520b552cb3fa26] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint FieldDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        jint FieldDerivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_8224159d85a4681d], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_81520b552cb3fa26]));
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
        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args);
        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg);
        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data);
        static PyGetSetDef t_FieldDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivative, order),
          DECLARE_GET_FIELD(t_FieldDerivative, value),
          DECLARE_GET_FIELD(t_FieldDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivative)[] = {
          { Py_tp_methods, t_FieldDerivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(FieldDerivative, t_FieldDerivative, FieldDerivative);
        PyObject *t_FieldDerivative::wrap_Object(const FieldDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivative), &PY_TYPE_DEF(FieldDerivative), module, "FieldDerivative", 0);
        }

        void t_FieldDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "class_", make_descriptor(FieldDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "wrapfn_", make_descriptor(t_FieldDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldDerivative::wrap_Object(FieldDerivative(((t_FieldDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "java/lang/String.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader::live$ = false;

            jclass CssiSpaceWeatherDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cae5d0c3721eff67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_7961e54fd3a47d94] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getLastDailyPredictedDate_c325492395d89b24] = env->getMethodID(cls, "getLastDailyPredictedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLastObservedDate_c325492395d89b24] = env->getMethodID(cls, "getLastObservedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader::CssiSpaceWeatherDataLoader(const ::org::orekit::time::TimeScale & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_cae5d0c3721eff67, a0.this$)) {}

            ::java::util::SortedSet CssiSpaceWeatherDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_7961e54fd3a47d94]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastDailyPredictedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastDailyPredictedDate_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastObservedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastObservedDate_c325492395d89b24]));
            }

            void CssiSpaceWeatherDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
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
            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, dataSet),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastDailyPredictedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastObservedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastDailyPredictedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastObservedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader, t_CssiSpaceWeatherDataLoader, CssiSpaceWeatherDataLoader);
            PyObject *t_CssiSpaceWeatherDataLoader::wrap_Object(const CssiSpaceWeatherDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader), module, "CssiSpaceWeatherDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters)));
            }

            void t_CssiSpaceWeatherDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "class_", make_descriptor(CssiSpaceWeatherDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader::wrap_Object(CssiSpaceWeatherDataLoader(((t_CssiSpaceWeatherDataLoader *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CssiSpaceWeatherDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters));
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastObservedDate());
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
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid$Parametric::class$ = NULL;
        jmethodID *Sigmoid$Parametric::mids$ = NULL;
        bool Sigmoid$Parametric::live$ = false;

        jclass Sigmoid$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_91fbb4072ae7ce9a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_e45651f63bcd931a] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid$Parametric::Sigmoid$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        JArray< jdouble > Sigmoid$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_91fbb4072ae7ce9a], a0, a1.this$));
        }

        jdouble Sigmoid$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_e45651f63bcd931a], a0, a1.this$);
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
        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args);
        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args);

        static PyMethodDef t_Sigmoid$Parametric__methods_[] = {
          DECLARE_METHOD(t_Sigmoid$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Sigmoid$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid$Parametric)[] = {
          { Py_tp_methods, t_Sigmoid$Parametric__methods_ },
          { Py_tp_init, (void *) t_Sigmoid$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid$Parametric, t_Sigmoid$Parametric, Sigmoid$Parametric);

        void t_Sigmoid$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid$Parametric), &PY_TYPE_DEF(Sigmoid$Parametric), module, "Sigmoid$Parametric", 0);
        }

        void t_Sigmoid$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "class_", make_descriptor(Sigmoid$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "wrapfn_", make_descriptor(t_Sigmoid$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid$Parametric::initializeClass, 1)))
            return NULL;
          return t_Sigmoid$Parametric::wrap_Object(Sigmoid$Parametric(((t_Sigmoid$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid$Parametric_init_(t_Sigmoid$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Sigmoid$Parametric object((jobject) NULL);

          INT_CALL(object = Sigmoid$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sigmoid$Parametric_gradient(t_Sigmoid$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Sigmoid$Parametric_value(t_Sigmoid$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *LexicalAnalyzerSelector::class$ = NULL;
            jmethodID *LexicalAnalyzerSelector::mids$ = NULL;
            bool LexicalAnalyzerSelector::live$ = false;

            jclass LexicalAnalyzerSelector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_select_158cc72d364d1d8f] = env->getStaticMethodID(cls, "select", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/utils/lexical/LexicalAnalyzer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer LexicalAnalyzerSelector::select(const ::org::orekit::data::DataSource & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer(env->callStaticObjectMethod(cls, mids$[mid_select_158cc72d364d1d8f], a0.this$));
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
            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_LexicalAnalyzerSelector__methods_[] = {
              DECLARE_METHOD(t_LexicalAnalyzerSelector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LexicalAnalyzerSelector, select, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LexicalAnalyzerSelector)[] = {
              { Py_tp_methods, t_LexicalAnalyzerSelector__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LexicalAnalyzerSelector)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LexicalAnalyzerSelector, t_LexicalAnalyzerSelector, LexicalAnalyzerSelector);

            void t_LexicalAnalyzerSelector::install(PyObject *module)
            {
              installType(&PY_TYPE(LexicalAnalyzerSelector), &PY_TYPE_DEF(LexicalAnalyzerSelector), module, "LexicalAnalyzerSelector", 0);
            }

            void t_LexicalAnalyzerSelector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "class_", make_descriptor(LexicalAnalyzerSelector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "wrapfn_", make_descriptor(t_LexicalAnalyzerSelector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LexicalAnalyzerSelector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LexicalAnalyzerSelector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LexicalAnalyzerSelector::initializeClass, 1)))
                return NULL;
              return t_LexicalAnalyzerSelector::wrap_Object(LexicalAnalyzerSelector(((t_LexicalAnalyzerSelector *) arg)->object.this$));
            }
            static PyObject *t_LexicalAnalyzerSelector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LexicalAnalyzerSelector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LexicalAnalyzerSelector_select(PyTypeObject *type, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::LexicalAnalyzerSelector::select(a0));
                return ::org::orekit::files::ccsds::utils::lexical::t_LexicalAnalyzer::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "select", arg);
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
#include "org/hipparchus/ode/nonstiff/EulerFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerFieldIntegrator::class$ = NULL;
        jmethodID *EulerFieldIntegrator::mids$ = NULL;
        bool EulerFieldIntegrator::live$ = false;

        jclass EulerFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a6f45ac0878ab87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_a4b50822e34394b5] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegrator::EulerFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2a6f45ac0878ab87, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > EulerFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > EulerFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
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
        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args);
        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args);
        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data);
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data);
        static PyGetSetDef t_EulerFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, a),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, b),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, c),
          DECLARE_GET_FIELD(t_EulerFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegrator)[] = {
          { Py_tp_methods, t_EulerFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegrator_init_ },
          { Py_tp_getset, t_EulerFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegrator, t_EulerFieldIntegrator, EulerFieldIntegrator);
        PyObject *t_EulerFieldIntegrator::wrap_Object(const EulerFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegrator *self = (t_EulerFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegrator), &PY_TYPE_DEF(EulerFieldIntegrator), module, "EulerFieldIntegrator", 0);
        }

        void t_EulerFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "class_", make_descriptor(EulerFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "wrapfn_", make_descriptor(t_EulerFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegrator::wrap_Object(EulerFieldIntegrator(((t_EulerFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegrator_of_(t_EulerFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegrator_init_(t_EulerFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          EulerFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = EulerFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerFieldIntegrator_getA(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getB(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerFieldIntegrator_getC(t_EulerFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(EulerFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_EulerFieldIntegrator_get__parameters_(t_EulerFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EulerFieldIntegrator_get__a(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerFieldIntegrator_get__b(t_EulerFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_EulerFieldIntegrator_get__c(t_EulerFieldIntegrator *self, void *data)
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
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF::class$ = NULL;
        jmethodID *CPF::mids$ = NULL;
        bool CPF::live$ = false;
        ::java::lang::String *CPF::DEFAULT_ID = NULL;

        jclass CPF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatelliteCoordinate_2dc5dc28da034a2b] = env->getMethodID(cls, "addSatelliteCoordinate", "(Ljava/lang/String;Lorg/orekit/files/ilrs/CPF$CPFCoordinate;)V");
            mids$[mid_addSatelliteCoordinates_9c78226ca1e428f3] = env->getMethodID(cls, "addSatelliteCoordinates", "(Ljava/lang/String;Ljava/util/List;)V");
            mids$[mid_addSatelliteVelocityToCPFCoordinate_d89905a56d6347be] = env->getMethodID(cls, "addSatelliteVelocityToCPFCoordinate", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_2eab44e7dfda30f7] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CPFHeader;");
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_getTimeScale_34d3bda0a8989e3e] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_setFilter_6ac810da33942183] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setInterpolationSample_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationSample", "(I)V");
            mids$[mid_setMu_8ba9fe7a847cecad] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setTimeScale_cae5d0c3721eff67] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ID = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ID", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF::CPF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void CPF::addSatelliteCoordinate(const ::java::lang::String & a0, const ::org::orekit::files::ilrs::CPF$CPFCoordinate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinate_2dc5dc28da034a2b], a0.this$, a1.this$);
        }

        void CPF::addSatelliteCoordinates(const ::java::lang::String & a0, const ::java::util::List & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinates_9c78226ca1e428f3], a0.this$, a1.this$);
        }

        void CPF::addSatelliteVelocityToCPFCoordinate(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteVelocityToCPFCoordinate_d89905a56d6347be], a0.this$, a1.this$);
        }

        ::java::util::List CPF::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::files::ilrs::CPFHeader CPF::getHeader() const
        {
          return ::org::orekit::files::ilrs::CPFHeader(env->callObjectMethod(this$, mids$[mid_getHeader_2eab44e7dfda30f7]));
        }

        ::java::util::Map CPF::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
        }

        ::org::orekit::time::TimeScale CPF::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_34d3bda0a8989e3e]));
        }

        void CPF::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_6ac810da33942183], a0.this$);
        }

        void CPF::setInterpolationSample(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationSample_44ed599e93e8a30c], a0);
        }

        void CPF::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_8ba9fe7a847cecad], a0);
        }

        void CPF::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeScale_cae5d0c3721eff67], a0.this$);
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
        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_getComments(t_CPF *self);
        static PyObject *t_CPF_getHeader(t_CPF *self);
        static PyObject *t_CPF_getSatellites(t_CPF *self);
        static PyObject *t_CPF_getTimeScale(t_CPF *self);
        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_get__comments(t_CPF *self, void *data);
        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__header(t_CPF *self, void *data);
        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data);
        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data);
        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data);
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPF__fields_[] = {
          DECLARE_GET_FIELD(t_CPF, comments),
          DECLARE_SET_FIELD(t_CPF, filter),
          DECLARE_GET_FIELD(t_CPF, header),
          DECLARE_SET_FIELD(t_CPF, interpolationSample),
          DECLARE_SET_FIELD(t_CPF, mu),
          DECLARE_GET_FIELD(t_CPF, satellites),
          DECLARE_GETSET_FIELD(t_CPF, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF__methods_[] = {
          DECLARE_METHOD(t_CPF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteVelocityToCPFCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CPF, setFilter, METH_O),
          DECLARE_METHOD(t_CPF, setInterpolationSample, METH_O),
          DECLARE_METHOD(t_CPF, setMu, METH_O),
          DECLARE_METHOD(t_CPF, setTimeScale, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF)[] = {
          { Py_tp_methods, t_CPF__methods_ },
          { Py_tp_init, (void *) t_CPF_init_ },
          { Py_tp_getset, t_CPF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF, t_CPF, CPF);

        void t_CPF::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF), &PY_TYPE_DEF(CPF), module, "CPF", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "CPFCoordinate", make_descriptor(&PY_TYPE_DEF(CPF$CPFCoordinate)));
        }

        void t_CPF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "class_", make_descriptor(CPF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "wrapfn_", make_descriptor(t_CPF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "boxfn_", make_descriptor(boxObject));
          env->getClass(CPF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "DEFAULT_ID", make_descriptor(j2p(*CPF::DEFAULT_ID)));
        }

        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF::initializeClass, 1)))
            return NULL;
          return t_CPF::wrap_Object(CPF(((t_CPF *) arg)->object.this$));
        }
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds)
        {
          CPF object((jobject) NULL);

          INT_CALL(object = CPF());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF$CPFCoordinate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::files::ilrs::CPF$CPFCoordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.addSatelliteCoordinates(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinates", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteVelocityToCPFCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteVelocityToCPFCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_getComments(t_CPF *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CPF_getHeader(t_CPF *self)
        {
          ::org::orekit::files::ilrs::CPFHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(result);
        }

        static PyObject *t_CPF_getSatellites(t_CPF *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF_getTimeScale(t_CPF *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setInterpolationSample(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationSample", arg);
          return NULL;
        }

        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::time::TimeScale a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CPF_get__comments(t_CPF *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_CPF_get__header(t_CPF *self, void *data)
        {
          ::org::orekit::files::ilrs::CPFHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(value);
        }

        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setInterpolationSample(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "interpolationSample", arg);
          return -1;
        }

        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation$MismatchedEquations::class$ = NULL;
      jmethodID *VariationalEquation$MismatchedEquations::mids$ = NULL;
      bool VariationalEquation$MismatchedEquations::live$ = false;

      jclass VariationalEquation$MismatchedEquations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation$MismatchedEquations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation$MismatchedEquations::VariationalEquation$MismatchedEquations() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_VariationalEquation$MismatchedEquations__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation$MismatchedEquations)[] = {
        { Py_tp_methods, t_VariationalEquation$MismatchedEquations__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation$MismatchedEquations_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation$MismatchedEquations)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(VariationalEquation$MismatchedEquations, t_VariationalEquation$MismatchedEquations, VariationalEquation$MismatchedEquations);

      void t_VariationalEquation$MismatchedEquations::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation$MismatchedEquations), &PY_TYPE_DEF(VariationalEquation$MismatchedEquations), module, "VariationalEquation$MismatchedEquations", 0);
      }

      void t_VariationalEquation$MismatchedEquations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "class_", make_descriptor(VariationalEquation$MismatchedEquations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "wrapfn_", make_descriptor(t_VariationalEquation$MismatchedEquations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation$MismatchedEquations::wrap_Object(VariationalEquation$MismatchedEquations(((t_VariationalEquation$MismatchedEquations *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds)
      {
        VariationalEquation$MismatchedEquations object((jobject) NULL);

        INT_CALL(object = VariationalEquation$MismatchedEquations());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIR.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_1e895b27f5ad5fa3] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIR::GPSBlockIIR(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_1e895b27f5ad5fa3, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldEventHandler::class$ = NULL;
          jmethodID *FieldEventHandler::mids$ = NULL;
          bool FieldEventHandler::live$ = false;

          jclass FieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_839b1f3ec2c4fbf6] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_0c5b04ee41f00344] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_resetState_f13ac1fae17e489e] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action FieldEventHandler::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_839b1f3ec2c4fbf6], a0.this$, a1.this$, a2));
          }

          void FieldEventHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::propagation::events::FieldEventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0c5b04ee41f00344], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldEventHandler::resetState(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_f13ac1fae17e489e], a0.this$, a1.this$));
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
          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data);
          static PyGetSetDef t_FieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_FieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_FieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldEventHandler)[] = {
            { Py_tp_methods, t_FieldEventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldEventHandler, t_FieldEventHandler, FieldEventHandler);
          PyObject *t_FieldEventHandler::wrap_Object(const FieldEventHandler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldEventHandler), &PY_TYPE_DEF(FieldEventHandler), module, "FieldEventHandler", 0);
          }

          void t_FieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "class_", make_descriptor(FieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "wrapfn_", make_descriptor(t_FieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_FieldEventHandler::wrap_Object(FieldEventHandler(((t_FieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::events::FieldEventDetector a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BrentSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BrentSolver::class$ = NULL;
        jmethodID *BrentSolver::mids$ = NULL;
        bool BrentSolver::live$ = false;

        jclass BrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentSolver::BrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        BrentSolver::BrentSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}
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
        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args);
        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data);
        static PyGetSetDef t_BrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentSolver__methods_[] = {
          DECLARE_METHOD(t_BrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentSolver)[] = {
          { Py_tp_methods, t_BrentSolver__methods_ },
          { Py_tp_init, (void *) t_BrentSolver_init_ },
          { Py_tp_getset, t_BrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BrentSolver, t_BrentSolver, BrentSolver);
        PyObject *t_BrentSolver::wrap_Object(const BrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentSolver), &PY_TYPE_DEF(BrentSolver), module, "BrentSolver", 0);
        }

        void t_BrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "class_", make_descriptor(BrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "wrapfn_", make_descriptor(t_BrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentSolver::initializeClass, 1)))
            return NULL;
          return t_BrentSolver::wrap_Object(BrentSolver(((t_BrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BrentSolver object((jobject) NULL);

              INT_CALL(object = BrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BrentSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentSolver(a0, a1));
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
              jdouble a2;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BrentSolver(a0, a1, a2));
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
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Constant.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Constant::class$ = NULL;
        jmethodID *Constant::mids$ = NULL;
        bool Constant::live$ = false;

        jclass Constant::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Constant");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Constant::Constant(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble Constant::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Constant::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Constant_value(t_Constant *self, PyObject *args);

        static PyMethodDef t_Constant__methods_[] = {
          DECLARE_METHOD(t_Constant, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Constant)[] = {
          { Py_tp_methods, t_Constant__methods_ },
          { Py_tp_init, (void *) t_Constant_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Constant)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Constant, t_Constant, Constant);

        void t_Constant::install(PyObject *module)
        {
          installType(&PY_TYPE(Constant), &PY_TYPE_DEF(Constant), module, "Constant", 0);
        }

        void t_Constant::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "class_", make_descriptor(Constant::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "wrapfn_", make_descriptor(t_Constant::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Constant::initializeClass, 1)))
            return NULL;
          return t_Constant::wrap_Object(Constant(((t_Constant *) arg)->object.this$));
        }
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Constant::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Constant object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Constant(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Constant_value(t_Constant *self, PyObject *args)
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
#include "org/orekit/data/DirectoryCrawler.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "org/orekit/data/DataProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DirectoryCrawler::class$ = NULL;
      jmethodID *DirectoryCrawler::mids$ = NULL;
      bool DirectoryCrawler::live$ = false;

      jclass DirectoryCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DirectoryCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7e1d51614d5d6a43] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DirectoryCrawler::DirectoryCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7e1d51614d5d6a43, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_DirectoryCrawler__methods_[] = {
        DECLARE_METHOD(t_DirectoryCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DirectoryCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DirectoryCrawler)[] = {
        { Py_tp_methods, t_DirectoryCrawler__methods_ },
        { Py_tp_init, (void *) t_DirectoryCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DirectoryCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DirectoryCrawler, t_DirectoryCrawler, DirectoryCrawler);

      void t_DirectoryCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(DirectoryCrawler), &PY_TYPE_DEF(DirectoryCrawler), module, "DirectoryCrawler", 0);
      }

      void t_DirectoryCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "class_", make_descriptor(DirectoryCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "wrapfn_", make_descriptor(t_DirectoryCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DirectoryCrawler::initializeClass, 1)))
          return NULL;
        return t_DirectoryCrawler::wrap_Object(DirectoryCrawler(((t_DirectoryCrawler *) arg)->object.this$));
      }
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DirectoryCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds)
      {
        ::java::io::File a0((jobject) NULL);
        DirectoryCrawler object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = DirectoryCrawler(a0));
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
#include "org/orekit/frames/LocalOrbitalFrame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalOrbitalFrame::class$ = NULL;
      jmethodID *LocalOrbitalFrame::mids$ = NULL;
      bool LocalOrbitalFrame::live$ = false;

      jclass LocalOrbitalFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalOrbitalFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a343e7aff224090] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/orekit/utils/PVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalOrbitalFrame::LocalOrbitalFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_9a343e7aff224090, a0.this$, a1.this$, a2.this$, a3.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LocalOrbitalFrame__methods_[] = {
        DECLARE_METHOD(t_LocalOrbitalFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalOrbitalFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalOrbitalFrame)[] = {
        { Py_tp_methods, t_LocalOrbitalFrame__methods_ },
        { Py_tp_init, (void *) t_LocalOrbitalFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalOrbitalFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(LocalOrbitalFrame, t_LocalOrbitalFrame, LocalOrbitalFrame);

      void t_LocalOrbitalFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalOrbitalFrame), &PY_TYPE_DEF(LocalOrbitalFrame), module, "LocalOrbitalFrame", 0);
      }

      void t_LocalOrbitalFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "class_", make_descriptor(LocalOrbitalFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "wrapfn_", make_descriptor(t_LocalOrbitalFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalOrbitalFrame::initializeClass, 1)))
          return NULL;
        return t_LocalOrbitalFrame::wrap_Object(LocalOrbitalFrame(((t_LocalOrbitalFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalOrbitalFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::LOF a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        LocalOrbitalFrame object((jobject) NULL);

        if (!parseArgs(args, "kkks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LocalOrbitalFrame(a0, a1, a2, a3));
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
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepInterpolator::class$ = NULL;
        jmethodID *OrekitStepInterpolator::mids$ = NULL;
        bool OrekitStepInterpolator::live$ = false;

        jclass OrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_9d155cc8314c99cf] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_4f0008999861ca31] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPreviousState_9d155cc8314c99cf] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_975f0f3ab8227725] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_9d155cc8314c99cf]));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_4f0008999861ca31], a0.this$));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates OrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_9d155cc8314c99cf]));
        }

        jboolean OrekitStepInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105]);
        }

        jboolean OrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        jboolean OrekitStepInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105]);
        }

        OrekitStepInterpolator OrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return OrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_975f0f3ab8227725], a0.this$, a1.this$));
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
        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_OrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_OrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepInterpolator)[] = {
          { Py_tp_methods, t_OrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(OrekitStepInterpolator, t_OrekitStepInterpolator, OrekitStepInterpolator);

        void t_OrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepInterpolator), &PY_TYPE_DEF(OrekitStepInterpolator), module, "OrekitStepInterpolator", 0);
        }

        void t_OrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "class_", make_descriptor(OrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "wrapfn_", make_descriptor(t_OrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_OrekitStepInterpolator::wrap_Object(OrekitStepInterpolator(((t_OrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(OrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          OrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_OrekitStepInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *EquationsMapper::class$ = NULL;
      jmethodID *EquationsMapper::mids$ = NULL;
      bool EquationsMapper::live$ = false;

      jclass EquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/EquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_533861c7eb8afa81] = env->getMethodID(cls, "extractEquationData", "(I[D)[D");
          mids$[mid_getNumberOfEquations_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_55546ef6a647f39b] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_967f7cda83d9cc86] = env->getMethodID(cls, "insertEquationData", "(I[D[D)V");
          mids$[mid_mapStateAndDerivative_0afdf9f2f0ca4127] = env->getMethodID(cls, "mapStateAndDerivative", "(D[D[D)Lorg/hipparchus/ode/ODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > EquationsMapper::extractEquationData(jint a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractEquationData_533861c7eb8afa81], a0, a1.this$));
      }

      jint EquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_55546ef6a647f39b]);
      }

      jint EquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_55546ef6a647f39b]);
      }

      void EquationsMapper::insertEquationData(jint a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_967f7cda83d9cc86], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative EquationsMapper::mapStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_0afdf9f2f0ca4127], a0, a1.this$, a2.this$));
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
      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self);
      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args);
      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data);
      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data);
      static PyGetSetDef t_EquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_EquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_EquationsMapper, totalDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EquationsMapper__methods_[] = {
        DECLARE_METHOD(t_EquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_EquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_EquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EquationsMapper)[] = {
        { Py_tp_methods, t_EquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EquationsMapper, t_EquationsMapper, EquationsMapper);

      void t_EquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(EquationsMapper), &PY_TYPE_DEF(EquationsMapper), module, "EquationsMapper", 0);
      }

      void t_EquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "class_", make_descriptor(EquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "wrapfn_", make_descriptor(t_EquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EquationsMapper::initializeClass, 1)))
          return NULL;
        return t_EquationsMapper::wrap_Object(EquationsMapper(((t_EquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_EquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EquationsMapper_extractEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_getNumberOfEquations(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_getTotalDimension(t_EquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EquationsMapper_insertEquationData(t_EquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "I[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_mapStateAndDerivative(t_EquationsMapper *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }

      static PyObject *t_EquationsMapper_get__numberOfEquations(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EquationsMapper_get__totalDimension(t_EquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/PythonAbstractEncounterLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonAbstractEncounterLOF::class$ = NULL;
        jmethodID *PythonAbstractEncounterLOF::mids$ = NULL;
        bool PythonAbstractEncounterLOF::live$ = false;

        jclass PythonAbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonAbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e7272d224e58d28f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_bf95090cc5e2a8d4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_8851faa33644affd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractEncounterLOF::PythonAbstractEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_e7272d224e58d28f, a0.this$)) {}

        void PythonAbstractEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractEncounterLOF::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self);
        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonAbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncounterLOF)[] = {
          { Py_tp_methods, t_PythonAbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractEncounterLOF_init_ },
          { Py_tp_getset, t_PythonAbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(PythonAbstractEncounterLOF, t_PythonAbstractEncounterLOF, PythonAbstractEncounterLOF);

        void t_PythonAbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractEncounterLOF), &PY_TYPE_DEF(PythonAbstractEncounterLOF), module, "PythonAbstractEncounterLOF", 1);
        }

        void t_PythonAbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "class_", make_descriptor(PythonAbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "wrapfn_", make_descriptor(t_PythonAbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAbstractEncounterLOF_getName2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractEncounterLOF_pythonDecRef3 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial4 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractEncounterLOF::wrap_Object(PythonAbstractEncounterLOF(((t_PythonAbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
          PythonAbstractEncounterLOF object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractEncounterLOF(a0));
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

        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data)
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
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockFieldMatrix::class$ = NULL;
      jmethodID *BlockFieldMatrix::mids$ = NULL;
      bool BlockFieldMatrix::live$ = false;
      jint BlockFieldMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a9efc882474e6213] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_init$_ef636a47cd1b07df] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_add_15347886d0b0381d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_add_e74c5d5fdc2ea025] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_c2695120fce254e7] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_81d49643ce3a3c0b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createBlocksLayout_d3a891e7c6b40b5a] = env->getStaticMethodID(cls, "createBlocksLayout", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_createMatrix_add2e370542edc2f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_32f3c1a06713be87] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_2b05a6661cb56e40] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_06abfeddf4c4a28c] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_79f47d23e197eb68] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_d0f2803baa5859d6] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_32f3c1a06713be87] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_2b05a6661cb56e40] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_06abfeddf4c4a28c] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_fccf627d1096268f] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_15347886d0b0381d] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_c2695120fce254e7] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_15347886d0b0381d] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiplyTransposed_3eb592d1e0a62348] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_operate_0721a6f091b7d386] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_0721a6f091b7d386] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_scalarAdd_7f54bca136ec1209] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_7f54bca136ec1209] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_a38853481346cb12] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_8b62bd16a362a59d] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_c2695120fce254e7] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_a38853481346cb12] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_716b17c470569539] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockFieldMatrix;)V");
          mids$[mid_setRowMatrix_8b62bd16a362a59d] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_3b5f1aa21de3920a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_15347886d0b0381d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_subtract_e74c5d5fdc2ea025] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toBlocksLayout_50b2504e0e8ddff6] = env->getStaticMethodID(cls, "toBlocksLayout", "([[Lorg/hipparchus/FieldElement;)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_transpose_81d49643ce3a3c0b] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_15347886d0b0381d] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_transposeMultiply_3eb592d1e0a62348] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_walkInOptimizedOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockFieldMatrix::BlockFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a9efc882474e6213, a0.this$)) {}

      BlockFieldMatrix::BlockFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

      BlockFieldMatrix::BlockFieldMatrix(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_ef636a47cd1b07df, a0, a1, a2.this$, a3)) {}

      BlockFieldMatrix BlockFieldMatrix::add(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_15347886d0b0381d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_e74c5d5fdc2ea025], a0.this$));
      }

      void BlockFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_81d49643ce3a3c0b]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::createBlocksLayout(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_d3a891e7c6b40b5a], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_add2e370542edc2f], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_32f3c1a06713be87], a0));
      }

      jint BlockFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_2b05a6661cb56e40], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_06abfeddf4c4a28c], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_79f47d23e197eb68]));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d0f2803baa5859d6], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_32f3c1a06713be87], a0));
      }

      jint BlockFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_2b05a6661cb56e40], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_06abfeddf4c4a28c], a0));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_fccf627d1096268f], a0, a1, a2, a3));
      }

      BlockFieldMatrix BlockFieldMatrix::multiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_15347886d0b0381d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e74c5d5fdc2ea025], a0.this$));
      }

      void BlockFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_15347886d0b0381d], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_3eb592d1e0a62348], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_0721a6f091b7d386], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_0721a6f091b7d386], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_7f54bca136ec1209], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_7f54bca136ec1209], a0.this$));
      }

      void BlockFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_a38853481346cb12], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_8b62bd16a362a59d], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      void BlockFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      void BlockFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_a38853481346cb12], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const BlockFieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_716b17c470569539], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_8b62bd16a362a59d], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      void BlockFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_3b5f1aa21de3920a], a0.this$, a1, a2);
      }

      BlockFieldMatrix BlockFieldMatrix::subtract(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_15347886d0b0381d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e74c5d5fdc2ea025], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::toBlocksLayout(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_50b2504e0e8ddff6], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_81d49643ce3a3c0b]));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_15347886d0b0381d], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_3eb592d1e0a62348], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args);
      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data);
      static PyGetSetDef t_BlockFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, data),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockFieldMatrix)[] = {
        { Py_tp_methods, t_BlockFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockFieldMatrix_init_ },
        { Py_tp_getset, t_BlockFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(BlockFieldMatrix, t_BlockFieldMatrix, BlockFieldMatrix);
      PyObject *t_BlockFieldMatrix::wrap_Object(const BlockFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BlockFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BlockFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockFieldMatrix), &PY_TYPE_DEF(BlockFieldMatrix), module, "BlockFieldMatrix", 0);
      }

      void t_BlockFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "class_", make_descriptor(BlockFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "wrapfn_", make_descriptor(t_BlockFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockFieldMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "BLOCK_SIZE", make_descriptor(BlockFieldMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockFieldMatrix::wrap_Object(BlockFieldMatrix(((t_BlockFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = BlockFieldMatrix(a0));
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
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::createBlocksLayout(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockFieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", BlockFieldMatrix::initializeClass, &a0, &a1, &p1, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AklToussaintHeuristic::class$ = NULL;
            jmethodID *AklToussaintHeuristic::mids$ = NULL;
            bool AklToussaintHeuristic::live$ = false;

            jclass AklToussaintHeuristic::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic");

                mids$ = new jmethodID[max_mid];
                mids$[mid_reducePoints_394fcc3577736ad2] = env->getStaticMethodID(cls, "reducePoints", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Collection AklToussaintHeuristic::reducePoints(const ::java::util::Collection & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_reducePoints_394fcc3577736ad2], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AklToussaintHeuristic__methods_[] = {
              DECLARE_METHOD(t_AklToussaintHeuristic, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AklToussaintHeuristic, reducePoints, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AklToussaintHeuristic)[] = {
              { Py_tp_methods, t_AklToussaintHeuristic__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AklToussaintHeuristic)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AklToussaintHeuristic, t_AklToussaintHeuristic, AklToussaintHeuristic);

            void t_AklToussaintHeuristic::install(PyObject *module)
            {
              installType(&PY_TYPE(AklToussaintHeuristic), &PY_TYPE_DEF(AklToussaintHeuristic), module, "AklToussaintHeuristic", 0);
            }

            void t_AklToussaintHeuristic::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "class_", make_descriptor(AklToussaintHeuristic::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "wrapfn_", make_descriptor(t_AklToussaintHeuristic::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AklToussaintHeuristic), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AklToussaintHeuristic_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AklToussaintHeuristic::initializeClass, 1)))
                return NULL;
              return t_AklToussaintHeuristic::wrap_Object(AklToussaintHeuristic(((t_AklToussaintHeuristic *) arg)->object.this$));
            }
            static PyObject *t_AklToussaintHeuristic_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AklToussaintHeuristic::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AklToussaintHeuristic_reducePoints(PyTypeObject *type, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::hull::AklToussaintHeuristic::reducePoints(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError(type, "reducePoints", arg);
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
#include "org/orekit/propagation/conversion/LutherFieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherFieldIntegratorBuilder::class$ = NULL;
        jmethodID *LutherFieldIntegratorBuilder::mids$ = NULL;
        bool LutherFieldIntegratorBuilder::live$ = false;

        jclass LutherFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator LutherFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_LutherFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_LutherFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegratorBuilder, t_LutherFieldIntegratorBuilder, LutherFieldIntegratorBuilder);
        PyObject *t_LutherFieldIntegratorBuilder::wrap_Object(const LutherFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegratorBuilder), &PY_TYPE_DEF(LutherFieldIntegratorBuilder), module, "LutherFieldIntegratorBuilder", 0);
        }

        void t_LutherFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "class_", make_descriptor(LutherFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegratorBuilder::wrap_Object(LutherFieldIntegratorBuilder(((t_LutherFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
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

        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(LutherFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
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
          namespace cdm {

            ::java::lang::Class *AdditionalParametersKey::class$ = NULL;
            jmethodID *AdditionalParametersKey::mids$ = NULL;
            bool AdditionalParametersKey::live$ = false;
            AdditionalParametersKey *AdditionalParametersKey::APOAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_DRG = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_SRP = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CD_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COMMENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE_METHOD = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CR_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::HBR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::INCLINATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q1 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q2 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q3 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_QC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::PERIAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::REFLECTANCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::SEDR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::THRUST_ACCELERATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_ABSOLUTE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MIN = NULL;

            jclass AdditionalParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_0de97cc9f389c4ab] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)Z");
                mids$[mid_valueOf_07478531a056f7cd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");
                mids$[mid_values_bf0d4550d9ad0468] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APOAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "APOAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_DRG = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_SRP = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CD_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CD_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COMMENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE_METHOD = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CR_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CR_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                HBR = new AdditionalParametersKey(env->getStaticObjectField(cls, "HBR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                INCLINATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME_EPOCH = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q1 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q2 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q3 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_QC = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                PERIAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "PERIAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                REFLECTANCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                SEDR = new AdditionalParametersKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                THRUST_ACCELERATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "THRUST_ACCELERATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_ABSOLUTE = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_0de97cc9f389c4ab], a0.this$, a1.this$, a2.this$);
            }

            AdditionalParametersKey AdditionalParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_07478531a056f7cd], a0.this$));
            }

            JArray< AdditionalParametersKey > AdditionalParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_bf0d4550d9ad0468]));
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
            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data);
            static PyGetSetDef t_AdditionalParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParametersKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersKey)[] = {
              { Py_tp_methods, t_AdditionalParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersKey, t_AdditionalParametersKey, AdditionalParametersKey);
            PyObject *t_AdditionalParametersKey::wrap_Object(const AdditionalParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersKey), &PY_TYPE_DEF(AdditionalParametersKey), module, "AdditionalParametersKey", 0);
            }

            void t_AdditionalParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "class_", make_descriptor(AdditionalParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "wrapfn_", make_descriptor(t_AdditionalParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "APOAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::APOAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_DRG", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_SRP", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CD_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CD_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COMMENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE_METHOD", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CR_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CR_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "HBR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::HBR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "INCLINATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q1", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q2", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q3", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_QC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_QC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "PERIAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::PERIAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "REFLECTANCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::REFLECTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "SEDR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::SEDR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "THRUST_ACCELERATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::THRUST_ACCELERATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_ABSOLUTE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_ABSOLUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MIN)));
            }

            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersKey::wrap_Object(AdditionalParametersKey(((t_AdditionalParametersKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::valueOf(a0));
                return t_AdditionalParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type)
            {
              JArray< AdditionalParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalParametersKey::wrap_jobject);
            }
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialSplineFunction::class$ = NULL;
        jmethodID *FieldPolynomialSplineFunction::mids$ = NULL;
        bool FieldPolynomialSplineFunction::live$ = false;

        jclass FieldPolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7c1ac2d3dfcacee3] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)V");
            mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getKnots_41762fd4377ff26e] = env->getMethodID(cls, "getKnots", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getN_412668abc8d889e9] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_614ccfa9cbc0cf80] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_isValidPoint_43d6c47e369ad1be] = env->getMethodID(cls, "isValidPoint", "(Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_polynomialSplineDerivative_599dfb4ad5e5a652] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");
            mids$[mid_value_94d37e81a3238af8] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialSplineFunction::FieldPolynomialSplineFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c1ac2d3dfcacee3, a0.this$, a1.this$)) {}

        ::org::hipparchus::Field FieldPolynomialSplineFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialSplineFunction::getKnots() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getKnots_41762fd4377ff26e]));
        }

        jint FieldPolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_412668abc8d889e9]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > FieldPolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_614ccfa9cbc0cf80]));
        }

        jboolean FieldPolynomialSplineFunction::isValidPoint(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_43d6c47e369ad1be], a0.this$);
        }

        FieldPolynomialSplineFunction FieldPolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_599dfb4ad5e5a652]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_94d37e81a3238af8], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
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
        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, polynomials),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialSplineFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialSplineFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialSplineFunction, t_FieldPolynomialSplineFunction, FieldPolynomialSplineFunction);
        PyObject *t_FieldPolynomialSplineFunction::wrap_Object(const FieldPolynomialSplineFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialSplineFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialSplineFunction), &PY_TYPE_DEF(FieldPolynomialSplineFunction), module, "FieldPolynomialSplineFunction", 0);
        }

        void t_FieldPolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "class_", make_descriptor(FieldPolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "wrapfn_", make_descriptor(t_FieldPolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialSplineFunction::wrap_Object(FieldPolynomialSplineFunction(((t_FieldPolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldPolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::parameters_))
          {
            INT_CALL(object = FieldPolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self)
        {
          FieldPolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_FieldPolynomialSplineFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args)
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
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {

        ::java::lang::Class *ProbabilityOfCollision::class$ = NULL;
        jmethodID *ProbabilityOfCollision::mids$ = NULL;
        bool ProbabilityOfCollision::live$ = false;

        jclass ProbabilityOfCollision::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/ssa/metrics/ProbabilityOfCollision");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d159d90d402c6e37] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;)V");
            mids$[mid_init$_bd48975dfeda9130] = env->getMethodID(cls, "<init>", "(DLjava/lang/String;Z)V");
            mids$[mid_init$_487aedea707aa10b] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Z)V");
            mids$[mid_getLowerLimit_557b8123390d8d0c] = env->getMethodID(cls, "getLowerLimit", "()D");
            mids$[mid_getProbabilityOfCollisionMethodName_3cffd47377eca18a] = env->getMethodID(cls, "getProbabilityOfCollisionMethodName", "()Ljava/lang/String;");
            mids$[mid_getUpperLimit_557b8123390d8d0c] = env->getMethodID(cls, "getUpperLimit", "()D");
            mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_isMaxProbability_89b302893bdbe1f1] = env->getMethodID(cls, "isMaxProbability", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d159d90d402c6e37, a0, a1.this$)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, const ::java::lang::String & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd48975dfeda9130, a0, a1.this$, a2)) {}

        ProbabilityOfCollision::ProbabilityOfCollision(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_487aedea707aa10b, a0, a1, a2, a3.this$, a4)) {}

        jdouble ProbabilityOfCollision::getLowerLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerLimit_557b8123390d8d0c]);
        }

        ::java::lang::String ProbabilityOfCollision::getProbabilityOfCollisionMethodName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProbabilityOfCollisionMethodName_3cffd47377eca18a]));
        }

        jdouble ProbabilityOfCollision::getUpperLimit() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperLimit_557b8123390d8d0c]);
        }

        jdouble ProbabilityOfCollision::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
        }

        jboolean ProbabilityOfCollision::isMaxProbability() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isMaxProbability_89b302893bdbe1f1]);
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
      namespace metrics {
        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self);
        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data);
        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data);
        static PyGetSetDef t_ProbabilityOfCollision__fields_[] = {
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, lowerLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, maxProbability),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, probabilityOfCollisionMethodName),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, upperLimit),
          DECLARE_GET_FIELD(t_ProbabilityOfCollision, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProbabilityOfCollision__methods_[] = {
          DECLARE_METHOD(t_ProbabilityOfCollision, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getLowerLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getProbabilityOfCollisionMethodName, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getUpperLimit, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, getValue, METH_NOARGS),
          DECLARE_METHOD(t_ProbabilityOfCollision, isMaxProbability, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProbabilityOfCollision)[] = {
          { Py_tp_methods, t_ProbabilityOfCollision__methods_ },
          { Py_tp_init, (void *) t_ProbabilityOfCollision_init_ },
          { Py_tp_getset, t_ProbabilityOfCollision__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProbabilityOfCollision)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProbabilityOfCollision, t_ProbabilityOfCollision, ProbabilityOfCollision);

        void t_ProbabilityOfCollision::install(PyObject *module)
        {
          installType(&PY_TYPE(ProbabilityOfCollision), &PY_TYPE_DEF(ProbabilityOfCollision), module, "ProbabilityOfCollision", 0);
        }

        void t_ProbabilityOfCollision::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "class_", make_descriptor(ProbabilityOfCollision::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "wrapfn_", make_descriptor(t_ProbabilityOfCollision::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProbabilityOfCollision), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProbabilityOfCollision_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProbabilityOfCollision::initializeClass, 1)))
            return NULL;
          return t_ProbabilityOfCollision::wrap_Object(ProbabilityOfCollision(((t_ProbabilityOfCollision *) arg)->object.this$));
        }
        static PyObject *t_ProbabilityOfCollision_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProbabilityOfCollision::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProbabilityOfCollision_init_(t_ProbabilityOfCollision *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "Ds", &a0, &a1))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::java::lang::String a1((jobject) NULL);
              jboolean a2;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DsZ", &a0, &a1, &a2))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::java::lang::String a3((jobject) NULL);
              jboolean a4;
              ProbabilityOfCollision object((jobject) NULL);

              if (!parseArgs(args, "DDDsZ", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = ProbabilityOfCollision(a0, a1, a2, a3, a4));
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

        static PyObject *t_ProbabilityOfCollision_getLowerLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getProbabilityOfCollisionMethodName(t_ProbabilityOfCollision *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProbabilityOfCollisionMethodName());
          return j2p(result);
        }

        static PyObject *t_ProbabilityOfCollision_getUpperLimit(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_getValue(t_ProbabilityOfCollision *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProbabilityOfCollision_isMaxProbability(t_ProbabilityOfCollision *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isMaxProbability());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ProbabilityOfCollision_get__lowerLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__maxProbability(t_ProbabilityOfCollision *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isMaxProbability());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__probabilityOfCollisionMethodName(t_ProbabilityOfCollision *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProbabilityOfCollisionMethodName());
          return j2p(value);
        }

        static PyObject *t_ProbabilityOfCollision_get__upperLimit(t_ProbabilityOfCollision *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperLimit());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ProbabilityOfCollision_get__value(t_ProbabilityOfCollision *self, void *data)
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
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AltitudeDetector::class$ = NULL;
        jmethodID *AltitudeDetector::mids$ = NULL;
        bool AltitudeDetector::live$ = false;

        jclass AltitudeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AltitudeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_41f03017a8809959] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_735dceec41dee262] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_init$_25a26197ed9500d5] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/bodies/BodyShape;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAltitude_557b8123390d8d0c] = env->getMethodID(cls, "getAltitude", "()D");
            mids$[mid_getBodyShape_f166528db337c659] = env->getMethodID(cls, "getBodyShape", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_0a1ee2ef2300179d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AltitudeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AltitudeDetector::AltitudeDetector(jdouble a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_41f03017a8809959, a0, a1.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_735dceec41dee262, a0, a1, a2.this$)) {}

        AltitudeDetector::AltitudeDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::bodies::BodyShape & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_25a26197ed9500d5, a0, a1, a2, a3.this$)) {}

        jdouble AltitudeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        jdouble AltitudeDetector::getAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAltitude_557b8123390d8d0c]);
        }

        ::org::orekit::bodies::BodyShape AltitudeDetector::getBodyShape() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBodyShape_f166528db337c659]));
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
        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args);
        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args);
        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self);
        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data);
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data);
        static PyGetSetDef t_AltitudeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AltitudeDetector, altitude),
          DECLARE_GET_FIELD(t_AltitudeDetector, bodyShape),
          DECLARE_GET_FIELD(t_AltitudeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AltitudeDetector__methods_[] = {
          DECLARE_METHOD(t_AltitudeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AltitudeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AltitudeDetector, getAltitude, METH_NOARGS),
          DECLARE_METHOD(t_AltitudeDetector, getBodyShape, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AltitudeDetector)[] = {
          { Py_tp_methods, t_AltitudeDetector__methods_ },
          { Py_tp_init, (void *) t_AltitudeDetector_init_ },
          { Py_tp_getset, t_AltitudeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AltitudeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AltitudeDetector, t_AltitudeDetector, AltitudeDetector);
        PyObject *t_AltitudeDetector::wrap_Object(const AltitudeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AltitudeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AltitudeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AltitudeDetector *self = (t_AltitudeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AltitudeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AltitudeDetector), &PY_TYPE_DEF(AltitudeDetector), module, "AltitudeDetector", 0);
        }

        void t_AltitudeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "class_", make_descriptor(AltitudeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "wrapfn_", make_descriptor(t_AltitudeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AltitudeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AltitudeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AltitudeDetector::initializeClass, 1)))
            return NULL;
          return t_AltitudeDetector::wrap_Object(AltitudeDetector(((t_AltitudeDetector *) arg)->object.this$));
        }
        static PyObject *t_AltitudeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AltitudeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AltitudeDetector_of_(t_AltitudeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AltitudeDetector_init_(t_AltitudeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::bodies::BodyShape a1((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AltitudeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::bodies::BodyShape a3((jobject) NULL);
              AltitudeDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDk", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AltitudeDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AltitudeDetector);
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

        static PyObject *t_AltitudeDetector_g(t_AltitudeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AltitudeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AltitudeDetector_getAltitude(t_AltitudeDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AltitudeDetector_getBodyShape(t_AltitudeDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_AltitudeDetector_get__parameters_(t_AltitudeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AltitudeDetector_get__altitude(t_AltitudeDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AltitudeDetector_get__bodyShape(t_AltitudeDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyShape());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinates::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinates::mids$ = NULL;
      bool FieldAbsolutePVCoordinates::live$ = false;

      jclass FieldAbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6c77220cdb0ea6df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
          mids$[mid_init$_31f1fe93c62865b4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_ffffc3b35edcf862] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_1ecbc58634d61ebe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_dcce67c0d72933b9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c33d21628d91e570] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_237419b68b55edce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_4bbfe40ca6a1fb24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_2ab935b9a04a47e7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_8a8f4d2c2758b365] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_52ae651ad18178ce] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_b026e433cf2ed2d1] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_7bd46244f7d046c7] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_shiftedBy_da445f13ea5e4505] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_toAbsolutePVCoordinates_424b08369c4f1f64] = env->getMethodID(cls, "toAbsolutePVCoordinates", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_dffb82756006eef9] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a1) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6c77220cdb0ea6df, a0.this$, a1.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldAbsolutePVCoordinates & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_31f1fe93c62865b4, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ffffc3b35edcf862, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1ecbc58634d61ebe, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_dcce67c0d72933b9, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c33d21628d91e570, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_237419b68b55edce, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4bbfe40ca6a1fb24, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2ab935b9a04a47e7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const FieldAbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8a8f4d2c2758b365, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_232470f1b769250c]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_52ae651ad18178ce], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_b026e433cf2ed2d1], a0.this$));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_7bd46244f7d046c7], a0));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_da445f13ea5e4505], a0.this$));
      }

      ::org::orekit::utils::AbsolutePVCoordinates FieldAbsolutePVCoordinates::toAbsolutePVCoordinates() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_toAbsolutePVCoordinates_424b08369c4f1f64]));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_dffb82756006eef9]));
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
      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toAbsolutePVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toTaylorProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedFieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinates, t_FieldAbsolutePVCoordinates, FieldAbsolutePVCoordinates);
      PyObject *t_FieldAbsolutePVCoordinates::wrap_Object(const FieldAbsolutePVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinates), &PY_TYPE_DEF(FieldAbsolutePVCoordinates), module, "FieldAbsolutePVCoordinates", 0);
      }

      void t_FieldAbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "class_", make_descriptor(FieldAbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinates::wrap_Object(FieldAbsolutePVCoordinates(((t_FieldAbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldAbsolutePVCoordinates::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldAbsolutePVCoordinates::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            FieldAbsolutePVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsolutePVCoordinates());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.toTaylorProvider());
        return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmWriter::class$ = NULL;
              jmethodID *AcmWriter::mids$ = NULL;
              bool AcmWriter::live$ = false;
              jdouble AcmWriter::CCSDS_ACM_VERS = (jdouble) 0;
              jint AcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cba1f12fdff2950e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_writeSegmentContent_e9836ce27ccfe3b9] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_ACM_VERS = env->getStaticDoubleField(cls, "CCSDS_ACM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmWriter::AcmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_cba1f12fdff2950e, a0.this$, a1.this$)) {}
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
              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args);
              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data);
              static PyGetSetDef t_AcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmWriter__methods_[] = {
                DECLARE_METHOD(t_AcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmWriter)[] = {
                { Py_tp_methods, t_AcmWriter__methods_ },
                { Py_tp_init, (void *) t_AcmWriter_init_ },
                { Py_tp_getset, t_AcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AcmWriter, t_AcmWriter, AcmWriter);
              PyObject *t_AcmWriter::wrap_Object(const AcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmWriter), &PY_TYPE_DEF(AcmWriter), module, "AcmWriter", 0);
              }

              void t_AcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "class_", make_descriptor(AcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "wrapfn_", make_descriptor(t_AcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "CCSDS_ACM_VERS", make_descriptor(AcmWriter::CCSDS_ACM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "KVN_PADDING_WIDTH", make_descriptor(AcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmWriter::initializeClass, 1)))
                  return NULL;
                return t_AcmWriter::wrap_Object(AcmWriter(((t_AcmWriter *) arg)->object.this$));
              }
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                AcmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
                {
                  INT_CALL(object = AcmWriter(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(Acm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Boolean.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *AbstractManeuverTriggers::class$ = NULL;
          jmethodID *AbstractManeuverTriggers::mids$ = NULL;
          bool AbstractManeuverTriggers::live$ = false;

          jclass AbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_6c2e9e35ba95043d] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_17259cc5ef51ebf7] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getFirings_d26bd874ee319049] = env->getMethodID(cls, "getFirings", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_cf913265ec3c3fe7] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_7ccb736f2a8bfc30] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_initializeResetters_0472264ad6f40bc2] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_initializeResetters_811e49dad2467b67] = env->getMethodID(cls, "initializeResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_notifyResetters_585702d5a402c590] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_notifyResetters_45bf76e836befe86] = env->getMethodID(cls, "notifyResetters", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_applyResetters_2c4cc16b11f79a6c] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_applyResetters_4f12774dd382c6f4] = env->getMethodID(cls, "applyResetters", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_isFiringOnInitialState_1e4c79a00429445e] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_6c2e9e35ba95043d], a0.this$);
          }

          void AbstractManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_17259cc5ef51ebf7], a0.this$, a1.this$);
          }

          ::org::orekit::utils::TimeSpanMap AbstractManeuverTriggers::getFirings() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getFirings_d26bd874ee319049]));
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
          }

          void AbstractManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_cf913265ec3c3fe7], a0.this$, a1.this$);
          }

          jboolean AbstractManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_7ccb736f2a8bfc30], a0.this$, a1.this$);
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
          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self);
          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args);
          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_AbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractManeuverTriggers, firings),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_AbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, getFirings, METH_NOARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_AbstractManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_AbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractManeuverTriggers, t_AbstractManeuverTriggers, AbstractManeuverTriggers);

          void t_AbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractManeuverTriggers), &PY_TYPE_DEF(AbstractManeuverTriggers), module, "AbstractManeuverTriggers", 0);
          }

          void t_AbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "class_", make_descriptor(AbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "wrapfn_", make_descriptor(t_AbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_AbstractManeuverTriggers::wrap_Object(AbstractManeuverTriggers(((t_AbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_AbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractManeuverTriggers_addResetter(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_getFirings(t_AbstractManeuverTriggers *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Boolean));
          }

          static PyObject *t_AbstractManeuverTriggers_init(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
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
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_isFiring(t_AbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_AbstractManeuverTriggers_get__firings(t_AbstractManeuverTriggers *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirings());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeInterpolator::class$ = NULL;
      jmethodID *FieldTimeInterpolator::mids$ = NULL;
      bool FieldTimeInterpolator::live$ = false;

      jclass FieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_38dc0c96cc60a813] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_98428073ca0c402f] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_cc27df3dc8f597ed] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_a061c10693b292f5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_557b8123390d8d0c]);
      }

      jint FieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_412668abc8d889e9]);
      }

      ::java::util::List FieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_0d9551367f7ecdef]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_38dc0c96cc60a813], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_98428073ca0c402f], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_cc27df3dc8f597ed], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_a061c10693b292f5], a0.this$, a1.this$));
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
      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_FieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeInterpolator)[] = {
        { Py_tp_methods, t_FieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeInterpolator, t_FieldTimeInterpolator, FieldTimeInterpolator);
      PyObject *t_FieldTimeInterpolator::wrap_Object(const FieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeInterpolator), &PY_TYPE_DEF(FieldTimeInterpolator), module, "FieldTimeInterpolator", 0);
      }

      void t_FieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "class_", make_descriptor(FieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "wrapfn_", make_descriptor(t_FieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldTimeInterpolator::wrap_Object(FieldTimeInterpolator(((t_FieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSEphemeris::class$ = NULL;
            jmethodID *GLONASSEphemeris::mids$ = NULL;
            bool GLONASSEphemeris::live$ = false;

            jclass GLONASSEphemeris::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_12f7e75b42b3a31d] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDD)V");
                mids$[mid_init$_4044476b2bc127b8] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDDLorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getN4_412668abc8d889e9] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_412668abc8d889e9] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_557b8123390d8d0c] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_12f7e75b42b3a31d, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4044476b2bc127b8, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSEphemeris::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
            }

            jint GLONASSEphemeris::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_412668abc8d889e9]);
            }

            jint GLONASSEphemeris::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_412668abc8d889e9]);
            }

            jdouble GLONASSEphemeris::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_557b8123390d8d0c]);
            }

            jdouble GLONASSEphemeris::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_557b8123390d8d0c]);
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
            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data);
            static PyGetSetDef t_GLONASSEphemeris__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSEphemeris, date),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, n4),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, na),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, time),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, x),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, y),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, z),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSEphemeris__methods_[] = {
              DECLARE_METHOD(t_GLONASSEphemeris, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSEphemeris)[] = {
              { Py_tp_methods, t_GLONASSEphemeris__methods_ },
              { Py_tp_init, (void *) t_GLONASSEphemeris_init_ },
              { Py_tp_getset, t_GLONASSEphemeris__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSEphemeris)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSEphemeris, t_GLONASSEphemeris, GLONASSEphemeris);

            void t_GLONASSEphemeris::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSEphemeris), &PY_TYPE_DEF(GLONASSEphemeris), module, "GLONASSEphemeris", 0);
            }

            void t_GLONASSEphemeris::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "class_", make_descriptor(GLONASSEphemeris::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "wrapfn_", make_descriptor(t_GLONASSEphemeris::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSEphemeris::initializeClass, 1)))
                return NULL;
              return t_GLONASSEphemeris::wrap_Object(GLONASSEphemeris(((t_GLONASSEphemeris *) arg)->object.this$));
            }
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSEphemeris::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 12:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 13:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ManeuverKey::class$ = NULL;
              jmethodID *ManeuverKey::mids$ = NULL;
              bool ManeuverKey::live$ = false;
              ManeuverKey *ManeuverKey::COMMENT = NULL;
              ManeuverKey *ManeuverKey::MAN_DELTA_MASS = NULL;
              ManeuverKey *ManeuverKey::MAN_DURATION = NULL;
              ManeuverKey *ManeuverKey::MAN_EPOCH_START = NULL;
              ManeuverKey *ManeuverKey::MAN_REF_FRAME = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_1 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_2 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_3 = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_X = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Y = NULL;
              ManeuverKey *ManeuverKey::MAN_TOR_Z = NULL;

              jclass ManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_a90fd8465f7bd9c2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)Z");
                  mids$[mid_valueOf_44af345398f19e9b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");
                  mids$[mid_values_0a719a076a5e2b38] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DELTA_MASS = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_DURATION = new ManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_EPOCH_START = new ManeuverKey(env->getStaticObjectField(cls, "MAN_EPOCH_START", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_REF_FRAME = new ManeuverKey(env->getStaticObjectField(cls, "MAN_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_1 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_2 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_3 = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_X = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Y = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  MAN_TOR_Z = new ManeuverKey(env->getStaticObjectField(cls, "MAN_TOR_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/ManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_a90fd8465f7bd9c2], a0.this$, a1.this$, a2.this$);
              }

              ManeuverKey ManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_44af345398f19e9b], a0.this$));
              }

              JArray< ManeuverKey > ManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0a719a076a5e2b38]));
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
            namespace apm {
              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args);
              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverKey_values(PyTypeObject *type);
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data);
              static PyGetSetDef t_ManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverKey__methods_[] = {
                DECLARE_METHOD(t_ManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverKey)[] = {
                { Py_tp_methods, t_ManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverKey, t_ManeuverKey, ManeuverKey);
              PyObject *t_ManeuverKey::wrap_Object(const ManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverKey *self = (t_ManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverKey), &PY_TYPE_DEF(ManeuverKey), module, "ManeuverKey", 0);
              }

              void t_ManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "class_", make_descriptor(ManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "wrapfn_", make_descriptor(t_ManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "COMMENT", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DELTA_MASS", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_DURATION", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_EPOCH_START", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_EPOCH_START)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_REF_FRAME", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_1", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_2", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_3", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_X", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Y", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverKey), "MAN_TOR_Z", make_descriptor(t_ManeuverKey::wrap_Object(*ManeuverKey::MAN_TOR_Z)));
              }

              static PyObject *t_ManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_ManeuverKey::wrap_Object(ManeuverKey(((t_ManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_ManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverKey_of_(t_ManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverKey_process(t_ManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::valueOf(a0));
                  return t_ManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverKey_values(PyTypeObject *type)
              {
                JArray< ManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverKey::wrap_jobject);
              }
              static PyObject *t_ManeuverKey_get__parameters_(t_ManeuverKey *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *RegularXmlTokenBuilder::class$ = NULL;
            jmethodID *RegularXmlTokenBuilder::mids$ = NULL;
            bool RegularXmlTokenBuilder::live$ = false;

            jclass RegularXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_5a8e94497b45a4c0] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RegularXmlTokenBuilder::RegularXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::java::util::List RegularXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_5a8e94497b45a4c0], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RegularXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RegularXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RegularXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RegularXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RegularXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RegularXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RegularXmlTokenBuilder, t_RegularXmlTokenBuilder, RegularXmlTokenBuilder);

            void t_RegularXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RegularXmlTokenBuilder), &PY_TYPE_DEF(RegularXmlTokenBuilder), module, "RegularXmlTokenBuilder", 0);
            }

            void t_RegularXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "class_", make_descriptor(RegularXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "wrapfn_", make_descriptor(t_RegularXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RegularXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RegularXmlTokenBuilder::wrap_Object(RegularXmlTokenBuilder(((t_RegularXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RegularXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RegularXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RegularXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "java/lang/Long.h"
#include "java/lang/Comparable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Long::class$ = NULL;
    jmethodID *Long::mids$ = NULL;
    bool Long::live$ = false;
    jint Long::BYTES = (jint) 0;
    jlong Long::MAX_VALUE = (jlong) 0;
    jlong Long::MIN_VALUE = (jlong) 0;
    jint Long::SIZE = (jint) 0;
    ::java::lang::Class *Long::TYPE = NULL;

    jclass Long::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Long");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_bitCount_06110d73d878b7ae] = env->getStaticMethodID(cls, "bitCount", "(J)I");
        mids$[mid_byteValue_acadfed42a0dbd0d] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_1abbfee4f30dfe0a] = env->getStaticMethodID(cls, "compare", "(JJ)I");
        mids$[mid_compareTo_f77dca0e234de4f8] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Long;)I");
        mids$[mid_compareUnsigned_1abbfee4f30dfe0a] = env->getStaticMethodID(cls, "compareUnsigned", "(JJ)I");
        mids$[mid_decode_7f2060733966aef7] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_divideUnsigned_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
        mids$[mid_doubleValue_557b8123390d8d0c] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_04fe014f7609dc26] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getLong_7f2060733966aef7] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_getLong_90d76fd0b429d420] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;");
        mids$[mid_getLong_0aafc93534471333] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;J)Ljava/lang/Long;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_06110d73d878b7ae] = env->getStaticMethodID(cls, "hashCode", "(J)I");
        mids$[mid_highestOneBit_f4ad805a81234b49] = env->getStaticMethodID(cls, "highestOneBit", "(J)J");
        mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_9e26256fb0d384a2] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_f4ad805a81234b49] = env->getStaticMethodID(cls, "lowestOneBit", "(J)J");
        mids$[mid_max_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "max", "(JJ)J");
        mids$[mid_min_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "min", "(JJ)J");
        mids$[mid_numberOfLeadingZeros_06110d73d878b7ae] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(J)I");
        mids$[mid_numberOfTrailingZeros_06110d73d878b7ae] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(J)I");
        mids$[mid_parseLong_8524bc32bc995ef2] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;)J");
        mids$[mid_parseLong_77139396af4e84c5] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseLong_154996cf4a3d855d] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_parseUnsignedLong_8524bc32bc995ef2] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;)J");
        mids$[mid_parseUnsignedLong_77139396af4e84c5] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseUnsignedLong_154996cf4a3d855d] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_remainderUnsigned_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
        mids$[mid_reverse_f4ad805a81234b49] = env->getStaticMethodID(cls, "reverse", "(J)J");
        mids$[mid_reverseBytes_f4ad805a81234b49] = env->getStaticMethodID(cls, "reverseBytes", "(J)J");
        mids$[mid_rotateLeft_974ee1cf526db4b7] = env->getStaticMethodID(cls, "rotateLeft", "(JI)J");
        mids$[mid_rotateRight_974ee1cf526db4b7] = env->getStaticMethodID(cls, "rotateRight", "(JI)J");
        mids$[mid_shortValue_2554afc868a7ba2a] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_06110d73d878b7ae] = env->getStaticMethodID(cls, "signum", "(J)I");
        mids$[mid_sum_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "sum", "(JJ)J");
        mids$[mid_toBinaryString_dffed0dde596e613] = env->getStaticMethodID(cls, "toBinaryString", "(J)Ljava/lang/String;");
        mids$[mid_toHexString_dffed0dde596e613] = env->getStaticMethodID(cls, "toHexString", "(J)Ljava/lang/String;");
        mids$[mid_toOctalString_dffed0dde596e613] = env->getStaticMethodID(cls, "toOctalString", "(J)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_dffed0dde596e613] = env->getStaticMethodID(cls, "toString", "(J)Ljava/lang/String;");
        mids$[mid_toString_eeb517e6e503fbb7] = env->getStaticMethodID(cls, "toString", "(JI)Ljava/lang/String;");
        mids$[mid_toUnsignedString_dffed0dde596e613] = env->getStaticMethodID(cls, "toUnsignedString", "(J)Ljava/lang/String;");
        mids$[mid_toUnsignedString_eeb517e6e503fbb7] = env->getStaticMethodID(cls, "toUnsignedString", "(JI)Ljava/lang/String;");
        mids$[mid_valueOf_7f2060733966aef7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_valueOf_214cbd70b5088f3f] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/Long;");
        mids$[mid_valueOf_a76026f05215f715] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Long;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticLongField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticLongField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Long::Long(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Long::Long(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

    jint Long::bitCount(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_06110d73d878b7ae], a0);
    }

    jbyte Long::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_acadfed42a0dbd0d]);
    }

    jint Long::compare(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_1abbfee4f30dfe0a], a0, a1);
    }

    jint Long::compareTo(const Long & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_f77dca0e234de4f8], a0.this$);
    }

    jint Long::compareUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_1abbfee4f30dfe0a], a0, a1);
    }

    Long Long::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_decode_7f2060733966aef7], a0.this$));
    }

    jlong Long::divideUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_c18ab8eab0c49f84], a0, a1);
    }

    jdouble Long::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_557b8123390d8d0c]);
    }

    jboolean Long::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jfloat Long::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_04fe014f7609dc26]);
    }

    Long Long::getLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_7f2060733966aef7], a0.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, const Long & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_90d76fd0b429d420], a0.this$, a1.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_0aafc93534471333], a0.this$, a1));
    }

    jint Long::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jint Long::hashCode(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_06110d73d878b7ae], a0);
    }

    jlong Long::highestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_highestOneBit_f4ad805a81234b49], a0);
    }

    jint Long::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
    }

    jlong Long::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_9e26256fb0d384a2]);
    }

    jlong Long::lowestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_lowestOneBit_f4ad805a81234b49], a0);
    }

    jlong Long::max$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_max_c18ab8eab0c49f84], a0, a1);
    }

    jlong Long::min$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_min_c18ab8eab0c49f84], a0, a1);
    }

    jint Long::numberOfLeadingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_06110d73d878b7ae], a0);
    }

    jint Long::numberOfTrailingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_06110d73d878b7ae], a0);
    }

    jlong Long::parseLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_8524bc32bc995ef2], a0.this$);
    }

    jlong Long::parseLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_77139396af4e84c5], a0.this$, a1);
    }

    jlong Long::parseLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_154996cf4a3d855d], a0.this$, a1, a2, a3);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_8524bc32bc995ef2], a0.this$);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_77139396af4e84c5], a0.this$, a1);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_154996cf4a3d855d], a0.this$, a1, a2, a3);
    }

    jlong Long::remainderUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_c18ab8eab0c49f84], a0, a1);
    }

    jlong Long::reverse(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverse_f4ad805a81234b49], a0);
    }

    jlong Long::reverseBytes(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverseBytes_f4ad805a81234b49], a0);
    }

    jlong Long::rotateLeft(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateLeft_974ee1cf526db4b7], a0, a1);
    }

    jlong Long::rotateRight(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateRight_974ee1cf526db4b7], a0, a1);
    }

    jshort Long::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_2554afc868a7ba2a]);
    }

    jint Long::signum(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_06110d73d878b7ae], a0);
    }

    jlong Long::sum(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_sum_c18ab8eab0c49f84], a0, a1);
    }

    ::java::lang::String Long::toBinaryString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_dffed0dde596e613], a0));
    }

    ::java::lang::String Long::toHexString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_dffed0dde596e613], a0));
    }

    ::java::lang::String Long::toOctalString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_dffed0dde596e613], a0));
    }

    ::java::lang::String Long::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::lang::String Long::toString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_dffed0dde596e613], a0));
    }

    ::java::lang::String Long::toString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_eeb517e6e503fbb7], a0, a1));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_dffed0dde596e613], a0));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_eeb517e6e503fbb7], a0, a1));
    }

    Long Long::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7f2060733966aef7], a0.this$));
    }

    Long Long::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_214cbd70b5088f3f], a0));
    }

    Long Long::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a76026f05215f715], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg);
    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_equals(t_Long *self, PyObject *args);
    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args);
    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_intValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_longValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toString(t_Long *self, PyObject *args);
    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Long__methods_[] = {
      DECLARE_METHOD(t_Long, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, compareTo, METH_O),
      DECLARE_METHOD(t_Long, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, equals, METH_VARARGS),
      DECLARE_METHOD(t_Long, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, getLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Long, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, parseLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, parseUnsignedLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toString, METH_VARARGS),
      DECLARE_METHOD(t_Long, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Long)[] = {
      { Py_tp_methods, t_Long__methods_ },
      { Py_tp_init, (void *) t_Long_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Long)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Long, t_Long, Long);

    void t_Long::install(PyObject *module)
    {
      installType(&PY_TYPE(Long), &PY_TYPE_DEF(Long), module, "Long", 0);
    }

    void t_Long::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "class_", make_descriptor(Long::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "wrapfn_", make_descriptor(unboxLong));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "boxfn_", make_descriptor(boxLong));
      env->getClass(Long::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "BYTES", make_descriptor(Long::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MAX_VALUE", make_descriptor(Long::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MIN_VALUE", make_descriptor(Long::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "SIZE", make_descriptor(Long::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Long::TYPE)));
    }

    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Long::initializeClass, 1)))
        return NULL;
      return t_Long::wrap_Object(Long(((t_Long *) arg)->object.this$));
    }
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Long::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Long(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Long object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Long(a0));
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

    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg)
    {
      Long a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Long), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Long result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::decode(a0));
        return t_Long::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::divideUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Long_equals(t_Long *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Long a1((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Long), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLong", args);
      return NULL;
    }

    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::highestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_intValue(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Long_longValue(t_Long *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::lowestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::max$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::min$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseLong", args);
      return NULL;
    }

    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedLong", args);
      return NULL;
    }

    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::remainderUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverseBytes(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateLeft(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateRight(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::sum(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Long_toString(t_Long *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        {
          jlong a0;
          Long result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0, a1));
            return t_Long::wrap_Object(result);
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
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationData::class$ = NULL;
          jmethodID *ObservationData::mids$ = NULL;
          bool ObservationData::live$ = false;

          jclass ObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e7d65402d1304c75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/ObservationType;DII)V");
              mids$[mid_getLossOfLockIndicator_412668abc8d889e9] = env->getMethodID(cls, "getLossOfLockIndicator", "()I");
              mids$[mid_getObservationType_40f193b60caef501] = env->getMethodID(cls, "getObservationType", "()Lorg/orekit/gnss/ObservationType;");
              mids$[mid_getSignalStrength_412668abc8d889e9] = env->getMethodID(cls, "getSignalStrength", "()I");
              mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationData::ObservationData(const ::org::orekit::gnss::ObservationType & a0, jdouble a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e7d65402d1304c75, a0.this$, a1, a2, a3)) {}

          jint ObservationData::getLossOfLockIndicator() const
          {
            return env->callIntMethod(this$, mids$[mid_getLossOfLockIndicator_412668abc8d889e9]);
          }

          ::org::orekit::gnss::ObservationType ObservationData::getObservationType() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getObservationType_40f193b60caef501]));
          }

          jint ObservationData::getSignalStrength() const
          {
            return env->callIntMethod(this$, mids$[mid_getSignalStrength_412668abc8d889e9]);
          }

          jdouble ObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
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
          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self);
          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self);
          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self);
          static PyObject *t_ObservationData_getValue(t_ObservationData *self);
          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data);
          static PyGetSetDef t_ObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationData, lossOfLockIndicator),
            DECLARE_GET_FIELD(t_ObservationData, observationType),
            DECLARE_GET_FIELD(t_ObservationData, signalStrength),
            DECLARE_GET_FIELD(t_ObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationData__methods_[] = {
            DECLARE_METHOD(t_ObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, getLossOfLockIndicator, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getObservationType, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getSignalStrength, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationData)[] = {
            { Py_tp_methods, t_ObservationData__methods_ },
            { Py_tp_init, (void *) t_ObservationData_init_ },
            { Py_tp_getset, t_ObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationData, t_ObservationData, ObservationData);

          void t_ObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationData), &PY_TYPE_DEF(ObservationData), module, "ObservationData", 0);
          }

          void t_ObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "class_", make_descriptor(ObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "wrapfn_", make_descriptor(t_ObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationData::initializeClass, 1)))
              return NULL;
            return t_ObservationData::wrap_Object(ObservationData(((t_ObservationData *) arg)->object.this$));
          }
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::ObservationType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jint a3;
            ObservationData object((jobject) NULL);

            if (!parseArgs(args, "KDII", ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = ObservationData(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSignalStrength());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getValue(t_ObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }

          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSignalStrength());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/IllinoisSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *IllinoisSolver::class$ = NULL;
        jmethodID *IllinoisSolver::mids$ = NULL;
        bool IllinoisSolver::live$ = false;

        jclass IllinoisSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/IllinoisSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IllinoisSolver::IllinoisSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        IllinoisSolver::IllinoisSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}
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
        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args);
        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data);
        static PyGetSetDef t_IllinoisSolver__fields_[] = {
          DECLARE_GET_FIELD(t_IllinoisSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IllinoisSolver__methods_[] = {
          DECLARE_METHOD(t_IllinoisSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IllinoisSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IllinoisSolver)[] = {
          { Py_tp_methods, t_IllinoisSolver__methods_ },
          { Py_tp_init, (void *) t_IllinoisSolver_init_ },
          { Py_tp_getset, t_IllinoisSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IllinoisSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(IllinoisSolver, t_IllinoisSolver, IllinoisSolver);
        PyObject *t_IllinoisSolver::wrap_Object(const IllinoisSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IllinoisSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IllinoisSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IllinoisSolver *self = (t_IllinoisSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IllinoisSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(IllinoisSolver), &PY_TYPE_DEF(IllinoisSolver), module, "IllinoisSolver", 0);
        }

        void t_IllinoisSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "class_", make_descriptor(IllinoisSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "wrapfn_", make_descriptor(t_IllinoisSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IllinoisSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IllinoisSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IllinoisSolver::initializeClass, 1)))
            return NULL;
          return t_IllinoisSolver::wrap_Object(IllinoisSolver(((t_IllinoisSolver *) arg)->object.this$));
        }
        static PyObject *t_IllinoisSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IllinoisSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IllinoisSolver_of_(t_IllinoisSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IllinoisSolver_init_(t_IllinoisSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              IllinoisSolver object((jobject) NULL);

              INT_CALL(object = IllinoisSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = IllinoisSolver(a0));
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
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IllinoisSolver(a0, a1));
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
              IllinoisSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = IllinoisSolver(a0, a1, a2));
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
        static PyObject *t_IllinoisSolver_get__parameters_(t_IllinoisSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SbasId::class$ = NULL;
          jmethodID *SbasId::mids$ = NULL;
          bool SbasId::live$ = false;
          SbasId *SbasId::A_SBAS = NULL;
          SbasId *SbasId::BDSBAS = NULL;
          SbasId *SbasId::EGNOS = NULL;
          SbasId *SbasId::GAGAN = NULL;
          SbasId *SbasId::KASS = NULL;
          SbasId *SbasId::MSAS = NULL;
          SbasId *SbasId::SACCSA = NULL;
          SbasId *SbasId::SDCM = NULL;
          SbasId *SbasId::SPAN = NULL;
          SbasId *SbasId::WAAS = NULL;

          jclass SbasId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SbasId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_5ed7df7d4ce1b971] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_values_79ab4c9a5b526f56] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/SbasId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A_SBAS = new SbasId(env->getStaticObjectField(cls, "A_SBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              BDSBAS = new SbasId(env->getStaticObjectField(cls, "BDSBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              EGNOS = new SbasId(env->getStaticObjectField(cls, "EGNOS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              GAGAN = new SbasId(env->getStaticObjectField(cls, "GAGAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              KASS = new SbasId(env->getStaticObjectField(cls, "KASS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              MSAS = new SbasId(env->getStaticObjectField(cls, "MSAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SACCSA = new SbasId(env->getStaticObjectField(cls, "SACCSA", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SDCM = new SbasId(env->getStaticObjectField(cls, "SDCM", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SPAN = new SbasId(env->getStaticObjectField(cls, "SPAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              WAAS = new SbasId(env->getStaticObjectField(cls, "WAAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SbasId SbasId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SbasId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5ed7df7d4ce1b971], a0.this$));
          }

          JArray< SbasId > SbasId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SbasId >(env->callStaticObjectMethod(cls, mids$[mid_values_79ab4c9a5b526f56]));
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
          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args);
          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SbasId_values(PyTypeObject *type);
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data);
          static PyGetSetDef t_SbasId__fields_[] = {
            DECLARE_GET_FIELD(t_SbasId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SbasId__methods_[] = {
            DECLARE_METHOD(t_SbasId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, of_, METH_VARARGS),
            DECLARE_METHOD(t_SbasId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SbasId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SbasId)[] = {
            { Py_tp_methods, t_SbasId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SbasId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SbasId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SbasId, t_SbasId, SbasId);
          PyObject *t_SbasId::wrap_Object(const SbasId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SbasId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SbasId::install(PyObject *module)
          {
            installType(&PY_TYPE(SbasId), &PY_TYPE_DEF(SbasId), module, "SbasId", 0);
          }

          void t_SbasId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "class_", make_descriptor(SbasId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "wrapfn_", make_descriptor(t_SbasId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "boxfn_", make_descriptor(boxObject));
            env->getClass(SbasId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "A_SBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::A_SBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "BDSBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::BDSBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "EGNOS", make_descriptor(t_SbasId::wrap_Object(*SbasId::EGNOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "GAGAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::GAGAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "KASS", make_descriptor(t_SbasId::wrap_Object(*SbasId::KASS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "MSAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::MSAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SACCSA", make_descriptor(t_SbasId::wrap_Object(*SbasId::SACCSA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SDCM", make_descriptor(t_SbasId::wrap_Object(*SbasId::SDCM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SPAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::SPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "WAAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::WAAS)));
          }

          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SbasId::initializeClass, 1)))
              return NULL;
            return t_SbasId::wrap_Object(SbasId(((t_SbasId *) arg)->object.this$));
          }
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SbasId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SbasId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::valueOf(a0));
              return t_SbasId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SbasId_values(PyTypeObject *type)
          {
            JArray< SbasId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::values());
            return JArray<jobject>(result.this$).wrap(t_SbasId::wrap_jobject);
          }
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_2d3cf86082e01bb1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_376cdf1ab01ad011] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4b0f59ff7b8720f9] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(const ::java::lang::String & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_2d3cf86082e01bb1, a0.this$, a1.this$, a2)) {}

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
              }

              jlong PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
              }

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), module, "PythonAbstractShortTermEncounter1DNumerical2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0 },
                  { "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(((t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                jint a2;
                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "skI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(a0, a1, a2));
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

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::FieldUnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOOi", o0, o1, o2, o3, o4, o5, (int) a6);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_UnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::UnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "dddddOi", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4, o5, (int) a6);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
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

              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_9e26256fb0d384a2]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/CR3BPRotatingFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *CR3BPRotatingFrame::class$ = NULL;
      jmethodID *CR3BPRotatingFrame::mids$ = NULL;
      bool CR3BPRotatingFrame::live$ = false;

      jclass CR3BPRotatingFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/CR3BPRotatingFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b111ad360d8b3b5a] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPRotatingFrame::CR3BPRotatingFrame(jdouble a0, const ::org::orekit::bodies::CelestialBody & a1, const ::org::orekit::bodies::CelestialBody & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_b111ad360d8b3b5a, a0, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_CR3BPRotatingFrame__methods_[] = {
        DECLARE_METHOD(t_CR3BPRotatingFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPRotatingFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPRotatingFrame)[] = {
        { Py_tp_methods, t_CR3BPRotatingFrame__methods_ },
        { Py_tp_init, (void *) t_CR3BPRotatingFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPRotatingFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(CR3BPRotatingFrame, t_CR3BPRotatingFrame, CR3BPRotatingFrame);

      void t_CR3BPRotatingFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPRotatingFrame), &PY_TYPE_DEF(CR3BPRotatingFrame), module, "CR3BPRotatingFrame", 0);
      }

      void t_CR3BPRotatingFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "class_", make_descriptor(CR3BPRotatingFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "wrapfn_", make_descriptor(t_CR3BPRotatingFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPRotatingFrame::initializeClass, 1)))
          return NULL;
        return t_CR3BPRotatingFrame::wrap_Object(CR3BPRotatingFrame(((t_CR3BPRotatingFrame *) arg)->object.this$));
      }
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPRotatingFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
        CR3BPRotatingFrame object((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPRotatingFrame(a0, a1, a2));
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
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessagesParser::class$ = NULL;
          jmethodID *MessagesParser::mids$ = NULL;
          bool MessagesParser::live$ = false;

          jclass MessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_parse_ec52da06f229b101] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;Z)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_getMessageType_ceeebd64fcb1f2de] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_2ab051b27e6414f5] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MessagesParser::MessagesParser(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

          ::org::orekit::gnss::metric::messages::ParsedMessage MessagesParser::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jboolean a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_ec52da06f229b101], a0.this$, a1));
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
          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args);

          static PyMethodDef t_MessagesParser__methods_[] = {
            DECLARE_METHOD(t_MessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessagesParser)[] = {
            { Py_tp_methods, t_MessagesParser__methods_ },
            { Py_tp_init, (void *) t_MessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessagesParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessagesParser, t_MessagesParser, MessagesParser);

          void t_MessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(MessagesParser), &PY_TYPE_DEF(MessagesParser), module, "MessagesParser", 0);
          }

          void t_MessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "class_", make_descriptor(MessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "wrapfn_", make_descriptor(t_MessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessagesParser::initializeClass, 1)))
              return NULL;
            return t_MessagesParser::wrap_Object(MessagesParser(((t_MessagesParser *) arg)->object.this$));
          }
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MessagesParser(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
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
#include "org/hipparchus/stat/descriptive/MultivariateSummaryStatistics.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *MultivariateSummaryStatistics::class$ = NULL;
        jmethodID *MultivariateSummaryStatistics::mids$ = NULL;
        bool MultivariateSummaryStatistics::live$ = false;

        jclass MultivariateSummaryStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/MultivariateSummaryStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_746492bb94848925] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_addValue_cc18240f4a737f14] = env->getMethodID(cls, "addValue", "([D)V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCovariance_70a207fcbc031df2] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_a53a7513ecedada2] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_a53a7513ecedada2] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_a53a7513ecedada2] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_a53a7513ecedada2] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_a53a7513ecedada2] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_a53a7513ecedada2] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_a53a7513ecedada2] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_a53a7513ecedada2] = env->getMethodID(cls, "getSumSq", "()[D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_746492bb94848925, a0, a1)) {}

        void MultivariateSummaryStatistics::addValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_cc18240f4a737f14], a0.this$);
        }

        void MultivariateSummaryStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        jboolean MultivariateSummaryStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateSummaryStatistics::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_70a207fcbc031df2]));
        }

        jint MultivariateSummaryStatistics::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_a53a7513ecedada2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_a53a7513ecedada2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_a53a7513ecedada2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_a53a7513ecedada2]));
        }

        jlong MultivariateSummaryStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_a53a7513ecedada2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_a53a7513ecedada2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_a53a7513ecedada2]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_a53a7513ecedada2]));
        }

        jint MultivariateSummaryStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        ::java::lang::String MultivariateSummaryStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg);
        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self);
        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args);
        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data);
        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data);
        static PyGetSetDef t_MultivariateSummaryStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, covariance),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, dimension),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, geometricMean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, max),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, mean),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, min),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, n),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sum),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumLog),
          DECLARE_GET_FIELD(t_MultivariateSummaryStatistics, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateSummaryStatistics__methods_[] = {
          DECLARE_METHOD(t_MultivariateSummaryStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, addValue, METH_O),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, getSumSq, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateSummaryStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateSummaryStatistics)[] = {
          { Py_tp_methods, t_MultivariateSummaryStatistics__methods_ },
          { Py_tp_init, (void *) t_MultivariateSummaryStatistics_init_ },
          { Py_tp_getset, t_MultivariateSummaryStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateSummaryStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateSummaryStatistics, t_MultivariateSummaryStatistics, MultivariateSummaryStatistics);

        void t_MultivariateSummaryStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateSummaryStatistics), &PY_TYPE_DEF(MultivariateSummaryStatistics), module, "MultivariateSummaryStatistics", 0);
        }

        void t_MultivariateSummaryStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "class_", make_descriptor(MultivariateSummaryStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "wrapfn_", make_descriptor(t_MultivariateSummaryStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateSummaryStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateSummaryStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateSummaryStatistics::initializeClass, 1)))
            return NULL;
          return t_MultivariateSummaryStatistics::wrap_Object(MultivariateSummaryStatistics(((t_MultivariateSummaryStatistics *) arg)->object.this$));
        }
        static PyObject *t_MultivariateSummaryStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateSummaryStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateSummaryStatistics_init_(t_MultivariateSummaryStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              MultivariateSummaryStatistics object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MultivariateSummaryStatistics(a0, a1));
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

        static PyObject *t_MultivariateSummaryStatistics_addValue(t_MultivariateSummaryStatistics *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_MultivariateSummaryStatistics_clear(t_MultivariateSummaryStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MultivariateSummaryStatistics_equals(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_getCovariance(t_MultivariateSummaryStatistics *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getDimension(t_MultivariateSummaryStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getGeometricMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMax(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMean(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getMin(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getN(t_MultivariateSummaryStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MultivariateSummaryStatistics_getStandardDeviation(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSum(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumLog(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_getSumSq(t_MultivariateSummaryStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_hashCode(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_toString(t_MultivariateSummaryStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(MultivariateSummaryStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__covariance(t_MultivariateSummaryStatistics *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__dimension(t_MultivariateSummaryStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__geometricMean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__max(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__mean(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__min(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__n(t_MultivariateSummaryStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MultivariateSummaryStatistics_get__standardDeviation(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sum(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumLog(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_MultivariateSummaryStatistics_get__sumSq(t_MultivariateSummaryStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFParser.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFParser::class$ = NULL;
        jmethodID *CPFParser::mids$ = NULL;
        bool CPFParser::live$ = false;

        jclass CPFParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_68896d89ab6fb140] = env->getMethodID(cls, "<init>", "(DILorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frames;)V");
            mids$[mid_parse_f7d59a031651200d] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CPF;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFParser::CPFParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        CPFParser::CPFParser(jdouble a0, jint a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frames & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68896d89ab6fb140, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::files::ilrs::CPF CPFParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CPF(env->callObjectMethod(this$, mids$[mid_parse_f7d59a031651200d], a0.this$));
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
        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg);

        static PyMethodDef t_CPFParser__methods_[] = {
          DECLARE_METHOD(t_CPFParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFParser)[] = {
          { Py_tp_methods, t_CPFParser__methods_ },
          { Py_tp_init, (void *) t_CPFParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFParser, t_CPFParser, CPFParser);

        void t_CPFParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFParser), &PY_TYPE_DEF(CPFParser), module, "CPFParser", 0);
        }

        void t_CPFParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "class_", make_descriptor(CPFParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "wrapfn_", make_descriptor(t_CPFParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFParser::initializeClass, 1)))
            return NULL;
          return t_CPFParser::wrap_Object(CPFParser(((t_CPFParser *) arg)->object.this$));
        }
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CPFParser object((jobject) NULL);

              INT_CALL(object = CPFParser());
              self->object = object;
              break;
            }
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::frames::Frames a4((jobject) NULL);
              CPFParser object((jobject) NULL);

              if (!parseArgs(args, "DIKkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
              {
                INT_CALL(object = CPFParser(a0, a1, a2, a3, a4));
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

        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CPF::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseRealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealVector::class$ = NULL;
      jmethodID *SparseRealVector::mids$ = NULL;
      bool SparseRealVector::live$ = false;

      jclass SparseRealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseRealVector::SparseRealVector() : ::org::hipparchus::linear::RealVector(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_SparseRealVector__methods_[] = {
        DECLARE_METHOD(t_SparseRealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealVector, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealVector)[] = {
        { Py_tp_methods, t_SparseRealVector__methods_ },
        { Py_tp_init, (void *) t_SparseRealVector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealVector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealVector),
        NULL
      };

      DEFINE_TYPE(SparseRealVector, t_SparseRealVector, SparseRealVector);

      void t_SparseRealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealVector), &PY_TYPE_DEF(SparseRealVector), module, "SparseRealVector", 0);
      }

      void t_SparseRealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "class_", make_descriptor(SparseRealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "wrapfn_", make_descriptor(t_SparseRealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealVector::initializeClass, 1)))
          return NULL;
        return t_SparseRealVector::wrap_Object(SparseRealVector(((t_SparseRealVector *) arg)->object.this$));
      }
      static PyObject *t_SparseRealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SparseRealVector_init_(t_SparseRealVector *self, PyObject *args, PyObject *kwds)
      {
        SparseRealVector object((jobject) NULL);

        INT_CALL(object = SparseRealVector());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonFieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPVCoordinatesProvider::PythonFieldPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldPVCoordinatesProvider::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *DiscreteTroposphericModel::class$ = NULL;
          jmethodID *DiscreteTroposphericModel::mids$ = NULL;
          bool DiscreteTroposphericModel::live$ = false;

          jclass DiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/DiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement DiscreteTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble DiscreteTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
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
        namespace troposphere {
          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args);

          static PyMethodDef t_DiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_DiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_DiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(DiscreteTroposphericModel, t_DiscreteTroposphericModel, DiscreteTroposphericModel);

          void t_DiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(DiscreteTroposphericModel), &PY_TYPE_DEF(DiscreteTroposphericModel), module, "DiscreteTroposphericModel", 0);
          }

          void t_DiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "class_", make_descriptor(DiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "wrapfn_", make_descriptor(t_DiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_DiscreteTroposphericModel::wrap_Object(DiscreteTroposphericModel(((t_DiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonics::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonics::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getUnnormalizedCnm_21b81d54c06b64b0] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_21b81d54c06b64b0] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonics::PythonUnnormalizedSphericalHarmonics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonUnnormalizedSphericalHarmonics::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonUnnormalizedSphericalHarmonics::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonUnnormalizedSphericalHarmonics::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonics__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonics, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonics_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonics__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonics, t_PythonUnnormalizedSphericalHarmonics, PythonUnnormalizedSphericalHarmonics);

          void t_PythonUnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonics), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonics), module, "PythonUnnormalizedSphericalHarmonics", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonics::initializeClass);
            JNINativeMethod methods[] = {
              { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonics_getDate0 },
              { "getUnnormalizedCnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1 },
              { "getUnnormalizedSnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonics::wrap_Object(PythonUnnormalizedSphericalHarmonics(((t_PythonUnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonics object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonics());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args)
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getDate", result);
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedCnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedCnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedSnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedSnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data)
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
#include "org/hipparchus/linear/RealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector::class$ = NULL;
      jmethodID *RealVector::mids$ = NULL;
      bool RealVector::live$ = false;

      jclass RealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_342d5b01463e0dc5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_addToEntry_89aad365fb0ed8da] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_342d5b01463e0dc5] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_6041102868c92dbb] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_28c30ed7b7c18204] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combineToSelf_28c30ed7b7c18204] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_copy_75d50d73180655b4] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_cosine_4062041acf71098b] = env->getMethodID(cls, "cosine", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_dotProduct_4062041acf71098b] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_342d5b01463e0dc5] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_ebeMultiply_342d5b01463e0dc5] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_4062041acf71098b] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_69cfb132c661aca4] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_4062041acf71098b] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_557b8123390d8d0c] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_4062041acf71098b] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_557b8123390d8d0c] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getMaxIndex_412668abc8d889e9] = env->getMethodID(cls, "getMaxIndex", "()I");
          mids$[mid_getMaxValue_557b8123390d8d0c] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinIndex_412668abc8d889e9] = env->getMethodID(cls, "getMinIndex", "()I");
          mids$[mid_getMinValue_557b8123390d8d0c] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_7d0bb0711f91d9f7] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
          mids$[mid_map_946b867097db175f] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAdd_6041102868c92dbb] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAddToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivide_6041102868c92dbb] = env->getMethodID(cls, "mapDivide", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiply_6041102868c92dbb] = env->getMethodID(cls, "mapMultiply", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtract_6041102868c92dbb] = env->getMethodID(cls, "mapSubtract", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_6041102868c92dbb] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_946b867097db175f] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_outerProduct_62980eaee0411593] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_projection_342d5b01463e0dc5] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_set_10f281d777284cea] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_89aad365fb0ed8da] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_a967cf1fffd0038f] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_834a3801c426326d] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_342d5b01463e0dc5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_a53a7513ecedada2] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_75d50d73180655b4] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unitize_0640e6acf969ed28] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_unmodifiableRealVector_342d5b01463e0dc5] = env->getStaticMethodID(cls, "unmodifiableRealVector", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_walkInDefaultOrder_06815b04d05d6656] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5142e2b49b502547] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5eb221680d1ddecd] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_a3edcb203ea44030] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_06815b04d05d6656] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5142e2b49b502547] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5eb221680d1ddecd] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_a3edcb203ea44030] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkIndices_a84c9a223722150c] = env->getMethodID(cls, "checkIndices", "(II)V");
          mids$[mid_checkVectorDimensions_87d15d6564ad754f] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkVectorDimensions_a3da1a935cb37f7b] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "checkIndex", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector::RealVector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      RealVector RealVector::add(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_add_342d5b01463e0dc5], a0.this$));
      }

      void RealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_89aad365fb0ed8da], a0, a1);
      }

      RealVector RealVector::append(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_342d5b01463e0dc5], a0.this$));
      }

      RealVector RealVector::append(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_6041102868c92dbb], a0));
      }

      RealVector RealVector::combine(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combine_28c30ed7b7c18204], a0, a1, a2.this$));
      }

      RealVector RealVector::combineToSelf(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_28c30ed7b7c18204], a0, a1, a2.this$));
      }

      RealVector RealVector::copy() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_copy_75d50d73180655b4]));
      }

      jdouble RealVector::cosine(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosine_4062041acf71098b], a0.this$);
      }

      jdouble RealVector::dotProduct(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_4062041acf71098b], a0.this$);
      }

      RealVector RealVector::ebeDivide(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_342d5b01463e0dc5], a0.this$));
      }

      RealVector RealVector::ebeMultiply(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_342d5b01463e0dc5], a0.this$));
      }

      jboolean RealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jint RealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      jdouble RealVector::getDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_4062041acf71098b], a0.this$);
      }

      jdouble RealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_69cfb132c661aca4], a0);
      }

      jdouble RealVector::getL1Distance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_4062041acf71098b], a0.this$);
      }

      jdouble RealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_557b8123390d8d0c]);
      }

      jdouble RealVector::getLInfDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_4062041acf71098b], a0.this$);
      }

      jdouble RealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_557b8123390d8d0c]);
      }

      jint RealVector::getMaxIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIndex_412668abc8d889e9]);
      }

      jdouble RealVector::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_557b8123390d8d0c]);
      }

      jint RealVector::getMinIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinIndex_412668abc8d889e9]);
      }

      jdouble RealVector::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_557b8123390d8d0c]);
      }

      jdouble RealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
      }

      RealVector RealVector::getSubVector(jint a0, jint a1) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_7d0bb0711f91d9f7], a0, a1));
      }

      jint RealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean RealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      jboolean RealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
      }

      ::java::util::Iterator RealVector::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
      }

      RealVector RealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_map_946b867097db175f], a0.this$));
      }

      RealVector RealVector::mapAdd(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapAddToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapDivide(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivide_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapDivideToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapMultiply(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapSubtract(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapSubtractToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_6041102868c92dbb], a0));
      }

      RealVector RealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_946b867097db175f], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealVector::outerProduct(const RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_62980eaee0411593], a0.this$));
      }

      RealVector RealVector::projection(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_projection_342d5b01463e0dc5], a0.this$));
      }

      void RealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_10f281d777284cea], a0);
      }

      void RealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_89aad365fb0ed8da], a0, a1);
      }

      void RealVector::setSubVector(jint a0, const RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_a967cf1fffd0038f], a0, a1.this$);
      }

      ::java::util::Iterator RealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_834a3801c426326d]));
      }

      RealVector RealVector::subtract(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_subtract_342d5b01463e0dc5], a0.this$));
      }

      JArray< jdouble > RealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_a53a7513ecedada2]));
      }

      RealVector RealVector::unitVector() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_unitVector_75d50d73180655b4]));
      }

      void RealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_0640e6acf969ed28]);
      }

      RealVector RealVector::unmodifiableRealVector(const RealVector & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVector(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableRealVector_342d5b01463e0dc5], a0.this$));
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_06815b04d05d6656], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5142e2b49b502547], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5eb221680d1ddecd], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_a3edcb203ea44030], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_06815b04d05d6656], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5142e2b49b502547], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5eb221680d1ddecd], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_a3edcb203ea44030], a0.this$, a1, a2);
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
      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_copy(t_RealVector *self);
      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_getDimension(t_RealVector *self);
      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Norm(t_RealVector *self);
      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self);
      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMaxValue(t_RealVector *self);
      static PyObject *t_RealVector_getMinIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMinValue(t_RealVector *self);
      static PyObject *t_RealVector_getNorm(t_RealVector *self);
      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_isInfinite(t_RealVector *self);
      static PyObject *t_RealVector_isNaN(t_RealVector *self);
      static PyObject *t_RealVector_iterator(t_RealVector *self);
      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_sparseIterator(t_RealVector *self);
      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_toArray(t_RealVector *self);
      static PyObject *t_RealVector_unitVector(t_RealVector *self);
      static PyObject *t_RealVector_unitize(t_RealVector *self);
      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data);
      static PyGetSetDef t_RealVector__fields_[] = {
        DECLARE_GET_FIELD(t_RealVector, dimension),
        DECLARE_GET_FIELD(t_RealVector, infinite),
        DECLARE_GET_FIELD(t_RealVector, l1Norm),
        DECLARE_GET_FIELD(t_RealVector, lInfNorm),
        DECLARE_GET_FIELD(t_RealVector, maxIndex),
        DECLARE_GET_FIELD(t_RealVector, maxValue),
        DECLARE_GET_FIELD(t_RealVector, minIndex),
        DECLARE_GET_FIELD(t_RealVector, minValue),
        DECLARE_GET_FIELD(t_RealVector, naN),
        DECLARE_GET_FIELD(t_RealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector__methods_[] = {
        DECLARE_METHOD(t_RealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, add, METH_O),
        DECLARE_METHOD(t_RealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, cosine, METH_O),
        DECLARE_METHOD(t_RealVector, dotProduct, METH_O),
        DECLARE_METHOD(t_RealVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_RealVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getEntry, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Distance, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Norm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getLInfDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getLInfNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, iterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, map, METH_O),
        DECLARE_METHOD(t_RealVector, mapAdd, METH_O),
        DECLARE_METHOD(t_RealVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivide, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, outerProduct, METH_O),
        DECLARE_METHOD(t_RealVector, projection, METH_O),
        DECLARE_METHOD(t_RealVector, set, METH_O),
        DECLARE_METHOD(t_RealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, sparseIterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, subtract, METH_O),
        DECLARE_METHOD(t_RealVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitVector, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitize, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unmodifiableRealVector, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector)[] = {
        { Py_tp_methods, t_RealVector__methods_ },
        { Py_tp_init, (void *) t_RealVector_init_ },
        { Py_tp_getset, t_RealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector, t_RealVector, RealVector);

      void t_RealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector), &PY_TYPE_DEF(RealVector), module, "RealVector", 0);
      }

      void t_RealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "class_", make_descriptor(RealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "wrapfn_", make_descriptor(t_RealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector::initializeClass, 1)))
          return NULL;
        return t_RealVector::wrap_Object(RealVector(((t_RealVector *) arg)->object.this$));
      }
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds)
      {
        RealVector object((jobject) NULL);

        INT_CALL(object = RealVector());
        self->object = object;

        return 0;
      }

      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            RealVector a0((jobject) NULL);
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combine", args);
        return NULL;
      }

      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combineToSelf", args);
        return NULL;
      }

      static PyObject *t_RealVector_copy(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.cosine(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cosine", arg);
        return NULL;
      }

      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_RealVector_getDimension(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL1Distance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Norm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL1Norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLInfDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMaxValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMinIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMinValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_RealVector_isInfinite(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_isNaN(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_iterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_sparseIterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.sparseIterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_toArray(t_RealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }

      static PyObject *t_RealVector_unitVector(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.unitVector());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_unitize(t_RealVector *self)
      {
        OBJ_CALL(self->object.unitize());
        Py_RETURN_NONE;
      }

      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::RealVector::unmodifiableRealVector(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unmodifiableRealVector", arg);
        return NULL;
      }

      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCenter_c642bce266d6d89a] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getHasCreatableBody_89b302893bdbe1f1] = env->getMethodID(cls, "getHasCreatableBody", "()Z");
                mids$[mid_getLaunchNumber_412668abc8d889e9] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_3cffd47377eca18a] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_412668abc8d889e9] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_3cffd47377eca18a] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getObjectName_3cffd47377eca18a] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setCenter_e6f755c267d91c26] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setObjectID_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_f5ffdf29129ef90a] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmMetadata::AdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::org::orekit::files::ccsds::definitions::BodyFacade AdmMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_c642bce266d6d89a]));
            }

            jboolean AdmMetadata::getHasCreatableBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getHasCreatableBody_89b302893bdbe1f1]);
            }

            jint AdmMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_412668abc8d889e9]);
            }

            ::java::lang::String AdmMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_3cffd47377eca18a]));
            }

            jint AdmMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_412668abc8d889e9]);
            }

            ::java::lang::String AdmMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_3cffd47377eca18a]));
            }

            ::java::lang::String AdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_3cffd47377eca18a]));
            }

            void AdmMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_e6f755c267d91c26], a0.this$);
            }

            void AdmMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_f5ffdf29129ef90a], a0.this$);
            }

            void AdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_f5ffdf29129ef90a], a0.this$);
            }

            void AdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
#include "org/orekit/data/DataContext.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataContext::class$ = NULL;
      jmethodID *DataContext::mids$ = NULL;
      bool DataContext::live$ = false;

      jclass DataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCelestialBodies_a9d31e254defc040] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getDefault_df499ec1a8491644] = env->getStaticMethodID(cls, "getDefault", "()Lorg/orekit/data/LazyLoadedDataContext;");
          mids$[mid_getFrames_efd6f6d0fc89f7ce] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_ac4b7520cc429937] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_d0ea355ca6d68d00] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_ac9ef17f951ae11a] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_setDefault_e1b39bbe28030bc1] = env->getStaticMethodID(cls, "setDefault", "(Lorg/orekit/data/LazyLoadedDataContext;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBodies DataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_a9d31e254defc040]));
      }

      ::org::orekit::data::LazyLoadedDataContext DataContext::getDefault()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::data::LazyLoadedDataContext(env->callStaticObjectMethod(cls, mids$[mid_getDefault_df499ec1a8491644]));
      }

      ::org::orekit::frames::Frames DataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_efd6f6d0fc89f7ce]));
      }

      ::org::orekit::models::earth::GeoMagneticFields DataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_ac4b7520cc429937]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields DataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_d0ea355ca6d68d00]));
      }

      ::org::orekit::time::TimeScales DataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_ac9ef17f951ae11a]));
      }

      void DataContext::setDefault(const ::org::orekit::data::LazyLoadedDataContext & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setDefault_e1b39bbe28030bc1], a0.this$);
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
      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self);
      static PyObject *t_DataContext_getDefault(PyTypeObject *type);
      static PyObject *t_DataContext_getFrames(t_DataContext *self);
      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self);
      static PyObject *t_DataContext_getGravityFields(t_DataContext *self);
      static PyObject *t_DataContext_getTimeScales(t_DataContext *self);
      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data);
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data);
      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data);
      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data);
      static PyGetSetDef t_DataContext__fields_[] = {
        DECLARE_GET_FIELD(t_DataContext, celestialBodies),
        DECLARE_GETSET_FIELD(t_DataContext, default),
        DECLARE_GET_FIELD(t_DataContext, frames),
        DECLARE_GET_FIELD(t_DataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_DataContext, gravityFields),
        DECLARE_GET_FIELD(t_DataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataContext__methods_[] = {
        DECLARE_METHOD(t_DataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getDefault, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_DataContext, setDefault, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataContext)[] = {
        { Py_tp_methods, t_DataContext__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataContext, t_DataContext, DataContext);

      void t_DataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(DataContext), &PY_TYPE_DEF(DataContext), module, "DataContext", 0);
      }

      void t_DataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "class_", make_descriptor(DataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "wrapfn_", make_descriptor(t_DataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataContext::initializeClass, 1)))
          return NULL;
        return t_DataContext::wrap_Object(DataContext(((t_DataContext *) arg)->object.this$));
      }
      static PyObject *t_DataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataContext_getCelestialBodies(t_DataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_DataContext_getDefault(PyTypeObject *type)
      {
        ::org::orekit::data::LazyLoadedDataContext result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::DataContext::getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(result);
      }

      static PyObject *t_DataContext_getFrames(t_DataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGeoMagneticFields(t_DataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getGravityFields(t_DataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_DataContext_getTimeScales(t_DataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_DataContext_setDefault(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::data::LazyLoadedDataContext a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::data::DataContext::setDefault(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setDefault", arg);
        return NULL;
      }

      static PyObject *t_DataContext_get__celestialBodies(t_DataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__default(t_DataContext *self, void *data)
      {
        ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefault());
        return ::org::orekit::data::t_LazyLoadedDataContext::wrap_Object(value);
      }
      static int t_DataContext_set__default(t_DataContext *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::data::LazyLoadedDataContext value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::data::LazyLoadedDataContext::initializeClass, &value))
          {
            INT_CALL(self->object.setDefault(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "default", arg);
        return -1;
      }

      static PyObject *t_DataContext_get__frames(t_DataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__geoMagneticFields(t_DataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__gravityFields(t_DataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_DataContext_get__timeScales(t_DataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CasterRecord::class$ = NULL;
          jmethodID *CasterRecord::mids$ = NULL;
          bool CasterRecord::live$ = false;

          jclass CasterRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CasterRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canReceiveNMEA_89b302893bdbe1f1] = env->getMethodID(cls, "canReceiveNMEA", "()Z");
              mids$[mid_getCountry_3cffd47377eca18a] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFallbackHostOrIPAddress_3cffd47377eca18a] = env->getMethodID(cls, "getFallbackHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getFallbackPort_412668abc8d889e9] = env->getMethodID(cls, "getFallbackPort", "()I");
              mids$[mid_getHostOrIPAddress_3cffd47377eca18a] = env->getMethodID(cls, "getHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getOperator_3cffd47377eca18a] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getPort_412668abc8d889e9] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getRecordType_2923d5139aa846c0] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_3cffd47377eca18a] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CasterRecord::CasterRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          jboolean CasterRecord::canReceiveNMEA() const
          {
            return env->callBooleanMethod(this$, mids$[mid_canReceiveNMEA_89b302893bdbe1f1]);
          }

          ::java::lang::String CasterRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_3cffd47377eca18a]));
          }

          ::java::lang::String CasterRecord::getFallbackHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFallbackHostOrIPAddress_3cffd47377eca18a]));
          }

          jint CasterRecord::getFallbackPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getFallbackPort_412668abc8d889e9]);
          }

          ::java::lang::String CasterRecord::getHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHostOrIPAddress_3cffd47377eca18a]));
          }

          jdouble CasterRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_557b8123390d8d0c]);
          }

          jdouble CasterRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_557b8123390d8d0c]);
          }

          ::java::lang::String CasterRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_3cffd47377eca18a]));
          }

          jint CasterRecord::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_412668abc8d889e9]);
          }

          ::org::orekit::gnss::metric::ntrip::RecordType CasterRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_2923d5139aa846c0]));
          }

          ::java::lang::String CasterRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_3cffd47377eca18a]));
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
          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args);
          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self);
          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data);
          static PyGetSetDef t_CasterRecord__fields_[] = {
            DECLARE_GET_FIELD(t_CasterRecord, country),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackHostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackPort),
            DECLARE_GET_FIELD(t_CasterRecord, hostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, latitude),
            DECLARE_GET_FIELD(t_CasterRecord, longitude),
            DECLARE_GET_FIELD(t_CasterRecord, operator),
            DECLARE_GET_FIELD(t_CasterRecord, port),
            DECLARE_GET_FIELD(t_CasterRecord, recordType),
            DECLARE_GET_FIELD(t_CasterRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CasterRecord__methods_[] = {
            DECLARE_METHOD(t_CasterRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, canReceiveNMEA, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_CasterRecord, getSourceIdentifier, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CasterRecord)[] = {
            { Py_tp_methods, t_CasterRecord__methods_ },
            { Py_tp_init, (void *) t_CasterRecord_init_ },
            { Py_tp_getset, t_CasterRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CasterRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(CasterRecord, t_CasterRecord, CasterRecord);

          void t_CasterRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(CasterRecord), &PY_TYPE_DEF(CasterRecord), module, "CasterRecord", 0);
          }

          void t_CasterRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "class_", make_descriptor(CasterRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "wrapfn_", make_descriptor(t_CasterRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CasterRecord::initializeClass, 1)))
              return NULL;
            return t_CasterRecord::wrap_Object(CasterRecord(((t_CasterRecord *) arg)->object.this$));
          }
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CasterRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            CasterRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = CasterRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.canReceiveNMEA());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFallbackHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFallbackPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(CasterRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFallbackHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFallbackPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing$CrossingResult::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing$CrossingResult::mids$ = NULL;
        bool SensorMeanPlaneCrossing$CrossingResult::live$ = false;

        jclass SensorMeanPlaneCrossing$CrossingResult::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5ee75d1abe7eae30] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_557b8123390d8d0c] = env->getMethodID(cls, "getLine", "()D");
            mids$[mid_getTarget_f88961cca75a2c0a] = env->getMethodID(cls, "getTarget", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirection_f88961cca75a2c0a] = env->getMethodID(cls, "getTargetDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirectionDerivative_f88961cca75a2c0a] = env->getMethodID(cls, "getTargetDirectionDerivative", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing$CrossingResult::SensorMeanPlaneCrossing$CrossingResult(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ee75d1abe7eae30, a0.this$, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate SensorMeanPlaneCrossing$CrossingResult::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jdouble SensorMeanPlaneCrossing$CrossingResult::getLine() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTarget() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTarget_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirection_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirectionDerivative() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirectionDerivative_f88961cca75a2c0a]));
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
      namespace linesensor {
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing$CrossingResult__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, date),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, line),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, target),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirection),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirectionDerivative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing$CrossingResult__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTarget, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirection, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirectionDerivative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing$CrossingResult)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing$CrossingResult__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing$CrossingResult_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing$CrossingResult__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing$CrossingResult)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing$CrossingResult, t_SensorMeanPlaneCrossing$CrossingResult, SensorMeanPlaneCrossing$CrossingResult);

        void t_SensorMeanPlaneCrossing$CrossingResult::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), &PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult), module, "SensorMeanPlaneCrossing$CrossingResult", 0);
        }

        void t_SensorMeanPlaneCrossing$CrossingResult::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "class_", make_descriptor(SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing$CrossingResult::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(SensorMeanPlaneCrossing$CrossingResult(((t_SensorMeanPlaneCrossing$CrossingResult *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          SensorMeanPlaneCrossing$CrossingResult object((jobject) NULL);

          if (!parseArgs(args, "kDkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorMeanPlaneCrossing$CrossingResult(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLine());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLine());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FieldDelaunayArguments.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldDelaunayArguments::class$ = NULL;
      jmethodID *FieldDelaunayArguments::mids$ = NULL;
      bool FieldDelaunayArguments::live$ = false;

      jclass FieldDelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldDelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_aa952c80edca6122] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getD_613c8f46c659f636] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDDot_613c8f46c659f636] = env->getMethodID(cls, "getDDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getF_613c8f46c659f636] = env->getMethodID(cls, "getF", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFDot_613c8f46c659f636] = env->getMethodID(cls, "getFDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGamma_613c8f46c659f636] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGammaDot_613c8f46c659f636] = env->getMethodID(cls, "getGammaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_613c8f46c659f636] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_613c8f46c659f636] = env->getMethodID(cls, "getLDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrime_613c8f46c659f636] = env->getMethodID(cls, "getLPrime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrimeDot_613c8f46c659f636] = env->getMethodID(cls, "getLPrimeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmega_613c8f46c659f636] = env->getMethodID(cls, "getOmega", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmegaDot_613c8f46c659f636] = env->getMethodID(cls, "getOmegaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTC_613c8f46c659f636] = env->getMethodID(cls, "getTC", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDelaunayArguments::FieldDelaunayArguments(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa952c80edca6122, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getD() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getD_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getDDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDDot_613c8f46c659f636]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldDelaunayArguments::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getF() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getF_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getFDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGamma() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGammaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGammaDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getL() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrime_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrimeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrimeDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmega() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmega_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmegaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmegaDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getTC() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTC_613c8f46c659f636]));
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
      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args);
      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data);
      static PyGetSetDef t_FieldDelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, d),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, date),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, f),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, l),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omega),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, tC),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_FieldDelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDelaunayArguments)[] = {
        { Py_tp_methods, t_FieldDelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_FieldDelaunayArguments_init_ },
        { Py_tp_getset, t_FieldDelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDelaunayArguments, t_FieldDelaunayArguments, FieldDelaunayArguments);
      PyObject *t_FieldDelaunayArguments::wrap_Object(const FieldDelaunayArguments& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDelaunayArguments::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDelaunayArguments), &PY_TYPE_DEF(FieldDelaunayArguments), module, "FieldDelaunayArguments", 0);
      }

      void t_FieldDelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "class_", make_descriptor(FieldDelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "wrapfn_", make_descriptor(t_FieldDelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_FieldDelaunayArguments::wrap_Object(FieldDelaunayArguments(((t_FieldDelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
        PyTypeObject **p5;
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        FieldDelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldDelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getF());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGamma());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGammaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrimeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmega());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmegaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTC());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getF());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGamma());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGammaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrimeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmega());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmegaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTC());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *RateElementsType::class$ = NULL;
              jmethodID *RateElementsType::mids$ = NULL;
              bool RateElementsType::live$ = false;
              RateElementsType *RateElementsType::ANGVEL = NULL;
              RateElementsType *RateElementsType::EULER_RATE = NULL;
              RateElementsType *RateElementsType::GYRO_BIAS = NULL;
              RateElementsType *RateElementsType::NONE = NULL;
              RateElementsType *RateElementsType::Q_DOT = NULL;

              jclass RateElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/RateElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_0d9551367f7ecdef] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toAngular_24924b5a8161a5b1] = env->getMethodID(cls, "toAngular", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/Rotation;I[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                  mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_92dcbaba224660a5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_values_287077f2dfc0de9a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL = new RateElementsType(env->getStaticObjectField(cls, "ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  EULER_RATE = new RateElementsType(env->getStaticObjectField(cls, "EULER_RATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  GYRO_BIAS = new RateElementsType(env->getStaticObjectField(cls, "GYRO_BIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  NONE = new RateElementsType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  Q_DOT = new RateElementsType(env->getStaticObjectField(cls, "Q_DOT", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List RateElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_0d9551367f7ecdef]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates RateElementsType::toAngular(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, jint a3, const JArray< jdouble > & a4) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_24924b5a8161a5b1], a0.this$, a1.this$, a2.this$, a3, a4.this$));
              }

              ::java::lang::String RateElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
              }

              RateElementsType RateElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return RateElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_92dcbaba224660a5], a0.this$));
              }

              JArray< RateElementsType > RateElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< RateElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_287077f2dfc0de9a]));
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
              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self);
              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_RateElementsType_values(PyTypeObject *type);
              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data);
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data);
              static PyGetSetDef t_RateElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_RateElementsType, units),
                DECLARE_GET_FIELD(t_RateElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RateElementsType__methods_[] = {
                DECLARE_METHOD(t_RateElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_RateElementsType, toAngular, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RateElementsType)[] = {
                { Py_tp_methods, t_RateElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_RateElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RateElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(RateElementsType, t_RateElementsType, RateElementsType);
              PyObject *t_RateElementsType::wrap_Object(const RateElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RateElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RateElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(RateElementsType), &PY_TYPE_DEF(RateElementsType), module, "RateElementsType", 0);
              }

              void t_RateElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "class_", make_descriptor(RateElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "wrapfn_", make_descriptor(t_RateElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(RateElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "ANGVEL", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "EULER_RATE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::EULER_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "GYRO_BIAS", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::GYRO_BIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "NONE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::NONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "Q_DOT", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::Q_DOT)));
              }

              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RateElementsType::initializeClass, 1)))
                  return NULL;
                return t_RateElementsType::wrap_Object(RateElementsType(((t_RateElementsType *) arg)->object.this$));
              }
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RateElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
                jint a3;
                JArray< jdouble > a4((jobject) NULL);
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kKkI[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.toAngular(a0, a1, a2, a3, a4));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", args);
                return NULL;
              }

              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(RateElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                RateElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::valueOf(a0));
                  return t_RateElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_RateElementsType_values(PyTypeObject *type)
              {
                JArray< RateElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_RateElementsType::wrap_jobject);
              }
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/bodies/CelestialBodyFactory.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyFactory::class$ = NULL;
      jmethodID *CelestialBodyFactory::mids$ = NULL;
      bool CelestialBodyFactory::live$ = false;
      ::java::lang::String *CelestialBodyFactory::EARTH = NULL;
      ::java::lang::String *CelestialBodyFactory::EARTH_MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::JUPITER = NULL;
      ::java::lang::String *CelestialBodyFactory::MARS = NULL;
      ::java::lang::String *CelestialBodyFactory::MERCURY = NULL;
      ::java::lang::String *CelestialBodyFactory::MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::NEPTUNE = NULL;
      ::java::lang::String *CelestialBodyFactory::PLUTO = NULL;
      ::java::lang::String *CelestialBodyFactory::SATURN = NULL;
      ::java::lang::String *CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER = NULL;
      ::java::lang::String *CelestialBodyFactory::SUN = NULL;
      ::java::lang::String *CelestialBodyFactory::URANUS = NULL;
      ::java::lang::String *CelestialBodyFactory::VENUS = NULL;

      jclass CelestialBodyFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addCelestialBodyLoader_5b4f658199a12bc3] = env->getStaticMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_f5ffdf29129ef90a] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_630071dd94c59169] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_0640e6acf969ed28] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_f5ffdf29129ef90a] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_f5ffdf29129ef90a] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_47d89fc2b3d16fd5] = env->getStaticMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getCelestialBodies_2192d5132b3243a4] = env->getStaticMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getEarth_40e74583267ad550] = env->getStaticMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_40e74583267ad550] = env->getStaticMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_40e74583267ad550] = env->getStaticMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_40e74583267ad550] = env->getStaticMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_40e74583267ad550] = env->getStaticMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_40e74583267ad550] = env->getStaticMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_40e74583267ad550] = env->getStaticMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_40e74583267ad550] = env->getStaticMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_40e74583267ad550] = env->getStaticMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_40e74583267ad550] = env->getStaticMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_40e74583267ad550] = env->getStaticMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_40e74583267ad550] = env->getStaticMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_40e74583267ad550] = env->getStaticMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH", "Ljava/lang/String;"));
          EARTH_MOON = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH_MOON", "Ljava/lang/String;"));
          JUPITER = new ::java::lang::String(env->getStaticObjectField(cls, "JUPITER", "Ljava/lang/String;"));
          MARS = new ::java::lang::String(env->getStaticObjectField(cls, "MARS", "Ljava/lang/String;"));
          MERCURY = new ::java::lang::String(env->getStaticObjectField(cls, "MERCURY", "Ljava/lang/String;"));
          MOON = new ::java::lang::String(env->getStaticObjectField(cls, "MOON", "Ljava/lang/String;"));
          NEPTUNE = new ::java::lang::String(env->getStaticObjectField(cls, "NEPTUNE", "Ljava/lang/String;"));
          PLUTO = new ::java::lang::String(env->getStaticObjectField(cls, "PLUTO", "Ljava/lang/String;"));
          SATURN = new ::java::lang::String(env->getStaticObjectField(cls, "SATURN", "Ljava/lang/String;"));
          SOLAR_SYSTEM_BARYCENTER = new ::java::lang::String(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Ljava/lang/String;"));
          SUN = new ::java::lang::String(env->getStaticObjectField(cls, "SUN", "Ljava/lang/String;"));
          URANUS = new ::java::lang::String(env->getStaticObjectField(cls, "URANUS", "Ljava/lang/String;"));
          VENUS = new ::java::lang::String(env->getStaticObjectField(cls, "VENUS", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void CelestialBodyFactory::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addCelestialBodyLoader_5b4f658199a12bc3], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_f5ffdf29129ef90a], a0.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_630071dd94c59169], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyCache()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_0640e6acf969ed28]);
      }

      void CelestialBodyFactory::clearCelestialBodyCache(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_f5ffdf29129ef90a], a0.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_0640e6acf969ed28]);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_f5ffdf29129ef90a], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getBody(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getBody_47d89fc2b3d16fd5], a0.this$));
      }

      ::org::orekit::bodies::LazyLoadedCelestialBodies CelestialBodyFactory::getCelestialBodies()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callStaticObjectMethod(cls, mids$[mid_getCelestialBodies_2192d5132b3243a4]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarth()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarth_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarthMoonBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonBarycenter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getJupiter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getJupiter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMars()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMars_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMercury()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMercury_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMoon()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMoon_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getNeptune()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getNeptune_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getPluto()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getPluto_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSaturn()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSaturn_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSolarSystemBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSolarSystemBarycenter_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSun()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSun_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getUranus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getUranus_40e74583267ad550]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getVenus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getVenus_40e74583267ad550]));
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
      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data);
      static PyGetSetDef t_CelestialBodyFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodyFactory, celestialBodies),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earth),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mars),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mercury),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, moon),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, neptune),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, pluto),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, saturn),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, sun),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, uranus),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodyFactory__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addDefaultCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyCache, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getBody, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getCelestialBodies, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarth, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarthMoonBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getJupiter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMars, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMercury, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMoon, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getNeptune, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getPluto, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSaturn, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSolarSystemBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSun, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getUranus, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getVenus, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFactory)[] = {
        { Py_tp_methods, t_CelestialBodyFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodyFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyFactory, t_CelestialBodyFactory, CelestialBodyFactory);

      void t_CelestialBodyFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyFactory), &PY_TYPE_DEF(CelestialBodyFactory), module, "CelestialBodyFactory", 0);
      }

      void t_CelestialBodyFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "class_", make_descriptor(CelestialBodyFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "wrapfn_", make_descriptor(t_CelestialBodyFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(CelestialBodyFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH", make_descriptor(j2p(*CelestialBodyFactory::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH_MOON", make_descriptor(j2p(*CelestialBodyFactory::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "JUPITER", make_descriptor(j2p(*CelestialBodyFactory::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MARS", make_descriptor(j2p(*CelestialBodyFactory::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MERCURY", make_descriptor(j2p(*CelestialBodyFactory::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MOON", make_descriptor(j2p(*CelestialBodyFactory::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "NEPTUNE", make_descriptor(j2p(*CelestialBodyFactory::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "PLUTO", make_descriptor(j2p(*CelestialBodyFactory::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SATURN", make_descriptor(j2p(*CelestialBodyFactory::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(j2p(*CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SUN", make_descriptor(j2p(*CelestialBodyFactory::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "URANUS", make_descriptor(j2p(*CelestialBodyFactory::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "VENUS", make_descriptor(j2p(*CelestialBodyFactory::VENUS)));
      }

      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyFactory::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyFactory::wrap_Object(CelestialBodyFactory(((t_CelestialBodyFactory *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/SequentialBatchLSEstimator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *SequentialBatchLSEstimator::class$ = NULL;
        jmethodID *SequentialBatchLSEstimator::mids$ = NULL;
        bool SequentialBatchLSEstimator::live$ = false;

        jclass SequentialBatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/SequentialBatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fb72d5a0f261f0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SequentialBatchLSEstimator::SequentialBatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::org::orekit::estimation::leastsquares::BatchLSEstimator(env->newObject(initializeClass, &mids$, mid_init$_8fb72d5a0f261f0c, a0.this$, a1.this$)) {}
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
        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SequentialBatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_SequentialBatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SequentialBatchLSEstimator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SequentialBatchLSEstimator)[] = {
          { Py_tp_methods, t_SequentialBatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_SequentialBatchLSEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SequentialBatchLSEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::BatchLSEstimator),
          NULL
        };

        DEFINE_TYPE(SequentialBatchLSEstimator, t_SequentialBatchLSEstimator, SequentialBatchLSEstimator);

        void t_SequentialBatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SequentialBatchLSEstimator), &PY_TYPE_DEF(SequentialBatchLSEstimator), module, "SequentialBatchLSEstimator", 0);
        }

        void t_SequentialBatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "class_", make_descriptor(SequentialBatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "wrapfn_", make_descriptor(t_SequentialBatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SequentialBatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_SequentialBatchLSEstimator::wrap_Object(SequentialBatchLSEstimator(((t_SequentialBatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SequentialBatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          SequentialBatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SequentialBatchLSEstimator(a0, a1));
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

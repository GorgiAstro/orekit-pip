#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2Field::mids$ = NULL;
        bool FieldUnivariateDerivative2Field::live$ = false;

        jclass FieldUnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_aee8d6ce5ed6f574] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative2Field_266461907de0091e] = env->getStaticMethodID(cls, "getUnivariateDerivative2Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getZero_aee8d6ce5ed6f574] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_aee8d6ce5ed6f574]));
        }

        ::java::lang::Class FieldUnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        FieldUnivariateDerivative2Field FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative2Field_266461907de0091e], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_aee8d6ce5ed6f574]));
        }

        jint FieldUnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getUnivariateDerivative2Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2Field, t_FieldUnivariateDerivative2Field, FieldUnivariateDerivative2Field);
        PyObject *t_FieldUnivariateDerivative2Field::wrap_Object(const FieldUnivariateDerivative2Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2Field), &PY_TYPE_DEF(FieldUnivariateDerivative2Field), module, "FieldUnivariateDerivative2Field", 0);
        }

        void t_FieldUnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "class_", make_descriptor(FieldUnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2Field::wrap_Object(FieldUnivariateDerivative2Field(((t_FieldUnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(a0));
            return t_FieldUnivariateDerivative2Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative2Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractAlfriend1999::class$ = NULL;
              jmethodID *AbstractAlfriend1999::mids$ = NULL;
              bool AbstractAlfriend1999::live$ = false;

              jclass AbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractAlfriend1999::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddf22cd33bfe153c], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractAlfriend1999::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8d09da96ce925a0b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args);

              static PyMethodDef t_AbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_AbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractAlfriend1999)[] = {
                { Py_tp_methods, t_AbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractAlfriend1999, t_AbstractAlfriend1999, AbstractAlfriend1999);

              void t_AbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractAlfriend1999), &PY_TYPE_DEF(AbstractAlfriend1999), module, "AbstractAlfriend1999", 0);
              }

              void t_AbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "class_", make_descriptor(AbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "wrapfn_", make_descriptor(t_AbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_AbstractAlfriend1999::wrap_Object(AbstractAlfriend1999(((t_AbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractAlfriend1999), (PyObject *) self, "compute", args, 2);
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeTroposphericDelayModifier::live$ = false;

          jclass BaseRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorTroposphericModel_17bae2e3aa9bc870] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeErrorTroposphericModel_81f653af97ea34a8] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_f33f77393a996753] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jdouble BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeErrorTroposphericModel_17bae2e3aa9bc870], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeErrorTroposphericModel_81f653af97ea34a8], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, rangeErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeTroposphericDelayModifier, t_BaseRangeTroposphericDelayModifier, BaseRangeTroposphericDelayModifier);

          void t_BaseRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeTroposphericDelayModifier), module, "BaseRangeTroposphericDelayModifier", 0);
          }

          void t_BaseRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "class_", make_descriptor(BaseRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeTroposphericDelayModifier::wrap_Object(BaseRangeTroposphericDelayModifier(((t_BaseRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1));
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
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Exception.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken::class$ = NULL;
            jmethodID *ParseToken::mids$ = NULL;
            bool ParseToken::live$ = false;

            jclass ParseToken::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_717f867ead0d2032] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/lexical/TokenType;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;ILjava/lang/String;)V");
                mids$[mid_generateException_1f30b03cfe55d2b4] = env->getMethodID(cls, "generateException", "(Ljava/lang/Exception;)Lorg/orekit/errors/OrekitException;");
                mids$[mid_getContentAsBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "getContentAsBoolean", "()Z");
                mids$[mid_getContentAsDouble_557b8123390d8d0c] = env->getMethodID(cls, "getContentAsDouble", "()D");
                mids$[mid_getContentAsEnum_65e8240ea4d8205f] = env->getMethodID(cls, "getContentAsEnum", "(Ljava/lang/Class;)Ljava/lang/Enum;");
                mids$[mid_getContentAsEnumList_d848ef13695cc5e8] = env->getMethodID(cls, "getContentAsEnumList", "(Ljava/lang/Class;)Ljava/util/List;");
                mids$[mid_getContentAsFreeTextList_0d9551367f7ecdef] = env->getMethodID(cls, "getContentAsFreeTextList", "()Ljava/util/List;");
                mids$[mid_getContentAsInt_412668abc8d889e9] = env->getMethodID(cls, "getContentAsInt", "()I");
                mids$[mid_getContentAsNormalizedList_0d9551367f7ecdef] = env->getMethodID(cls, "getContentAsNormalizedList", "()Ljava/util/List;");
                mids$[mid_getContentAsNormalizedString_3cffd47377eca18a] = env->getMethodID(cls, "getContentAsNormalizedString", "()Ljava/lang/String;");
                mids$[mid_getContentAsUppercaseCharacter_d156d1ce330f6993] = env->getMethodID(cls, "getContentAsUppercaseCharacter", "()C");
                mids$[mid_getContentAsUppercaseList_0d9551367f7ecdef] = env->getMethodID(cls, "getContentAsUppercaseList", "()Ljava/util/List;");
                mids$[mid_getContentAsUppercaseString_3cffd47377eca18a] = env->getMethodID(cls, "getContentAsUppercaseString", "()Ljava/lang/String;");
                mids$[mid_getContentAsVector_f88961cca75a2c0a] = env->getMethodID(cls, "getContentAsVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getFileName_3cffd47377eca18a] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
                mids$[mid_getLineNumber_412668abc8d889e9] = env->getMethodID(cls, "getLineNumber", "()I");
                mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                mids$[mid_getRawContent_3cffd47377eca18a] = env->getMethodID(cls, "getRawContent", "()Ljava/lang/String;");
                mids$[mid_getType_fa8f7d64cef625f1] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_getUnits_3267fc1a8500bfc2] = env->getMethodID(cls, "getUnits", "()Lorg/orekit/utils/units/Unit;");
                mids$[mid_processAsBoolean_436ee5f831330d4a] = env->getMethodID(cls, "processAsBoolean", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer;)Z");
                mids$[mid_processAsCenter_b719d3405ad290e2] = env->getMethodID(cls, "processAsCenter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsCenterList_a2f2595f1cf39d1b] = env->getMethodID(cls, "processAsCenterList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsDate_f353b54f8f89d8fb] = env->getMethodID(cls, "processAsDate", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;)Z");
                mids$[mid_processAsDouble_2d320c95873098e8] = env->getMethodID(cls, "processAsDouble", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer;)Z");
                mids$[mid_processAsDoubleArray_1cf304c10f6be1d3] = env->getMethodID(cls, "processAsDoubleArray", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer;)Z");
                mids$[mid_processAsDoublyIndexedDouble_affddc9b2a3ca557] = env->getMethodID(cls, "processAsDoublyIndexedDouble", "(IILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer;)Z");
                mids$[mid_processAsEnum_c989809c021427de] = env->getMethodID(cls, "processAsEnum", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer;)Z");
                mids$[mid_processAsEnumsList_9fe2bac987ebd579] = env->getMethodID(cls, "processAsEnumsList", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer;)Z");
                mids$[mid_processAsFrame_3c30940140d573e9] = env->getMethodID(cls, "processAsFrame", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;ZZZ)Z");
                mids$[mid_processAsFreeTextList_b23e65b120984e55] = env->getMethodID(cls, "processAsFreeTextList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsFreeTextString_281cdf77bf485b17] = env->getMethodID(cls, "processAsFreeTextString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsIndexedDouble_72aad951ffac0397] = env->getMethodID(cls, "processAsIndexedDouble", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer;)Z");
                mids$[mid_processAsIndexedDoubleArray_ab253c953fe189fd] = env->getMethodID(cls, "processAsIndexedDoubleArray", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer;)Z");
                mids$[mid_processAsIndexedInteger_eaa9841397949d23] = env->getMethodID(cls, "processAsIndexedInteger", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer;)Z");
                mids$[mid_processAsIndexedNormalizedString_0e6ca734c8ed6927] = env->getMethodID(cls, "processAsIndexedNormalizedString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsIndexedUppercaseString_0e6ca734c8ed6927] = env->getMethodID(cls, "processAsIndexedUppercaseString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsInteger_6713fd0b65a7257c] = env->getMethodID(cls, "processAsInteger", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer;)Z");
                mids$[mid_processAsIntegerArray_8b24d41f7d96b8b3] = env->getMethodID(cls, "processAsIntegerArray", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsIntegerArrayNoSpace_8b24d41f7d96b8b3] = env->getMethodID(cls, "processAsIntegerArrayNoSpace", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsLabeledDouble_595f6caed626b216] = env->getMethodID(cls, "processAsLabeledDouble", "(CLorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer;)Z");
                mids$[mid_processAsManeuvrableEnum_3178dafa66cc8655] = env->getMethodID(cls, "processAsManeuvrableEnum", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer;)Z");
                mids$[mid_processAsNormalizedCharacter_1028dc3af0c033d4] = env->getMethodID(cls, "processAsNormalizedCharacter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer;)Z");
                mids$[mid_processAsNormalizedList_b23e65b120984e55] = env->getMethodID(cls, "processAsNormalizedList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsNormalizedString_281cdf77bf485b17] = env->getMethodID(cls, "processAsNormalizedString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsRotationOrder_0014e3be4cb3f1df] = env->getMethodID(cls, "processAsRotationOrder", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer;)Z");
                mids$[mid_processAsTimeSystem_31ec7f4c8c0224d7] = env->getMethodID(cls, "processAsTimeSystem", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer;)Z");
                mids$[mid_processAsUnitList_515675c50bb421a1] = env->getMethodID(cls, "processAsUnitList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer;)Z");
                mids$[mid_processAsUppercaseList_b23e65b120984e55] = env->getMethodID(cls, "processAsUppercaseList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsUppercaseString_281cdf77bf485b17] = env->getMethodID(cls, "processAsUppercaseString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsVector_9383ee69f50eb33c] = env->getMethodID(cls, "processAsVector", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ParseToken::ParseToken(const ::org::orekit::files::ccsds::utils::lexical::TokenType & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::utils::units::Unit & a3, jint a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_717f867ead0d2032, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::orekit::errors::OrekitException ParseToken::generateException(const ::java::lang::Exception & a0) const
            {
              return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_generateException_1f30b03cfe55d2b4], a0.this$));
            }

            jboolean ParseToken::getContentAsBoolean() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getContentAsBoolean_89b302893bdbe1f1]);
            }

            jdouble ParseToken::getContentAsDouble() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getContentAsDouble_557b8123390d8d0c]);
            }

            ::java::lang::Enum ParseToken::getContentAsEnum(const ::java::lang::Class & a0) const
            {
              return ::java::lang::Enum(env->callObjectMethod(this$, mids$[mid_getContentAsEnum_65e8240ea4d8205f], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsEnumList(const ::java::lang::Class & a0) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsEnumList_d848ef13695cc5e8], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsFreeTextList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsFreeTextList_0d9551367f7ecdef]));
            }

            jint ParseToken::getContentAsInt() const
            {
              return env->callIntMethod(this$, mids$[mid_getContentAsInt_412668abc8d889e9]);
            }

            ::java::util::List ParseToken::getContentAsNormalizedList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedList_0d9551367f7ecdef]));
            }

            ::java::lang::String ParseToken::getContentAsNormalizedString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedString_3cffd47377eca18a]));
            }

            jchar ParseToken::getContentAsUppercaseCharacter() const
            {
              return env->callCharMethod(this$, mids$[mid_getContentAsUppercaseCharacter_d156d1ce330f6993]);
            }

            ::java::util::List ParseToken::getContentAsUppercaseList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseList_0d9551367f7ecdef]));
            }

            ::java::lang::String ParseToken::getContentAsUppercaseString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseString_3cffd47377eca18a]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D ParseToken::getContentAsVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getContentAsVector_f88961cca75a2c0a]));
            }

            ::java::lang::String ParseToken::getFileName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_3cffd47377eca18a]));
            }

            jint ParseToken::getLineNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLineNumber_412668abc8d889e9]);
            }

            ::java::lang::String ParseToken::getName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
            }

            ::java::lang::String ParseToken::getRawContent() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRawContent_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::utils::lexical::TokenType ParseToken::getType() const
            {
              return ::org::orekit::files::ccsds::utils::lexical::TokenType(env->callObjectMethod(this$, mids$[mid_getType_fa8f7d64cef625f1]));
            }

            ::org::orekit::utils::units::Unit ParseToken::getUnits() const
            {
              return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_3267fc1a8500bfc2]));
            }

            jboolean ParseToken::processAsBoolean(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsBoolean_436ee5f831330d4a], a0.this$);
            }

            jboolean ParseToken::processAsCenter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenter_b719d3405ad290e2], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsCenterList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenterList_a2f2595f1cf39d1b], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDate(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDate_f353b54f8f89d8fb], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDouble(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDouble_2d320c95873098e8], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoubleArray(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoubleArray_1cf304c10f6be1d3], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoublyIndexedDouble(jint a0, jint a1, const ::org::orekit::utils::units::Unit & a2, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a3, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoublyIndexedDouble_affddc9b2a3ca557], a0, a1, a2.this$, a3.this$, a4.this$);
            }

            jboolean ParseToken::processAsEnum(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnum_c989809c021427de], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsEnumsList(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnumsList_9fe2bac987ebd579], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsFrame(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, jboolean a2, jboolean a3, jboolean a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFrame_3c30940140d573e9], a0.this$, a1.this$, a2, a3, a4);
            }

            jboolean ParseToken::processAsFreeTextList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextList_b23e65b120984e55], a0.this$);
            }

            jboolean ParseToken::processAsFreeTextString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextString_281cdf77bf485b17], a0.this$);
            }

            jboolean ParseToken::processAsIndexedDouble(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDouble_72aad951ffac0397], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedDoubleArray(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDoubleArray_ab253c953fe189fd], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedInteger(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedInteger_eaa9841397949d23], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedNormalizedString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedNormalizedString_0e6ca734c8ed6927], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedUppercaseString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedUppercaseString_0e6ca734c8ed6927], a0, a1.this$);
            }

            jboolean ParseToken::processAsInteger(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsInteger_6713fd0b65a7257c], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArray(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArray_8b24d41f7d96b8b3], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArrayNoSpace(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArrayNoSpace_8b24d41f7d96b8b3], a0.this$);
            }

            jboolean ParseToken::processAsLabeledDouble(jchar a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsLabeledDouble_595f6caed626b216], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsManeuvrableEnum(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsManeuvrableEnum_3178dafa66cc8655], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedCharacter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedCharacter_1028dc3af0c033d4], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedList_b23e65b120984e55], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedString_281cdf77bf485b17], a0.this$);
            }

            jboolean ParseToken::processAsRotationOrder(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsRotationOrder_0014e3be4cb3f1df], a0.this$);
            }

            jboolean ParseToken::processAsTimeSystem(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsTimeSystem_31ec7f4c8c0224d7], a0.this$);
            }

            jboolean ParseToken::processAsUnitList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUnitList_515675c50bb421a1], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseList_b23e65b120984e55], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseString_281cdf77bf485b17], a0.this$);
            }

            jboolean ParseToken::processAsVector(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsVector_9383ee69f50eb33c], a0.this$, a1.this$, a2.this$);
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
            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self);
            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self);
            static PyObject *t_ParseToken_getFileName(t_ParseToken *self);
            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self);
            static PyObject *t_ParseToken_getName(t_ParseToken *self);
            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self);
            static PyObject *t_ParseToken_getType(t_ParseToken *self);
            static PyObject *t_ParseToken_getUnits(t_ParseToken *self);
            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg);
            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args);
            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data);
            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data);
            static PyGetSetDef t_ParseToken__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken, contentAsBoolean),
              DECLARE_GET_FIELD(t_ParseToken, contentAsDouble),
              DECLARE_GET_FIELD(t_ParseToken, contentAsFreeTextList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsInt),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsNormalizedString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseCharacter),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseList),
              DECLARE_GET_FIELD(t_ParseToken, contentAsUppercaseString),
              DECLARE_GET_FIELD(t_ParseToken, contentAsVector),
              DECLARE_GET_FIELD(t_ParseToken, fileName),
              DECLARE_GET_FIELD(t_ParseToken, lineNumber),
              DECLARE_GET_FIELD(t_ParseToken, name),
              DECLARE_GET_FIELD(t_ParseToken, rawContent),
              DECLARE_GET_FIELD(t_ParseToken, type),
              DECLARE_GET_FIELD(t_ParseToken, units),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken__methods_[] = {
              DECLARE_METHOD(t_ParseToken, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken, generateException, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsBoolean, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsDouble, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsEnumList, METH_O),
              DECLARE_METHOD(t_ParseToken, getContentAsFreeTextList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsInt, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsNormalizedString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseCharacter, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseList, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsUppercaseString, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getContentAsVector, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getFileName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getLineNumber, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getName, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getRawContent, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getType, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, getUnits, METH_NOARGS),
              DECLARE_METHOD(t_ParseToken, processAsBoolean, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsCenter, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsCenterList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDate, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsDoublyIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnum, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsEnumsList, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFrame, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsFreeTextString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedDoubleArray, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedInteger, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedNormalizedString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsIndexedUppercaseString, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsInteger, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArray, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsIntegerArrayNoSpace, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsLabeledDouble, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken, processAsManeuvrableEnum, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedCharacter, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsNormalizedString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsRotationOrder, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsTimeSystem, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUnitList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseList, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsUppercaseString, METH_O),
              DECLARE_METHOD(t_ParseToken, processAsVector, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken)[] = {
              { Py_tp_methods, t_ParseToken__methods_ },
              { Py_tp_init, (void *) t_ParseToken_init_ },
              { Py_tp_getset, t_ParseToken__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken, t_ParseToken, ParseToken);

            void t_ParseToken::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken), &PY_TYPE_DEF(ParseToken), module, "ParseToken", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedStringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedStringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "BooleanConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$BooleanConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedIntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedIntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntegerArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntegerArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CharConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CharConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "LabeledDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoublyIndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "VectorConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$VectorConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DateConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DateConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "TimeSystemConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$TimeSystemConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "FrameConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$FrameConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "RotationOrderConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$RotationOrderConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "UnitListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$UnitListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "ManeuvrableConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$ManeuvrableConsumer)));
            }

            void t_ParseToken::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "class_", make_descriptor(ParseToken::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "wrapfn_", make_descriptor(t_ParseToken::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken::initializeClass, 1)))
                return NULL;
              return t_ParseToken::wrap_Object(ParseToken(((t_ParseToken *) arg)->object.this$));
            }
            static PyObject *t_ParseToken_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ParseToken_init_(t_ParseToken *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::utils::units::Unit a3((jobject) NULL);
              jint a4;
              ::java::lang::String a5((jobject) NULL);
              ParseToken object((jobject) NULL);

              if (!parseArgs(args, "KsskIs", ::org::orekit::files::ccsds::utils::lexical::TokenType::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_TokenType::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = ParseToken(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ParseToken_generateException(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Exception a0((jobject) NULL);
              ::org::orekit::errors::OrekitException result((jobject) NULL);

              if (!parseArg(arg, "k", ::java::lang::Exception::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateException(a0));
                return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateException", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsBoolean(t_ParseToken *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_ParseToken_getContentAsDouble(t_ParseToken *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ParseToken_getContentAsEnum(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnum(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Enum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsEnumList(t_ParseToken *self, PyObject *arg)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
              {
                OBJ_CALL(result = self->object.getContentAsEnumList(a0));
                return ::java::util::t_List::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getContentAsEnumList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_getContentAsFreeTextList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsInt(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getContentAsInt());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getContentAsNormalizedList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsNormalizedString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsNormalizedString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseCharacter(t_ParseToken *self)
            {
              jchar result;
              OBJ_CALL(result = self->object.getContentAsUppercaseCharacter());
              return c2p(result);
            }

            static PyObject *t_ParseToken_getContentAsUppercaseList(t_ParseToken *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_ParseToken_getContentAsUppercaseString(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsUppercaseString());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getContentAsVector(t_ParseToken *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getFileName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getLineNumber(t_ParseToken *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLineNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_ParseToken_getName(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getName());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getRawContent(t_ParseToken *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRawContent());
              return j2p(result);
            }

            static PyObject *t_ParseToken_getType(t_ParseToken *self)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(result);
            }

            static PyObject *t_ParseToken_getUnits(t_ParseToken *self)
            {
              ::org::orekit::utils::units::Unit result((jobject) NULL);
              OBJ_CALL(result = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            static PyObject *t_ParseToken_processAsBoolean(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsBoolean(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsBoolean", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenter(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenter(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenter", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsCenterList(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsCenterList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsCenterList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDate(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsDate(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDate", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDouble(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDouble(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoubleArray(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsDoubleArray(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsDoublyIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::orekit::utils::units::Unit a2((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer a4((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IIkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.processAsDoublyIndexedDouble(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsDoublyIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnum(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnum(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnum", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsEnumsList(t_ParseToken *self, PyObject *args)
            {
              ::java::lang::Class a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "KK", ::java::lang::Class::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_, &a1, &p1, ::org::orekit::files::ccsds::utils::lexical::t_ParseToken$EnumListConsumer::parameters_))
              {
                OBJ_CALL(result = self->object.processAsEnumsList(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsEnumsList", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFrame(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              jboolean a2;
              jboolean a3;
              jboolean a4;
              jboolean result;

              if (!parseArgs(args, "kkZZZ", ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.processAsFrame(a0, a1, a2, a3, a4));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFrame", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsFreeTextString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsFreeTextString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsFreeTextString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDouble(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedDoubleArray(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "IkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsIndexedDoubleArray(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedDoubleArray", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedInteger(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedInteger(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedInteger", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedNormalizedString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedNormalizedString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedNormalizedString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIndexedUppercaseString(t_ParseToken *self, PyObject *args)
            {
              jint a0;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ik", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.processAsIndexedUppercaseString(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIndexedUppercaseString", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsInteger(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsInteger(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsInteger", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArray(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArray(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArray", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsIntegerArrayNoSpace(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsIntegerArrayNoSpace(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsIntegerArrayNoSpace", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsLabeledDouble(t_ParseToken *self, PyObject *args)
            {
              jchar a0;
              ::org::orekit::utils::units::Unit a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer a3((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "CkKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a3))
              {
                OBJ_CALL(result = self->object.processAsLabeledDouble(a0, a1, a2, a3));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsLabeledDouble", args);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsManeuvrableEnum(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsManeuvrableEnum(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsManeuvrableEnum", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedCharacter(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedCharacter(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedCharacter", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsNormalizedString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsNormalizedString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsNormalizedString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsRotationOrder(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsRotationOrder(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsRotationOrder", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsTimeSystem(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsTimeSystem(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUnitList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUnitList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUnitList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseList(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseList(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseList", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsUppercaseString(t_ParseToken *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processAsUppercaseString(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsUppercaseString", arg);
              return NULL;
            }

            static PyObject *t_ParseToken_processAsVector(t_ParseToken *self, PyObject *args)
            {
              ::org::orekit::utils::units::Unit a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kKk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.processAsVector(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processAsVector", args);
              return NULL;
            }

            static PyObject *t_ParseToken_get__contentAsBoolean(t_ParseToken *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getContentAsBoolean());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_ParseToken_get__contentAsDouble(t_ParseToken *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getContentAsDouble());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ParseToken_get__contentAsFreeTextList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsFreeTextList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsInt(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getContentAsInt());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsNormalizedString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsNormalizedString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseCharacter(t_ParseToken *self, void *data)
            {
              jchar value;
              OBJ_CALL(value = self->object.getContentAsUppercaseCharacter());
              return c2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseList(t_ParseToken *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseList());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__contentAsUppercaseString(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsUppercaseString());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__contentAsVector(t_ParseToken *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getContentAsVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__fileName(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__lineNumber(t_ParseToken *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLineNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_ParseToken_get__name(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getName());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__rawContent(t_ParseToken *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRawContent());
              return j2p(value);
            }

            static PyObject *t_ParseToken_get__type(t_ParseToken *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::lexical::TokenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::utils::lexical::t_TokenType::wrap_Object(value);
            }

            static PyObject *t_ParseToken_get__units(t_ParseToken *self, void *data)
            {
              ::org::orekit::utils::units::Unit value((jobject) NULL);
              OBJ_CALL(value = self->object.getUnits());
              return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DatesSelector::class$ = NULL;
      jmethodID *DatesSelector::mids$ = NULL;
      bool DatesSelector::live$ = false;

      jclass DatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_selectDates_c5683b8e06424542] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List DatesSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_c5683b8e06424542], a0.this$, a1.this$));
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
      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args);

      static PyMethodDef t_DatesSelector__methods_[] = {
        DECLARE_METHOD(t_DatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DatesSelector)[] = {
        { Py_tp_methods, t_DatesSelector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DatesSelector, t_DatesSelector, DatesSelector);

      void t_DatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(DatesSelector), &PY_TYPE_DEF(DatesSelector), module, "DatesSelector", 0);
      }

      void t_DatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "class_", make_descriptor(DatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "wrapfn_", make_descriptor(t_DatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DatesSelector::initializeClass, 1)))
          return NULL;
        return t_DatesSelector::wrap_Object(DatesSelector(((t_DatesSelector *) arg)->object.this$));
      }
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSPhaseModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSPhaseModifier::live$ = false;

          jclass ShapiroOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSPhaseModifier::ShapiroOneWayGNSSPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::java::util::List ShapiroOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void ShapiroOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSPhaseModifier, t_ShapiroOneWayGNSSPhaseModifier, ShapiroOneWayGNSSPhaseModifier);

          void t_ShapiroOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSPhaseModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSPhaseModifier), module, "ShapiroOneWayGNSSPhaseModifier", 0);
          }

          void t_ShapiroOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "class_", make_descriptor(ShapiroOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSPhaseModifier::wrap_Object(ShapiroOneWayGNSSPhaseModifier(((t_ShapiroOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationExtremumDetector::class$ = NULL;
        jmethodID *ElevationExtremumDetector::mids$ = NULL;
        bool ElevationExtremumDetector::live$ = false;

        jclass ElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a649bdeaffd47ec2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_279ef3a80970d2f4] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevation_1bbf81d80c47ecdd] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getTopocentricFrame_2bb3e750d93d59cc] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_8a272eda6b0256f6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationExtremumDetector::ElevationExtremumDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a649bdeaffd47ec2, a0.this$)) {}

        ElevationExtremumDetector::ElevationExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_279ef3a80970d2f4, a0, a1, a2.this$)) {}

        jdouble ElevationExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        jdouble ElevationExtremumDetector::getElevation(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::frames::TopocentricFrame ElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_2bb3e750d93d59cc]));
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
        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args);
        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self);
        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data);
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_ElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_ElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationExtremumDetector)[] = {
          { Py_tp_methods, t_ElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationExtremumDetector_init_ },
          { Py_tp_getset, t_ElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationExtremumDetector, t_ElevationExtremumDetector, ElevationExtremumDetector);
        PyObject *t_ElevationExtremumDetector::wrap_Object(const ElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationExtremumDetector), &PY_TYPE_DEF(ElevationExtremumDetector), module, "ElevationExtremumDetector", 0);
        }

        void t_ElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "class_", make_descriptor(ElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "wrapfn_", make_descriptor(t_ElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationExtremumDetector::wrap_Object(ElevationExtremumDetector(((t_ElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
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

        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ScaledConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *ScaledConstantThrustPropulsionModel::mids$ = NULL;
          bool ScaledConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR = NULL;

          jclass ScaledConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cf2d903473e9fd3b] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_557b8123390d8d0c] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_86c4a0582e0747ce] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_e3919ad898361abd] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_b0b988f941da47d8] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_f88961cca75a2c0a] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b4c4f24efa81746b] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_73a8498c189497cd] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_3df461fe15362b2b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              THRUSTX_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTX_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTY_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTY_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTZ_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTZ_SCALE_FACTOR", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaledConstantThrustPropulsionModel::ScaledConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_cf2d903473e9fd3b, a0, a1, a2.this$, a3.this$)) {}

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_557b8123390d8d0c]);
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_86c4a0582e0747ce], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_e3919ad898361abd], a0.this$));
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b0b988f941da47d8], a0.this$);
          }

          ::java::util::List ScaledConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b4c4f24efa81746b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_73a8498c189497cd], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3df461fe15362b2b], a0.this$));
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
          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ScaledConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaledConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaledConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ScaledConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ScaledConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ScaledConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaledConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(ScaledConstantThrustPropulsionModel, t_ScaledConstantThrustPropulsionModel, ScaledConstantThrustPropulsionModel);

          void t_ScaledConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaledConstantThrustPropulsionModel), &PY_TYPE_DEF(ScaledConstantThrustPropulsionModel), module, "ScaledConstantThrustPropulsionModel", 0);
          }

          void t_ScaledConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "class_", make_descriptor(ScaledConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_ScaledConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(ScaledConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTX_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTY_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTZ_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR)));
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ScaledConstantThrustPropulsionModel::wrap_Object(ScaledConstantThrustPropulsionModel(((t_ScaledConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ScaledConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ScaledConstantThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
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
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
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

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
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
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
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

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorConverter::class$ = NULL;
        jmethodID *AbstractPropagatorConverter::mids$ = NULL;
        bool AbstractPropagatorConverter::live$ = false;

        jclass AbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_aca0727def0bdfc3] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_e823fa7f61b08ee5] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_45d78d4eb2e28b70] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_5aea72ca01fda79c] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_getAdaptedPropagator_8d6cf3295e825916] = env->getMethodID(cls, "getAdaptedPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getRMS_557b8123390d8d0c] = env->getMethodID(cls, "getRMS", "()D");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getModel_e31bcbfb9203b3a6] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_88ca328d89915cf7] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getTargetSize_412668abc8d889e9] = env->getMethodID(cls, "getTargetSize", "()I");
            mids$[mid_getSample_0d9551367f7ecdef] = env->getMethodID(cls, "getSample", "()Ljava/util/List;");
            mids$[mid_isOnlyPosition_89b302893bdbe1f1] = env->getMethodID(cls, "isOnlyPosition", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_aca0727def0bdfc3], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_e823fa7f61b08ee5], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_45d78d4eb2e28b70], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_5aea72ca01fda79c], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::getAdaptedPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getAdaptedPropagator_8d6cf3295e825916]));
        }

        jint AbstractPropagatorConverter::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        jdouble AbstractPropagatorConverter::getRMS() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRMS_557b8123390d8d0c]);
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
        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args);
        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_AbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, adaptedPropagator),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, evaluations),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, rMS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, convert, METH_VARARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getAdaptedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getRMS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_AbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorConverter, t_AbstractPropagatorConverter, AbstractPropagatorConverter);

        void t_AbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorConverter), &PY_TYPE_DEF(AbstractPropagatorConverter), module, "AbstractPropagatorConverter", 0);
        }

        void t_AbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "class_", make_descriptor(AbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "wrapfn_", make_descriptor(t_AbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorConverter::wrap_Object(AbstractPropagatorConverter(((t_AbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRMS());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRMS());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSEstimator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSEstimator::class$ = NULL;
        jmethodID *BatchLSEstimator::mids$ = NULL;
        bool BatchLSEstimator::live$ = false;

        jclass BatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e1196493cd3809bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");
            mids$[mid_addMeasurement_4063373aad443d2b] = env->getMethodID(cls, "addMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
            mids$[mid_estimate_2d0616b730e7ec0f] = env->getMethodID(cls, "estimate", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluationsCount_412668abc8d889e9] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_412668abc8d889e9] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getLastEstimations_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getLastEstimations", "()Ljava/util/Map;");
            mids$[mid_getMeasurementsParametersDrivers_4f6dd8cf21dd8817] = env->getMethodID(cls, "getMeasurementsParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOptimum_7e2f60993e150a77] = env->getMethodID(cls, "getOptimum", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_getOrbitalParametersDrivers_4f6dd8cf21dd8817] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalCovariances_e95e381257af03e9] = env->getMethodID(cls, "getPhysicalCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagatorParametersDrivers_4f6dd8cf21dd8817] = env->getMethodID(cls, "getPropagatorParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_setConvergenceChecker_38783cba7e493c69] = env->getMethodID(cls, "setConvergenceChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_setMaxEvaluations_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
            mids$[mid_setMaxIterations_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxIterations", "(I)V");
            mids$[mid_setObserver_677f6e1bcad1374b] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/leastsquares/BatchLSObserver;)V");
            mids$[mid_setParametersConvergenceThreshold_10f281d777284cea] = env->getMethodID(cls, "setParametersConvergenceThreshold", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSEstimator::BatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1196493cd3809bc, a0.this$, a1.this$)) {}

        void BatchLSEstimator::addMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeasurement_4063373aad443d2b], a0.this$);
        }

        JArray< ::org::orekit::propagation::Propagator > BatchLSEstimator::estimate() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimate_2d0616b730e7ec0f]));
        }

        jint BatchLSEstimator::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_412668abc8d889e9]);
        }

        jint BatchLSEstimator::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_412668abc8d889e9]);
        }

        ::java::util::Map BatchLSEstimator::getLastEstimations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getLastEstimations_1e62c2f73fbdd1c4]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getMeasurementsParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersDrivers_4f6dd8cf21dd8817], a0));
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum BatchLSEstimator::getOptimum() const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_getOptimum_7e2f60993e150a77]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_4f6dd8cf21dd8817], a0));
        }

        ::org::hipparchus::linear::RealMatrix BatchLSEstimator::getPhysicalCovariances(jdouble a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalCovariances_e95e381257af03e9], a0));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getPropagatorParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagatorParametersDrivers_4f6dd8cf21dd8817], a0));
        }

        void BatchLSEstimator::setConvergenceChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConvergenceChecker_38783cba7e493c69], a0.this$);
        }

        void BatchLSEstimator::setMaxEvaluations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_a3da1a935cb37f7b], a0);
        }

        void BatchLSEstimator::setMaxIterations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxIterations_a3da1a935cb37f7b], a0);
        }

        void BatchLSEstimator::setObserver(const ::org::orekit::estimation::leastsquares::BatchLSObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_677f6e1bcad1374b], a0.this$);
        }

        void BatchLSEstimator::setParametersConvergenceThreshold(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParametersConvergenceThreshold_10f281d777284cea], a0);
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
        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg);
        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_BatchLSEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_BatchLSEstimator, convergenceChecker),
          DECLARE_GET_FIELD(t_BatchLSEstimator, evaluationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, iterationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, lastEstimations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxEvaluations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxIterations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, observer),
          DECLARE_GET_FIELD(t_BatchLSEstimator, optimum),
          DECLARE_SET_FIELD(t_BatchLSEstimator, parametersConvergenceThreshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_BatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, addMeasurement, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, estimate, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getLastEstimations, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getMeasurementsParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getOptimum, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPhysicalCovariances, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPropagatorParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setConvergenceChecker, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxEvaluations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxIterations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setObserver, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setParametersConvergenceThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSEstimator)[] = {
          { Py_tp_methods, t_BatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_BatchLSEstimator_init_ },
          { Py_tp_getset, t_BatchLSEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSEstimator, t_BatchLSEstimator, BatchLSEstimator);

        void t_BatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSEstimator), &PY_TYPE_DEF(BatchLSEstimator), module, "BatchLSEstimator", 0);
        }

        void t_BatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "class_", make_descriptor(BatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "wrapfn_", make_descriptor(t_BatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_BatchLSEstimator::wrap_Object(BatchLSEstimator(((t_BatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          BatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BatchLSEstimator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.addMeasurement(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeasurement", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimate());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getMeasurementsParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeasurementsParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPhysicalCovariances(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhysicalCovariances", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagatorParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagatorParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
          {
            OBJ_CALL(self->object.setConvergenceChecker(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConvergenceChecker", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxEvaluations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxIterations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxIterations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::leastsquares::BatchLSObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setParametersConvergenceThreshold(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParametersConvergenceThreshold", arg);
          return NULL;
        }

        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &value))
            {
              INT_CALL(self->object.setConvergenceChecker(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "convergenceChecker", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxEvaluations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxIterations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::leastsquares::BatchLSObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setParametersConvergenceThreshold(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parametersConvergenceThreshold", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RegionCode::class$ = NULL;
          jmethodID *RegionCode::mids$ = NULL;
          bool RegionCode::live$ = false;
          RegionCode *RegionCode::JAPAN = NULL;
          RegionCode *RegionCode::WIDE_AREA = NULL;

          jclass RegionCode::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RegionCode");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_ed3c9815d91db0fc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_values_f458428792f7c497] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/RegionCode;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              JAPAN = new RegionCode(env->getStaticObjectField(cls, "JAPAN", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              WIDE_AREA = new RegionCode(env->getStaticObjectField(cls, "WIDE_AREA", "Lorg/orekit/files/rinex/navigation/RegionCode;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RegionCode RegionCode::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RegionCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ed3c9815d91db0fc], a0.this$));
          }

          JArray< RegionCode > RegionCode::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RegionCode >(env->callStaticObjectMethod(cls, mids$[mid_values_f458428792f7c497]));
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
          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args);
          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RegionCode_values(PyTypeObject *type);
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data);
          static PyGetSetDef t_RegionCode__fields_[] = {
            DECLARE_GET_FIELD(t_RegionCode, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RegionCode__methods_[] = {
            DECLARE_METHOD(t_RegionCode, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, of_, METH_VARARGS),
            DECLARE_METHOD(t_RegionCode, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RegionCode, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RegionCode)[] = {
            { Py_tp_methods, t_RegionCode__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RegionCode__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RegionCode)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RegionCode, t_RegionCode, RegionCode);
          PyObject *t_RegionCode::wrap_Object(const RegionCode& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RegionCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RegionCode::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RegionCode *self = (t_RegionCode *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RegionCode::install(PyObject *module)
          {
            installType(&PY_TYPE(RegionCode), &PY_TYPE_DEF(RegionCode), module, "RegionCode", 0);
          }

          void t_RegionCode::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "class_", make_descriptor(RegionCode::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "wrapfn_", make_descriptor(t_RegionCode::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "boxfn_", make_descriptor(boxObject));
            env->getClass(RegionCode::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "JAPAN", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::JAPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RegionCode), "WIDE_AREA", make_descriptor(t_RegionCode::wrap_Object(*RegionCode::WIDE_AREA)));
          }

          static PyObject *t_RegionCode_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RegionCode::initializeClass, 1)))
              return NULL;
            return t_RegionCode::wrap_Object(RegionCode(((t_RegionCode *) arg)->object.this$));
          }
          static PyObject *t_RegionCode_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RegionCode::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RegionCode_of_(t_RegionCode *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RegionCode_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RegionCode result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::valueOf(a0));
              return t_RegionCode::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RegionCode_values(PyTypeObject *type)
          {
            JArray< RegionCode > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::RegionCode::values());
            return JArray<jobject>(result.this$).wrap(t_RegionCode::wrap_jobject);
          }
          static PyObject *t_RegionCode_get__parameters_(t_RegionCode *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimatedEarthFrameProvider.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedEarthFrameProvider::class$ = NULL;
        jmethodID *EstimatedEarthFrameProvider::mids$ = NULL;
        bool EstimatedEarthFrameProvider::live$ = false;
        jdouble EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY = (jdouble) 0;

        jclass EstimatedEarthFrameProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedEarthFrameProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_397cb98b48a45c7c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_getEstimatedUT1_22bf001d2b53d119] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getPolarDriftXDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getStaticTransform_7265a2d9c3b9a38a] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
            mids$[mid_getStaticTransform_68fd5b9bb9184393] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
            mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getTransform_4c0f713f503cbfed] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "EARTH_ANGULAR_VELOCITY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedEarthFrameProvider::EstimatedEarthFrameProvider(const ::org::orekit::time::UT1Scale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_397cb98b48a45c7c, a0.this$)) {}

        ::org::orekit::time::UT1Scale EstimatedEarthFrameProvider::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_22bf001d2b53d119]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver EstimatedEarthFrameProvider::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_4194657b5e280ddc]));
        }

        ::org::orekit::frames::StaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_7265a2d9c3b9a38a], a0.this$));
        }

        ::org::orekit::frames::FieldStaticTransform EstimatedEarthFrameProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_68fd5b9bb9184393], a0.this$));
        }

        ::org::orekit::frames::Transform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
        }

        ::org::orekit::frames::FieldTransform EstimatedEarthFrameProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, jint a1, const ::java::util::Map & a2) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_4c0f713f503cbfed], a0.this$, a1, a2.this$));
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
        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self);
        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args);
        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data);
        static PyGetSetDef t_EstimatedEarthFrameProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, estimatedUT1),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarDriftYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_EstimatedEarthFrameProvider, primeMeridianOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedEarthFrameProvider__methods_[] = {
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getStaticTransform, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedEarthFrameProvider, getTransform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedEarthFrameProvider)[] = {
          { Py_tp_methods, t_EstimatedEarthFrameProvider__methods_ },
          { Py_tp_init, (void *) t_EstimatedEarthFrameProvider_init_ },
          { Py_tp_getset, t_EstimatedEarthFrameProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedEarthFrameProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedEarthFrameProvider, t_EstimatedEarthFrameProvider, EstimatedEarthFrameProvider);

        void t_EstimatedEarthFrameProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedEarthFrameProvider), &PY_TYPE_DEF(EstimatedEarthFrameProvider), module, "EstimatedEarthFrameProvider", 0);
        }

        void t_EstimatedEarthFrameProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "class_", make_descriptor(EstimatedEarthFrameProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "wrapfn_", make_descriptor(t_EstimatedEarthFrameProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedEarthFrameProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedEarthFrameProvider), "EARTH_ANGULAR_VELOCITY", make_descriptor(EstimatedEarthFrameProvider::EARTH_ANGULAR_VELOCITY));
        }

        static PyObject *t_EstimatedEarthFrameProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 1)))
            return NULL;
          return t_EstimatedEarthFrameProvider::wrap_Object(EstimatedEarthFrameProvider(((t_EstimatedEarthFrameProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimatedEarthFrameProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedEarthFrameProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EstimatedEarthFrameProvider_init_(t_EstimatedEarthFrameProvider *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::UT1Scale a0((jobject) NULL);
          EstimatedEarthFrameProvider object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
          {
            INT_CALL(object = EstimatedEarthFrameProvider(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedEarthFrameProvider_getEstimatedUT1(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarDriftYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetXDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPolarOffsetYDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getPrimeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_EstimatedEarthFrameProvider_getStaticTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
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

        static PyObject *t_EstimatedEarthFrameProvider_getTransform(t_EstimatedEarthFrameProvider *self, PyObject *args)
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
            break;
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::java::util::Map a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "KIK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getTransform(a0, a1, a2));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTransform", args);
          return NULL;
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__estimatedUT1(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarDriftYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetXDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__polarOffsetYDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianDriftDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_EstimatedEarthFrameProvider_get__primeMeridianOffsetDriver(t_EstimatedEarthFrameProvider *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricFieldGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricFieldGaussIntegrator::mids$ = NULL;
          bool SymmetricFieldGaussIntegrator::live$ = false;

          jclass SymmetricFieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7cd681864cf513c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_2c0fd42a693364fa] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_integrate_cf175d31250bee45] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7cd681864cf513c2, a0.this$)) {}

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2c0fd42a693364fa, a0.this$, a1.this$)) {}

          ::org::hipparchus::CalculusFieldElement SymmetricFieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_cf175d31250bee45], a0.this$));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_SymmetricFieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_SymmetricFieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SymmetricFieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricFieldGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricFieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricFieldGaussIntegrator_init_ },
            { Py_tp_getset, t_SymmetricFieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricFieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricFieldGaussIntegrator, t_SymmetricFieldGaussIntegrator, SymmetricFieldGaussIntegrator);
          PyObject *t_SymmetricFieldGaussIntegrator::wrap_Object(const SymmetricFieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SymmetricFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SymmetricFieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricFieldGaussIntegrator), &PY_TYPE_DEF(SymmetricFieldGaussIntegrator), module, "SymmetricFieldGaussIntegrator", 0);
          }

          void t_SymmetricFieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "class_", make_descriptor(SymmetricFieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricFieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricFieldGaussIntegrator::wrap_Object(SymmetricFieldGaussIntegrator(((t_SymmetricFieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SymmetricFieldGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet$BRep::class$ = NULL;
          jmethodID *PolyhedronsSet$BRep::mids$ = NULL;
          bool PolyhedronsSet$BRep::live$ = false;

          jclass PolyhedronsSet$BRep::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aaa4588ba4c2491b] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getFacets_0d9551367f7ecdef] = env->getMethodID(cls, "getFacets", "()Ljava/util/List;");
              mids$[mid_getVertices_0d9551367f7ecdef] = env->getMethodID(cls, "getVertices", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet$BRep::PolyhedronsSet$BRep(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aaa4588ba4c2491b, a0.this$, a1.this$)) {}

          ::java::util::List PolyhedronsSet$BRep::getFacets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFacets_0d9551367f7ecdef]));
          }

          ::java::util::List PolyhedronsSet$BRep::getVertices() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getVertices_0d9551367f7ecdef]));
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
          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args);
          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data);
          static PyGetSetDef t_PolyhedronsSet$BRep__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, facets),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, vertices),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet$BRep__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet$BRep, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getFacets, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet$BRep)[] = {
            { Py_tp_methods, t_PolyhedronsSet$BRep__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet$BRep_init_ },
            { Py_tp_getset, t_PolyhedronsSet$BRep__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet$BRep)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet$BRep, t_PolyhedronsSet$BRep, PolyhedronsSet$BRep);
          PyObject *t_PolyhedronsSet$BRep::wrap_Object(const PolyhedronsSet$BRep& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet$BRep::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet$BRep::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet$BRep), &PY_TYPE_DEF(PolyhedronsSet$BRep), module, "PolyhedronsSet$BRep", 0);
          }

          void t_PolyhedronsSet$BRep::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "class_", make_descriptor(PolyhedronsSet$BRep::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "wrapfn_", make_descriptor(t_PolyhedronsSet$BRep::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet$BRep::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet$BRep::wrap_Object(PolyhedronsSet$BRep(((t_PolyhedronsSet$BRep *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet$BRep::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            PolyhedronsSet$BRep object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PolyhedronsSet$BRep(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
          }
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *NamedParameterJacobianProvider::class$ = NULL;
      jmethodID *NamedParameterJacobianProvider::mids$ = NULL;
      bool NamedParameterJacobianProvider::live$ = false;

      jclass NamedParameterJacobianProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/NamedParameterJacobianProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeParameterJacobian_b987435e157df371] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > NamedParameterJacobianProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_b987435e157df371], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args);

      static PyMethodDef t_NamedParameterJacobianProvider__methods_[] = {
        DECLARE_METHOD(t_NamedParameterJacobianProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, computeParameterJacobian, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NamedParameterJacobianProvider)[] = {
        { Py_tp_methods, t_NamedParameterJacobianProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NamedParameterJacobianProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(NamedParameterJacobianProvider, t_NamedParameterJacobianProvider, NamedParameterJacobianProvider);

      void t_NamedParameterJacobianProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(NamedParameterJacobianProvider), &PY_TYPE_DEF(NamedParameterJacobianProvider), module, "NamedParameterJacobianProvider", 0);
      }

      void t_NamedParameterJacobianProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "class_", make_descriptor(NamedParameterJacobianProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "wrapfn_", make_descriptor(t_NamedParameterJacobianProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NamedParameterJacobianProvider::initializeClass, 1)))
          return NULL;
        return t_NamedParameterJacobianProvider::wrap_Object(NamedParameterJacobianProvider(((t_NamedParameterJacobianProvider *) arg)->object.this$));
      }
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NamedParameterJacobianProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonEOPBasedTransformProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
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
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_9a64cc378cf7ab6b] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_6eea5bc11bda953b] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPBasedTransformProvider::PythonEOPBasedTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonEOPBasedTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonEOPBasedTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonEOPBasedTransformProvider::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPBasedTransformProvider::mids$[PythonEOPBasedTransformProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
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
#include "org/orekit/forces/drag/AbstractDragForceModel.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *AbstractDragForceModel::class$ = NULL;
        jmethodID *AbstractDragForceModel::mids$ = NULL;
        bool AbstractDragForceModel::live$ = false;

        jclass AbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/AbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_isVariable_671750bd736baae4] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Z");
            mids$[mid_isVariable_f16a8b8a0c3e99f0] = env->getMethodID(cls, "isVariable", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;I)Z");
            mids$[mid_isGradientStateDerivative_4fda3059ab91dbfe] = env->getMethodID(cls, "isGradientStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_getGradientDensityWrtStateUsingFiniteDifferences_e6db39fb1a2970fb] = env->getMethodID(cls, "getGradientDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_isDSStateDerivative_4fda3059ab91dbfe] = env->getMethodID(cls, "isDSStateDerivative", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
            mids$[mid_getDSDensityWrtStateUsingFiniteDifferences_8ec02c77a9188017] = env->getMethodID(cls, "getDSDensityWrtStateUsingFiniteDifferences", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean AbstractDragForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
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
        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self);

        static PyMethodDef t_AbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDragForceModel, dependsOnPositionOnly, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDragForceModel)[] = {
          { Py_tp_methods, t_AbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDragForceModel, t_AbstractDragForceModel, AbstractDragForceModel);

        void t_AbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDragForceModel), &PY_TYPE_DEF(AbstractDragForceModel), module, "AbstractDragForceModel", 0);
        }

        void t_AbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "class_", make_descriptor(AbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "wrapfn_", make_descriptor(t_AbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractDragForceModel::wrap_Object(AbstractDragForceModel(((t_AbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDragForceModel_dependsOnPositionOnly(t_AbstractDragForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorBuilder::class$ = NULL;
        jmethodID *PythonAbstractPropagatorBuilder::mids$ = NULL;
        bool PythonAbstractPropagatorBuilder::live$ = false;

        jclass PythonAbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e76d450f29fd903] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DZ)V");
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_5ad9cbd11735eecd] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_9ce0d272477ff7e1] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorBuilder::PythonAbstractPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, jboolean a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2e76d450f29fd903, a0.this$, a1.this$, a2, a3)) {}

        void PythonAbstractPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractPropagatorBuilder::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self);
        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorBuilder, t_PythonAbstractPropagatorBuilder, PythonAbstractPropagatorBuilder);

        void t_PythonAbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorBuilder), &PY_TYPE_DEF(PythonAbstractPropagatorBuilder), module, "PythonAbstractPropagatorBuilder", 1);
        }

        void t_PythonAbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "class_", make_descriptor(PythonAbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonAbstractPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonAbstractPropagatorBuilder_copy2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorBuilder_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorBuilder::wrap_Object(PythonAbstractPropagatorBuilder(((t_PythonAbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorBuilder_init_(t_PythonAbstractPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jboolean a3;
          PythonAbstractPropagatorBuilder object((jobject) NULL);

          if (!parseArgs(args, "kKDZ", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractPropagatorBuilder_finalize(t_PythonAbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_pythonExtension(t_PythonAbstractPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static void JNICALL t_PythonAbstractPropagatorBuilder_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorBuilder::mids$[PythonAbstractPropagatorBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorBuilder_get__self(t_PythonAbstractPropagatorBuilder *self, void *data)
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
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterFunction::class$ = NULL;
      jmethodID *ParameterFunction::mids$ = NULL;
      bool ParameterFunction::live$ = false;

      jclass ParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_ceb9685d0630065e] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterFunction::value(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_ceb9685d0630065e], a0.this$, a1.this$);
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
      static PyObject *t_ParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterFunction_value(t_ParameterFunction *self, PyObject *args);

      static PyMethodDef t_ParameterFunction__methods_[] = {
        DECLARE_METHOD(t_ParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterFunction)[] = {
        { Py_tp_methods, t_ParameterFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterFunction, t_ParameterFunction, ParameterFunction);

      void t_ParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterFunction), &PY_TYPE_DEF(ParameterFunction), module, "ParameterFunction", 0);
      }

      void t_ParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "class_", make_descriptor(ParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "wrapfn_", make_descriptor(t_ParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterFunction::initializeClass, 1)))
          return NULL;
        return t_ParameterFunction::wrap_Object(ParameterFunction(((t_ParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_ParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterFunction_value(t_ParameterFunction *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *KeplerianPropagatorBuilder::class$ = NULL;
        jmethodID *KeplerianPropagatorBuilder::mids$ = NULL;
        bool KeplerianPropagatorBuilder::live$ = false;

        jclass KeplerianPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/KeplerianPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e7d991b18d63c54b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_e0b795670e5b5275] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_5ad9cbd11735eecd] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_c0974e79ac050d47] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/KeplerianPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_e7d991b18d63c54b, a0.this$, a1.this$, a2)) {}

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_e0b795670e5b5275, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel KeplerianPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator KeplerianPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_5ad9cbd11735eecd], a0.this$));
        }

        KeplerianPropagatorBuilder KeplerianPropagatorBuilder::copy() const
        {
          return KeplerianPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_c0974e79ac050d47]));
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
        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagatorBuilder)[] = {
          { Py_tp_methods, t_KeplerianPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagatorBuilder, t_KeplerianPropagatorBuilder, KeplerianPropagatorBuilder);

        void t_KeplerianPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagatorBuilder), &PY_TYPE_DEF(KeplerianPropagatorBuilder), module, "KeplerianPropagatorBuilder", 0);
        }

        void t_KeplerianPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "class_", make_descriptor(KeplerianPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "wrapfn_", make_descriptor(t_KeplerianPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagatorBuilder::wrap_Object(KeplerianPropagatorBuilder(((t_KeplerianPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          KeplerianPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_KeplerianPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFixedStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFixedStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFixedStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractFixedStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldStep_ad2da19d393bd397] = env->getMethodID(cls, "getFieldStep", "(Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkStep_10f281d777284cea] = env->getMethodID(cls, "checkStep", "(D)V");

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
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFixedStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFixedStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFixedStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFixedStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFixedStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFixedStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFixedStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFixedStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractFixedStepFieldIntegratorBuilder, t_AbstractFixedStepFieldIntegratorBuilder, AbstractFixedStepFieldIntegratorBuilder);
        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(const AbstractFixedStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFixedStepFieldIntegratorBuilder *self = (t_AbstractFixedStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFixedStepFieldIntegratorBuilder), module, "AbstractFixedStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractFixedStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFixedStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFixedStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFixedStepFieldIntegratorBuilder::wrap_Object(AbstractFixedStepFieldIntegratorBuilder(((t_AbstractFixedStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFixedStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_of_(t_AbstractFixedStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractFixedStepFieldIntegratorBuilder_get__parameters_(t_AbstractFixedStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldLUDecomposer.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposer::class$ = NULL;
      jmethodID *FieldLUDecomposer::mids$ = NULL;
      bool FieldLUDecomposer::live$ = false;

      jclass FieldLUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_b2f65345b24ac236] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b2f65345b24ac236], a0.this$));
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
      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args);
      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data);
      static PyGetSetDef t_FieldLUDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposer)[] = {
        { Py_tp_methods, t_FieldLUDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldLUDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposer, t_FieldLUDecomposer, FieldLUDecomposer);
      PyObject *t_FieldLUDecomposer::wrap_Object(const FieldLUDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposer), &PY_TYPE_DEF(FieldLUDecomposer), module, "FieldLUDecomposer", 0);
      }

      void t_FieldLUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "class_", make_descriptor(FieldLUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "wrapfn_", make_descriptor(t_FieldLUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposer::wrap_Object(FieldLUDecomposer(((t_FieldLUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldBooleanDetector::class$ = NULL;
        jmethodID *FieldBooleanDetector::mids$ = NULL;
        bool FieldBooleanDetector::live$ = false;

        jclass FieldBooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldBooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_d61c8663f0454d70] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_andCombine_4626eeb861b7efcb] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetectors_0d9551367f7ecdef] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_notCombine_d201107bb76f34db] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldNegateDetector;");
            mids$[mid_orCombine_d61c8663f0454d70] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/FieldEventDetector;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_orCombine_4626eeb861b7efcb] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/FieldBooleanDetector;");
            mids$[mid_create_44da38e4a9a9d26d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldBooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_d61c8663f0454d70], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_4626eeb861b7efcb], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBooleanDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::java::util::List FieldBooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_0d9551367f7ecdef]));
        }

        void FieldBooleanDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::FieldNegateDetector FieldBooleanDetector::notCombine(const ::org::orekit::propagation::events::FieldEventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::FieldNegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_d201107bb76f34db], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_d61c8663f0454d70], a0.this$));
        }

        FieldBooleanDetector FieldBooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldBooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_4626eeb861b7efcb], a0.this$));
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
        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self);
        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args);
        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data);
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data);
        static PyGetSetDef t_FieldBooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBooleanDetector, detectors),
          DECLARE_GET_FIELD(t_FieldBooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBooleanDetector__methods_[] = {
          DECLARE_METHOD(t_FieldBooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldBooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBooleanDetector)[] = {
          { Py_tp_methods, t_FieldBooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldBooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldBooleanDetector, t_FieldBooleanDetector, FieldBooleanDetector);
        PyObject *t_FieldBooleanDetector::wrap_Object(const FieldBooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBooleanDetector *self = (t_FieldBooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBooleanDetector), &PY_TYPE_DEF(FieldBooleanDetector), module, "FieldBooleanDetector", 0);
        }

        void t_FieldBooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "class_", make_descriptor(FieldBooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "wrapfn_", make_descriptor(t_FieldBooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBooleanDetector::initializeClass, 1)))
            return NULL;
          return t_FieldBooleanDetector::wrap_Object(FieldBooleanDetector(((t_FieldBooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldBooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBooleanDetector_of_(t_FieldBooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldBooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::andCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_g(t_FieldBooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_getDetectors(t_FieldBooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldBooleanDetector_init(t_FieldBooleanDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldBooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_FieldBooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldNegateDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_FieldNegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_FieldBooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::FieldEventDetector > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              FieldBooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::FieldBooleanDetector::orCombine(a0));
                return t_FieldBooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_FieldBooleanDetector_get__parameters_(t_FieldBooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBooleanDetector_get__detectors(t_FieldBooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbDescription::class$ = NULL;
        jmethodID *DcbDescription::mids$ = NULL;
        bool DcbDescription::live$ = false;

        jclass DcbDescription::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbDescription");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBiasMode_3cffd47377eca18a] = env->getMethodID(cls, "getBiasMode", "()Ljava/lang/String;");
            mids$[mid_getDeterminationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getDeterminationMethod", "()Ljava/lang/String;");
            mids$[mid_getObservationSampling_412668abc8d889e9] = env->getMethodID(cls, "getObservationSampling", "()I");
            mids$[mid_getParameterSpacing_412668abc8d889e9] = env->getMethodID(cls, "getParameterSpacing", "()I");
            mids$[mid_getTimeSystem_2700635415605e4d] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_setBiasMode_f5ffdf29129ef90a] = env->getMethodID(cls, "setBiasMode", "(Ljava/lang/String;)V");
            mids$[mid_setDeterminationMethod_f5ffdf29129ef90a] = env->getMethodID(cls, "setDeterminationMethod", "(Ljava/lang/String;)V");
            mids$[mid_setObservationSampling_a3da1a935cb37f7b] = env->getMethodID(cls, "setObservationSampling", "(I)V");
            mids$[mid_setParameterSpacing_a3da1a935cb37f7b] = env->getMethodID(cls, "setParameterSpacing", "(I)V");
            mids$[mid_setTimeSystem_562aaa7511f66c1c] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbDescription::DcbDescription() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::java::lang::String DcbDescription::getBiasMode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBiasMode_3cffd47377eca18a]));
        }

        ::java::lang::String DcbDescription::getDeterminationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeterminationMethod_3cffd47377eca18a]));
        }

        jint DcbDescription::getObservationSampling() const
        {
          return env->callIntMethod(this$, mids$[mid_getObservationSampling_412668abc8d889e9]);
        }

        jint DcbDescription::getParameterSpacing() const
        {
          return env->callIntMethod(this$, mids$[mid_getParameterSpacing_412668abc8d889e9]);
        }

        ::org::orekit::gnss::TimeSystem DcbDescription::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_2700635415605e4d]));
        }

        void DcbDescription::setBiasMode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBiasMode_f5ffdf29129ef90a], a0.this$);
        }

        void DcbDescription::setDeterminationMethod(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDeterminationMethod_f5ffdf29129ef90a], a0.this$);
        }

        void DcbDescription::setObservationSampling(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObservationSampling_a3da1a935cb37f7b], a0);
        }

        void DcbDescription::setParameterSpacing(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterSpacing_a3da1a935cb37f7b], a0);
        }

        void DcbDescription::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_562aaa7511f66c1c], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self);
        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self);
        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg);
        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data);
        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data);
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data);
        static PyGetSetDef t_DcbDescription__fields_[] = {
          DECLARE_GETSET_FIELD(t_DcbDescription, biasMode),
          DECLARE_GETSET_FIELD(t_DcbDescription, determinationMethod),
          DECLARE_GETSET_FIELD(t_DcbDescription, observationSampling),
          DECLARE_GETSET_FIELD(t_DcbDescription, parameterSpacing),
          DECLARE_GETSET_FIELD(t_DcbDescription, timeSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbDescription__methods_[] = {
          DECLARE_METHOD(t_DcbDescription, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbDescription, getBiasMode, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getDeterminationMethod, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getObservationSampling, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getParameterSpacing, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_DcbDescription, setBiasMode, METH_O),
          DECLARE_METHOD(t_DcbDescription, setDeterminationMethod, METH_O),
          DECLARE_METHOD(t_DcbDescription, setObservationSampling, METH_O),
          DECLARE_METHOD(t_DcbDescription, setParameterSpacing, METH_O),
          DECLARE_METHOD(t_DcbDescription, setTimeSystem, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbDescription)[] = {
          { Py_tp_methods, t_DcbDescription__methods_ },
          { Py_tp_init, (void *) t_DcbDescription_init_ },
          { Py_tp_getset, t_DcbDescription__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbDescription)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbDescription, t_DcbDescription, DcbDescription);

        void t_DcbDescription::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbDescription), &PY_TYPE_DEF(DcbDescription), module, "DcbDescription", 0);
        }

        void t_DcbDescription::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "class_", make_descriptor(DcbDescription::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "wrapfn_", make_descriptor(t_DcbDescription::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbDescription), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbDescription_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbDescription::initializeClass, 1)))
            return NULL;
          return t_DcbDescription::wrap_Object(DcbDescription(((t_DcbDescription *) arg)->object.this$));
        }
        static PyObject *t_DcbDescription_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbDescription::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbDescription_init_(t_DcbDescription *self, PyObject *args, PyObject *kwds)
        {
          DcbDescription object((jobject) NULL);

          INT_CALL(object = DcbDescription());
          self->object = object;

          return 0;
        }

        static PyObject *t_DcbDescription_getBiasMode(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getBiasMode());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getDeterminationMethod(t_DcbDescription *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeterminationMethod());
          return j2p(result);
        }

        static PyObject *t_DcbDescription_getObservationSampling(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getObservationSampling());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getParameterSpacing(t_DcbDescription *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getParameterSpacing());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DcbDescription_getTimeSystem(t_DcbDescription *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_DcbDescription_setBiasMode(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setBiasMode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setBiasMode", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setDeterminationMethod(t_DcbDescription *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDeterminationMethod(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDeterminationMethod", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setObservationSampling(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setObservationSampling(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObservationSampling", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setParameterSpacing(t_DcbDescription *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setParameterSpacing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterSpacing", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_setTimeSystem(t_DcbDescription *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_DcbDescription_get__biasMode(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getBiasMode());
          return j2p(value);
        }
        static int t_DcbDescription_set__biasMode(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setBiasMode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "biasMode", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__determinationMethod(t_DcbDescription *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeterminationMethod());
          return j2p(value);
        }
        static int t_DcbDescription_set__determinationMethod(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDeterminationMethod(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "determinationMethod", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__observationSampling(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getObservationSampling());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__observationSampling(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setObservationSampling(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observationSampling", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__parameterSpacing(t_DcbDescription *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getParameterSpacing());
          return PyLong_FromLong((long) value);
        }
        static int t_DcbDescription_set__parameterSpacing(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setParameterSpacing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parameterSpacing", arg);
          return -1;
        }

        static PyObject *t_DcbDescription_get__timeSystem(t_DcbDescription *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_DcbDescription_set__timeSystem(t_DcbDescription *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/AbstractFieldMatrix.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractFieldMatrix::class$ = NULL;
      jmethodID *AbstractFieldMatrix::mids$ = NULL;
      bool AbstractFieldMatrix::live$ = false;

      jclass AbstractFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_60dc3401cb1a0936] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_a6d8caed839ba827] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_1d6b27621d7bea96] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_34a2b695f72320ee] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_37e94d303ae8db89] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_f57999d9fe0fa8c7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_5bf832a9d0c2a7e7] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_86145252a1591a99] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_6f1c886add96d5a0] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_7007d1e2762517a8] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a7f16df0741fd579] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_5bf832a9d0c2a7e7] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_86145252a1591a99] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_6f1c886add96d5a0] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_827ce2a37cea418a] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_455eec4445ba70d4] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_ce0470d468f80a56] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_89b302893bdbe1f1] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_60dc3401cb1a0936] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_a6d8caed839ba827] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_operate_ee5975d9ac401b83] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_a7c6926a425759ad] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_86145252a1591a99] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_ee5975d9ac401b83] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_60dc3401cb1a0936] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_a7c6926a425759ad] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_59a8d7279b1a66f0] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_59a8d7279b1a66f0] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_25fe2a3042ba75d1] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_82ae94aaf3c46d50] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_502f8ed205bebebd] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_a6d8caed839ba827] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_25fe2a3042ba75d1] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_82ae94aaf3c46d50] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_502f8ed205bebebd] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_60dc3401cb1a0936] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_1d6b27621d7bea96] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7d4c76689ca2f3c1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_76fd1db3efda6447] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_516fb751ccd95d3b] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_e5d38b926487f1a5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkRowIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "checkRowIndex", "(I)V");
          mids$[mid_checkColumnIndex_a3da1a935cb37f7b] = env->getMethodID(cls, "checkColumnIndex", "(I)V");
          mids$[mid_checkSubMatrixIndex_eddd40a64ba0f5b7] = env->getMethodID(cls, "checkSubMatrixIndex", "(IIII)V");
          mids$[mid_checkSubMatrixIndex_2f87d6c2a43180ff] = env->getMethodID(cls, "checkSubMatrixIndex", "([I[I)V");
          mids$[mid_checkAdditionCompatible_33e6ddbf6bb140a5] = env->getMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkSubtractionCompatible_33e6ddbf6bb140a5] = env->getMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkMultiplicationCompatible_33e6ddbf6bb140a5] = env->getMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_extractField_07a3e36bf34488ec] = env->getStaticMethodID(cls, "extractField", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");
          mids$[mid_extractField_cfbbe03a826275fc] = env->getStaticMethodID(cls, "extractField", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_60dc3401cb1a0936], a0.this$));
      }

      void AbstractFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_1d6b27621d7bea96]));
      }

      void AbstractFieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_34a2b695f72320ee], a0.this$, a1.this$, a2.this$);
      }

      void AbstractFieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_37e94d303ae8db89], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_f57999d9fe0fa8c7], a0, a1));
      }

      jboolean AbstractFieldMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_5bf832a9d0c2a7e7], a0));
      }

      jint AbstractFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_86145252a1591a99], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_6f1c886add96d5a0], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > AbstractFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_7007d1e2762517a8]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a7f16df0741fd579], a0, a1));
      }

      ::org::hipparchus::Field AbstractFieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_5bf832a9d0c2a7e7], a0));
      }

      jint AbstractFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_86145252a1591a99], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_6f1c886add96d5a0], a0));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_827ce2a37cea418a], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_455eec4445ba70d4], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_ce0470d468f80a56]));
      }

      jint AbstractFieldMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      jboolean AbstractFieldMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_89b302893bdbe1f1]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_60dc3401cb1a0936], a0.this$));
      }

      void AbstractFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_ee5975d9ac401b83], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_a7c6926a425759ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_86145252a1591a99], a0));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_ee5975d9ac401b83], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_60dc3401cb1a0936], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_a7c6926a425759ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_59a8d7279b1a66f0], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_59a8d7279b1a66f0], a0.this$));
      }

      void AbstractFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_25fe2a3042ba75d1], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_82ae94aaf3c46d50], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_502f8ed205bebebd], a0, a1.this$);
      }

      void AbstractFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      void AbstractFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_25fe2a3042ba75d1], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_82ae94aaf3c46d50], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_502f8ed205bebebd], a0, a1.this$);
      }

      void AbstractFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_7c2e1cd72b6eb4ce], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_60dc3401cb1a0936], a0.this$));
      }

      ::java::lang::String AbstractFieldMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_1d6b27621d7bea96]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7d4c76689ca2f3c1], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_76fd1db3efda6447], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_516fb751ccd95d3b], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_e5d38b926487f1a5], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data);
      static PyGetSetDef t_AbstractFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, data),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, field),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, square),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, trace),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldMatrix)[] = {
        { Py_tp_methods, t_AbstractFieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldMatrix, t_AbstractFieldMatrix, AbstractFieldMatrix);
      PyObject *t_AbstractFieldMatrix::wrap_Object(const AbstractFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldMatrix), &PY_TYPE_DEF(AbstractFieldMatrix), module, "AbstractFieldMatrix", 0);
      }

      void t_AbstractFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "class_", make_descriptor(AbstractFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "wrapfn_", make_descriptor(t_AbstractFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldMatrix::wrap_Object(AbstractFieldMatrix(((t_AbstractFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg)
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

      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
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
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args)
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
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
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

      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args)
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

      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args)
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
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data)
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
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinates::mids$ = NULL;
      bool TimeStampedFieldPVCoordinates::live$ = false;

      jclass TimeStampedFieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_287992e1be2f741b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
          mids$[mid_init$_be4a763764fca433] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3662f4f3d5ceb7b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_ba43a5f0914e9ada] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_787a95047ac068ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_dd3b29be3171ef13] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_af6d4d196c7a2c20] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c051df2d044d00ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a14a16331d5f2b77] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_264c2c939e537026] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3f4828593e8baa0b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_f6b7835da097715f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_ba774aad389cff86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_e632fd0ade92943b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_55e8cbd742515bc1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_5d4fba259711cb3f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_ce0a5091dff76f76] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4c91ace03dab7333] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_60d304cf92aedfe6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_ecc4fb9310f8d0bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_68fb5b56ef6bbd86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c624442a4dc7968d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_657c889ec221a7a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_25cfa2aa8962d285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_2eb0156eea2a510a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_97337ceb85d50c1a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_fe39c48a4de0cba5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_f447d39279cf90d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_af66ea9232dfcd29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_381a7ac9b6d39968] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_efda25d1bdea6647] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_dabd12216765412e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_30b51fed958970f2] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_shiftedBy_e68f08e83f93f159] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_8873a127a4f312ad] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTimeStampedPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_287992e1be2f741b, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_be4a763764fca433, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3662f4f3d5ceb7b5, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ba43a5f0914e9ada, a0.this$, a1.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_787a95047ac068ac, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_dd3b29be3171ef13, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_af6d4d196c7a2c20, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c051df2d044d00ed, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a14a16331d5f2b77, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_264c2c939e537026, a0.this$, a1, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3f4828593e8baa0b, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f6b7835da097715f, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ba774aad389cff86, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e632fd0ade92943b, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_55e8cbd742515bc1, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_5d4fba259711cb3f, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ce0a5091dff76f76, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_4c91ace03dab7333, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_60d304cf92aedfe6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ecc4fb9310f8d0bd, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_68fb5b56ef6bbd86, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c624442a4dc7968d, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_657c889ec221a7a4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_25cfa2aa8962d285, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_2eb0156eea2a510a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_97337ceb85d50c1a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fe39c48a4de0cba5, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f447d39279cf90d3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::FieldPVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_af66ea9232dfcd29, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_381a7ac9b6d39968, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::FieldPVCoordinates & a2, jdouble a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5, const ::org::orekit::utils::FieldPVCoordinates & a6, jdouble a7, const ::org::orekit::utils::FieldPVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_efda25d1bdea6647, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      TimeStampedFieldPVCoordinates::TimeStampedFieldPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::utils::PVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::utils::PVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::FieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_dabd12216765412e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldPVCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_30b51fed958970f2], a0));
      }

      TimeStampedFieldPVCoordinates TimeStampedFieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_e68f08e83f93f159], a0.this$));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::java::lang::String TimeStampedFieldPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8873a127a4f312ad], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TimeStampedFieldPVCoordinates::toTimeStampedPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_daf15abc21907508]));
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
      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinates, toTimeStampedPVCoordinates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinates, t_TimeStampedFieldPVCoordinates, TimeStampedFieldPVCoordinates);
      PyObject *t_TimeStampedFieldPVCoordinates::wrap_Object(const TimeStampedFieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinates *self = (t_TimeStampedFieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinates), &PY_TYPE_DEF(TimeStampedFieldPVCoordinates), module, "TimeStampedFieldPVCoordinates", 0);
      }

      void t_TimeStampedFieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "class_", make_descriptor(TimeStampedFieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinates::wrap_Object(TimeStampedFieldPVCoordinates(((t_TimeStampedFieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_of_(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinates_init_(t_TimeStampedFieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedPVCoordinates a1((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
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
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDKDKDKDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKKKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKkKkKkKk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            ::org::orekit::utils::FieldPVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            jdouble a7;
            ::org::orekit::utils::FieldPVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KDKDKDKDK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a7, &a8, &p8, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedFieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKkKkKkKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedFieldPVCoordinates_getDate(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_shiftedBy(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toString(t_TimeStampedFieldPVCoordinates *self, PyObject *args)
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
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_toTimeStampedPVCoordinates(t_TimeStampedFieldPVCoordinates *self)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinates_get__parameters_(t_TimeStampedFieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinates_get__date(t_TimeStampedFieldPVCoordinates *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinates::class$ = NULL;
      jmethodID *FieldPVCoordinates::mids$ = NULL;
      bool FieldPVCoordinates::live$ = false;

      jclass FieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_282cea09b82f4134] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b2e28a0995250182] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_4ed5fdbdf7016e23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_82fdb17849f946ec] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_6a2a42d58caa4d27] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_e782294a839e0555] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_eff98b08f4f6424e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_877643588e302837] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_841b0434a4d012cc] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8ec479cdceb23ae1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_67ace1d97ccd9fd7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_17dca5b2c9782f96] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_b60fc950e96eedb6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_009099fa61888802] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_b87b24ac9f6102ab] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d139b21913043525] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_f1c731c72489bed5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_3462ff1a56800c66] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_crossProduct_5954fda0d828683a] = env->getMethodID(cls, "crossProduct", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_estimateVelocity_afbdb6b4ae03af83] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAcceleration_2d64addf4c3391d9] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngularVelocity_2d64addf4c3391d9] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getMomentum_2d64addf4c3391d9] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_2d64addf4c3391d9] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_2d64addf4c3391d9] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZero_dda60cf1427afe76] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_negate_950575861e9716b3] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_normalize_950575861e9716b3] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_positionShiftedBy_68e9ce281b70d410] = env->getMethodID(cls, "positionShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_11ef0a6028c1d437] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_shiftedBy_c486b08837b7fbd4] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructurePV_c4ba5dc533a7295c] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_57f172e29ab8adbf] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toPVCoordinates_77bd7b3cdab2713e] = env->getMethodID(cls, "toPVCoordinates", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_950575861e9716b3] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_2d64addf4c3391d9] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_950575861e9716b3] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_2d64addf4c3391d9] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_282cea09b82f4134, a0.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2e28a0995250182, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const FieldPVCoordinates & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ed5fdbdf7016e23, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82fdb17849f946ec, a0, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2a42d58caa4d27, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e782294a839e0555, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eff98b08f4f6424e, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_877643588e302837, a0.this$, a1.this$, a2.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_841b0434a4d012cc, a0, a1.this$, a2, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ec479cdceb23ae1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67ace1d97ccd9fd7, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17dca5b2c9782f96, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b60fc950e96eedb6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_009099fa61888802, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5, jdouble a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b87b24ac9f6102ab, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d139b21913043525, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::orekit::utils::PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1c731c72489bed5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates FieldPVCoordinates::blendArithmeticallyWith(const FieldPVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_3462ff1a56800c66], a0.this$, a1.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::crossProduct(const FieldPVCoordinates & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_crossProduct_5954fda0d828683a], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_afbdb6b4ae03af83], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_2d64addf4c3391d9]));
      }

      FieldPVCoordinates FieldPVCoordinates::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getZero_dda60cf1427afe76], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::negate() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_950575861e9716b3]));
      }

      FieldPVCoordinates FieldPVCoordinates::normalize() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_950575861e9716b3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::positionShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_68e9ce281b70d410], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_11ef0a6028c1d437], a0));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_c486b08837b7fbd4], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_c4ba5dc533a7295c], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_57f172e29ab8adbf], a0));
      }

      ::org::orekit::utils::PVCoordinates FieldPVCoordinates::toPVCoordinates() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_toPVCoordinates_77bd7b3cdab2713e]));
      }

      ::java::lang::String FieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative1PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_950575861e9716b3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_2d64addf4c3391d9]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative2PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_950575861e9716b3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_2d64addf4c3391d9]));
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
      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args);
      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data);
      static PyGetSetDef t_FieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, momentum),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, position),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, velocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, crossProduct, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toPVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinates)[] = {
        { Py_tp_methods, t_FieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldPVCoordinates_init_ },
        { Py_tp_getset, t_FieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinates, t_FieldPVCoordinates, FieldPVCoordinates);
      PyObject *t_FieldPVCoordinates::wrap_Object(const FieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinates), &PY_TYPE_DEF(FieldPVCoordinates), module, "FieldPVCoordinates", 0);
      }

      void t_FieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "class_", make_descriptor(FieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "wrapfn_", make_descriptor(t_FieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinates::wrap_Object(FieldPVCoordinates(((t_FieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DK", FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::utils::PVCoordinates a7((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.crossProduct(a0));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::getZero(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toPVCoordinates());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data)
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
#include "org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d326b3da32a40ffa] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_fab028e15eb3891b] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_9befcf7b8a2dd2f1] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d326b3da32a40ffa, a0, a1.this$)) {}

      TimeStampedPVCoordinatesHermiteInterpolator::TimeStampedPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_fab028e15eb3891b, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_6c4898d6ec0c3837]));
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
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinatesHermiteInterpolator, t_TimeStampedPVCoordinatesHermiteInterpolator, TimeStampedPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPVCoordinatesHermiteInterpolator *self = (t_TimeStampedPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedPVCoordinatesHermiteInterpolator), module, "TimeStampedPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedPVCoordinatesHermiteInterpolator(((t_TimeStampedPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_of_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPVCoordinatesHermiteInterpolator_init_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates);
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

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *EllipsoidId::class$ = NULL;
        jmethodID *EllipsoidId::mids$ = NULL;
        bool EllipsoidId::live$ = false;
        EllipsoidId *EllipsoidId::GRS80 = NULL;
        EllipsoidId *EllipsoidId::IERS2003 = NULL;
        EllipsoidId *EllipsoidId::IERS96 = NULL;
        EllipsoidId *EllipsoidId::WGS84 = NULL;

        jclass EllipsoidId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/EllipsoidId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_0d9db86e6ee57f0e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/EllipsoidId;");
            mids$[mid_values_3b54e0df6d3693fe] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/EllipsoidId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GRS80 = new EllipsoidId(env->getStaticObjectField(cls, "GRS80", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS2003 = new EllipsoidId(env->getStaticObjectField(cls, "IERS2003", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS96 = new EllipsoidId(env->getStaticObjectField(cls, "IERS96", "Lorg/orekit/rugged/api/EllipsoidId;"));
            WGS84 = new EllipsoidId(env->getStaticObjectField(cls, "WGS84", "Lorg/orekit/rugged/api/EllipsoidId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipsoidId EllipsoidId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EllipsoidId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0d9db86e6ee57f0e], a0.this$));
        }

        JArray< EllipsoidId > EllipsoidId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EllipsoidId >(env->callStaticObjectMethod(cls, mids$[mid_values_3b54e0df6d3693fe]));
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
        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args);
        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EllipsoidId_values(PyTypeObject *type);
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data);
        static PyGetSetDef t_EllipsoidId__fields_[] = {
          DECLARE_GET_FIELD(t_EllipsoidId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipsoidId__methods_[] = {
          DECLARE_METHOD(t_EllipsoidId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, of_, METH_VARARGS),
          DECLARE_METHOD(t_EllipsoidId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipsoidId)[] = {
          { Py_tp_methods, t_EllipsoidId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EllipsoidId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipsoidId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EllipsoidId, t_EllipsoidId, EllipsoidId);
        PyObject *t_EllipsoidId::wrap_Object(const EllipsoidId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EllipsoidId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EllipsoidId::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipsoidId), &PY_TYPE_DEF(EllipsoidId), module, "EllipsoidId", 0);
        }

        void t_EllipsoidId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "class_", make_descriptor(EllipsoidId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "wrapfn_", make_descriptor(t_EllipsoidId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "boxfn_", make_descriptor(boxObject));
          env->getClass(EllipsoidId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "GRS80", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::GRS80)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS2003", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS2003)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS96", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS96)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "WGS84", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::WGS84)));
        }

        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipsoidId::initializeClass, 1)))
            return NULL;
          return t_EllipsoidId::wrap_Object(EllipsoidId(((t_EllipsoidId *) arg)->object.this$));
        }
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipsoidId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EllipsoidId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::valueOf(a0));
            return t_EllipsoidId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EllipsoidId_values(PyTypeObject *type)
        {
          JArray< EllipsoidId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::values());
          return JArray<jobject>(result.this$).wrap(t_EllipsoidId::wrap_jobject);
        }
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/MidpointIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointIntegrator::class$ = NULL;
        jmethodID *MidpointIntegrator::mids$ = NULL;
        bool MidpointIntegrator::live$ = false;

        jclass MidpointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_fd7481b8f203b9b6] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegrator::MidpointIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        JArray< JArray< jdouble > > MidpointIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > MidpointIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > MidpointIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
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
        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args);
        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data);
        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data);
        static PyGetSetDef t_MidpointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegrator)[] = {
          { Py_tp_methods, t_MidpointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegrator_init_ },
          { Py_tp_getset, t_MidpointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointIntegrator, t_MidpointIntegrator, MidpointIntegrator);

        void t_MidpointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegrator), &PY_TYPE_DEF(MidpointIntegrator), module, "MidpointIntegrator", 0);
        }

        void t_MidpointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "class_", make_descriptor(MidpointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "wrapfn_", make_descriptor(t_MidpointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegrator::wrap_Object(MidpointIntegrator(((t_MidpointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegrator_init_(t_MidpointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegrator_getA(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getB(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointIntegrator_getC(t_MidpointIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MidpointIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_MidpointIntegrator_get__a(t_MidpointIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointIntegrator_get__b(t_MidpointIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_MidpointIntegrator_get__c(t_MidpointIntegrator *self, void *data)
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
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDouble::class$ = NULL;
      jmethodID *TimeStampedDouble::mids$ = NULL;
      bool TimeStampedDouble::live$ = false;

      jclass TimeStampedDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ca6118c75b70100] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_557b8123390d8d0c] = env->getMethodID(cls, "getValue", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDouble::TimeStampedDouble(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ca6118c75b70100, a0, a1.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedDouble::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble TimeStampedDouble::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_557b8123390d8d0c]);
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
      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data);
      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data);
      static PyGetSetDef t_TimeStampedDouble__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDouble, date),
        DECLARE_GET_FIELD(t_TimeStampedDouble, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDouble__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedDouble, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDouble)[] = {
        { Py_tp_methods, t_TimeStampedDouble__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDouble_init_ },
        { Py_tp_getset, t_TimeStampedDouble__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedDouble, t_TimeStampedDouble, TimeStampedDouble);

      void t_TimeStampedDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDouble), &PY_TYPE_DEF(TimeStampedDouble), module, "TimeStampedDouble", 0);
      }

      void t_TimeStampedDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "class_", make_descriptor(TimeStampedDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "wrapfn_", make_descriptor(t_TimeStampedDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDouble::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDouble::wrap_Object(TimeStampedDouble(((t_TimeStampedDouble *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeStampedDouble object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TimeStampedDouble(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
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

              ::java::lang::Class *AttitudePhysicalPropertiesKey::class$ = NULL;
              jmethodID *AttitudePhysicalPropertiesKey::mids$ = NULL;
              bool AttitudePhysicalPropertiesKey::live$ = false;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::COMMENT = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRAG_COEFF = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRY_MASS = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXX = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IZZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::WET_MASS = NULL;

              jclass AttitudePhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_ab4d2cc52dce74b0] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;)Z");
                  mids$[mid_valueOf_f6b41ab08f5d1e78] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");
                  mids$[mid_values_a83944222b9b3d03] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRAG_COEFF = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRY_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  INERTIA_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXX = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IZZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  WET_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudePhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_ab4d2cc52dce74b0], a0.this$, a1.this$, a2.this$);
              }

              AttitudePhysicalPropertiesKey AttitudePhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudePhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f6b41ab08f5d1e78], a0.this$));
              }

              JArray< AttitudePhysicalPropertiesKey > AttitudePhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudePhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a83944222b9b3d03]));
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
              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_AttitudePhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudePhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_AttitudePhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudePhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalPropertiesKey, t_AttitudePhysicalPropertiesKey, AttitudePhysicalPropertiesKey);
              PyObject *t_AttitudePhysicalPropertiesKey::wrap_Object(const AttitudePhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudePhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudePhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalPropertiesKey), &PY_TYPE_DEF(AttitudePhysicalPropertiesKey), module, "AttitudePhysicalPropertiesKey", 0);
              }

              void t_AttitudePhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "class_", make_descriptor(AttitudePhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "wrapfn_", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudePhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "COMMENT", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRAG_COEFF", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRAG_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "INERTIA_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXX", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IZZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "WET_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalPropertiesKey::wrap_Object(AttitudePhysicalPropertiesKey(((t_AttitudePhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudePhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::valueOf(a0));
                  return t_AttitudePhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< AttitudePhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudePhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data)
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

#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateOptimizer::class$ = NULL;
          jmethodID *MultivariateOptimizer::mids$ = NULL;
          bool MultivariateOptimizer::live$ = false;

          jclass MultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeObjectiveValue_b060e4326765ccf1] = env->getMethodID(cls, "computeObjectiveValue", "([D)D");
              mids$[mid_getGoalType_cf6b21746452ef78] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_optimize_9d04816d74472b44] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble MultivariateOptimizer::computeObjectiveValue(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_computeObjectiveValue_b060e4326765ccf1], a0.this$);
          }

          ::org::hipparchus::optim::nonlinear::scalar::GoalType MultivariateOptimizer::getGoalType() const
          {
            return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_cf6b21746452ef78]));
          }

          ::org::hipparchus::optim::PointValuePair MultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_9d04816d74472b44], a0.this$));
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
        namespace scalar {
          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg);
          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self);
          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args);
          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data);
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data);
          static PyGetSetDef t_MultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_MultivariateOptimizer, goalType),
            DECLARE_GET_FIELD(t_MultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_MultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, computeObjectiveValue, METH_O),
            DECLARE_METHOD(t_MultivariateOptimizer, getGoalType, METH_NOARGS),
            DECLARE_METHOD(t_MultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateOptimizer)[] = {
            { Py_tp_methods, t_MultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(MultivariateOptimizer, t_MultivariateOptimizer, MultivariateOptimizer);
          PyObject *t_MultivariateOptimizer::wrap_Object(const MultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MultivariateOptimizer *self = (t_MultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateOptimizer), &PY_TYPE_DEF(MultivariateOptimizer), module, "MultivariateOptimizer", 0);
          }

          void t_MultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "class_", make_descriptor(MultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "wrapfn_", make_descriptor(t_MultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_MultivariateOptimizer::wrap_Object(MultivariateOptimizer(((t_MultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_MultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MultivariateOptimizer_of_(t_MultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MultivariateOptimizer_computeObjectiveValue(t_MultivariateOptimizer *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.computeObjectiveValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeObjectiveValue", arg);
            return NULL;
          }

          static PyObject *t_MultivariateOptimizer_getGoalType(t_MultivariateOptimizer *self)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
            OBJ_CALL(result = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
          }

          static PyObject *t_MultivariateOptimizer_optimize(t_MultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(MultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_MultivariateOptimizer_get__parameters_(t_MultivariateOptimizer *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MultivariateOptimizer_get__goalType(t_MultivariateOptimizer *self, void *data)
          {
            ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
            OBJ_CALL(value = self->object.getGoalType());
            return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHIJjsPolynomials::class$ = NULL;
            jmethodID *FieldGHIJjsPolynomials::mids$ = NULL;
            bool FieldGHIJjsPolynomials::live$ = false;

            jclass FieldGHIJjsPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c6084435a35e7162] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGjs_431f825c752f7b4c] = env->getMethodID(cls, "getGjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHjs_431f825c752f7b4c] = env->getMethodID(cls, "getHjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getIjs_431f825c752f7b4c] = env->getMethodID(cls, "getIjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getJjs_431f825c752f7b4c] = env->getMethodID(cls, "getJjs", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdAlpha_431f825c752f7b4c] = env->getMethodID(cls, "getdGjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdBeta_431f825c752f7b4c] = env->getMethodID(cls, "getdGjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdh_431f825c752f7b4c] = env->getMethodID(cls, "getdGjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGjsdk_431f825c752f7b4c] = env->getMethodID(cls, "getdGjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdAlpha_431f825c752f7b4c] = env->getMethodID(cls, "getdHjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdBeta_431f825c752f7b4c] = env->getMethodID(cls, "getdHjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdh_431f825c752f7b4c] = env->getMethodID(cls, "getdHjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHjsdk_431f825c752f7b4c] = env->getMethodID(cls, "getdHjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdAlpha_431f825c752f7b4c] = env->getMethodID(cls, "getdIjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdBeta_431f825c752f7b4c] = env->getMethodID(cls, "getdIjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdh_431f825c752f7b4c] = env->getMethodID(cls, "getdIjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdIjsdk_431f825c752f7b4c] = env->getMethodID(cls, "getdIjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdAlpha_431f825c752f7b4c] = env->getMethodID(cls, "getdJjsdAlpha", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdBeta_431f825c752f7b4c] = env->getMethodID(cls, "getdJjsdBeta", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdh_431f825c752f7b4c] = env->getMethodID(cls, "getdJjsdh", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdJjsdk_431f825c752f7b4c] = env->getMethodID(cls, "getdJjsdk", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHIJjsPolynomials::FieldGHIJjsPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6084435a35e7162, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getGjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGjs_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getHjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHjs_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getIjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIjs_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getJjs(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getJjs_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdAlpha_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdBeta_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdh_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdGjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGjsdk_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdAlpha_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdBeta_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdh_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdHjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHjsdk_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdAlpha_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdBeta_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdh_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdIjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdIjsdk_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdAlpha(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdAlpha_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdBeta(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdBeta_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdh(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdh_431f825c752f7b4c], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHIJjsPolynomials::getdJjsdk(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdJjsdk_431f825c752f7b4c], a0, a1));
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
            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHIJjsPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHIJjsPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHIJjsPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getGjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getHjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getIjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getJjs, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdGjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdHjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdIjsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHIJjsPolynomials, getdJjsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHIJjsPolynomials)[] = {
              { Py_tp_methods, t_FieldGHIJjsPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHIJjsPolynomials_init_ },
              { Py_tp_getset, t_FieldGHIJjsPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHIJjsPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHIJjsPolynomials, t_FieldGHIJjsPolynomials, FieldGHIJjsPolynomials);
            PyObject *t_FieldGHIJjsPolynomials::wrap_Object(const FieldGHIJjsPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHIJjsPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHIJjsPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHIJjsPolynomials *self = (t_FieldGHIJjsPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHIJjsPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHIJjsPolynomials), &PY_TYPE_DEF(FieldGHIJjsPolynomials), module, "FieldGHIJjsPolynomials", 0);
            }

            void t_FieldGHIJjsPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "class_", make_descriptor(FieldGHIJjsPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "wrapfn_", make_descriptor(t_FieldGHIJjsPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHIJjsPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHIJjsPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHIJjsPolynomials::wrap_Object(FieldGHIJjsPolynomials(((t_FieldGHIJjsPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHIJjsPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHIJjsPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHIJjsPolynomials_of_(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHIJjsPolynomials_init_(t_FieldGHIJjsPolynomials *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGHIJjsPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGHIJjsPolynomials(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getGjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getHjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getHjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getIjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getIjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getIjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getJjs(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getJjs(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getJjs", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdGjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdGjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdHjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdHjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdIjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdIjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdIjsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdAlpha(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdAlpha(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdBeta(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdBeta(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdh(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdh(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHIJjsPolynomials_getdJjsdk(t_FieldGHIJjsPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdJjsdk(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdJjsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHIJjsPolynomials_get__parameters_(t_FieldGHIJjsPolynomials *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolver::class$ = NULL;
          jmethodID *IntegerLeastSquareSolver::mids$ = NULL;
          bool IntegerLeastSquareSolver::live$ = false;

          jclass IntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_solveILS_78e4e9f588c2bfe0] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > IntegerLeastSquareSolver::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_78e4e9f588c2bfe0], a0, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolver, t_IntegerLeastSquareSolver, IntegerLeastSquareSolver);

          void t_IntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolver), &PY_TYPE_DEF(IntegerLeastSquareSolver), module, "IntegerLeastSquareSolver", 0);
          }

          void t_IntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "class_", make_descriptor(IntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolver::wrap_Object(IntegerLeastSquareSolver(((t_IntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractSet::class$ = NULL;
    jmethodID *AbstractSet::mids$ = NULL;
    bool AbstractSet::live$ = false;

    jclass AbstractSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_removeAll_801a92d34e44726e] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractSet::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jint AbstractSet::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean AbstractSet::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_801a92d34e44726e], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data);
    static PyGetSetDef t_AbstractSet__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractSet__methods_[] = {
      DECLARE_METHOD(t_AbstractSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, removeAll, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractSet)[] = {
      { Py_tp_methods, t_AbstractSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractSet, t_AbstractSet, AbstractSet);
    PyObject *t_AbstractSet::wrap_Object(const AbstractSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractSet::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractSet), &PY_TYPE_DEF(AbstractSet), module, "AbstractSet", 0);
    }

    void t_AbstractSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "class_", make_descriptor(AbstractSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "wrapfn_", make_descriptor(t_AbstractSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractSet::initializeClass, 1)))
        return NULL;
      return t_AbstractSet::wrap_Object(AbstractSet(((t_AbstractSet *) arg)->object.this$));
    }
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "removeAll", args, 2);
    }
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *StandardDeviation::class$ = NULL;
          jmethodID *StandardDeviation::mids$ = NULL;
          bool StandardDeviation::live$ = false;

          jclass StandardDeviation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/StandardDeviation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b3f951b64db17420] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_22c546af386a65f5] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_8159df5c2270dba4] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");
              mids$[mid_evaluate_79e4db9e1e3d84c9] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_f09b11d2a075df86] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_9ab94ac1dc23b105] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_0810dcb67b9fc23a] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/StandardDeviation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StandardDeviation::StandardDeviation() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          StandardDeviation::StandardDeviation(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b3f951b64db17420, a0.this$)) {}

          StandardDeviation::StandardDeviation(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

          StandardDeviation::StandardDeviation(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_22c546af386a65f5, a0, a1.this$)) {}

          void StandardDeviation::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          StandardDeviation StandardDeviation::copy() const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_copy_8159df5c2270dba4]));
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_79e4db9e1e3d84c9], a0.this$, a1);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble StandardDeviation::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_f09b11d2a075df86], a0.this$, a1, a2, a3);
          }

          jlong StandardDeviation::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble StandardDeviation::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void StandardDeviation::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
          }

          jboolean StandardDeviation::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_9ab94ac1dc23b105]);
          }

          StandardDeviation StandardDeviation::withBiasCorrection(jboolean a0) const
          {
            return StandardDeviation(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_0810dcb67b9fc23a], a0));
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
        namespace moment {
          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args);
          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self);
          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg);
          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data);
          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data);
          static PyGetSetDef t_StandardDeviation__fields_[] = {
            DECLARE_GET_FIELD(t_StandardDeviation, biasCorrected),
            DECLARE_GET_FIELD(t_StandardDeviation, n),
            DECLARE_GET_FIELD(t_StandardDeviation, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StandardDeviation__methods_[] = {
            DECLARE_METHOD(t_StandardDeviation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StandardDeviation, clear, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, copy, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getN, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, getResult, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, increment, METH_VARARGS),
            DECLARE_METHOD(t_StandardDeviation, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_StandardDeviation, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StandardDeviation)[] = {
            { Py_tp_methods, t_StandardDeviation__methods_ },
            { Py_tp_init, (void *) t_StandardDeviation_init_ },
            { Py_tp_getset, t_StandardDeviation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StandardDeviation)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(StandardDeviation, t_StandardDeviation, StandardDeviation);

          void t_StandardDeviation::install(PyObject *module)
          {
            installType(&PY_TYPE(StandardDeviation), &PY_TYPE_DEF(StandardDeviation), module, "StandardDeviation", 0);
          }

          void t_StandardDeviation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "class_", make_descriptor(StandardDeviation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "wrapfn_", make_descriptor(t_StandardDeviation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StandardDeviation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StandardDeviation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StandardDeviation::initializeClass, 1)))
              return NULL;
            return t_StandardDeviation::wrap_Object(StandardDeviation(((t_StandardDeviation *) arg)->object.this$));
          }
          static PyObject *t_StandardDeviation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StandardDeviation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StandardDeviation_init_(t_StandardDeviation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                StandardDeviation object((jobject) NULL);

                INT_CALL(object = StandardDeviation());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = StandardDeviation(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                StandardDeviation object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = StandardDeviation(a0, a1));
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

          static PyObject *t_StandardDeviation_clear(t_StandardDeviation *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_StandardDeviation_copy(t_StandardDeviation *self, PyObject *args)
          {
            StandardDeviation result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_StandardDeviation::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_StandardDeviation_evaluate(t_StandardDeviation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
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
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_StandardDeviation_getN(t_StandardDeviation *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_StandardDeviation_getResult(t_StandardDeviation *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_StandardDeviation_increment(t_StandardDeviation *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StandardDeviation), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_StandardDeviation_isBiasCorrected(t_StandardDeviation *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_StandardDeviation_withBiasCorrection(t_StandardDeviation *self, PyObject *arg)
          {
            jboolean a0;
            StandardDeviation result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_StandardDeviation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_StandardDeviation_get__biasCorrected(t_StandardDeviation *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_StandardDeviation_get__n(t_StandardDeviation *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_StandardDeviation_get__result(t_StandardDeviation *self, void *data)
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
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedProcess::class$ = NULL;
          jmethodID *UnscentedProcess::mids$ = NULL;
          bool UnscentedProcess::live$ = false;

          jclass UnscentedProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_cf565fd974ca9890] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
              mids$[mid_getInnovation_aebb6a0d3a23268d] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getPredictedMeasurements_7d8475bf1deceac6] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)[Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedProcess::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_cf565fd974ca9890], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector UnscentedProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_aebb6a0d3a23268d], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          JArray< ::org::hipparchus::linear::RealVector > UnscentedProcess::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::hipparchus::filtering::kalman::Measurement & a1) const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_7d8475bf1deceac6], a0.this$, a1.this$));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args);
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data);
          static PyGetSetDef t_UnscentedProcess__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedProcess__methods_[] = {
            DECLARE_METHOD(t_UnscentedProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getInnovation, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedProcess, getPredictedMeasurements, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedProcess)[] = {
            { Py_tp_methods, t_UnscentedProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UnscentedProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedProcess, t_UnscentedProcess, UnscentedProcess);
          PyObject *t_UnscentedProcess::wrap_Object(const UnscentedProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedProcess *self = (t_UnscentedProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedProcess), &PY_TYPE_DEF(UnscentedProcess), module, "UnscentedProcess", 0);
          }

          void t_UnscentedProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "class_", make_descriptor(UnscentedProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "wrapfn_", make_descriptor(t_UnscentedProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedProcess::initializeClass, 1)))
              return NULL;
            return t_UnscentedProcess::wrap_Object(UnscentedProcess(((t_UnscentedProcess *) arg)->object.this$));
          }
          static PyObject *t_UnscentedProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedProcess_of_(t_UnscentedProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UnscentedProcess_getEvolution(t_UnscentedProcess *self, PyObject *args)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getInnovation(t_UnscentedProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }

          static PyObject *t_UnscentedProcess_getPredictedMeasurements(t_UnscentedProcess *self, PyObject *args)
          {
            JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a1((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

            if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
            return NULL;
          }
          static PyObject *t_UnscentedProcess_get__parameters_(t_UnscentedProcess *self, void *data)
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
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProvider::mids$ = NULL;
      bool ExtendedPVCoordinatesProvider::live$ = false;

      jclass ExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_d0d70a58ee20218b] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toFieldPVCoordinatesProvider_9516b47d48320472] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates ExtendedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ExtendedPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d0d70a58ee20218b], a0.this$, a1.this$));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider ExtendedPVCoordinatesProvider::toFieldPVCoordinatesProvider(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toFieldPVCoordinatesProvider_9516b47d48320472], a0.this$));
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
      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg);

      static PyMethodDef t_ExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, toFieldPVCoordinatesProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProvider, t_ExtendedPVCoordinatesProvider, ExtendedPVCoordinatesProvider);

      void t_ExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProvider), &PY_TYPE_DEF(ExtendedPVCoordinatesProvider), module, "ExtendedPVCoordinatesProvider", 0);
      }

      void t_ExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "class_", make_descriptor(ExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProvider::wrap_Object(ExtendedPVCoordinatesProvider(((t_ExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPVCoordinates", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toFieldPVCoordinatesProvider(a0));
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toFieldPVCoordinatesProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/EnumeratedDistribution.h"
#include "org/hipparchus/util/Pair.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *EnumeratedDistribution::class$ = NULL;
      jmethodID *EnumeratedDistribution::mids$ = NULL;
      bool EnumeratedDistribution::live$ = false;

      jclass EnumeratedDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/EnumeratedDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_checkAndNormalize_14dee4cb8cc3e959] = env->getStaticMethodID(cls, "checkAndNormalize", "([D)[D");
          mids$[mid_getPmf_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
          mids$[mid_probability_855d8589234ef20e] = env->getMethodID(cls, "probability", "(Ljava/lang/Object;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EnumeratedDistribution::EnumeratedDistribution(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

      JArray< jdouble > EnumeratedDistribution::checkAndNormalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_checkAndNormalize_14dee4cb8cc3e959], a0.this$));
      }

      ::java::util::List EnumeratedDistribution::getPmf() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_e62d3bb06d56d7e3]));
      }

      jdouble EnumeratedDistribution::probability(const ::java::lang::Object & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_855d8589234ef20e], a0.this$);
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
      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args);
      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self);
      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data);
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data);
      static PyGetSetDef t_EnumeratedDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_EnumeratedDistribution, pmf),
        DECLARE_GET_FIELD(t_EnumeratedDistribution, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EnumeratedDistribution__methods_[] = {
        DECLARE_METHOD(t_EnumeratedDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, of_, METH_VARARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, checkAndNormalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, getPmf, METH_NOARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, probability, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EnumeratedDistribution)[] = {
        { Py_tp_methods, t_EnumeratedDistribution__methods_ },
        { Py_tp_init, (void *) t_EnumeratedDistribution_init_ },
        { Py_tp_getset, t_EnumeratedDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EnumeratedDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EnumeratedDistribution, t_EnumeratedDistribution, EnumeratedDistribution);
      PyObject *t_EnumeratedDistribution::wrap_Object(const EnumeratedDistribution& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_EnumeratedDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_EnumeratedDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(EnumeratedDistribution), &PY_TYPE_DEF(EnumeratedDistribution), module, "EnumeratedDistribution", 0);
      }

      void t_EnumeratedDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "class_", make_descriptor(EnumeratedDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "wrapfn_", make_descriptor(t_EnumeratedDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EnumeratedDistribution::initializeClass, 1)))
          return NULL;
        return t_EnumeratedDistribution::wrap_Object(EnumeratedDistribution(((t_EnumeratedDistribution *) arg)->object.this$));
      }
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EnumeratedDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        EnumeratedDistribution object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = EnumeratedDistribution(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::distribution::EnumeratedDistribution::checkAndNormalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "checkAndNormalize", arg);
        return NULL;
      }

      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(result = self->object.probability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", arg);
        return NULL;
      }
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteType::class$ = NULL;
        jmethodID *SatelliteType::mids$ = NULL;
        bool SatelliteType::live$ = false;
        SatelliteType *SatelliteType::BEIDOU_2G = NULL;
        SatelliteType *SatelliteType::BEIDOU_2I = NULL;
        SatelliteType *SatelliteType::BEIDOU_2M = NULL;
        SatelliteType *SatelliteType::BEIDOU_3G_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3I = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SM_CAST = NULL;
        SatelliteType *SatelliteType::BLOCK_I = NULL;
        SatelliteType *SatelliteType::BLOCK_II = NULL;
        SatelliteType *SatelliteType::BLOCK_IIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIF = NULL;
        SatelliteType *SatelliteType::BLOCK_IIIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_A = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_B = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_M = NULL;
        SatelliteType *SatelliteType::GALILEO_0A = NULL;
        SatelliteType *SatelliteType::GALILEO_0B = NULL;
        SatelliteType *SatelliteType::GALILEO_1 = NULL;
        SatelliteType *SatelliteType::GALILEO_2 = NULL;
        SatelliteType *SatelliteType::GLONASS = NULL;
        SatelliteType *SatelliteType::GLONASS_K1 = NULL;
        SatelliteType *SatelliteType::GLONASS_K2 = NULL;
        SatelliteType *SatelliteType::GLONASS_M = NULL;
        SatelliteType *SatelliteType::IRNSS_1GEO = NULL;
        SatelliteType *SatelliteType::IRNSS_1IGSO = NULL;
        SatelliteType *SatelliteType::QZSS = NULL;
        SatelliteType *SatelliteType::QZSS_2A = NULL;
        SatelliteType *SatelliteType::QZSS_2G = NULL;
        SatelliteType *SatelliteType::QZSS_2I = NULL;

        jclass SatelliteType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildAttitudeProvider_638d87bbeb692ef8] = env->getMethodID(cls, "buildAttitudeProvider", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;I)Lorg/orekit/gnss/attitude/GNSSAttitudeProvider;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_parseSatelliteType_4c8fc709a887ef27] = env->getStaticMethodID(cls, "parseSatelliteType", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_valueOf_4c8fc709a887ef27] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_values_42614b441f541c9a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/antenna/SatelliteType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BEIDOU_2G = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2M = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3G_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3G_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SM_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SM_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_I = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_II = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_II", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIF = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIF", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_A = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_B = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_M = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0A = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0B = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_1 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_2 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS = new SatelliteType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K1 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K2 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_M = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1GEO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1GEO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1IGSO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1IGSO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS = new SatelliteType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2A = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2G = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2I = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::gnss::attitude::GNSSAttitudeProvider SatelliteType::buildAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3, jint a4) const
        {
          return ::org::orekit::gnss::attitude::GNSSAttitudeProvider(env->callObjectMethod(this$, mids$[mid_buildAttitudeProvider_638d87bbeb692ef8], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        ::java::lang::String SatelliteType::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        SatelliteType SatelliteType::parseSatelliteType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteType_4c8fc709a887ef27], a0.this$));
        }

        SatelliteType SatelliteType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4c8fc709a887ef27], a0.this$));
        }

        JArray< SatelliteType > SatelliteType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_42614b441f541c9a]));
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
        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_getName(t_SatelliteType *self);
        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SatelliteType_values(PyTypeObject *type);
        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data);
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data);
        static PyGetSetDef t_SatelliteType__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteType, name),
          DECLARE_GET_FIELD(t_SatelliteType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteType__methods_[] = {
          DECLARE_METHOD(t_SatelliteType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, buildAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, getName, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteType, parseSatelliteType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteType)[] = {
          { Py_tp_methods, t_SatelliteType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SatelliteType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SatelliteType, t_SatelliteType, SatelliteType);
        PyObject *t_SatelliteType::wrap_Object(const SatelliteType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SatelliteType::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteType), &PY_TYPE_DEF(SatelliteType), module, "SatelliteType", 0);
        }

        void t_SatelliteType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "class_", make_descriptor(SatelliteType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "wrapfn_", make_descriptor(t_SatelliteType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SatelliteType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3G_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3G_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SM_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SM_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_II", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_II)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIF", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1GEO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1GEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1IGSO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1IGSO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2I)));
        }

        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteType::initializeClass, 1)))
            return NULL;
          return t_SatelliteType::wrap_Object(SatelliteType(((t_SatelliteType *) arg)->object.this$));
        }
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          jint a4;
          ::org::orekit::gnss::attitude::GNSSAttitudeProvider result((jobject) NULL);

          if (!parseArgs(args, "kkkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.buildAttitudeProvider(a0, a1, a2, a3, a4));
            return ::org::orekit::gnss::attitude::t_GNSSAttitudeProvider::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildAttitudeProvider", args);
          return NULL;
        }

        static PyObject *t_SatelliteType_getName(t_SatelliteType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::parseSatelliteType(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseSatelliteType", arg);
          return NULL;
        }

        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::valueOf(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SatelliteType_values(PyTypeObject *type)
        {
          JArray< SatelliteType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::values());
          return JArray<jobject>(result.this$).wrap(t_SatelliteType::wrap_jobject);
        }
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data)
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
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixDecomposer::class$ = NULL;
      jmethodID *MatrixDecomposer::mids$ = NULL;
      bool MatrixDecomposer::live$ = false;

      jclass MatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_8def7320d620ddc9] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::DecompositionSolver MatrixDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_8def7320d620ddc9], a0.this$));
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
      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg);

      static PyMethodDef t_MatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_MatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixDecomposer)[] = {
        { Py_tp_methods, t_MatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixDecomposer, t_MatrixDecomposer, MatrixDecomposer);

      void t_MatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixDecomposer), &PY_TYPE_DEF(MatrixDecomposer), module, "MatrixDecomposer", 0);
      }

      void t_MatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "class_", make_descriptor(MatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "wrapfn_", make_descriptor(t_MatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_MatrixDecomposer::wrap_Object(MatrixDecomposer(((t_MatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cbrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cbrt::class$ = NULL;
        jmethodID *Cbrt::mids$ = NULL;
        bool Cbrt::live$ = false;

        jclass Cbrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cbrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cbrt::Cbrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Cbrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cbrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args);

        static PyMethodDef t_Cbrt__methods_[] = {
          DECLARE_METHOD(t_Cbrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cbrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cbrt)[] = {
          { Py_tp_methods, t_Cbrt__methods_ },
          { Py_tp_init, (void *) t_Cbrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cbrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cbrt, t_Cbrt, Cbrt);

        void t_Cbrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Cbrt), &PY_TYPE_DEF(Cbrt), module, "Cbrt", 0);
        }

        void t_Cbrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "class_", make_descriptor(Cbrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "wrapfn_", make_descriptor(t_Cbrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cbrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cbrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cbrt::initializeClass, 1)))
            return NULL;
          return t_Cbrt::wrap_Object(Cbrt(((t_Cbrt *) arg)->object.this$));
        }
        static PyObject *t_Cbrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cbrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cbrt_init_(t_Cbrt *self, PyObject *args, PyObject *kwds)
        {
          Cbrt object((jobject) NULL);

          INT_CALL(object = Cbrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cbrt_value(t_Cbrt *self, PyObject *args)
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
#include "org/hipparchus/complex/ComplexComparator.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexComparator::class$ = NULL;
      jmethodID *ComplexComparator::mids$ = NULL;
      bool ComplexComparator::live$ = false;

      jclass ComplexComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_ce3ead336054d6ed] = env->getMethodID(cls, "compare", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexComparator::ComplexComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      jint ComplexComparator::compare(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_ce3ead336054d6ed], a0.this$, a1.this$);
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
      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args);

      static PyMethodDef t_ComplexComparator__methods_[] = {
        DECLARE_METHOD(t_ComplexComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexComparator)[] = {
        { Py_tp_methods, t_ComplexComparator__methods_ },
        { Py_tp_init, (void *) t_ComplexComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexComparator, t_ComplexComparator, ComplexComparator);

      void t_ComplexComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexComparator), &PY_TYPE_DEF(ComplexComparator), module, "ComplexComparator", 0);
      }

      void t_ComplexComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "class_", make_descriptor(ComplexComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "wrapfn_", make_descriptor(t_ComplexComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexComparator::initializeClass, 1)))
          return NULL;
        return t_ComplexComparator::wrap_Object(ComplexComparator(((t_ComplexComparator *) arg)->object.this$));
      }
      static PyObject *t_ComplexComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexComparator_init_(t_ComplexComparator *self, PyObject *args, PyObject *kwds)
      {
        ComplexComparator object((jobject) NULL);

        INT_CALL(object = ComplexComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexComparator_compare(t_ComplexComparator *self, PyObject *args)
      {
        ::org::hipparchus::complex::Complex a0((jobject) NULL);
        ::org::hipparchus::complex::Complex a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
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

            ::java::lang::Class *CdmRelativeMetadataKey::class$ = NULL;
            jmethodID *CdmRelativeMetadataKey::mids$ = NULL;
            bool CdmRelativeMetadataKey::live$ = false;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::APPROACH_ANGLE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PERCENTILE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::CONJUNCTION_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MISS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_SPEED = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_ENTRY_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_EXIT_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_TYPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_X = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Y = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Z = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::START_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::STOP_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::TCA = NULL;

            jclass CdmRelativeMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_6d35f793c12d933b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)Z");
                mids$[mid_valueOf_f95d47e7388e8ab1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");
                mids$[mid_values_5110f31327ccab39] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APPROACH_ANGLE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "APPROACH_ANGLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PC_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PC_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PERCENTILE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PERCENTILE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                CONJUNCTION_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "CONJUNCTION_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MAHALANOBIS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MAHALANOBIS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MISS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MISS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                NEXT_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_SPEED = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_SPEED", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_ENTRY_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_ENTRY_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_EXIT_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_EXIT_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_PC_THRESHOLD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_PC_THRESHOLD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_TYPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_FRAME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_RADIUS = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_RADIUS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_SHAPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_X = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_X", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Y = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Y", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Z = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Z", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_FRAGMENTATION_MODEL = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_FRAGMENTATION_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                START_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "START_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                STOP_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "STOP_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                TCA = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "TCA", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmRelativeMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_6d35f793c12d933b], a0.this$, a1.this$, a2.this$);
            }

            CdmRelativeMetadataKey CdmRelativeMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmRelativeMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f95d47e7388e8ab1], a0.this$));
            }

            JArray< CdmRelativeMetadataKey > CdmRelativeMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmRelativeMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5110f31327ccab39]));
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
            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data);
            static PyGetSetDef t_CdmRelativeMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmRelativeMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadataKey)[] = {
              { Py_tp_methods, t_CdmRelativeMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmRelativeMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadataKey, t_CdmRelativeMetadataKey, CdmRelativeMetadataKey);
            PyObject *t_CdmRelativeMetadataKey::wrap_Object(const CdmRelativeMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmRelativeMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmRelativeMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadataKey), &PY_TYPE_DEF(CdmRelativeMetadataKey), module, "CdmRelativeMetadataKey", 0);
            }

            void t_CdmRelativeMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "class_", make_descriptor(CdmRelativeMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "wrapfn_", make_descriptor(t_CdmRelativeMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmRelativeMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "APPROACH_ANGLE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::APPROACH_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PC_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PERCENTILE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PERCENTILE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "CONJUNCTION_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::CONJUNCTION_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MAHALANOBIS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MISS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MISS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_SPEED", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_SPEED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_ENTRY_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_ENTRY_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_EXIT_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_EXIT_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_PC_THRESHOLD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_TYPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_FRAME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_RADIUS", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_SHAPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_X", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Y", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Z", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_FRAGMENTATION_MODEL", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "START_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::START_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "STOP_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::STOP_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "TCA", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::TCA)));
            }

            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadataKey::wrap_Object(CdmRelativeMetadataKey(((t_CdmRelativeMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmRelativeMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::valueOf(a0));
                return t_CdmRelativeMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmRelativeMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmRelativeMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data)
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
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventOccurrence::class$ = NULL;
        jmethodID *EventOccurrence::mids$ = NULL;
        bool EventOccurrence::live$ = false;

        jclass EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d9f392e1370649a7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/ODEState;D)V");
            mids$[mid_getAction_0afc8c14772bbac8] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_43e9575787db93d2] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/ODEState;");
            mids$[mid_getStopTime_b74f83833fdad017] = env->getMethodID(cls, "getStopTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventOccurrence::EventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9f392e1370649a7, a0.this$, a1.this$, a2)) {}

        ::org::hipparchus::ode::events::Action EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_0afc8c14772bbac8]));
        }

        ::org::hipparchus::ode::ODEState EventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_getNewState_43e9575787db93d2]));
        }

        jdouble EventOccurrence::getStopTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStopTime_b74f83833fdad017]);
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
        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self);
        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data);
        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data);
        static PyGetSetDef t_EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventOccurrence, stopTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventOccurrence)[] = {
          { Py_tp_methods, t_EventOccurrence__methods_ },
          { Py_tp_init, (void *) t_EventOccurrence_init_ },
          { Py_tp_getset, t_EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventOccurrence, t_EventOccurrence, EventOccurrence);

        void t_EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventOccurrence), &PY_TYPE_DEF(EventOccurrence), module, "EventOccurrence", 0);
        }

        void t_EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "class_", make_descriptor(EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "wrapfn_", make_descriptor(t_EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventOccurrence::wrap_Object(EventOccurrence(((t_EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventOccurrence_init_(t_EventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          EventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KkD", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &a2))
          {
            INT_CALL(object = EventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventOccurrence_getAction(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getNewState(t_EventOccurrence *self)
        {
          ::org::hipparchus::ode::ODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        static PyObject *t_EventOccurrence_getStopTime(t_EventOccurrence *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStopTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventOccurrence_get__action(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__newState(t_EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(value);
        }

        static PyObject *t_EventOccurrence_get__stopTime(t_EventOccurrence *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStopTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSConstants::class$ = NULL;
            jmethodID *GNSSConstants::mids$ = NULL;
            bool GNSSConstants::live$ = false;
            jdouble GNSSConstants::BEIDOU_AV = (jdouble) 0;
            jdouble GNSSConstants::BEIDOU_MU = (jdouble) 0;
            jint GNSSConstants::BEIDOU_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GALILEO_AV = (jdouble) 0;
            jdouble GNSSConstants::GALILEO_MU = (jdouble) 0;
            jint GNSSConstants::GALILEO_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GLONASS_MU = (jdouble) 0;
            jdouble GNSSConstants::GLONASS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_WEEK_IN_SECONDS = (jdouble) 0;
            jdouble GNSSConstants::GPS_AV = (jdouble) 0;
            jdouble GNSSConstants::GPS_MU = (jdouble) 0;
            jint GNSSConstants::GPS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::IRNSS_AV = (jdouble) 0;
            jdouble GNSSConstants::IRNSS_MU = (jdouble) 0;
            jint GNSSConstants::IRNSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::QZSS_AV = (jdouble) 0;
            jdouble GNSSConstants::QZSS_MU = (jdouble) 0;
            jint GNSSConstants::QZSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::SBAS_MU = (jdouble) 0;

            jclass GNSSConstants::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSConstants");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BEIDOU_AV = env->getStaticDoubleField(cls, "BEIDOU_AV");
                BEIDOU_MU = env->getStaticDoubleField(cls, "BEIDOU_MU");
                BEIDOU_WEEK_NB = env->getStaticIntField(cls, "BEIDOU_WEEK_NB");
                GALILEO_AV = env->getStaticDoubleField(cls, "GALILEO_AV");
                GALILEO_MU = env->getStaticDoubleField(cls, "GALILEO_MU");
                GALILEO_WEEK_NB = env->getStaticIntField(cls, "GALILEO_WEEK_NB");
                GLONASS_MU = env->getStaticDoubleField(cls, "GLONASS_MU");
                GLONASS_PI = env->getStaticDoubleField(cls, "GLONASS_PI");
                GNSS_PI = env->getStaticDoubleField(cls, "GNSS_PI");
                GNSS_WEEK_IN_SECONDS = env->getStaticDoubleField(cls, "GNSS_WEEK_IN_SECONDS");
                GPS_AV = env->getStaticDoubleField(cls, "GPS_AV");
                GPS_MU = env->getStaticDoubleField(cls, "GPS_MU");
                GPS_WEEK_NB = env->getStaticIntField(cls, "GPS_WEEK_NB");
                IRNSS_AV = env->getStaticDoubleField(cls, "IRNSS_AV");
                IRNSS_MU = env->getStaticDoubleField(cls, "IRNSS_MU");
                IRNSS_WEEK_NB = env->getStaticIntField(cls, "IRNSS_WEEK_NB");
                QZSS_AV = env->getStaticDoubleField(cls, "QZSS_AV");
                QZSS_MU = env->getStaticDoubleField(cls, "QZSS_MU");
                QZSS_WEEK_NB = env->getStaticIntField(cls, "QZSS_WEEK_NB");
                SBAS_MU = env->getStaticDoubleField(cls, "SBAS_MU");
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_GNSSConstants__methods_[] = {
              DECLARE_METHOD(t_GNSSConstants, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSConstants, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSConstants)[] = {
              { Py_tp_methods, t_GNSSConstants__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSConstants)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GNSSConstants, t_GNSSConstants, GNSSConstants);

            void t_GNSSConstants::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSConstants), &PY_TYPE_DEF(GNSSConstants), module, "GNSSConstants", 0);
            }

            void t_GNSSConstants::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "class_", make_descriptor(GNSSConstants::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "wrapfn_", make_descriptor(t_GNSSConstants::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "boxfn_", make_descriptor(boxObject));
              env->getClass(GNSSConstants::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_AV", make_descriptor(GNSSConstants::BEIDOU_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_MU", make_descriptor(GNSSConstants::BEIDOU_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_WEEK_NB", make_descriptor(GNSSConstants::BEIDOU_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_AV", make_descriptor(GNSSConstants::GALILEO_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_MU", make_descriptor(GNSSConstants::GALILEO_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_WEEK_NB", make_descriptor(GNSSConstants::GALILEO_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_MU", make_descriptor(GNSSConstants::GLONASS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_PI", make_descriptor(GNSSConstants::GLONASS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_PI", make_descriptor(GNSSConstants::GNSS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_WEEK_IN_SECONDS", make_descriptor(GNSSConstants::GNSS_WEEK_IN_SECONDS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_AV", make_descriptor(GNSSConstants::GPS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_MU", make_descriptor(GNSSConstants::GPS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_WEEK_NB", make_descriptor(GNSSConstants::GPS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_AV", make_descriptor(GNSSConstants::IRNSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_MU", make_descriptor(GNSSConstants::IRNSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_WEEK_NB", make_descriptor(GNSSConstants::IRNSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_AV", make_descriptor(GNSSConstants::QZSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_MU", make_descriptor(GNSSConstants::QZSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_WEEK_NB", make_descriptor(GNSSConstants::QZSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "SBAS_MU", make_descriptor(GNSSConstants::SBAS_MU));
            }

            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSConstants::initializeClass, 1)))
                return NULL;
              return t_GNSSConstants::wrap_Object(GNSSConstants(((t_GNSSConstants *) arg)->object.this$));
            }
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSConstants::initializeClass, 0))
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
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_cf79ac3fac47228f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_b74f83833fdad017] = env->getMethodID(cls, "getLine", "()D");
            mids$[mid_getTarget_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTarget", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirection_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTargetDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirectionDerivative_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTargetDirectionDerivative", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing$CrossingResult::SensorMeanPlaneCrossing$CrossingResult(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf79ac3fac47228f, a0.this$, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate SensorMeanPlaneCrossing$CrossingResult::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jdouble SensorMeanPlaneCrossing$CrossingResult::getLine() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTarget() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTarget_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirection_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirectionDerivative() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirectionDerivative_8b724f8b4fdad1a2]));
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
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
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternionKey::class$ = NULL;
              jmethodID *ApmQuaternionKey::mids$ = NULL;
              bool ApmQuaternionKey::live$ = false;
              ApmQuaternionKey *ApmQuaternionKey::COMMENT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::EPOCH = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_DIR = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternion = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionDot = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionRate = NULL;

              jclass ApmQuaternionKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e4aeed1817fe34ba] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;)Z");
                  mids$[mid_valueOf_357749d95820527f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");
                  mids$[mid_values_4ceced6c9e2a346d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ApmQuaternionKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  EPOCH = new ApmQuaternionKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_DIR = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternion = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionDot = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionRate = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ApmQuaternionKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e4aeed1817fe34ba], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              ApmQuaternionKey ApmQuaternionKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ApmQuaternionKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_357749d95820527f], a0.this$));
              }

              JArray< ApmQuaternionKey > ApmQuaternionKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ApmQuaternionKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4ceced6c9e2a346d]));
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
              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type);
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data);
              static PyGetSetDef t_ApmQuaternionKey__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternionKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternionKey__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternionKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternionKey)[] = {
                { Py_tp_methods, t_ApmQuaternionKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmQuaternionKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternionKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ApmQuaternionKey, t_ApmQuaternionKey, ApmQuaternionKey);
              PyObject *t_ApmQuaternionKey::wrap_Object(const ApmQuaternionKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ApmQuaternionKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ApmQuaternionKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternionKey), &PY_TYPE_DEF(ApmQuaternionKey), module, "ApmQuaternionKey", 0);
              }

              void t_ApmQuaternionKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "class_", make_descriptor(ApmQuaternionKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "wrapfn_", make_descriptor(t_ApmQuaternionKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmQuaternionKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "COMMENT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "EPOCH", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_DIR", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternion", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionDot", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionRate", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionRate)));
              }

              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternionKey::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternionKey::wrap_Object(ApmQuaternionKey(((t_ApmQuaternionKey *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternionKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ApmQuaternionKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::valueOf(a0));
                  return t_ApmQuaternionKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type)
              {
                JArray< ApmQuaternionKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::values());
                return JArray<jobject>(result.this$).wrap(t_ApmQuaternionKey::wrap_jobject);
              }
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *ShortPeriodicsInterpolatedCoefficient::class$ = NULL;
            jmethodID *ShortPeriodicsInterpolatedCoefficient::mids$ = NULL;
            bool ShortPeriodicsInterpolatedCoefficient::live$ = false;

            jclass ShortPeriodicsInterpolatedCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_9bdf5cd7dd060d54] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/AbsoluteDate;[D)V");
                mids$[mid_clearHistory_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_27b701db396ade01] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ShortPeriodicsInterpolatedCoefficient::ShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            void ShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_9bdf5cd7dd060d54], a0.this$, a1.this$);
            }

            void ShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_a1fa5dae97ea5ed2]);
            }

            JArray< jdouble > ShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_27b701db396ade01], a0.this$));
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
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self);
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg);

            static PyMethodDef t_ShortPeriodicsInterpolatedCoefficient__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, addGridPoint, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, clearHistory, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodicsInterpolatedCoefficient, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodicsInterpolatedCoefficient)[] = {
              { Py_tp_methods, t_ShortPeriodicsInterpolatedCoefficient__methods_ },
              { Py_tp_init, (void *) t_ShortPeriodicsInterpolatedCoefficient_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodicsInterpolatedCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodicsInterpolatedCoefficient, t_ShortPeriodicsInterpolatedCoefficient, ShortPeriodicsInterpolatedCoefficient);

            void t_ShortPeriodicsInterpolatedCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodicsInterpolatedCoefficient), &PY_TYPE_DEF(ShortPeriodicsInterpolatedCoefficient), module, "ShortPeriodicsInterpolatedCoefficient", 0);
            }

            void t_ShortPeriodicsInterpolatedCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "class_", make_descriptor(ShortPeriodicsInterpolatedCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "wrapfn_", make_descriptor(t_ShortPeriodicsInterpolatedCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodicsInterpolatedCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodicsInterpolatedCoefficient::wrap_Object(ShortPeriodicsInterpolatedCoefficient(((t_ShortPeriodicsInterpolatedCoefficient *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodicsInterpolatedCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ShortPeriodicsInterpolatedCoefficient_init_(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ShortPeriodicsInterpolatedCoefficient object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = ShortPeriodicsInterpolatedCoefficient(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_addGridPoint(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addGridPoint(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addGridPoint", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_clearHistory(t_ShortPeriodicsInterpolatedCoefficient *self)
            {
              OBJ_CALL(self->object.clearHistory());
              Py_RETURN_NONE;
            }

            static PyObject *t_ShortPeriodicsInterpolatedCoefficient_value(t_ShortPeriodicsInterpolatedCoefficient *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
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
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceChecker::class$ = NULL;
      jmethodID *ConvergenceChecker::mids$ = NULL;
      bool ConvergenceChecker::live$ = false;

      jclass ConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_converged_061aaa68e115701e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_061aaa68e115701e], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args);
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data);
      static PyGetSetDef t_ConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_ConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceChecker)[] = {
        { Py_tp_methods, t_ConvergenceChecker__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceChecker, t_ConvergenceChecker, ConvergenceChecker);
      PyObject *t_ConvergenceChecker::wrap_Object(const ConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceChecker *self = (t_ConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceChecker), &PY_TYPE_DEF(ConvergenceChecker), module, "ConvergenceChecker", 0);
      }

      void t_ConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "class_", make_descriptor(ConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "wrapfn_", make_descriptor(t_ConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_ConvergenceChecker::wrap_Object(ConvergenceChecker(((t_ConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceChecker_of_(t_ConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ConvergenceChecker_converged(t_ConvergenceChecker *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceChecker_get__parameters_(t_ConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLEPropagator::class$ = NULL;
          jmethodID *FieldTLEPropagator::mids$ = NULL;
          bool FieldTLEPropagator::live$ = false;

          jclass FieldTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_b74f83833fdad017] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_9d94392a8a6273fa] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTLE_6b300e1e872aa544] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_propagateOrbit_f34a7a94e111b112] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
              mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_selectExtrapolator_d26eb822374e5cdc] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_99422df6de0d8c34] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_b801e0b1aca569c9] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_8b98c2aeb28b2aaf] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_getMass_140b8964300ddedf] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_resetIntermediateState_871885b409df9d57] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_sxpInitialize_8b0f7facc8a6a46e] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_1d66803ed368a800] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame FieldTLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          jdouble FieldTLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_b74f83833fdad017]);
          }

          ::org::orekit::utils::FieldPVCoordinates FieldTLEPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_9d94392a8a6273fa], a0.this$, a1.this$));
          }

          ::java::util::List FieldTLEPropagator::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::orekit::propagation::analytical::tle::FieldTLE FieldTLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_getTLE_6b300e1e872aa544]));
          }

          ::org::orekit::orbits::FieldOrbit FieldTLEPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_f34a7a94e111b112], a0.this$, a1.this$));
          }

          void FieldTLEPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_d26eb822374e5cdc], a0.this$, a1.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::frames::Frame & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_99422df6de0d8c34], a0.this$, a1.this$, a2.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_b801e0b1aca569c9], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_8b98c2aeb28b2aaf], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
        namespace tle {
          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self);
          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data);
          static PyGetSetDef t_FieldTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLEPropagator, frame),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, mU),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, tLE),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, propagateOrbit, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLEPropagator)[] = {
            { Py_tp_methods, t_FieldTLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(FieldTLEPropagator, t_FieldTLEPropagator, FieldTLEPropagator);
          PyObject *t_FieldTLEPropagator::wrap_Object(const FieldTLEPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLEPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLEPropagator), &PY_TYPE_DEF(FieldTLEPropagator), module, "FieldTLEPropagator", 0);
          }

          void t_FieldTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "class_", make_descriptor(FieldTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "wrapfn_", make_descriptor(t_FieldTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldTLEPropagator::wrap_Object(FieldTLEPropagator(((t_FieldTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
            return NULL;
          }

          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::Frame a1((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3, a4));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *BrouwerLyddanePropagatorBuilder::class$ = NULL;
        jmethodID *BrouwerLyddanePropagatorBuilder::mids$ = NULL;
        bool BrouwerLyddanePropagatorBuilder::live$ = false;

        jclass BrouwerLyddanePropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c2db4c2af9d353e5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_init$_63cfa8ed77650466] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_1890bd31fcaa073d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_7f3ab1e0344cdbc7] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/BrouwerLyddanePropagator;");
            mids$[mid_copy_e38155725bec7fbb] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, jdouble a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_c2db4c2af9d353e5, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, jdouble a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_63cfa8ed77650466, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, const ::org::orekit::orbits::OrbitType & a8, const ::org::orekit::orbits::PositionAngleType & a9, jdouble a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1890bd31fcaa073d, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8.this$, a9.this$, a10, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel BrouwerLyddanePropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::BrouwerLyddanePropagator BrouwerLyddanePropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::BrouwerLyddanePropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_7f3ab1e0344cdbc7], a0.this$));
        }

        BrouwerLyddanePropagatorBuilder BrouwerLyddanePropagatorBuilder::copy() const
        {
          return BrouwerLyddanePropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_e38155725bec7fbb]));
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
        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_BrouwerLyddanePropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagatorBuilder)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagatorBuilder, t_BrouwerLyddanePropagatorBuilder, BrouwerLyddanePropagatorBuilder);

        void t_BrouwerLyddanePropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagatorBuilder), &PY_TYPE_DEF(BrouwerLyddanePropagatorBuilder), module, "BrouwerLyddanePropagatorBuilder", 0);
        }

        void t_BrouwerLyddanePropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "class_", make_descriptor(BrouwerLyddanePropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagatorBuilder::wrap_Object(BrouwerLyddanePropagatorBuilder(((t_BrouwerLyddanePropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              ::org::orekit::orbits::OrbitType a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::orbits::PositionAngleType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDKKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::orbits::t_OrbitType::parameters_, &a9, &p9, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a10, &a11))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::BrouwerLyddanePropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::t_BrouwerLyddanePropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          BrouwerLyddanePropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_BrouwerLyddanePropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *MessageWriter::class$ = NULL;
            jmethodID *MessageWriter::mids$ = NULL;
            bool MessageWriter::live$ = false;

            jclass MessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/MessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_b74f83833fdad017] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_writeFooter_fb222e851cd27682] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_5f2a5114115bbdb2] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeMessage_a4b14e3c29843c15] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
                mids$[mid_writeSegment_1cabdf4a5e993579] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String MessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String MessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_1c1fa1e935d6cdcf]));
            }

            jdouble MessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_b74f83833fdad017]);
            }

            void MessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_fb222e851cd27682], a0.this$);
            }

            void MessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_5f2a5114115bbdb2], a0.this$, a1.this$);
            }

            void MessageWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeMessage_a4b14e3c29843c15], a0.this$, a1.this$);
            }

            void MessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_1cabdf4a5e993579], a0.this$, a1.this$);
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
          namespace generation {
            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self);
            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg);
            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data);
            static PyGetSetDef t_MessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_MessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageWriter, root),
              DECLARE_GET_FIELD(t_MessageWriter, version),
              DECLARE_GET_FIELD(t_MessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageWriter__methods_[] = {
              DECLARE_METHOD(t_MessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_MessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeMessage, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageWriter)[] = {
              { Py_tp_methods, t_MessageWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageWriter, t_MessageWriter, MessageWriter);
            PyObject *t_MessageWriter::wrap_Object(const MessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_MessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_MessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageWriter), &PY_TYPE_DEF(MessageWriter), module, "MessageWriter", 0);
            }

            void t_MessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "class_", make_descriptor(MessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "wrapfn_", make_descriptor(t_MessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageWriter::initializeClass, 1)))
                return NULL;
              return t_MessageWriter::wrap_Object(MessageWriter(((t_MessageWriter *) arg)->object.this$));
            }
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg)
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

            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
              {
                OBJ_CALL(self->object.writeMessage(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data)
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
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
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
          mids$[mid_derivative_385587d041c81b1f] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_8e0d8ae8849d1551] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_385587d041c81b1f] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_8e0d8ae8849d1551] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_385587d041c81b1f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_8e0d8ae8849d1551], a0.this$));
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_385587d041c81b1f], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_8e0d8ae8849d1551], a0.this$));
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
#include "org/orekit/python/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
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

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *MultiDirectionalSimplex::class$ = NULL;
            jmethodID *MultiDirectionalSimplex::mids$ = NULL;
            bool MultiDirectionalSimplex::live$ = false;

            jclass MultiDirectionalSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_b0ce8bae5fc14fa3] = env->getMethodID(cls, "<init>", "([DDD)V");
                mids$[mid_init$_8d45af4d7e484f48] = env->getMethodID(cls, "<init>", "([[DDD)V");
                mids$[mid_init$_cdd9dee35d124091] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
                mids$[mid_iterate_7c5f20de6989de35] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_b0ce8bae5fc14fa3, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_8d45af4d7e484f48, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_cdd9dee35d124091, a0, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

            void MultiDirectionalSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_7c5f20de6989de35], a0.this$, a1.this$);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args);

            static PyMethodDef t_MultiDirectionalSimplex__methods_[] = {
              DECLARE_METHOD(t_MultiDirectionalSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultiDirectionalSimplex)[] = {
              { Py_tp_methods, t_MultiDirectionalSimplex__methods_ },
              { Py_tp_init, (void *) t_MultiDirectionalSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultiDirectionalSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(MultiDirectionalSimplex, t_MultiDirectionalSimplex, MultiDirectionalSimplex);

            void t_MultiDirectionalSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(MultiDirectionalSimplex), &PY_TYPE_DEF(MultiDirectionalSimplex), module, "MultiDirectionalSimplex", 0);
            }

            void t_MultiDirectionalSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "class_", make_descriptor(MultiDirectionalSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "wrapfn_", make_descriptor(t_MultiDirectionalSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultiDirectionalSimplex::initializeClass, 1)))
                return NULL;
              return t_MultiDirectionalSimplex::wrap_Object(MultiDirectionalSimplex(((t_MultiDirectionalSimplex *) arg)->object.this$));
            }
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultiDirectionalSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2, a3));
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

            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MultiDirectionalSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/SobolSequenceGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *SobolSequenceGenerator::class$ = NULL;
      jmethodID *SobolSequenceGenerator::mids$ = NULL;
      bool SobolSequenceGenerator::live$ = false;

      jclass SobolSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/SobolSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_b55216ccbedaec84] = env->getMethodID(cls, "<init>", "(ILjava/io/InputStream;)V");
          mids$[mid_getNextIndex_55546ef6a647f39b] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_25e1757a36c4dde2] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_bb2a44a76ad252f7] = env->getMethodID(cls, "skipTo", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      SobolSequenceGenerator::SobolSequenceGenerator(jint a0, const ::java::io::InputStream & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b55216ccbedaec84, a0, a1.this$)) {}

      jint SobolSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_55546ef6a647f39b]);
      }

      JArray< jdouble > SobolSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_25e1757a36c4dde2]));
      }

      JArray< jdouble > SobolSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_bb2a44a76ad252f7], a0));
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
      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self);
      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg);
      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data);
      static PyGetSetDef t_SobolSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_SobolSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SobolSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_SobolSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SobolSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_SobolSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SobolSequenceGenerator)[] = {
        { Py_tp_methods, t_SobolSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_SobolSequenceGenerator_init_ },
        { Py_tp_getset, t_SobolSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SobolSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SobolSequenceGenerator, t_SobolSequenceGenerator, SobolSequenceGenerator);

      void t_SobolSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(SobolSequenceGenerator), &PY_TYPE_DEF(SobolSequenceGenerator), module, "SobolSequenceGenerator", 0);
      }

      void t_SobolSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "class_", make_descriptor(SobolSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "wrapfn_", make_descriptor(t_SobolSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SobolSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SobolSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SobolSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_SobolSequenceGenerator::wrap_Object(SobolSequenceGenerator(((t_SobolSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_SobolSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SobolSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SobolSequenceGenerator_init_(t_SobolSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = SobolSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::java::io::InputStream a1((jobject) NULL);
            SobolSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SobolSequenceGenerator(a0, a1));
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

      static PyObject *t_SobolSequenceGenerator_getNextIndex(t_SobolSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SobolSequenceGenerator_nextVector(t_SobolSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_SobolSequenceGenerator_skipTo(t_SobolSequenceGenerator *self, PyObject *arg)
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

      static PyObject *t_SobolSequenceGenerator_get__nextIndex(t_SobolSequenceGenerator *self, void *data)
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
#include "org/hipparchus/random/MersenneTwister.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *MersenneTwister::class$ = NULL;
      jmethodID *MersenneTwister::mids$ = NULL;
      bool MersenneTwister::live$ = false;

      jclass MersenneTwister::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/MersenneTwister");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_86a2769cb881d388] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_44ed599e93e8a30c] = env->getMethodID(cls, "setSeed", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MersenneTwister::MersenneTwister() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      MersenneTwister::MersenneTwister(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      MersenneTwister::MersenneTwister(jint a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      MersenneTwister::MersenneTwister(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint MersenneTwister::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      void MersenneTwister::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_86a2769cb881d388], a0.this$);
      }

      void MersenneTwister::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_44ed599e93e8a30c], a0);
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
      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args);
      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args);
      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data);
      static PyGetSetDef t_MersenneTwister__fields_[] = {
        DECLARE_SET_FIELD(t_MersenneTwister, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MersenneTwister__methods_[] = {
        DECLARE_METHOD(t_MersenneTwister, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MersenneTwister, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_MersenneTwister, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MersenneTwister)[] = {
        { Py_tp_methods, t_MersenneTwister__methods_ },
        { Py_tp_init, (void *) t_MersenneTwister_init_ },
        { Py_tp_getset, t_MersenneTwister__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MersenneTwister)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(MersenneTwister, t_MersenneTwister, MersenneTwister);

      void t_MersenneTwister::install(PyObject *module)
      {
        installType(&PY_TYPE(MersenneTwister), &PY_TYPE_DEF(MersenneTwister), module, "MersenneTwister", 0);
      }

      void t_MersenneTwister::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "class_", make_descriptor(MersenneTwister::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "wrapfn_", make_descriptor(t_MersenneTwister::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MersenneTwister), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MersenneTwister_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MersenneTwister::initializeClass, 1)))
          return NULL;
        return t_MersenneTwister::wrap_Object(MersenneTwister(((t_MersenneTwister *) arg)->object.this$));
      }
      static PyObject *t_MersenneTwister_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MersenneTwister::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MersenneTwister_init_(t_MersenneTwister *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MersenneTwister object((jobject) NULL);

            INT_CALL(object = MersenneTwister());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            MersenneTwister object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = MersenneTwister(a0));
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

      static PyObject *t_MersenneTwister_nextInt(t_MersenneTwister *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_MersenneTwister_setSeed(t_MersenneTwister *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(MersenneTwister), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_MersenneTwister_set__seed(t_MersenneTwister *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiTheta.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiTheta::class$ = NULL;
          jmethodID *JacobiTheta::mids$ = NULL;
          bool JacobiTheta::live$ = false;

          jclass JacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getQ_b74f83833fdad017] = env->getMethodID(cls, "getQ", "()D");
              mids$[mid_values_bc44a51f1bf17a79] = env->getMethodID(cls, "values", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/Theta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JacobiTheta::JacobiTheta(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          jdouble JacobiTheta::getQ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ_b74f83833fdad017]);
          }

          ::org::hipparchus::special::elliptic::jacobi::Theta JacobiTheta::values(const ::org::hipparchus::complex::Complex & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::Theta(env->callObjectMethod(this$, mids$[mid_values_bc44a51f1bf17a79], a0.this$));
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
          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self);
          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg);
          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data);
          static PyGetSetDef t_JacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiTheta, q),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiTheta__methods_[] = {
            DECLARE_METHOD(t_JacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_JacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiTheta)[] = {
            { Py_tp_methods, t_JacobiTheta__methods_ },
            { Py_tp_init, (void *) t_JacobiTheta_init_ },
            { Py_tp_getset, t_JacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiTheta, t_JacobiTheta, JacobiTheta);

          void t_JacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiTheta), &PY_TYPE_DEF(JacobiTheta), module, "JacobiTheta", 0);
          }

          void t_JacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "class_", make_descriptor(JacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "wrapfn_", make_descriptor(t_JacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiTheta::initializeClass, 1)))
              return NULL;
            return t_JacobiTheta::wrap_Object(JacobiTheta(((t_JacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = JacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::org::hipparchus::special::elliptic::jacobi::Theta result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_Theta::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }

          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTile::class$ = NULL;
        jmethodID *SimpleTile::mids$ = NULL;
        bool SimpleTile::live$ = false;

        jclass SimpleTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_4f0fb331517d0f4d] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_cad98089d00f8a5b] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_2af4736545087009] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_2af4736545087009] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_2afcbc21f4e57ab2] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_55546ef6a647f39b] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_b74f83833fdad017] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_0b4a238e5205c712] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_2afcbc21f4e57ab2] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_55546ef6a647f39b] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_b74f83833fdad017] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_b74f83833fdad017] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_b74f83833fdad017] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_b74f83833fdad017] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_b74f83833fdad017] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_b74f83833fdad017] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_b74f83833fdad017] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_99e3200dafc19573] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_setElevation_94fe8d9ffeb50676] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_e55884eaad2c5051] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");
            mids$[mid_tileUpdateCompleted_a1fa5dae97ea5ed2] = env->getMethodID(cls, "tileUpdateCompleted", "()V");
            mids$[mid_processUpdatedElevation_ab69da052b88f50c] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint SimpleTile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_4f0fb331517d0f4d], a0.this$, a1.this$, a2, a3));
        }

        jdouble SimpleTile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_cad98089d00f8a5b], a0, a1);
        }

        jint SimpleTile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_2af4736545087009], a0);
        }

        jint SimpleTile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_2af4736545087009], a0);
        }

        jdouble SimpleTile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_2afcbc21f4e57ab2], a0);
        }

        jint SimpleTile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_55546ef6a647f39b]);
        }

        jdouble SimpleTile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_b74f83833fdad017]);
        }

        ::org::orekit::rugged::raster::Tile$Location SimpleTile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_0b4a238e5205c712], a0, a1));
        }

        jdouble SimpleTile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_2afcbc21f4e57ab2], a0);
        }

        jint SimpleTile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_55546ef6a647f39b]);
        }

        jdouble SimpleTile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_b74f83833fdad017]);
        }

        jdouble SimpleTile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_b74f83833fdad017]);
        }

        jint SimpleTile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_55546ef6a647f39b]);
        }

        jint SimpleTile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_55546ef6a647f39b]);
        }

        jdouble SimpleTile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_b74f83833fdad017]);
        }

        jdouble SimpleTile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_b74f83833fdad017]);
        }

        jdouble SimpleTile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_b74f83833fdad017]);
        }

        jint SimpleTile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_55546ef6a647f39b]);
        }

        jint SimpleTile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_55546ef6a647f39b]);
        }

        jdouble SimpleTile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_b74f83833fdad017]);
        }

        jdouble SimpleTile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_b74f83833fdad017]);
        }

        jdouble SimpleTile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_99e3200dafc19573], a0, a1);
        }

        void SimpleTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_94fe8d9ffeb50676], a0, a1, a2);
        }

        void SimpleTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_e55884eaad2c5051], a0, a1, a2, a3, a4, a5);
        }

        void SimpleTile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_a1fa5dae97ea5ed2]);
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
      namespace raster {
        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self);
        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data);
        static PyGetSetDef t_SimpleTile__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleTile, latitudeRows),
          DECLARE_GET_FIELD(t_SimpleTile, latitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeColumns),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevation),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLongitude),
          DECLARE_GET_FIELD(t_SimpleTile, minElevation),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleTile__methods_[] = {
          DECLARE_METHOD(t_SimpleTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setGeometry, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTile)[] = {
          { Py_tp_methods, t_SimpleTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SimpleTile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTile, t_SimpleTile, SimpleTile);

        void t_SimpleTile::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTile), &PY_TYPE_DEF(SimpleTile), module, "SimpleTile", 0);
        }

        void t_SimpleTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "class_", make_descriptor(SimpleTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "wrapfn_", make_descriptor(t_SimpleTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTile::initializeClass, 1)))
            return NULL;
          return t_SimpleTile::wrap_Object(SimpleTile(((t_SimpleTile *) arg)->object.this$));
        }
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/PythonAccuracyProvider.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PythonAccuracyProvider::class$ = NULL;
            jmethodID *PythonAccuracyProvider::mids$ = NULL;
            bool PythonAccuracyProvider::live$ = false;

            jclass PythonAccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PythonAccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAccuracy", "()D");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAccuracyProvider::PythonAccuracyProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonAccuracyProvider::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAccuracyProvider::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAccuracyProvider::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self);
            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args);
            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data);
            static PyGetSetDef t_PythonAccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAccuracyProvider, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_PythonAccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAccuracyProvider, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAccuracyProvider)[] = {
              { Py_tp_methods, t_PythonAccuracyProvider__methods_ },
              { Py_tp_init, (void *) t_PythonAccuracyProvider_init_ },
              { Py_tp_getset, t_PythonAccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonAccuracyProvider, t_PythonAccuracyProvider, PythonAccuracyProvider);

            void t_PythonAccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAccuracyProvider), &PY_TYPE_DEF(PythonAccuracyProvider), module, "PythonAccuracyProvider", 1);
            }

            void t_PythonAccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "class_", make_descriptor(PythonAccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "wrapfn_", make_descriptor(t_PythonAccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAccuracyProvider::initializeClass);
              JNINativeMethod methods[] = {
                { "getAccuracy", "()D", (void *) t_PythonAccuracyProvider_getAccuracy0 },
                { "pythonDecRef", "()V", (void *) t_PythonAccuracyProvider_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_PythonAccuracyProvider::wrap_Object(PythonAccuracyProvider(((t_PythonAccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds)
            {
              PythonAccuracyProvider object((jobject) NULL);

              INT_CALL(object = PythonAccuracyProvider());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAccuracy", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAccuracy", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonConstants.h"
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonConstants::class$ = NULL;
      jmethodID *PythonConstants::mids$ = NULL;
      bool PythonConstants::live$ = false;

      jclass PythonConstants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonConstants");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonConstants::PythonConstants() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonConstants::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonConstants::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonConstants::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self);
      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args);
      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data);
      static PyGetSetDef t_PythonConstants__fields_[] = {
        DECLARE_GET_FIELD(t_PythonConstants, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonConstants__methods_[] = {
        DECLARE_METHOD(t_PythonConstants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonConstants, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonConstants)[] = {
        { Py_tp_methods, t_PythonConstants__methods_ },
        { Py_tp_init, (void *) t_PythonConstants_init_ },
        { Py_tp_getset, t_PythonConstants__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonConstants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonConstants, t_PythonConstants, PythonConstants);

      void t_PythonConstants::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonConstants), &PY_TYPE_DEF(PythonConstants), module, "PythonConstants", 1);
      }

      void t_PythonConstants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "class_", make_descriptor(PythonConstants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "wrapfn_", make_descriptor(t_PythonConstants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonConstants::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonConstants_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonConstants::initializeClass, 1)))
          return NULL;
        return t_PythonConstants::wrap_Object(PythonConstants(((t_PythonConstants *) arg)->object.this$));
      }
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonConstants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds)
      {
        PythonConstants object((jobject) NULL);

        INT_CALL(object = PythonConstants());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args)
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

      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data)
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
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TurnAroundRange::class$ = NULL;
        jmethodID *TurnAroundRange::mids$ = NULL;
        bool TurnAroundRange::live$ = false;
        ::java::lang::String *TurnAroundRange::MEASUREMENT_TYPE = NULL;

        jclass TurnAroundRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TurnAroundRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd3e59569738d7bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimaryStation_e5278a7660eeb13f] = env->getMethodID(cls, "getPrimaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondaryStation_e5278a7660eeb13f] = env->getMethodID(cls, "getSecondaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TurnAroundRange::TurnAroundRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_bd3e59569738d7bf, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getPrimaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimaryStation_e5278a7660eeb13f]));
        }

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getSecondaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondaryStation_e5278a7660eeb13f]));
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
        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args);
        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data);
        static PyGetSetDef t_TurnAroundRange__fields_[] = {
          DECLARE_GET_FIELD(t_TurnAroundRange, primaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, secondaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TurnAroundRange__methods_[] = {
          DECLARE_METHOD(t_TurnAroundRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_TurnAroundRange, getPrimaryStation, METH_NOARGS),
          DECLARE_METHOD(t_TurnAroundRange, getSecondaryStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TurnAroundRange)[] = {
          { Py_tp_methods, t_TurnAroundRange__methods_ },
          { Py_tp_init, (void *) t_TurnAroundRange_init_ },
          { Py_tp_getset, t_TurnAroundRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TurnAroundRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TurnAroundRange, t_TurnAroundRange, TurnAroundRange);
        PyObject *t_TurnAroundRange::wrap_Object(const TurnAroundRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TurnAroundRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TurnAroundRange::install(PyObject *module)
        {
          installType(&PY_TYPE(TurnAroundRange), &PY_TYPE_DEF(TurnAroundRange), module, "TurnAroundRange", 0);
        }

        void t_TurnAroundRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "class_", make_descriptor(TurnAroundRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "wrapfn_", make_descriptor(t_TurnAroundRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(TurnAroundRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*TurnAroundRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TurnAroundRange::initializeClass, 1)))
            return NULL;
          return t_TurnAroundRange::wrap_Object(TurnAroundRange(((t_TurnAroundRange *) arg)->object.this$));
        }
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TurnAroundRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TurnAroundRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TurnAroundRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TurnAroundRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}

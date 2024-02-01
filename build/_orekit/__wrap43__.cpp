#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *FieldBracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *FieldBracketingNthOrderBrentSolver::mids$ = NULL;
        bool FieldBracketingNthOrderBrentSolver::live$ = false;

        jclass FieldBracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_be414b4726c448be] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getAbsoluteAccuracy_08d37e3f77b7239d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_08d37e3f77b7239d] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMaximalOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_getRelativeAccuracy_08d37e3f77b7239d] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_6851f2838839ed9a] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_506031728277a68d] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_20e7140a9cf1e1c4] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBracketingNthOrderBrentSolver::FieldBracketingNthOrderBrentSolver(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be414b4726c448be, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_08d37e3f77b7239d]));
        }

        jint FieldBracketingNthOrderBrentSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_08d37e3f77b7239d]));
        }

        jint FieldBracketingNthOrderBrentSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
        }

        jint FieldBracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_08d37e3f77b7239d]));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_6851f2838839ed9a], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_506031728277a68d], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval FieldBracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_20e7140a9cf1e1c4], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_FieldBracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, evaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_FieldBracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_FieldBracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_FieldBracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldBracketingNthOrderBrentSolver, t_FieldBracketingNthOrderBrentSolver, FieldBracketingNthOrderBrentSolver);
        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_Object(const FieldBracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBracketingNthOrderBrentSolver), &PY_TYPE_DEF(FieldBracketingNthOrderBrentSolver), module, "FieldBracketingNthOrderBrentSolver", 0);
        }

        void t_FieldBracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "class_", make_descriptor(FieldBracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_FieldBracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_FieldBracketingNthOrderBrentSolver::wrap_Object(FieldBracketingNthOrderBrentSolver(((t_FieldBracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jint a3;
          FieldBracketingNthOrderBrentSolver object((jobject) NULL);

          if (!parseArgs(args, "KKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
          {
            INT_CALL(object = FieldBracketingNthOrderBrentSolver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$VectorConsumer::class$ = NULL;
            jmethodID *ParseToken$VectorConsumer::mids$ = NULL;
            bool ParseToken$VectorConsumer::live$ = false;

            jclass ParseToken$VectorConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_30f8886dfb88a63c] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$VectorConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_30f8886dfb88a63c], a0.this$);
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
            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$VectorConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$VectorConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$VectorConsumer)[] = {
              { Py_tp_methods, t_ParseToken$VectorConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$VectorConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$VectorConsumer, t_ParseToken$VectorConsumer, ParseToken$VectorConsumer);

            void t_ParseToken$VectorConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$VectorConsumer), &PY_TYPE_DEF(ParseToken$VectorConsumer), module, "ParseToken$VectorConsumer", 0);
            }

            void t_ParseToken$VectorConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "class_", make_descriptor(ParseToken$VectorConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "wrapfn_", make_descriptor(t_ParseToken$VectorConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$VectorConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$VectorConsumer::wrap_Object(ParseToken$VectorConsumer(((t_ParseToken$VectorConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$VectorConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
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
#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractStorelessUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractStorelessUnivariateStatistic::mids$ = NULL;
        bool AbstractStorelessUnivariateStatistic::live$ = false;

        jclass AbstractStorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_2686517d773e76c2] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractStorelessUnivariateStatistic::AbstractStorelessUnivariateStatistic() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void AbstractStorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic AbstractStorelessUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_2686517d773e76c2]));
        }

        jboolean AbstractStorelessUnivariateStatistic::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        jdouble AbstractStorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
        }

        jint AbstractStorelessUnivariateStatistic::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
        }

        void AbstractStorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
        }

        ::java::lang::String AbstractStorelessUnivariateStatistic::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_AbstractStorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractStorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractStorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, equals, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractStorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractStorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) t_AbstractStorelessUnivariateStatistic_init_ },
          { Py_tp_getset, t_AbstractStorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractStorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractStorelessUnivariateStatistic, t_AbstractStorelessUnivariateStatistic, AbstractStorelessUnivariateStatistic);

        void t_AbstractStorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractStorelessUnivariateStatistic), &PY_TYPE_DEF(AbstractStorelessUnivariateStatistic), module, "AbstractStorelessUnivariateStatistic", 0);
        }

        void t_AbstractStorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "class_", make_descriptor(AbstractStorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractStorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractStorelessUnivariateStatistic::wrap_Object(AbstractStorelessUnivariateStatistic(((t_AbstractStorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds)
        {
          AbstractStorelessUnivariateStatistic object((jobject) NULL);

          INT_CALL(object = AbstractStorelessUnivariateStatistic());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_StorelessUnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::live$ = false;
        ::java::lang::String *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD = NULL;
        jint OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_52d5cf5eaece8ff9] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;");
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_METHOD = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Ljava/lang/String;"));
            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::addNewSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_52d5cf5eaece8ff9], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
        }

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris);

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), module, "OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(j2p(*OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(((t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment result((jobject) NULL);

          if (!parseArgs(args, "KsIK", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/util/Collection.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTPropagator::class$ = NULL;
          jmethodID *DSSTPropagator::mids$ = NULL;
          bool DSSTPropagator::live$ = false;

          jclass DSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c17d99cd56eae8b6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
              mids$[mid_init$_9526e1a202c1b9c8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_701625efdd6dd588] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_a0575630e19e1e5c] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_ec4b975710cb23f6] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeMeanState_04c94896b7fc0007] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeOsculatingState_ec4b975710cb23f6] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getAllForceModels_d751c1a57012b438] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_6b191a9b12c1004b] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_getShortPeriodTerms_d751c1a57012b438] = env->getMethodID(cls, "getShortPeriodTerms", "()Ljava/util/List;");
              mids$[mid_getShortPeriodTermsValue_e8a4ac02afc72623] = env->getMethodID(cls, "getShortPeriodTermsValue", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_initialIsOsculating_eee3de00fe971136] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_ff7cb6c242604316] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setInitialState_3f94e7a0a2844a08] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(D)V");
              mids$[mid_setMu_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_setSatelliteRevolution_8fd427ab23829bf5] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_26a98b9ee89414c5] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_setShortPeriodTerms_aa335fea495d60e0] = env->getMethodID(cls, "setShortPeriodTerms", "(Ljava/util/List;)V");
              mids$[mid_tolerances_b3a187e4032a64c6] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_tolerances_900298746b09a8b2] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_setUpStmAndJacobianGenerators_ff7cb6c242604316] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
              mids$[mid_beforeIntegration_14deaae988292d42] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_afterIntegration_ff7cb6c242604316] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getInitialIntegrationState_8fbfa58855031235] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_createMapper_5f8935bd082b8966] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
              mids$[mid_getMainStateEquations_97764934e3fe735c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_c17d99cd56eae8b6, a0.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_9526e1a202c1b9c8, a0.this$, a1.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_701625efdd6dd588, a0.this$, a1.this$, a2.this$)) {}

          void DSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_a0575630e19e1e5c], a0.this$);
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_ec4b975710cb23f6], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_04c94896b7fc0007], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_ec4b975710cb23f6], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List DSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_d751c1a57012b438]));
          }

          ::org::orekit::orbits::OrbitType DSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
          }

          ::org::orekit::orbits::PositionAngleType DSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
          }

          jint DSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_d6ab429752e7c267]);
          }

          ::java::util::Set DSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_6b191a9b12c1004b]));
          }

          ::java::util::List DSSTPropagator::getShortPeriodTerms() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShortPeriodTerms_d751c1a57012b438]));
          }

          JArray< jdouble > DSSTPropagator::getShortPeriodTermsValue(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getShortPeriodTermsValue_e8a4ac02afc72623], a0.this$));
          }

          jboolean DSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_eee3de00fe971136]);
          }

          void DSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_ff7cb6c242604316]);
          }

          void DSSTPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
          }

          void DSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_72b846eb87f3af9a], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_3f94e7a0a2844a08], a0.this$, a1.this$);
          }

          void DSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_8fd427ab23829bf5], a0);
          }

          void DSSTPropagator::setInterpolationGridToMaxTimeGap(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_1ad26e8c8c0cd65b], a0);
          }

          void DSSTPropagator::setMu(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_1ad26e8c8c0cd65b], a0);
          }

          void DSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_8fd427ab23829bf5], a0);
          }

          void DSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_26a98b9ee89414c5], a0.this$);
          }

          void DSSTPropagator::setShortPeriodTerms(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setShortPeriodTerms_aa335fea495d60e0], a0.this$);
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_b3a187e4032a64c6], a0, a1.this$));
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_900298746b09a8b2], a0, a1, a2.this$));
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
          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_DSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_DSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_DSSTPropagator, mu),
            DECLARE_GET_FIELD(t_DSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_DSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, selectedCoefficients),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, shortPeriodTerms),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_DSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTerms, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTermsValue, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTPropagator)[] = {
            { Py_tp_methods, t_DSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_DSSTPropagator_init_ },
            { Py_tp_getset, t_DSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(DSSTPropagator, t_DSSTPropagator, DSSTPropagator);

          void t_DSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTPropagator), &PY_TYPE_DEF(DSSTPropagator), module, "DSSTPropagator", 0);
          }

          void t_DSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "class_", make_descriptor(DSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "wrapfn_", make_descriptor(t_DSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_DSSTPropagator::wrap_Object(DSSTPropagator(((t_DSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
                {
                  INT_CALL(object = DSSTPropagator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kKk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1, a2));
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

          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getShortPeriodTermsValue(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getShortPeriodTermsValue", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                ::org::orekit::orbits::Orbit a1((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::orbits::Orbit a2((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setShortPeriodTerms(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "shortPeriodTerms", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *AbstractBuilder::class$ = NULL;
          jmethodID *AbstractBuilder::mids$ = NULL;
          bool AbstractBuilder::live$ = false;

          jclass AbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/AbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_635853a14837ea6f] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_66ee964ea58dd871] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getEquatorialRadius_9981f74b2d109da6] = env->getMethodID(cls, "getEquatorialRadius", "()D");
              mids$[mid_getFlattening_9981f74b2d109da6] = env->getMethodID(cls, "getFlattening", "()D");
              mids$[mid_getMissionReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getRangeUnitsConverter_9038361d1e667151] = env->getMethodID(cls, "getRangeUnitsConverter", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;");
              mids$[mid_withConventions_c01141c865e648ee] = env->getMethodID(cls, "withConventions", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withDataContext_9febe7f536541907] = env->getMethodID(cls, "withDataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withEquatorialRadius_6656676ab2dcf86b] = env->getMethodID(cls, "withEquatorialRadius", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withFlattening_6656676ab2dcf86b] = env->getMethodID(cls, "withFlattening", "(D)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withMissionReferenceDate_ad81fb5fa8682be2] = env->getMethodID(cls, "withMissionReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_withRangeUnitsConverter_993de5b681e1d19d] = env->getMethodID(cls, "withRangeUnitsConverter", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_create_8db1476e15353061] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions AbstractBuilder::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_635853a14837ea6f]));
          }

          ::org::orekit::data::DataContext AbstractBuilder::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_66ee964ea58dd871]));
          }

          jdouble AbstractBuilder::getEquatorialRadius() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_9981f74b2d109da6]);
          }

          jdouble AbstractBuilder::getFlattening() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlattening_9981f74b2d109da6]);
          }

          ::org::orekit::time::AbsoluteDate AbstractBuilder::getMissionReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_80e11148db499dda]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter AbstractBuilder::getRangeUnitsConverter() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(env->callObjectMethod(this$, mids$[mid_getRangeUnitsConverter_9038361d1e667151]));
          }

          AbstractBuilder AbstractBuilder::withConventions(const ::org::orekit::utils::IERSConventions & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withConventions_c01141c865e648ee], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withDataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withDataContext_9febe7f536541907], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withEquatorialRadius(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withEquatorialRadius_6656676ab2dcf86b], a0));
          }

          AbstractBuilder AbstractBuilder::withFlattening(jdouble a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withFlattening_6656676ab2dcf86b], a0));
          }

          AbstractBuilder AbstractBuilder::withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withMissionReferenceDate_ad81fb5fa8682be2], a0.this$));
          }

          AbstractBuilder AbstractBuilder::withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
          {
            return AbstractBuilder(env->callObjectMethod(this$, mids$[mid_withRangeUnitsConverter_993de5b681e1d19d], a0.this$));
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
          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args);
          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self);
          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg);
          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data);
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data);
          static PyGetSetDef t_AbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractBuilder, conventions),
            DECLARE_GET_FIELD(t_AbstractBuilder, dataContext),
            DECLARE_GET_FIELD(t_AbstractBuilder, equatorialRadius),
            DECLARE_GET_FIELD(t_AbstractBuilder, flattening),
            DECLARE_GET_FIELD(t_AbstractBuilder, missionReferenceDate),
            DECLARE_GET_FIELD(t_AbstractBuilder, rangeUnitsConverter),
            DECLARE_GET_FIELD(t_AbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractBuilder, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getEquatorialRadius, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getFlattening, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getMissionReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, getRangeUnitsConverter, METH_NOARGS),
            DECLARE_METHOD(t_AbstractBuilder, withConventions, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withDataContext, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withEquatorialRadius, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withFlattening, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withMissionReferenceDate, METH_O),
            DECLARE_METHOD(t_AbstractBuilder, withRangeUnitsConverter, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractBuilder)[] = {
            { Py_tp_methods, t_AbstractBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractBuilder, t_AbstractBuilder, AbstractBuilder);
          PyObject *t_AbstractBuilder::wrap_Object(const AbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractBuilder *self = (t_AbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractBuilder), &PY_TYPE_DEF(AbstractBuilder), module, "AbstractBuilder", 0);
          }

          void t_AbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "class_", make_descriptor(AbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "wrapfn_", make_descriptor(t_AbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractBuilder::wrap_Object(AbstractBuilder(((t_AbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractBuilder_of_(t_AbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractBuilder_getConventions(t_AbstractBuilder *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getDataContext(t_AbstractBuilder *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getEquatorialRadius(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getFlattening(t_AbstractBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFlattening());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_AbstractBuilder_getMissionReferenceDate(t_AbstractBuilder *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_getRangeUnitsConverter(t_AbstractBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(result);
          }

          static PyObject *t_AbstractBuilder_withConventions(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.withConventions(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withConventions", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withDataContext(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withDataContext(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDataContext", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withEquatorialRadius(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withEquatorialRadius(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEquatorialRadius", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withFlattening(t_AbstractBuilder *self, PyObject *arg)
          {
            jdouble a0;
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withFlattening(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withFlattening", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withMissionReferenceDate(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withMissionReferenceDate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMissionReferenceDate", arg);
            return NULL;
          }

          static PyObject *t_AbstractBuilder_withRangeUnitsConverter(t_AbstractBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
            AbstractBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withRangeUnitsConverter(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withRangeUnitsConverter", arg);
            return NULL;
          }
          static PyObject *t_AbstractBuilder_get__parameters_(t_AbstractBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractBuilder_get__conventions(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__dataContext(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__equatorialRadius(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getEquatorialRadius());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__flattening(t_AbstractBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlattening());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractBuilder_get__missionReferenceDate(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMissionReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_AbstractBuilder_get__rangeUnitsConverter(t_AbstractBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter value((jobject) NULL);
            OBJ_CALL(value = self->object.getRangeUnitsConverter());
            return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldOfViewDetector::class$ = NULL;
        jmethodID *FieldOfViewDetector::mids$ = NULL;
        bool FieldOfViewDetector::live$ = false;

        jclass FieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5ad1c4a6625cdb3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_init$_5cfd591e66d1d8ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/propagation/events/VisibilityTrigger;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_6fdfc08762f52cd9] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getPVTarget_781ab98286dad7d5] = env->getMethodID(cls, "getPVTarget", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_5937df4c5c34c4af] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f5ad1c4a6625cdb3, a0.this$, a1.this$)) {}

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2, const ::org::orekit::geometry::fov::FieldOfView & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5cfd591e66d1d8ce, a0.this$, a1, a2.this$, a3.this$)) {}

        jdouble FieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView FieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_6fdfc08762f52cd9]));
        }

        ::org::orekit::utils::PVCoordinatesProvider FieldOfViewDetector::getPVTarget() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVTarget_781ab98286dad7d5]));
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
        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args);
        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args);
        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data);
        static PyGetSetDef t_FieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, pVTarget),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_FieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getPVTarget, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfViewDetector)[] = {
          { Py_tp_methods, t_FieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_FieldOfViewDetector_init_ },
          { Py_tp_getset, t_FieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldOfViewDetector, t_FieldOfViewDetector, FieldOfViewDetector);
        PyObject *t_FieldOfViewDetector::wrap_Object(const FieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfViewDetector), &PY_TYPE_DEF(FieldOfViewDetector), module, "FieldOfViewDetector", 0);
        }

        void t_FieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "class_", make_descriptor(FieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "wrapfn_", make_descriptor(t_FieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_FieldOfViewDetector::wrap_Object(FieldOfViewDetector(((t_FieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::geometry::fov::FieldOfView a3((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kDKk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_, &a3))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
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

        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/SplineInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *SplineInterpolator::class$ = NULL;
        jmethodID *SplineInterpolator::mids$ = NULL;
        bool SplineInterpolator::live$ = false;

        jclass SplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/SplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_d112b93e44ec98b7] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_675f76d3ea97467b] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SplineInterpolator::SplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction SplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d112b93e44ec98b7], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction SplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_675f76d3ea97467b], a0.this$, a1.this$));
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
        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args);

        static PyMethodDef t_SplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_SplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SplineInterpolator)[] = {
          { Py_tp_methods, t_SplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_SplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SplineInterpolator, t_SplineInterpolator, SplineInterpolator);

        void t_SplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SplineInterpolator), &PY_TYPE_DEF(SplineInterpolator), module, "SplineInterpolator", 0);
        }

        void t_SplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "class_", make_descriptor(SplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "wrapfn_", make_descriptor(t_SplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_SplineInterpolator::wrap_Object(SplineInterpolator(((t_SplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          SplineInterpolator object((jobject) NULL);

          INT_CALL(object = SplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
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
#include "org/orekit/time/AGILeapSecondFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader::mids$ = NULL;
      bool AGILeapSecondFilesLoader::live$ = false;
      ::java::lang::String *AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass AGILeapSecondFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_d751c1a57012b438] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}

      ::java::util::List AGILeapSecondFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_d751c1a57012b438]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self);

      static PyMethodDef t_AGILeapSecondFilesLoader__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader, t_AGILeapSecondFilesLoader, AGILeapSecondFilesLoader);

      void t_AGILeapSecondFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader), &PY_TYPE_DEF(AGILeapSecondFilesLoader), module, "AGILeapSecondFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser)));
      }

      void t_AGILeapSecondFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "class_", make_descriptor(AGILeapSecondFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(AGILeapSecondFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader::wrap_Object(AGILeapSecondFilesLoader(((t_AGILeapSecondFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0, a1));
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

      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Euclidean2D::class$ = NULL;
          jmethodID *Euclidean2D::mids$ = NULL;
          bool Euclidean2D::live$ = false;

          jclass Euclidean2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Euclidean2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_86b463c8efc90624] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");
              mids$[mid_getSubSpace_5e8604308fdd6caa] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          Euclidean2D Euclidean2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_86b463c8efc90624]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Euclidean1D Euclidean2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Euclidean1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_5e8604308fdd6caa]));
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
          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data);
          static PyGetSetDef t_Euclidean2D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean2D, dimension),
            DECLARE_GET_FIELD(t_Euclidean2D, instance),
            DECLARE_GET_FIELD(t_Euclidean2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean2D__methods_[] = {
            DECLARE_METHOD(t_Euclidean2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean2D)[] = {
            { Py_tp_methods, t_Euclidean2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean2D, t_Euclidean2D, Euclidean2D);

          void t_Euclidean2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean2D), &PY_TYPE_DEF(Euclidean2D), module, "Euclidean2D", 0);
          }

          void t_Euclidean2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "class_", make_descriptor(Euclidean2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "wrapfn_", make_descriptor(t_Euclidean2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean2D::initializeClass, 1)))
              return NULL;
            return t_Euclidean2D::wrap_Object(Euclidean2D(((t_Euclidean2D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type)
          {
            Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Euclidean2D::getInstance());
            return t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data)
          {
            Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean2D::wrap_Object(value);
          }

          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldBivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldBivariateFunction::mids$ = NULL;
      bool CalculusFieldBivariateFunction::live$ = false;

      jclass CalculusFieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_b5ecd7df9e053968] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_b5ecd7df9e053968], a0.this$, a1.this$));
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
      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldBivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldBivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldBivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldBivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldBivariateFunction, t_CalculusFieldBivariateFunction, CalculusFieldBivariateFunction);
      PyObject *t_CalculusFieldBivariateFunction::wrap_Object(const CalculusFieldBivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldBivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldBivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldBivariateFunction *self = (t_CalculusFieldBivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldBivariateFunction), &PY_TYPE_DEF(CalculusFieldBivariateFunction), module, "CalculusFieldBivariateFunction", 0);
      }

      void t_CalculusFieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "class_", make_descriptor(CalculusFieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldBivariateFunction::wrap_Object(CalculusFieldBivariateFunction(((t_CalculusFieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldBivariateFunction_of_(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldBivariateFunction_value(t_CalculusFieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
      static PyObject *t_CalculusFieldBivariateFunction_get__parameters_(t_CalculusFieldBivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockOneWayGNSSRangeModifier::RelativisticClockOneWayGNSSRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::java::util::List RelativisticClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockOneWayGNSSRangeModifier, t_RelativisticClockOneWayGNSSRangeModifier, RelativisticClockOneWayGNSSRangeModifier);

          void t_RelativisticClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticClockOneWayGNSSRangeModifier), module, "RelativisticClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockOneWayGNSSRangeModifier::wrap_Object(RelativisticClockOneWayGNSSRangeModifier(((t_RelativisticClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockOneWayGNSSRangeModifier_init_(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockOneWayGNSSRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockOneWayGNSSRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/estimation/measurements/PythonComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonComparableMeasurement::class$ = NULL;
        jmethodID *PythonComparableMeasurement::mids$ = NULL;
        bool PythonComparableMeasurement::live$ = false;

        jclass PythonComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_compareTo_abfadd9b92595ff6] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getObservedValue_be783177b060994b] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonComparableMeasurement::PythonComparableMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonComparableMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonComparableMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonComparableMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self);
        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args);
        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data);
        static PyGetSetDef t_PythonComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonComparableMeasurement, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonComparableMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonComparableMeasurement)[] = {
          { Py_tp_methods, t_PythonComparableMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonComparableMeasurement_init_ },
          { Py_tp_getset, t_PythonComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonComparableMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonComparableMeasurement, t_PythonComparableMeasurement, PythonComparableMeasurement);

        void t_PythonComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonComparableMeasurement), &PY_TYPE_DEF(PythonComparableMeasurement), module, "PythonComparableMeasurement", 1);
        }

        void t_PythonComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "class_", make_descriptor(PythonComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "wrapfn_", make_descriptor(t_PythonComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonComparableMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonComparableMeasurement_compareTo0 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonComparableMeasurement_getDate1 },
            { "getObservedValue", "()[D", (void *) t_PythonComparableMeasurement_getObservedValue2 },
            { "pythonDecRef", "()V", (void *) t_PythonComparableMeasurement_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonComparableMeasurement::wrap_Object(PythonComparableMeasurement(((t_PythonComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonComparableMeasurement object((jobject) NULL);

          INT_CALL(object = PythonComparableMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args)
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

        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Chan1997::class$ = NULL;
              jmethodID *Chan1997::mids$ = NULL;
              bool Chan1997::live$ = false;

              jclass Chan1997::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Chan1997::Chan1997() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Chan1997::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7eae8d8112e983e4], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Chan1997::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8edb355cf7d54cf6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Chan1997::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_592990a91429410c]));
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
              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data);
              static PyGetSetDef t_Chan1997__fields_[] = {
                DECLARE_GET_FIELD(t_Chan1997, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Chan1997__methods_[] = {
                DECLARE_METHOD(t_Chan1997, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, compute, METH_VARARGS),
                DECLARE_METHOD(t_Chan1997, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Chan1997)[] = {
                { Py_tp_methods, t_Chan1997__methods_ },
                { Py_tp_init, (void *) t_Chan1997_init_ },
                { Py_tp_getset, t_Chan1997__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Chan1997)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Chan1997, t_Chan1997, Chan1997);

              void t_Chan1997::install(PyObject *module)
              {
                installType(&PY_TYPE(Chan1997), &PY_TYPE_DEF(Chan1997), module, "Chan1997", 0);
              }

              void t_Chan1997::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "class_", make_descriptor(Chan1997::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "wrapfn_", make_descriptor(t_Chan1997::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Chan1997::initializeClass, 1)))
                  return NULL;
                return t_Chan1997::wrap_Object(Chan1997(((t_Chan1997 *) arg)->object.this$));
              }
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Chan1997::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds)
              {
                Chan1997 object((jobject) NULL);

                INT_CALL(object = Chan1997());
                self->object = object;

                return 0;
              }

              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args)
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

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data)
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
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSObserver::class$ = NULL;
        jmethodID *BatchLSObserver::mids$ = NULL;
        bool BatchLSObserver::live$ = false;

        jclass BatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_ac58ca1a85099680] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BatchLSObserver::evaluationPerformed(jint a0, jint a1, const JArray< ::org::orekit::orbits::Orbit > & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::utils::ParameterDriversList & a4, const ::org::orekit::utils::ParameterDriversList & a5, const ::org::orekit::estimation::measurements::EstimationsProvider & a6, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a7) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_ac58ca1a85099680], a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$);
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
        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args);

        static PyMethodDef t_BatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_BatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, evaluationPerformed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSObserver)[] = {
          { Py_tp_methods, t_BatchLSObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSObserver, t_BatchLSObserver, BatchLSObserver);

        void t_BatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSObserver), &PY_TYPE_DEF(BatchLSObserver), module, "BatchLSObserver", 0);
        }

        void t_BatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "class_", make_descriptor(BatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "wrapfn_", make_descriptor(t_BatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_BatchLSObserver::wrap_Object(BatchLSObserver(((t_BatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::orbits::Orbit > a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a4((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a5((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimationsProvider a6((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a7((jobject) NULL);

          if (!parseArgs(args, "II[kkkkkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::measurements::EstimationsProvider::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/PythonMessageObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *PythonMessageObserver::class$ = NULL;
          jmethodID *PythonMessageObserver::mids$ = NULL;
          bool PythonMessageObserver::live$ = false;

          jclass PythonMessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/PythonMessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_messageAvailable_39a02157f7808606] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageObserver::PythonMessageObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonMessageObserver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonMessageObserver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonMessageObserver::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self);
          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args);
          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data);
          static PyGetSetDef t_PythonMessageObserver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageObserver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageObserver__methods_[] = {
            DECLARE_METHOD(t_PythonMessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageObserver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageObserver)[] = {
            { Py_tp_methods, t_PythonMessageObserver__methods_ },
            { Py_tp_init, (void *) t_PythonMessageObserver_init_ },
            { Py_tp_getset, t_PythonMessageObserver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageObserver, t_PythonMessageObserver, PythonMessageObserver);

          void t_PythonMessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageObserver), &PY_TYPE_DEF(PythonMessageObserver), module, "PythonMessageObserver", 1);
          }

          void t_PythonMessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "class_", make_descriptor(PythonMessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "wrapfn_", make_descriptor(t_PythonMessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageObserver::initializeClass);
            JNINativeMethod methods[] = {
              { "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V", (void *) t_PythonMessageObserver_messageAvailable0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageObserver_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageObserver::initializeClass, 1)))
              return NULL;
            return t_PythonMessageObserver::wrap_Object(PythonMessageObserver(((t_PythonMessageObserver *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageObserver object((jobject) NULL);

            INT_CALL(object = PythonMessageObserver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args)
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

          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = env->fromJString((jstring) a0, 0);
            PyObject *o1 = ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(::org::orekit::gnss::metric::messages::ParsedMessage(a1));
            PyObject *result = PyObject_CallMethod(obj, "messageAvailable", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000InputParameters::class$ = NULL;
          jmethodID *DTM2000InputParameters::mids$ = NULL;
          bool DTM2000InputParameters::live$ = false;

          jclass DTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_get24HoursKp_209f08246d708042] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_209f08246d708042] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_209f08246d708042] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_209f08246d708042] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble DTM2000InputParameters::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_209f08246d708042], a0.this$);
          }

          jdouble DTM2000InputParameters::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_209f08246d708042], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
          }

          jdouble DTM2000InputParameters::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_209f08246d708042], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate DTM2000InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
          }

          jdouble DTM2000InputParameters::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_209f08246d708042], a0.this$);
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
          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self);
          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg);
          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data);
          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data);
          static PyGetSetDef t_DTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000InputParameters, maxDate),
            DECLARE_GET_FIELD(t_DTM2000InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_DTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000InputParameters, get24HoursKp, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getInstantFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getMeanFlux, METH_O),
            DECLARE_METHOD(t_DTM2000InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_DTM2000InputParameters, getThreeHourlyKP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000InputParameters)[] = {
            { Py_tp_methods, t_DTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(DTM2000InputParameters, t_DTM2000InputParameters, DTM2000InputParameters);

          void t_DTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000InputParameters), &PY_TYPE_DEF(DTM2000InputParameters), module, "DTM2000InputParameters", 0);
          }

          void t_DTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "class_", make_descriptor(DTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "wrapfn_", make_descriptor(t_DTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_DTM2000InputParameters::wrap_Object(DTM2000InputParameters(((t_DTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_DTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DTM2000InputParameters_get24HoursKp(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.get24HoursKp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "get24HoursKp", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getInstantFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInstantFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInstantFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMaxDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getMeanFlux(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanFlux(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMeanFlux", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_getMinDate(t_DTM2000InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_DTM2000InputParameters_getThreeHourlyKP(t_DTM2000InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKP", arg);
            return NULL;
          }

          static PyObject *t_DTM2000InputParameters_get__maxDate(t_DTM2000InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_DTM2000InputParameters_get__minDate(t_DTM2000InputParameters *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadata::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadata::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadata::live$ = false;

              jclass AttitudeCovarianceHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCovBasis_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovBasis", "()Ljava/lang/String;");
                  mids$[mid_getCovBasisID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovBasisID", "()Ljava/lang/String;");
                  mids$[mid_getCovID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovID", "()Ljava/lang/String;");
                  mids$[mid_getCovPrevID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCovPrevID", "()Ljava/lang/String;");
                  mids$[mid_getCovReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getCovReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getCovType_74687e132732dee9] = env->getMethodID(cls, "getCovType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_setCovBasis_105e1eadb709d9ac] = env->getMethodID(cls, "setCovBasis", "(Ljava/lang/String;)V");
                  mids$[mid_setCovBasisID_105e1eadb709d9ac] = env->getMethodID(cls, "setCovBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovID_105e1eadb709d9ac] = env->getMethodID(cls, "setCovID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovPrevID_105e1eadb709d9ac] = env->getMethodID(cls, "setCovPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setCovReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setCovReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setCovType_fceaef4829f7546b] = env->getMethodID(cls, "setCovType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistoryMetadata::AttitudeCovarianceHistoryMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasis() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasis_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovBasisID_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovID_d2c8eb4129821f0e]));
              }

              ::java::lang::String AttitudeCovarianceHistoryMetadata::getCovPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovPrevID_d2c8eb4129821f0e]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeCovarianceHistoryMetadata::getCovReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCovReferenceFrame_0fc1562b68204151]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovarianceHistoryMetadata::getCovType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovType_74687e132732dee9]));
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasis(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasis_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovBasisID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovPrevID_105e1eadb709d9ac], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovReferenceFrame_2c8b859a72c0094e], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::setCovType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovType_fceaef4829f7546b], a0.this$);
              }

              void AttitudeCovarianceHistoryMetadata::validate(jdouble a0) const
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
              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data);
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasis),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covBasisID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covPrevID),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudeCovarianceHistoryMetadata, covType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasis, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovBasisID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, getCovType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasis, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovBasisID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, setCovType, METH_O),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadata)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistoryMetadata_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadata, t_AttitudeCovarianceHistoryMetadata, AttitudeCovarianceHistoryMetadata);

              void t_AttitudeCovarianceHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadata), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadata), module, "AttitudeCovarianceHistoryMetadata", 0);
              }

              void t_AttitudeCovarianceHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "class_", make_descriptor(AttitudeCovarianceHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadata::wrap_Object(AttitudeCovarianceHistoryMetadata(((t_AttitudeCovarianceHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistoryMetadata_init_(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                AttitudeCovarianceHistoryMetadata object((jobject) NULL);

                INT_CALL(object = AttitudeCovarianceHistoryMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasis(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasis());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovBasisID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovBasisID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovPrevID(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_getCovType(t_AttitudeCovarianceHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasis", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovBasisID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCovPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCovReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_setCovType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_validate(t_AttitudeCovarianceHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeCovarianceHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasis(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasis());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasis(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasis", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovBasisID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covBasisID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covBasisID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovPrevID());
                return j2p(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covPrevID(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCovPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covPrevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covReferenceFrame(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadata_get__covType(t_AttitudeCovarianceHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeCovarianceHistoryMetadata_set__covType(t_AttitudeCovarianceHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covType", arg);
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
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_d4f2e3295d4ac943] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldAbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_d4f2e3295d4ac943], a0.this$));
        }

        void FieldAbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator$MainStateEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator$MainStateEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations, t_FieldAbstractIntegratedPropagator$MainStateEquations, FieldAbstractIntegratedPropagator$MainStateEquations);
        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(const FieldAbstractIntegratedPropagator$MainStateEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator$MainStateEquations *self = (t_FieldAbstractIntegratedPropagator$MainStateEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations), module, "FieldAbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_FieldAbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator$MainStateEquations::wrap_Object(FieldAbstractIntegratedPropagator$MainStateEquations(((t_FieldAbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_of_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_init(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
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
        static PyObject *t_FieldAbstractIntegratedPropagator$MainStateEquations_get__parameters_(t_FieldAbstractIntegratedPropagator$MainStateEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEStepEndHandler::class$ = NULL;
        jmethodID *FieldODEStepEndHandler::mids$ = NULL;
        bool FieldODEStepEndHandler::live$ = false;

        jclass FieldODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetState_08b29551cfabf0c4] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_stepEndOccurred_6abf49f2c97784dc] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepEndHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEStepEndHandler::resetState(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_08b29551cfabf0c4], a0.this$));
        }

        ::org::hipparchus::ode::events::Action FieldODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_6abf49f2c97784dc], a0.this$, a1));
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
        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepEndHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepEndHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_FieldODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepEndHandler)[] = {
          { Py_tp_methods, t_FieldODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepEndHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepEndHandler, t_FieldODEStepEndHandler, FieldODEStepEndHandler);
        PyObject *t_FieldODEStepEndHandler::wrap_Object(const FieldODEStepEndHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepEndHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepEndHandler), &PY_TYPE_DEF(FieldODEStepEndHandler), module, "FieldODEStepEndHandler", 0);
        }

        void t_FieldODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "class_", make_descriptor(FieldODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "wrapfn_", make_descriptor(t_FieldODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepEndHandler::wrap_Object(FieldODEStepEndHandler(((t_FieldODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonFieldAdditionalStateProvider::mids$ = NULL;
      bool PythonFieldAdditionalStateProvider::live$ = false;

      jclass PythonFieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_d4f2e3295d4ac943] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_712e981f67f3ccbe] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
          mids$[mid_yield__712e981f67f3ccbe] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAdditionalStateProvider::PythonFieldAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }

      jboolean PythonFieldAdditionalStateProvider::yield(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_712e981f67f3ccbe], a0.this$);
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
      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self);
      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonFieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonFieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonFieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldAdditionalStateProvider, t_PythonFieldAdditionalStateProvider, PythonFieldAdditionalStateProvider);
      PyObject *t_PythonFieldAdditionalStateProvider::wrap_Object(const PythonFieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAdditionalStateProvider), &PY_TYPE_DEF(PythonFieldAdditionalStateProvider), module, "PythonFieldAdditionalStateProvider", 1);
      }

      void t_PythonFieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "class_", make_descriptor(PythonFieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAdditionalStateProvider::wrap_Object(PythonFieldAdditionalStateProvider(((t_PythonFieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data)
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
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CommonGnssData::class$ = NULL;
            jmethodID *CommonGnssData::mids$ = NULL;
            bool CommonGnssData::live$ = false;

            jclass CommonGnssData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CommonGnssData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf0_9981f74b2d109da6] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_9981f74b2d109da6] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAngularVelocity_9981f74b2d109da6] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCycleDuration_9981f74b2d109da6] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_9981f74b2d109da6] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getM0_9981f74b2d109da6] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_9981f74b2d109da6] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_9981f74b2d109da6] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_d6ab429752e7c267] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_9981f74b2d109da6] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getSma_9981f74b2d109da6] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_d6ab429752e7c267] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAf0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAf0", "(D)V");
                mids$[mid_setAf1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAf1", "(D)V");
                mids$[mid_setDate_8497861b879c83f7] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setE_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setI0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setI0", "(D)V");
                mids$[mid_setM0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setM0", "(D)V");
                mids$[mid_setOmega0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOmega0", "(D)V");
                mids$[mid_setOmegaDot_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOmegaDot", "(D)V");
                mids$[mid_setPRN_8fd427ab23829bf5] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setPa_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setSma_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSma", "(D)V");
                mids$[mid_setTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setWeek_8fd427ab23829bf5] = env->getMethodID(cls, "setWeek", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonGnssData::CommonGnssData(jdouble a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

            jdouble CommonGnssData::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_9981f74b2d109da6]);
            }

            ::org::orekit::time::AbsoluteDate CommonGnssData::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
            }

            jdouble CommonGnssData::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_9981f74b2d109da6]);
            }

            jint CommonGnssData::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_d6ab429752e7c267]);
            }

            jdouble CommonGnssData::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_9981f74b2d109da6]);
            }

            jdouble CommonGnssData::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
            }

            jint CommonGnssData::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_d6ab429752e7c267]);
            }

            void CommonGnssData::setAf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf0_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setAf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf1_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_8497861b879c83f7], a0.this$);
            }

            void CommonGnssData::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setI0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setM0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setM0_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setOmega0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmega0_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setOmegaDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmegaDot_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_8fd427ab23829bf5], a0);
            }

            void CommonGnssData::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setSma(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSma_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_1ad26e8c8c0cd65b], a0);
            }

            void CommonGnssData::setWeek(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeek_8fd427ab23829bf5], a0);
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
            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyGetSetDef t_CommonGnssData__fields_[] = {
              DECLARE_GETSET_FIELD(t_CommonGnssData, af0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, af1),
              DECLARE_GET_FIELD(t_CommonGnssData, angularVelocity),
              DECLARE_GET_FIELD(t_CommonGnssData, cycleDuration),
              DECLARE_GETSET_FIELD(t_CommonGnssData, date),
              DECLARE_GETSET_FIELD(t_CommonGnssData, e),
              DECLARE_GETSET_FIELD(t_CommonGnssData, i0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, m0),
              DECLARE_GET_FIELD(t_CommonGnssData, mu),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omega0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omegaDot),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pRN),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pa),
              DECLARE_GETSET_FIELD(t_CommonGnssData, sma),
              DECLARE_GETSET_FIELD(t_CommonGnssData, time),
              DECLARE_GETSET_FIELD(t_CommonGnssData, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonGnssData__methods_[] = {
              DECLARE_METHOD(t_CommonGnssData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getDate, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getE, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getI0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getM0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getMu, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPa, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getSma, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getTime, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, setAf0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setAf1, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setDate, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setE, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setI0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setM0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmega0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmegaDot, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPRN, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPa, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setSma, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setTime, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setWeek, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonGnssData)[] = {
              { Py_tp_methods, t_CommonGnssData__methods_ },
              { Py_tp_init, (void *) t_CommonGnssData_init_ },
              { Py_tp_getset, t_CommonGnssData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonGnssData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CommonGnssData, t_CommonGnssData, CommonGnssData);

            void t_CommonGnssData::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonGnssData), &PY_TYPE_DEF(CommonGnssData), module, "CommonGnssData", 0);
            }

            void t_CommonGnssData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "class_", make_descriptor(CommonGnssData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "wrapfn_", make_descriptor(t_CommonGnssData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonGnssData::initializeClass, 1)))
                return NULL;
              return t_CommonGnssData::wrap_Object(CommonGnssData(((t_CommonGnssData *) arg)->object.this$));
            }
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonGnssData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              CommonGnssData object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = CommonGnssData(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf1", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setM0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setM0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmega0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmega0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmegaDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmegaDot", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSma(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSma", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setWeek(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeek", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af1", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setM0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "m0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmega0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omega0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmegaDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omegaDot", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSma(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sma", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setWeek(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "week", arg);
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
#include "org/orekit/files/rinex/observation/RinexObservationParser.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationParser::class$ = NULL;
          jmethodID *RinexObservationParser::mids$ = NULL;
          bool RinexObservationParser::live$ = false;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_2_NAMES = NULL;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_3_NAMES = NULL;

          jclass RinexObservationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b6b8aa17d4a34a34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_355295220c644e15] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/observation/RinexObservation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_RINEX_2_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_2_NAMES", "Ljava/lang/String;"));
              DEFAULT_RINEX_3_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_3_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationParser::RinexObservationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          RinexObservationParser::RinexObservationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6b8aa17d4a34a34, a0.this$)) {}

          ::org::orekit::files::rinex::observation::RinexObservation RinexObservationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::observation::RinexObservation(env->callObjectMethod(this$, mids$[mid_parse_355295220c644e15], a0.this$));
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
          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg);

          static PyMethodDef t_RinexObservationParser__methods_[] = {
            DECLARE_METHOD(t_RinexObservationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationParser)[] = {
            { Py_tp_methods, t_RinexObservationParser__methods_ },
            { Py_tp_init, (void *) t_RinexObservationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationParser, t_RinexObservationParser, RinexObservationParser);

          void t_RinexObservationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationParser), &PY_TYPE_DEF(RinexObservationParser), module, "RinexObservationParser", 0);
          }

          void t_RinexObservationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "class_", make_descriptor(RinexObservationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "wrapfn_", make_descriptor(t_RinexObservationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexObservationParser::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_2_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_2_NAMES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_3_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_3_NAMES)));
          }

          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationParser::initializeClass, 1)))
              return NULL;
            return t_RinexObservationParser::wrap_Object(RinexObservationParser(((t_RinexObservationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexObservationParser object((jobject) NULL);

                INT_CALL(object = RinexObservationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexObservationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexObservationParser(a0));
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

          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::RinexObservation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::observation::t_RinexObservation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHull2D::class$ = NULL;
            jmethodID *ConvexHull2D::mids$ = NULL;
            bool ConvexHull2D::live$ = false;

            jclass ConvexHull2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2daec3c74ed387fa] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
                mids$[mid_createRegion_3069dff3a674defc] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
                mids$[mid_getLineSegments_ac566408702c8cf2] = env->getMethodID(cls, "getLineSegments", "()[Lorg/hipparchus/geometry/euclidean/twod/Segment;");
                mids$[mid_getVertices_891663da42637b5a] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ConvexHull2D::ConvexHull2D(const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2daec3c74ed387fa, a0.this$, a1)) {}

            ::org::hipparchus::geometry::partitioning::Region ConvexHull2D::createRegion() const
            {
              return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_3069dff3a674defc]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > ConvexHull2D::getLineSegments() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Segment >(env->callObjectMethod(this$, mids$[mid_getLineSegments_ac566408702c8cf2]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > ConvexHull2D::getVertices() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D >(env->callObjectMethod(this$, mids$[mid_getVertices_891663da42637b5a]));
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
            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data);
            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data);
            static PyGetSetDef t_ConvexHull2D__fields_[] = {
              DECLARE_GET_FIELD(t_ConvexHull2D, lineSegments),
              DECLARE_GET_FIELD(t_ConvexHull2D, vertices),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ConvexHull2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHull2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, createRegion, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getLineSegments, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getVertices, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHull2D)[] = {
              { Py_tp_methods, t_ConvexHull2D__methods_ },
              { Py_tp_init, (void *) t_ConvexHull2D_init_ },
              { Py_tp_getset, t_ConvexHull2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHull2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ConvexHull2D, t_ConvexHull2D, ConvexHull2D);

            void t_ConvexHull2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHull2D), &PY_TYPE_DEF(ConvexHull2D), module, "ConvexHull2D", 0);
            }

            void t_ConvexHull2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "class_", make_descriptor(ConvexHull2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "wrapfn_", make_descriptor(t_ConvexHull2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHull2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHull2D::wrap_Object(ConvexHull2D(((t_ConvexHull2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHull2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a0((jobject) NULL);
              jdouble a1;
              ConvexHull2D object((jobject) NULL);

              if (!parseArgs(args, "[kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConvexHull2D(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self)
            {
              ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
              OBJ_CALL(result = self->object.createRegion());
              return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > result((jobject) NULL);
              OBJ_CALL(result = self->object.getLineSegments());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > result((jobject) NULL);
              OBJ_CALL(result = self->object.getVertices());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > value((jobject) NULL);
              OBJ_CALL(value = self->object.getLineSegments());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > value((jobject) NULL);
              OBJ_CALL(value = self->object.getVertices());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonObservedMeasurement::class$ = NULL;
        jmethodID *PythonObservedMeasurement::mids$ = NULL;
        bool PythonObservedMeasurement::live$ = false;

        jclass PythonObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addModifier_a3bed5360bec47d0] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_compareTo_abfadd9b92595ff6] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_estimate_eda25b8c88791d9a] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBaseWeight_be783177b060994b] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_d2c8eb4129821f0e] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_d751c1a57012b438] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_be783177b060994b] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_d751c1a57012b438] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_be783177b060994b] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_eee3de00fe971136] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEnabled_b35db77cae58639e] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonObservedMeasurement::PythonObservedMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonObservedMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonObservedMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonObservedMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args);
        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self);
        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args);
        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0);
        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data);
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data);
        static PyGetSetDef t_PythonObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, self),
          DECLARE_GET_FIELD(t_PythonObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonObservedMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonObservedMeasurement)[] = {
          { Py_tp_methods, t_PythonObservedMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonObservedMeasurement_init_ },
          { Py_tp_getset, t_PythonObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonObservedMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonObservedMeasurement, t_PythonObservedMeasurement, PythonObservedMeasurement);
        PyObject *t_PythonObservedMeasurement::wrap_Object(const PythonObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonObservedMeasurement *self = (t_PythonObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonObservedMeasurement), &PY_TYPE_DEF(PythonObservedMeasurement), module, "PythonObservedMeasurement", 1);
        }

        void t_PythonObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "class_", make_descriptor(PythonObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "wrapfn_", make_descriptor(t_PythonObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonObservedMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonObservedMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonObservedMeasurement_addModifier0 },
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonObservedMeasurement_compareTo1 },
            { "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonObservedMeasurement_estimate2 },
            { "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonObservedMeasurement_estimateWithoutDerivatives3 },
            { "getBaseWeight", "()[D", (void *) t_PythonObservedMeasurement_getBaseWeight4 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonObservedMeasurement_getDate5 },
            { "getDimension", "()I", (void *) t_PythonObservedMeasurement_getDimension6 },
            { "getMeasurementType", "()Ljava/lang/String;", (void *) t_PythonObservedMeasurement_getMeasurementType7 },
            { "getModifiers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getModifiers8 },
            { "getObservedValue", "()[D", (void *) t_PythonObservedMeasurement_getObservedValue9 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getParametersDrivers10 },
            { "getSatellites", "()Ljava/util/List;", (void *) t_PythonObservedMeasurement_getSatellites11 },
            { "getTheoreticalStandardDeviation", "()[D", (void *) t_PythonObservedMeasurement_getTheoreticalStandardDeviation12 },
            { "isEnabled", "()Z", (void *) t_PythonObservedMeasurement_isEnabled13 },
            { "pythonDecRef", "()V", (void *) t_PythonObservedMeasurement_pythonDecRef14 },
            { "setEnabled", "(Z)V", (void *) t_PythonObservedMeasurement_setEnabled15 },
          };
          env->registerNatives(cls, methods, 16);
        }

        static PyObject *t_PythonObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonObservedMeasurement::wrap_Object(PythonObservedMeasurement(((t_PythonObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonObservedMeasurement_of_(t_PythonObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonObservedMeasurement_init_(t_PythonObservedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonObservedMeasurement object((jobject) NULL);

          INT_CALL(object = PythonObservedMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonObservedMeasurement_finalize(t_PythonObservedMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonObservedMeasurement_pythonExtension(t_PythonObservedMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonObservedMeasurement_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
          PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonObservedMeasurement_compareTo1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonObservedMeasurement_estimate2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimate", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("estimate", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_estimateWithoutDerivatives3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "estimateWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("estimateWithoutDerivatives", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getBaseWeight4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBaseWeight", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getBaseWeight", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getDate5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jint JNICALL t_PythonObservedMeasurement_getDimension6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jobject JNICALL t_PythonObservedMeasurement_getMeasurementType7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMeasurementType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getMeasurementType", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getModifiers8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getModifiers", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getObservedValue9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getParametersDrivers10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
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

        static jobject JNICALL t_PythonObservedMeasurement_getSatellites11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static jobject JNICALL t_PythonObservedMeasurement_getTheoreticalStandardDeviation12(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getTheoreticalStandardDeviation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getTheoreticalStandardDeviation", result);
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

        static jboolean JNICALL t_PythonObservedMeasurement_isEnabled13(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isEnabled", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonObservedMeasurement_pythonDecRef14(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonObservedMeasurement_setEnabled15(JNIEnv *jenv, jobject jobj, jboolean a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonObservedMeasurement::mids$[PythonObservedMeasurement::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = (a0 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "setEnabled", "O", o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonObservedMeasurement_get__self(t_PythonObservedMeasurement *self, void *data)
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
        static PyObject *t_PythonObservedMeasurement_get__parameters_(t_PythonObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/util/List.h"
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/DataProvider.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvidersManager::class$ = NULL;
      jmethodID *DataProvidersManager::mids$ = NULL;
      bool DataProvidersManager::live$ = false;
      ::java::lang::String *DataProvidersManager::OREKIT_DATA_PATH = NULL;

      jclass DataProvidersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvidersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addDefaultProviders_ff7cb6c242604316] = env->getMethodID(cls, "addDefaultProviders", "()V");
          mids$[mid_addProvider_367cb163eeb24eae] = env->getMethodID(cls, "addProvider", "(Lorg/orekit/data/DataProvider;)V");
          mids$[mid_clearLoadedDataNames_ff7cb6c242604316] = env->getMethodID(cls, "clearLoadedDataNames", "()V");
          mids$[mid_clearProviders_ff7cb6c242604316] = env->getMethodID(cls, "clearProviders", "()V");
          mids$[mid_feed_f6d803022cb39ea8] = env->getMethodID(cls, "feed", "(Ljava/lang/String;Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_getFiltersManager_558902389ce51bbb] = env->getMethodID(cls, "getFiltersManager", "()Lorg/orekit/data/FiltersManager;");
          mids$[mid_getLoadedDataNames_6b191a9b12c1004b] = env->getMethodID(cls, "getLoadedDataNames", "()Ljava/util/Set;");
          mids$[mid_getProviders_d751c1a57012b438] = env->getMethodID(cls, "getProviders", "()Ljava/util/List;");
          mids$[mid_isSupported_786e17c9e4f257d8] = env->getMethodID(cls, "isSupported", "(Lorg/orekit/data/DataProvider;)Z");
          mids$[mid_removeProvider_a8e440e2a9a1fd7c] = env->getMethodID(cls, "removeProvider", "(Lorg/orekit/data/DataProvider;)Lorg/orekit/data/DataProvider;");
          mids$[mid_resetFiltersToDefault_ff7cb6c242604316] = env->getMethodID(cls, "resetFiltersToDefault", "()V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OREKIT_DATA_PATH = new ::java::lang::String(env->getStaticObjectField(cls, "OREKIT_DATA_PATH", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataProvidersManager::DataProvidersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void DataProvidersManager::addDefaultProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultProviders_ff7cb6c242604316]);
      }

      void DataProvidersManager::addProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addProvider_367cb163eeb24eae], a0.this$);
      }

      void DataProvidersManager::clearLoadedDataNames() const
      {
        env->callVoidMethod(this$, mids$[mid_clearLoadedDataNames_ff7cb6c242604316]);
      }

      void DataProvidersManager::clearProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearProviders_ff7cb6c242604316]);
      }

      jboolean DataProvidersManager::feed(const ::java::lang::String & a0, const ::org::orekit::data::DataLoader & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_feed_f6d803022cb39ea8], a0.this$, a1.this$);
      }

      ::org::orekit::data::FiltersManager DataProvidersManager::getFiltersManager() const
      {
        return ::org::orekit::data::FiltersManager(env->callObjectMethod(this$, mids$[mid_getFiltersManager_558902389ce51bbb]));
      }

      ::java::util::Set DataProvidersManager::getLoadedDataNames() const
      {
        return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getLoadedDataNames_6b191a9b12c1004b]));
      }

      ::java::util::List DataProvidersManager::getProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getProviders_d751c1a57012b438]));
      }

      jboolean DataProvidersManager::isSupported(const ::org::orekit::data::DataProvider & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_786e17c9e4f257d8], a0.this$);
      }

      ::org::orekit::data::DataProvider DataProvidersManager::removeProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        return ::org::orekit::data::DataProvider(env->callObjectMethod(this$, mids$[mid_removeProvider_a8e440e2a9a1fd7c], a0.this$));
      }

      void DataProvidersManager::resetFiltersToDefault() const
      {
        env->callVoidMethod(this$, mids$[mid_resetFiltersToDefault_ff7cb6c242604316]);
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
      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args);
      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data);
      static PyGetSetDef t_DataProvidersManager__fields_[] = {
        DECLARE_GET_FIELD(t_DataProvidersManager, filtersManager),
        DECLARE_GET_FIELD(t_DataProvidersManager, loadedDataNames),
        DECLARE_GET_FIELD(t_DataProvidersManager, providers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataProvidersManager__methods_[] = {
        DECLARE_METHOD(t_DataProvidersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, addDefaultProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, addProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, clearLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, clearProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, feed, METH_VARARGS),
        DECLARE_METHOD(t_DataProvidersManager, getFiltersManager, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, isSupported, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, removeProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, resetFiltersToDefault, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvidersManager)[] = {
        { Py_tp_methods, t_DataProvidersManager__methods_ },
        { Py_tp_init, (void *) t_DataProvidersManager_init_ },
        { Py_tp_getset, t_DataProvidersManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvidersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvidersManager, t_DataProvidersManager, DataProvidersManager);

      void t_DataProvidersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvidersManager), &PY_TYPE_DEF(DataProvidersManager), module, "DataProvidersManager", 0);
      }

      void t_DataProvidersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "class_", make_descriptor(DataProvidersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "wrapfn_", make_descriptor(t_DataProvidersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "boxfn_", make_descriptor(boxObject));
        env->getClass(DataProvidersManager::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "OREKIT_DATA_PATH", make_descriptor(j2p(*DataProvidersManager::OREKIT_DATA_PATH)));
      }

      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvidersManager::initializeClass, 1)))
          return NULL;
        return t_DataProvidersManager::wrap_Object(DataProvidersManager(((t_DataProvidersManager *) arg)->object.this$));
      }
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvidersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds)
      {
        DataProvidersManager object((jobject) NULL);

        INT_CALL(object = DataProvidersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.addDefaultProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearLoadedDataNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataLoader a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "sk", ::org::orekit::data::DataLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.feed(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "feed", args);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self)
      {
        ::org::orekit::data::FiltersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(result);
      }

      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self)
      {
        ::java::util::Set result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::data::PY_TYPE(DataProvider));
      }

      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        ::org::orekit::data::DataProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.removeProvider(a0));
          return ::org::orekit::data::t_DataProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "removeProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.resetFiltersToDefault());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data)
      {
        ::org::orekit::data::FiltersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data)
      {
        ::java::util::Set value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/EstimatedIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *EstimatedIonosphericModel::class$ = NULL;
          jmethodID *EstimatedIonosphericModel::mids$ = NULL;
          bool EstimatedIonosphericModel::live$ = false;
          ::java::lang::String *EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT = NULL;

          jclass EstimatedIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/EstimatedIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a3d97e65b95c5166] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericMappingFunction;D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_9e5ad090f1de07ed] = env->getMethodID(cls, "pathDelay", "(DD[D)D");
              mids$[mid_pathDelay_2ed554b735897fc8] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_d2f5e0e8b7e00e80] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_c84aeff9124fe654] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VERTICAL_TOTAL_ELECTRON_CONTENT = new ::java::lang::String(env->getStaticObjectField(cls, "VERTICAL_TOTAL_ELECTRON_CONTENT", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedIonosphericModel::EstimatedIonosphericModel(const ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3d97e65b95c5166, a0.this$, a1)) {}

          ::java::util::List EstimatedIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          jdouble EstimatedIonosphericModel::pathDelay(jdouble a0, jdouble a1, const JArray< jdouble > & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_9e5ad090f1de07ed], a0, a1, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_2ed554b735897fc8], a0.this$, a1, a2.this$));
          }

          jdouble EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_d2f5e0e8b7e00e80], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_c84aeff9124fe654], a0.this$, a1.this$, a2, a3.this$));
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
        namespace ionosphere {
          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self);
          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args);
          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data);
          static PyGetSetDef t_EstimatedIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedIonosphericModel)[] = {
            { Py_tp_methods, t_EstimatedIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedIonosphericModel_init_ },
            { Py_tp_getset, t_EstimatedIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedIonosphericModel, t_EstimatedIonosphericModel, EstimatedIonosphericModel);

          void t_EstimatedIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedIonosphericModel), &PY_TYPE_DEF(EstimatedIonosphericModel), module, "EstimatedIonosphericModel", 0);
          }

          void t_EstimatedIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "class_", make_descriptor(EstimatedIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "wrapfn_", make_descriptor(t_EstimatedIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedIonosphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "VERTICAL_TOTAL_ELECTRON_CONTENT", make_descriptor(j2p(*EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT)));
          }

          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedIonosphericModel::wrap_Object(EstimatedIonosphericModel(((t_EstimatedIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction a0((jobject) NULL);
            jdouble a1;
            EstimatedIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EstimatedIonosphericModel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                JArray< jdouble > a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KD[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenZonalLinear::class$ = NULL;
              jmethodID *FieldHansenZonalLinear::mids$ = NULL;
              bool FieldHansenZonalLinear::live$ = false;

              jclass FieldHansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3214cb148b0221a6] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_f63ca9e3185c722e] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_b23de0cfc61f8f60] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_b23de0cfc61f8f60] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenZonalLinear::FieldHansenZonalLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3214cb148b0221a6, a0, a1, a2.this$)) {}

              void FieldHansenZonalLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_f63ca9e3185c722e], a0.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_b23de0cfc61f8f60], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenZonalLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_b23de0cfc61f8f60], a0, a1.this$));
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
              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args);
              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg);
              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args);
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data);
              static PyGetSetDef t_FieldHansenZonalLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenZonalLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenZonalLinear)[] = {
                { Py_tp_methods, t_FieldHansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenZonalLinear_init_ },
                { Py_tp_getset, t_FieldHansenZonalLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenZonalLinear, t_FieldHansenZonalLinear, FieldHansenZonalLinear);
              PyObject *t_FieldHansenZonalLinear::wrap_Object(const FieldHansenZonalLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenZonalLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenZonalLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenZonalLinear *self = (t_FieldHansenZonalLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenZonalLinear), &PY_TYPE_DEF(FieldHansenZonalLinear), module, "FieldHansenZonalLinear", 0);
              }

              void t_FieldHansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "class_", make_descriptor(FieldHansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "wrapfn_", make_descriptor(t_FieldHansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenZonalLinear::wrap_Object(FieldHansenZonalLinear(((t_FieldHansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenZonalLinear_of_(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenZonalLinear_init_(t_FieldHansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenZonalLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenZonalLinear_computeInitValues(t_FieldHansenZonalLinear *self, PyObject *arg)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getDerivative(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenZonalLinear_getValue(t_FieldHansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenZonalLinear_get__parameters_(t_FieldHansenZonalLinear *self, void *data)
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
#include "org/hipparchus/linear/ConjugateGradient.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ConjugateGradient::class$ = NULL;
      jmethodID *ConjugateGradient::mids$ = NULL;
      bool ConjugateGradient::live$ = false;
      ::java::lang::String *ConjugateGradient::OPERATOR = NULL;
      ::java::lang::String *ConjugateGradient::VECTOR = NULL;

      jclass ConjugateGradient::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ConjugateGradient");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c5b1307f8763947a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_50acb8bcbb80a276] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_eee3de00fe971136] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solveInPlace_35226d9fdc897ac0] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OPERATOR = new ::java::lang::String(env->getStaticObjectField(cls, "OPERATOR", "Ljava/lang/String;"));
          VECTOR = new ::java::lang::String(env->getStaticObjectField(cls, "VECTOR", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConjugateGradient::ConjugateGradient(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_c5b1307f8763947a, a0.this$, a1, a2)) {}

      ConjugateGradient::ConjugateGradient(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_50acb8bcbb80a276, a0, a1, a2)) {}

      jboolean ConjugateGradient::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_eee3de00fe971136]);
      }

      ::org::hipparchus::linear::RealVector ConjugateGradient::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_35226d9fdc897ac0], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self);
      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args);

      static PyMethodDef t_ConjugateGradient__methods_[] = {
        DECLARE_METHOD(t_ConjugateGradient, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_ConjugateGradient, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConjugateGradient)[] = {
        { Py_tp_methods, t_ConjugateGradient__methods_ },
        { Py_tp_init, (void *) t_ConjugateGradient_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConjugateGradient)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(ConjugateGradient, t_ConjugateGradient, ConjugateGradient);

      void t_ConjugateGradient::install(PyObject *module)
      {
        installType(&PY_TYPE(ConjugateGradient), &PY_TYPE_DEF(ConjugateGradient), module, "ConjugateGradient", 0);
      }

      void t_ConjugateGradient::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "class_", make_descriptor(ConjugateGradient::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "wrapfn_", make_descriptor(t_ConjugateGradient::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "boxfn_", make_descriptor(boxObject));
        env->getClass(ConjugateGradient::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "OPERATOR", make_descriptor(j2p(*ConjugateGradient::OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "VECTOR", make_descriptor(j2p(*ConjugateGradient::VECTOR)));
      }

      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConjugateGradient::initializeClass, 1)))
          return NULL;
        return t_ConjugateGradient::wrap_Object(ConjugateGradient(((t_ConjugateGradient *) arg)->object.this$));
      }
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConjugateGradient::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
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

      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector a3((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ConjugateGradient), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *GlonassSatelliteChannel::class$ = NULL;
          jmethodID *GlonassSatelliteChannel::mids$ = NULL;
          bool GlonassSatelliteChannel::live$ = false;

          jclass GlonassSatelliteChannel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/GlonassSatelliteChannel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f2b1548731a90166] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;I)V");
              mids$[mid_getK_d6ab429752e7c267] = env->getMethodID(cls, "getK", "()I");
              mids$[mid_getSatellite_25eb770be3a2890a] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlonassSatelliteChannel::GlonassSatelliteChannel(const ::org::orekit::gnss::SatInSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2b1548731a90166, a0.this$, a1)) {}

          jint GlonassSatelliteChannel::getK() const
          {
            return env->callIntMethod(this$, mids$[mid_getK_d6ab429752e7c267]);
          }

          ::org::orekit::gnss::SatInSystem GlonassSatelliteChannel::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_25eb770be3a2890a]));
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
          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data);
          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data);
          static PyGetSetDef t_GlonassSatelliteChannel__fields_[] = {
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, k),
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlonassSatelliteChannel__methods_[] = {
            DECLARE_METHOD(t_GlonassSatelliteChannel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getK, METH_NOARGS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlonassSatelliteChannel)[] = {
            { Py_tp_methods, t_GlonassSatelliteChannel__methods_ },
            { Py_tp_init, (void *) t_GlonassSatelliteChannel_init_ },
            { Py_tp_getset, t_GlonassSatelliteChannel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlonassSatelliteChannel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlonassSatelliteChannel, t_GlonassSatelliteChannel, GlonassSatelliteChannel);

          void t_GlonassSatelliteChannel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlonassSatelliteChannel), &PY_TYPE_DEF(GlonassSatelliteChannel), module, "GlonassSatelliteChannel", 0);
          }

          void t_GlonassSatelliteChannel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "class_", make_descriptor(GlonassSatelliteChannel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "wrapfn_", make_descriptor(t_GlonassSatelliteChannel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlonassSatelliteChannel::initializeClass, 1)))
              return NULL;
            return t_GlonassSatelliteChannel::wrap_Object(GlonassSatelliteChannel(((t_GlonassSatelliteChannel *) arg)->object.this$));
          }
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlonassSatelliteChannel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            jint a1;
            GlonassSatelliteChannel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::SatInSystem::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GlonassSatelliteChannel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getK());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getK());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DependentVectorsHandler::class$ = NULL;
      jmethodID *DependentVectorsHandler::mids$ = NULL;
      bool DependentVectorsHandler::live$ = false;
      DependentVectorsHandler *DependentVectorsHandler::ADD_ZERO_VECTOR = NULL;
      DependentVectorsHandler *DependentVectorsHandler::GENERATE_EXCEPTION = NULL;
      DependentVectorsHandler *DependentVectorsHandler::REDUCE_BASE_TO_SPAN = NULL;

      jclass DependentVectorsHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DependentVectorsHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_manageDependent_0d297b4151bde475] = env->getMethodID(cls, "manageDependent", "(ILjava/util/List;)I");
          mids$[mid_manageDependent_5c95edfe52787614] = env->getMethodID(cls, "manageDependent", "(Lorg/hipparchus/Field;ILjava/util/List;)I");
          mids$[mid_valueOf_83106ef9c7ebd4a1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/linear/DependentVectorsHandler;");
          mids$[mid_values_f649ead5b4fac6e3] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/linear/DependentVectorsHandler;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADD_ZERO_VECTOR = new DependentVectorsHandler(env->getStaticObjectField(cls, "ADD_ZERO_VECTOR", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          GENERATE_EXCEPTION = new DependentVectorsHandler(env->getStaticObjectField(cls, "GENERATE_EXCEPTION", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          REDUCE_BASE_TO_SPAN = new DependentVectorsHandler(env->getStaticObjectField(cls, "REDUCE_BASE_TO_SPAN", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DependentVectorsHandler::manageDependent(jint a0, const ::java::util::List & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_0d297b4151bde475], a0, a1.this$);
      }

      jint DependentVectorsHandler::manageDependent(const ::org::hipparchus::Field & a0, jint a1, const ::java::util::List & a2) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_5c95edfe52787614], a0.this$, a1, a2.this$);
      }

      DependentVectorsHandler DependentVectorsHandler::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DependentVectorsHandler(env->callStaticObjectMethod(cls, mids$[mid_valueOf_83106ef9c7ebd4a1], a0.this$));
      }

      JArray< DependentVectorsHandler > DependentVectorsHandler::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DependentVectorsHandler >(env->callStaticObjectMethod(cls, mids$[mid_values_f649ead5b4fac6e3]));
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
      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type);
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data);
      static PyGetSetDef t_DependentVectorsHandler__fields_[] = {
        DECLARE_GET_FIELD(t_DependentVectorsHandler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DependentVectorsHandler__methods_[] = {
        DECLARE_METHOD(t_DependentVectorsHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, of_, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, manageDependent, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DependentVectorsHandler)[] = {
        { Py_tp_methods, t_DependentVectorsHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DependentVectorsHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DependentVectorsHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DependentVectorsHandler, t_DependentVectorsHandler, DependentVectorsHandler);
      PyObject *t_DependentVectorsHandler::wrap_Object(const DependentVectorsHandler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DependentVectorsHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DependentVectorsHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(DependentVectorsHandler), &PY_TYPE_DEF(DependentVectorsHandler), module, "DependentVectorsHandler", 0);
      }

      void t_DependentVectorsHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "class_", make_descriptor(DependentVectorsHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "wrapfn_", make_descriptor(t_DependentVectorsHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "boxfn_", make_descriptor(boxObject));
        env->getClass(DependentVectorsHandler::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "ADD_ZERO_VECTOR", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::ADD_ZERO_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "GENERATE_EXCEPTION", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::GENERATE_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "REDUCE_BASE_TO_SPAN", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::REDUCE_BASE_TO_SPAN)));
      }

      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DependentVectorsHandler::initializeClass, 1)))
          return NULL;
        return t_DependentVectorsHandler::wrap_Object(DependentVectorsHandler(((t_DependentVectorsHandler *) arg)->object.this$));
      }
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DependentVectorsHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint result;

            if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint result;

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "manageDependent", args);
        return NULL;
      }

      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DependentVectorsHandler result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::valueOf(a0));
          return t_DependentVectorsHandler::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type)
      {
        JArray< DependentVectorsHandler > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::values());
        return JArray<jobject>(result.this$).wrap(t_DependentVectorsHandler::wrap_jobject);
      }
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFields::class$ = NULL;
          jmethodID *GravityFields::mids$ = NULL;
          bool GravityFields::live$ = false;

          jclass GravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConstantNormalizedProvider_bb5918e0884e4ae2] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_c4894db538d805f8] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_47519026ac46bd97] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_4e3c0741dd4bb632] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_bc2bae0b3b31fcf0] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_bb5918e0884e4ae2], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_c4894db538d805f8], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_47519026ac46bd97], a0, a1));
          }

          ::java::util::List GravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_4e3c0741dd4bb632], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_bc2bae0b3b31fcf0], a0, a1));
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
          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args);

          static PyMethodDef t_GravityFields__methods_[] = {
            DECLARE_METHOD(t_GravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getUnnormalizedProvider, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFields)[] = {
            { Py_tp_methods, t_GravityFields__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFields, t_GravityFields, GravityFields);

          void t_GravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFields), &PY_TYPE_DEF(GravityFields), module, "GravityFields", 0);
          }

          void t_GravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "class_", make_descriptor(GravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "wrapfn_", make_descriptor(t_GravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFields::initializeClass, 1)))
              return NULL;
            return t_GravityFields::wrap_Object(GravityFields(((t_GravityFields *) arg)->object.this$));
          }
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError((PyObject *) self, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedProvider", args);
            return NULL;
          }
        }
      }
    }
  }
}

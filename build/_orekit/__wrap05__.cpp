#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *PreconditionedIterativeLinearSolver::class$ = NULL;
      jmethodID *PreconditionedIterativeLinearSolver::mids$ = NULL;
      bool PreconditionedIterativeLinearSolver::live$ = false;

      jclass PreconditionedIterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/PreconditionedIterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c5c01059ddc6554a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_solve_756296b1f68e7038] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_8e7f7f43cd6eb914] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_3a7358168b964bea] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_0f4c606f88ffcaeb] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_8e7f7f43cd6eb914] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_0f4c606f88ffcaeb] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_5c418ed0a0a3e6f3] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_c5c01059ddc6554a, a0.this$)) {}

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(jint a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_756296b1f68e7038], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_8e7f7f43cd6eb914], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_3a7358168b964bea], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0f4c606f88ffcaeb], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_8e7f7f43cd6eb914], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_0f4c606f88ffcaeb], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args);
      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args);

      static PyMethodDef t_PreconditionedIterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PreconditionedIterativeLinearSolver)[] = {
        { Py_tp_methods, t_PreconditionedIterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_PreconditionedIterativeLinearSolver_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PreconditionedIterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(PreconditionedIterativeLinearSolver, t_PreconditionedIterativeLinearSolver, PreconditionedIterativeLinearSolver);

      void t_PreconditionedIterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(PreconditionedIterativeLinearSolver), &PY_TYPE_DEF(PreconditionedIterativeLinearSolver), module, "PreconditionedIterativeLinearSolver", 0);
      }

      void t_PreconditionedIterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "class_", make_descriptor(PreconditionedIterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "wrapfn_", make_descriptor(t_PreconditionedIterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_PreconditionedIterativeLinearSolver::wrap_Object(PreconditionedIterativeLinearSolver(((t_PreconditionedIterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
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

      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
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
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_addGridPoint_5a09560ed34b26ca] = env->getMethodID(cls, "addGridPoint", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_clearHistory_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearHistory", "()V");
                mids$[mid_value_954ad4b53022f84b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldShortPeriodicsInterpolatedCoefficient::FieldShortPeriodicsInterpolatedCoefficient(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            void FieldShortPeriodicsInterpolatedCoefficient::addGridPoint(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addGridPoint_5a09560ed34b26ca], a0.this$, a1.this$);
            }

            void FieldShortPeriodicsInterpolatedCoefficient::clearHistory() const
            {
              env->callVoidMethod(this$, mids$[mid_clearHistory_a1fa5dae97ea5ed2]);
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodicsInterpolatedCoefficient::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_954ad4b53022f84b], a0.this$));
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockPhaseModifier::mids$ = NULL;
          bool RelativisticClockPhaseModifier::live$ = false;

          jclass RelativisticClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockPhaseModifier::RelativisticClockPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::java::util::List RelativisticClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self);
          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockPhaseModifier, t_RelativisticClockPhaseModifier, RelativisticClockPhaseModifier);

          void t_RelativisticClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockPhaseModifier), &PY_TYPE_DEF(RelativisticClockPhaseModifier), module, "RelativisticClockPhaseModifier", 0);
          }

          void t_RelativisticClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "class_", make_descriptor(RelativisticClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockPhaseModifier::wrap_Object(RelativisticClockPhaseModifier(((t_RelativisticClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatFixedStepHandler::class$ = NULL;
        jmethodID *MultiSatFixedStepHandler::mids$ = NULL;
        bool MultiSatFixedStepHandler::live$ = false;

        jclass MultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_0e7c3032c7c93ed3] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_0e7c3032c7c93ed3] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_153af04ac8851d6f] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatFixedStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0e7c3032c7c93ed3], a0.this$);
        }

        void MultiSatFixedStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_0e7c3032c7c93ed3], a0.this$);
        }

        void MultiSatFixedStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_153af04ac8851d6f], a0.this$, a1.this$, a2);
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
        static PyObject *t_MultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_finish(t_MultiSatFixedStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_handleStep(t_MultiSatFixedStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatFixedStepHandler_init(t_MultiSatFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_MultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatFixedStepHandler, t_MultiSatFixedStepHandler, MultiSatFixedStepHandler);

        void t_MultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatFixedStepHandler), &PY_TYPE_DEF(MultiSatFixedStepHandler), module, "MultiSatFixedStepHandler", 0);
        }

        void t_MultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "class_", make_descriptor(MultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_MultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatFixedStepHandler::wrap_Object(MultiSatFixedStepHandler(((t_MultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatFixedStepHandler_finish(t_MultiSatFixedStepHandler *self, PyObject *arg)
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

        static PyObject *t_MultiSatFixedStepHandler_handleStep(t_MultiSatFixedStepHandler *self, PyObject *arg)
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

        static PyObject *t_MultiSatFixedStepHandler_init(t_MultiSatFixedStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;

          if (!parseArgs(args, "KkD", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$Split::class$ = NULL;
          jmethodID *ArcsSet$Split::mids$ = NULL;
          bool ArcsSet$Split::live$ = false;

          jclass ArcsSet$Split::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$Split");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMinus_7d64add151265ba7] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getPlus_7d64add151265ba7] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/spherical/oned/ArcsSet;");
              mids$[mid_getSide_e46f65835b705175] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getMinus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getMinus_7d64add151265ba7]));
          }

          ::org::hipparchus::geometry::spherical::oned::ArcsSet ArcsSet$Split::getPlus() const
          {
            return ::org::hipparchus::geometry::spherical::oned::ArcsSet(env->callObjectMethod(this$, mids$[mid_getPlus_7d64add151265ba7]));
          }

          ::org::hipparchus::geometry::partitioning::Side ArcsSet$Split::getSide() const
          {
            return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_e46f65835b705175]));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args);
          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self);
          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data);
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data);
          static PyGetSetDef t_ArcsSet$Split__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$Split, minus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, plus),
            DECLARE_GET_FIELD(t_ArcsSet$Split, side),
            DECLARE_GET_FIELD(t_ArcsSet$Split, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$Split__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$Split, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$Split, of_, METH_VARARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getMinus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getPlus, METH_NOARGS),
            DECLARE_METHOD(t_ArcsSet$Split, getSide, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$Split)[] = {
            { Py_tp_methods, t_ArcsSet$Split__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ArcsSet$Split__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$Split)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ArcsSet$Split, t_ArcsSet$Split, ArcsSet$Split);
          PyObject *t_ArcsSet$Split::wrap_Object(const ArcsSet$Split& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$Split::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$Split::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$Split *self = (t_ArcsSet$Split *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$Split::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$Split), &PY_TYPE_DEF(ArcsSet$Split), module, "ArcsSet$Split", 0);
          }

          void t_ArcsSet$Split::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "class_", make_descriptor(ArcsSet$Split::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "wrapfn_", make_descriptor(t_ArcsSet$Split::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$Split), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$Split_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$Split::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$Split::wrap_Object(ArcsSet$Split(((t_ArcsSet$Split *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$Split_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$Split::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$Split_of_(t_ArcsSet$Split *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ArcsSet$Split_getMinus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getPlus(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(result);
          }

          static PyObject *t_ArcsSet$Split_getSide(t_ArcsSet$Split *self)
          {
            ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
            OBJ_CALL(result = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
          }
          static PyObject *t_ArcsSet$Split_get__parameters_(t_ArcsSet$Split *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ArcsSet$Split_get__minus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getMinus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__plus(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::oned::ArcsSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getPlus());
            return ::org::hipparchus::geometry::spherical::oned::t_ArcsSet::wrap_Object(value);
          }

          static PyObject *t_ArcsSet$Split_get__side(t_ArcsSet$Split *self, void *data)
          {
            ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
            OBJ_CALL(value = self->object.getSide());
            return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_d48382c52c974b04] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/DenseOutputModel;)V");
          mids$[mid_finish_d2d966b8a9c77b61] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_b74f83833fdad017] = env->getMethodID(cls, "getFinalTime", "()D");
          mids$[mid_getInitialTime_b74f83833fdad017] = env->getMethodID(cls, "getInitialTime", "()D");
          mids$[mid_getInterpolatedState_cf0061d2765ae5a3] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_handleStep_197c5aaefd855810] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
          mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DenseOutputModel::DenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void DenseOutputModel::append(const DenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_d48382c52c974b04], a0.this$);
      }

      void DenseOutputModel::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_d2d966b8a9c77b61], a0.this$);
      }

      jdouble DenseOutputModel::getFinalTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFinalTime_b74f83833fdad017]);
      }

      jdouble DenseOutputModel::getInitialTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInitialTime_b74f83833fdad017]);
      }

      ::org::hipparchus::ode::ODEStateAndDerivative DenseOutputModel::getInterpolatedState(jdouble a0) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_cf0061d2765ae5a3], a0));
      }

      void DenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_197c5aaefd855810], a0.this$);
      }

      void DenseOutputModel::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
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
#include "org/orekit/files/rinex/RinexFile.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *RinexFile::class$ = NULL;
        jmethodID *RinexFile::mids$ = NULL;
        bool RinexFile::live$ = false;

        jclass RinexFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/RinexFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addComment_7a0f38057aceda26] = env->getMethodID(cls, "addComment", "(Lorg/orekit/files/rinex/section/RinexComment;)V");
            mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_8e24ce944a8dde6b] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/rinex/section/RinexBaseHeader;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void RinexFile::addComment(const ::org::orekit::files::rinex::section::RinexComment & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_7a0f38057aceda26], a0.this$);
        }

        ::java::util::List RinexFile::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::files::rinex::section::RinexBaseHeader RinexFile::getHeader() const
        {
          return ::org::orekit::files::rinex::section::RinexBaseHeader(env->callObjectMethod(this$, mids$[mid_getHeader_8e24ce944a8dde6b]));
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
        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args);
        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg);
        static PyObject *t_RinexFile_getComments(t_RinexFile *self);
        static PyObject *t_RinexFile_getHeader(t_RinexFile *self);
        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data);
        static PyGetSetDef t_RinexFile__fields_[] = {
          DECLARE_GET_FIELD(t_RinexFile, comments),
          DECLARE_GET_FIELD(t_RinexFile, header),
          DECLARE_GET_FIELD(t_RinexFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RinexFile__methods_[] = {
          DECLARE_METHOD(t_RinexFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_RinexFile, addComment, METH_O),
          DECLARE_METHOD(t_RinexFile, getComments, METH_NOARGS),
          DECLARE_METHOD(t_RinexFile, getHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RinexFile)[] = {
          { Py_tp_methods, t_RinexFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RinexFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RinexFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RinexFile, t_RinexFile, RinexFile);
        PyObject *t_RinexFile::wrap_Object(const RinexFile& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RinexFile::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RinexFile::install(PyObject *module)
        {
          installType(&PY_TYPE(RinexFile), &PY_TYPE_DEF(RinexFile), module, "RinexFile", 0);
        }

        void t_RinexFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "class_", make_descriptor(RinexFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "wrapfn_", make_descriptor(t_RinexFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RinexFile::initializeClass, 1)))
            return NULL;
          return t_RinexFile::wrap_Object(RinexFile(((t_RinexFile *) arg)->object.this$));
        }
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RinexFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg)
        {
          ::org::orekit::files::rinex::section::RinexComment a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::rinex::section::RinexComment::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_RinexFile_getComments(t_RinexFile *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::section::PY_TYPE(RinexComment));
        }

        static PyObject *t_RinexFile_getHeader(t_RinexFile *self)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(result);
        }
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/UnitsCache.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsCache::class$ = NULL;
        jmethodID *UnitsCache::mids$ = NULL;
        bool UnitsCache::live$ = false;

        jclass UnitsCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getUnits_d901bfc45b4f4fe6] = env->getMethodID(cls, "getUnits", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsCache::UnitsCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::utils::units::Unit UnitsCache::getUnits(const ::java::lang::String & a0) const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_d901bfc45b4f4fe6], a0.this$));
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
    namespace utils {
      namespace units {
        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg);

        static PyMethodDef t_UnitsCache__methods_[] = {
          DECLARE_METHOD(t_UnitsCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, getUnits, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsCache)[] = {
          { Py_tp_methods, t_UnitsCache__methods_ },
          { Py_tp_init, (void *) t_UnitsCache_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsCache, t_UnitsCache, UnitsCache);

        void t_UnitsCache::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsCache), &PY_TYPE_DEF(UnitsCache), module, "UnitsCache", 0);
        }

        void t_UnitsCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "class_", make_descriptor(UnitsCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "wrapfn_", make_descriptor(t_UnitsCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsCache::initializeClass, 1)))
            return NULL;
          return t_UnitsCache::wrap_Object(UnitsCache(((t_UnitsCache *) arg)->object.this$));
        }
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds)
        {
          UnitsCache object((jobject) NULL);

          INT_CALL(object = UnitsCache());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::utils::units::Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getUnits(a0));
            return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUnits", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesIntegratorBuilder::live$ = false;

        jclass ThreeEighthesIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegratorBuilder::ThreeEighthesIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ThreeEighthesIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ThreeEighthesIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegratorBuilder, t_ThreeEighthesIntegratorBuilder, ThreeEighthesIntegratorBuilder);

        void t_ThreeEighthesIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesIntegratorBuilder), module, "ThreeEighthesIntegratorBuilder", 0);
        }

        void t_ThreeEighthesIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "class_", make_descriptor(ThreeEighthesIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegratorBuilder::wrap_Object(ThreeEighthesIntegratorBuilder(((t_ThreeEighthesIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonItrfVersionProvider::class$ = NULL;
      jmethodID *PythonItrfVersionProvider::mids$ = NULL;
      bool PythonItrfVersionProvider::live$ = false;

      jclass PythonItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getConfiguration_c175c26b8f14b277] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonItrfVersionProvider::PythonItrfVersionProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonItrfVersionProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonItrfVersionProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonItrfVersionProvider::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self);
      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args);
      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data);
      static PyGetSetDef t_PythonItrfVersionProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonItrfVersionProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_PythonItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonItrfVersionProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonItrfVersionProvider)[] = {
        { Py_tp_methods, t_PythonItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) t_PythonItrfVersionProvider_init_ },
        { Py_tp_getset, t_PythonItrfVersionProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonItrfVersionProvider, t_PythonItrfVersionProvider, PythonItrfVersionProvider);

      void t_PythonItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonItrfVersionProvider), &PY_TYPE_DEF(PythonItrfVersionProvider), module, "PythonItrfVersionProvider", 1);
      }

      void t_PythonItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "class_", make_descriptor(PythonItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "wrapfn_", make_descriptor(t_PythonItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonItrfVersionProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;", (void *) t_PythonItrfVersionProvider_getConfiguration0 },
          { "pythonDecRef", "()V", (void *) t_PythonItrfVersionProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_PythonItrfVersionProvider::wrap_Object(PythonItrfVersionProvider(((t_PythonItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonItrfVersionProvider_init_(t_PythonItrfVersionProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonItrfVersionProvider object((jobject) NULL);

        INT_CALL(object = PythonItrfVersionProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonItrfVersionProvider_finalize(t_PythonItrfVersionProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonItrfVersionProvider_pythonExtension(t_PythonItrfVersionProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonItrfVersionProvider_getConfiguration0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getConfiguration", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, &value))
        {
          throwTypeError("getConfiguration", result);
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

      static void JNICALL t_PythonItrfVersionProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonItrfVersionProvider::mids$[PythonItrfVersionProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonItrfVersionProvider_get__self(t_PythonItrfVersionProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingOemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingOemWriter$SegmentWriter::live$ = false;

              jclass StreamingOemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a59947e7576d69f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter;)V");
                  mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_280c3390961e0a50] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_3189c7446dbbb87e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter$SegmentWriter::StreamingOemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a59947e7576d69f9, a0.this$)) {}

              void StreamingOemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_280c3390961e0a50], a0.this$);
              }

              void StreamingOemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_3189c7446dbbb87e], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingOemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingOemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter$SegmentWriter, t_StreamingOemWriter$SegmentWriter, StreamingOemWriter$SegmentWriter);

              void t_StreamingOemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingOemWriter$SegmentWriter), module, "StreamingOemWriter$SegmentWriter", 0);
              }

              void t_StreamingOemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "class_", make_descriptor(StreamingOemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter$SegmentWriter::wrap_Object(StreamingOemWriter$SegmentWriter(((t_StreamingOemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter$SegmentWriter_init_(t_StreamingOemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter a0((jobject) NULL);
                StreamingOemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingOemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_finish(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_handleStep(t_StreamingOemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingOemWriter$SegmentWriter_init(t_StreamingOemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
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
#include "org/hipparchus/exception/DummyLocalizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
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
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DummyLocalizable::DummyLocalizable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      ::java::lang::String DummyLocalizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String DummyLocalizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String DummyLocalizable::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeRateModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeRateModifier::mids$ = NULL;
          bool RelativisticClockRangeRateModifier::live$ = false;

          jclass RelativisticClockRangeRateModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeRateModifier::RelativisticClockRangeRateModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::java::util::List RelativisticClockRangeRateModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticClockRangeRateModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self);
          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeRateModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeRateModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeRateModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeRateModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeRateModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeRateModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeRateModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeRateModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeRateModifier, t_RelativisticClockRangeRateModifier, RelativisticClockRangeRateModifier);

          void t_RelativisticClockRangeRateModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeRateModifier), &PY_TYPE_DEF(RelativisticClockRangeRateModifier), module, "RelativisticClockRangeRateModifier", 0);
          }

          void t_RelativisticClockRangeRateModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "class_", make_descriptor(RelativisticClockRangeRateModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeRateModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeRateModifier::wrap_Object(RelativisticClockRangeRateModifier(((t_RelativisticClockRangeRateModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            RelativisticClockRangeRateModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = RelativisticClockRangeRateModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmClockCorrectionData::class$ = NULL;
              jmethodID *RtcmClockCorrectionData::mids$ = NULL;
              bool RtcmClockCorrectionData::live$ = false;

              jclass RtcmClockCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_3ae426f140e5e927] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_56b7531fea488c5a] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmClockCorrectionData::RtcmClockCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmClockCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_3ae426f140e5e927]));
              }

              void RtcmClockCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_56b7531fea488c5a], a0.this$);
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
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self);
              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data);
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmClockCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmClockCorrectionData, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmClockCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmClockCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmClockCorrectionData, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmClockCorrectionData)[] = {
                { Py_tp_methods, t_RtcmClockCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmClockCorrectionData_init_ },
                { Py_tp_getset, t_RtcmClockCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmClockCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmClockCorrectionData, t_RtcmClockCorrectionData, RtcmClockCorrectionData);

              void t_RtcmClockCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmClockCorrectionData), &PY_TYPE_DEF(RtcmClockCorrectionData), module, "RtcmClockCorrectionData", 0);
              }

              void t_RtcmClockCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "class_", make_descriptor(RtcmClockCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "wrapfn_", make_descriptor(t_RtcmClockCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmClockCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmClockCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmClockCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmClockCorrectionData::wrap_Object(RtcmClockCorrectionData(((t_RtcmClockCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmClockCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmClockCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmClockCorrectionData_init_(t_RtcmClockCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmClockCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmClockCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmClockCorrectionData_getClockCorrection(t_RtcmClockCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmClockCorrectionData_setClockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmClockCorrectionData_get__clockCorrection(t_RtcmClockCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmClockCorrectionData_set__clockCorrection(t_RtcmClockCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
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
#include "org/hipparchus/analysis/solvers/UnivariateSolverUtils.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateSolverUtils::class$ = NULL;
        jmethodID *UnivariateSolverUtils::mids$ = NULL;
        bool UnivariateSolverUtils::live$ = false;

        jclass UnivariateSolverUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateSolverUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_bracket_26c61f283b74355e] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)[D");
            mids$[mid_bracket_ecb059e7a302e82b] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_a571d14e2a719f43] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_bracket_c1721adb193fa0da] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDI)[D");
            mids$[mid_bracket_d41ccbfa744c4e3e] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/UnivariateFunction;DDDDDI)[D");
            mids$[mid_bracket_e3d8316b64f6e8ef] = env->getStaticMethodID(cls, "bracket", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_forceSide_c334e0ee1dc3b91e] = env->getStaticMethodID(cls, "forceSide", "(ILorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_isBracketing_8833bdb865ca4110] = env->getStaticMethodID(cls, "isBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)Z");
            mids$[mid_isSequence_bf10cceb76af8f9c] = env->getStaticMethodID(cls, "isSequence", "(DDD)Z");
            mids$[mid_midpoint_99e3200dafc19573] = env->getStaticMethodID(cls, "midpoint", "(DD)D");
            mids$[mid_solve_0313652d45b9425b] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_c3fe2f21161f2c00] = env->getStaticMethodID(cls, "solve", "(Lorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_verifyBracketing_9d8b62edc3c4b123] = env->getStaticMethodID(cls, "verifyBracketing", "(Lorg/hipparchus/analysis/UnivariateFunction;DD)V");
            mids$[mid_verifyInterval_369b4c97255d5afa] = env->getStaticMethodID(cls, "verifyInterval", "(DD)V");
            mids$[mid_verifySequence_b5167f35b2521627] = env->getStaticMethodID(cls, "verifySequence", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_26c61f283b74355e], a0.this$, a1, a2, a3));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_ecb059e7a302e82b], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_a571d14e2a719f43], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_c1721adb193fa0da], a0.this$, a1, a2, a3, a4));
        }

        JArray< jdouble > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_bracket_d41ccbfa744c4e3e], a0.this$, a1, a2, a3, a4, a5, a6));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > UnivariateSolverUtils::bracket(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jint a6)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callStaticObjectMethod(cls, mids$[mid_bracket_e3d8316b64f6e8ef], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
        }

        jdouble UnivariateSolverUtils::forceSide(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::hipparchus::analysis::solvers::AllowedSolution & a6)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_forceSide_c334e0ee1dc3b91e], a0, a1.this$, a2.this$, a3, a4, a5, a6.this$);
        }

        jboolean UnivariateSolverUtils::isBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isBracketing_8833bdb865ca4110], a0.this$, a1, a2);
        }

        jboolean UnivariateSolverUtils::isSequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isSequence_bf10cceb76af8f9c], a0, a1, a2);
        }

        jdouble UnivariateSolverUtils::midpoint(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_midpoint_99e3200dafc19573], a0, a1);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_0313652d45b9425b], a0.this$, a1, a2);
        }

        jdouble UnivariateSolverUtils::solve(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_solve_c3fe2f21161f2c00], a0.this$, a1, a2, a3);
        }

        void UnivariateSolverUtils::verifyBracketing(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyBracketing_9d8b62edc3c4b123], a0.this$, a1, a2);
        }

        void UnivariateSolverUtils::verifyInterval(jdouble a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifyInterval_369b4c97255d5afa], a0, a1);
        }

        void UnivariateSolverUtils::verifySequence(jdouble a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_verifySequence_b5167f35b2521627], a0, a1, a2);
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
        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_UnivariateSolverUtils__methods_[] = {
          DECLARE_METHOD(t_UnivariateSolverUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, bracket, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, forceSide, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, isSequence, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, midpoint, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, solve, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyBracketing, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifyInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateSolverUtils, verifySequence, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateSolverUtils)[] = {
          { Py_tp_methods, t_UnivariateSolverUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateSolverUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateSolverUtils, t_UnivariateSolverUtils, UnivariateSolverUtils);

        void t_UnivariateSolverUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateSolverUtils), &PY_TYPE_DEF(UnivariateSolverUtils), module, "UnivariateSolverUtils", 0);
        }

        void t_UnivariateSolverUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "class_", make_descriptor(UnivariateSolverUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "wrapfn_", make_descriptor(t_UnivariateSolverUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateSolverUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateSolverUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateSolverUtils::initializeClass, 1)))
            return NULL;
          return t_UnivariateSolverUtils::wrap_Object(UnivariateSolverUtils(((t_UnivariateSolverUtils *) arg)->object.this$));
        }
        static PyObject *t_UnivariateSolverUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateSolverUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateSolverUtils_bracket(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3));
                return result.wrap();
              }
            }
            break;
           case 5:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            break;
           case 7:
            {
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
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
              jint a6;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jint a6;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::bracket(a0, a1, a2, a3, a4, a5, a6));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError(type, "bracket", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_forceSide(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::hipparchus::analysis::solvers::AllowedSolution a6((jobject) NULL);
          PyTypeObject **p6;
          jdouble result;

          if (!parseArgs(args, "IkKDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_, &a3, &a4, &a5, &a6, &p6, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::forceSide(a0, a1, a2, a3, a4, a5, a6));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "forceSide", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isBracketing(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_isSequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::isSequence(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "isSequence", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_midpoint(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::midpoint(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "midpoint", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_solve(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "kDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::hipparchus::analysis::solvers::UnivariateSolverUtils::solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "solve", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyBracketing(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyBracketing(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyBracketing", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifyInterval(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifyInterval(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifyInterval", args);
          return NULL;
        }

        static PyObject *t_UnivariateSolverUtils_verifySequence(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(::org::hipparchus::analysis::solvers::UnivariateSolverUtils::verifySequence(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "verifySequence", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/MannWhitneyUTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *MannWhitneyUTest::class$ = NULL;
        jmethodID *MannWhitneyUTest::mids$ = NULL;
        bool MannWhitneyUTest::live$ = false;

        jclass MannWhitneyUTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/MannWhitneyUTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_c6e936703eef190b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_mannWhitneyU_3207f9c2ae7271d9] = env->getMethodID(cls, "mannWhitneyU", "([D[D)D");
            mids$[mid_mannWhitneyUTest_3207f9c2ae7271d9] = env->getMethodID(cls, "mannWhitneyUTest", "([D[D)D");
            mids$[mid_mannWhitneyUTest_0c373dc781edcf2f] = env->getMethodID(cls, "mannWhitneyUTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MannWhitneyUTest::MannWhitneyUTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        MannWhitneyUTest::MannWhitneyUTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6e936703eef190b, a0.this$, a1.this$)) {}

        jdouble MannWhitneyUTest::mannWhitneyU(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyU_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_3207f9c2ae7271d9], a0.this$, a1.this$);
        }

        jdouble MannWhitneyUTest::mannWhitneyUTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mannWhitneyUTest_0c373dc781edcf2f], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args);
        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args);

        static PyMethodDef t_MannWhitneyUTest__methods_[] = {
          DECLARE_METHOD(t_MannWhitneyUTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyU, METH_VARARGS),
          DECLARE_METHOD(t_MannWhitneyUTest, mannWhitneyUTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MannWhitneyUTest)[] = {
          { Py_tp_methods, t_MannWhitneyUTest__methods_ },
          { Py_tp_init, (void *) t_MannWhitneyUTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MannWhitneyUTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MannWhitneyUTest, t_MannWhitneyUTest, MannWhitneyUTest);

        void t_MannWhitneyUTest::install(PyObject *module)
        {
          installType(&PY_TYPE(MannWhitneyUTest), &PY_TYPE_DEF(MannWhitneyUTest), module, "MannWhitneyUTest", 0);
        }

        void t_MannWhitneyUTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "class_", make_descriptor(MannWhitneyUTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "wrapfn_", make_descriptor(t_MannWhitneyUTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MannWhitneyUTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MannWhitneyUTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MannWhitneyUTest::initializeClass, 1)))
            return NULL;
          return t_MannWhitneyUTest::wrap_Object(MannWhitneyUTest(((t_MannWhitneyUTest *) arg)->object.this$));
        }
        static PyObject *t_MannWhitneyUTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MannWhitneyUTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MannWhitneyUTest_init_(t_MannWhitneyUTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MannWhitneyUTest object((jobject) NULL);

              INT_CALL(object = MannWhitneyUTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              MannWhitneyUTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = MannWhitneyUTest(a0, a1));
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

        static PyObject *t_MannWhitneyUTest_mannWhitneyU(t_MannWhitneyUTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.mannWhitneyU(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyU", args);
          return NULL;
        }

        static PyObject *t_MannWhitneyUTest_mannWhitneyUTest(t_MannWhitneyUTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.mannWhitneyUTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mannWhitneyUTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/gnss/Frequency.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *PythonAbstractDualFrequencyCombination::mids$ = NULL;
          bool PythonAbstractDualFrequencyCombination::live$ = false;

          jclass PythonAbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1af956d1b87222ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getCombinedFrequency_7bbbdc452eac601c] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedValue_67abdaf53ea90950] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractDualFrequencyCombination::PythonAbstractDualFrequencyCombination(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::SatelliteSystem & a1) : ::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination(env->newObject(initializeClass, &mids$, mid_init$_1af956d1b87222ce, a0.this$, a1.this$)) {}

          void PythonAbstractDualFrequencyCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractDualFrequencyCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractDualFrequencyCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self);
          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_PythonAbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractDualFrequencyCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractDualFrequencyCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_PythonAbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractDualFrequencyCombination_init_ },
            { Py_tp_getset, t_PythonAbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(PythonAbstractDualFrequencyCombination, t_PythonAbstractDualFrequencyCombination, PythonAbstractDualFrequencyCombination);

          void t_PythonAbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractDualFrequencyCombination), &PY_TYPE_DEF(PythonAbstractDualFrequencyCombination), module, "PythonAbstractDualFrequencyCombination", 1);
          }

          void t_PythonAbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "class_", make_descriptor(PythonAbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_PythonAbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractDualFrequencyCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0 },
              { "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D", (void *) t_PythonAbstractDualFrequencyCombination_getCombinedValue1 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractDualFrequencyCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractDualFrequencyCombination::wrap_Object(PythonAbstractDualFrequencyCombination(((t_PythonAbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractDualFrequencyCombination_init_(t_PythonAbstractDualFrequencyCombination *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            PythonAbstractDualFrequencyCombination object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              INT_CALL(object = PythonAbstractDualFrequencyCombination(a0, a1));
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

          static PyObject *t_PythonAbstractDualFrequencyCombination_finalize(t_PythonAbstractDualFrequencyCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_pythonExtension(t_PythonAbstractDualFrequencyCombination *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedFrequency0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a0));
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedFrequency", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedFrequency", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractDualFrequencyCombination_getCombinedValue1(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a1));
            PyObject *o3 = ::org::orekit::gnss::t_Frequency::wrap_Object(::org::orekit::gnss::Frequency(a3));
            PyObject *result = PyObject_CallMethod(obj, "getCombinedValue", "dOdO", (double) a0, o1, (double) a2, o3);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getCombinedValue", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonAbstractDualFrequencyCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractDualFrequencyCombination::mids$[PythonAbstractDualFrequencyCombination::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractDualFrequencyCombination_get__self(t_PythonAbstractDualFrequencyCombination *self, void *data)
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
#include "org/orekit/propagation/conversion/GillFieldIntegratorBuilder.h"
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

        ::java::lang::Class *GillFieldIntegratorBuilder::class$ = NULL;
        jmethodID *GillFieldIntegratorBuilder::mids$ = NULL;
        bool GillFieldIntegratorBuilder::live$ = false;

        jclass GillFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GillFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        GillFieldIntegratorBuilder::GillFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator GillFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_GillFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_GillFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_GillFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegratorBuilder, t_GillFieldIntegratorBuilder, GillFieldIntegratorBuilder);
        PyObject *t_GillFieldIntegratorBuilder::wrap_Object(const GillFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegratorBuilder *self = (t_GillFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegratorBuilder), &PY_TYPE_DEF(GillFieldIntegratorBuilder), module, "GillFieldIntegratorBuilder", 0);
        }

        void t_GillFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "class_", make_descriptor(GillFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_GillFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegratorBuilder::wrap_Object(GillFieldIntegratorBuilder(((t_GillFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegratorBuilder_of_(t_GillFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegratorBuilder_init_(t_GillFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              GillFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = GillFieldIntegratorBuilder(a0));
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

        static PyObject *t_GillFieldIntegratorBuilder_buildIntegrator(t_GillFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(GillFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_GillFieldIntegratorBuilder_get__parameters_(t_GillFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ConstantThrustDirectionProvider::class$ = NULL;
          jmethodID *ConstantThrustDirectionProvider::mids$ = NULL;
          bool ConstantThrustDirectionProvider::live$ = false;

          jclass ConstantThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1844f891addbac57] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_computeThrustDirection_ec4cfef21ca9ef1f] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantThrustDirectionProvider::ConstantThrustDirectionProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1844f891addbac57, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_ec4cfef21ca9ef1f], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ConstantThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ConstantThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_ConstantThrustDirectionProvider_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantThrustDirectionProvider, t_ConstantThrustDirectionProvider, ConstantThrustDirectionProvider);

          void t_ConstantThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantThrustDirectionProvider), &PY_TYPE_DEF(ConstantThrustDirectionProvider), module, "ConstantThrustDirectionProvider", 0);
          }

          void t_ConstantThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "class_", make_descriptor(ConstantThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "wrapfn_", make_descriptor(t_ConstantThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ConstantThrustDirectionProvider::wrap_Object(ConstantThrustDirectionProvider(((t_ConstantThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ConstantThrustDirectionProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = ConstantThrustDirectionProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.computeThrustDirection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeThrustDirection", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEConverter.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEConverter::class$ = NULL;
      jmethodID *ComplexODEConverter::mids$ = NULL;
      bool ComplexODEConverter::live$ = false;

      jclass ComplexODEConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_convertEquations_a4753ad476484b58] = env->getMethodID(cls, "convertEquations", "(Lorg/hipparchus/ode/ComplexOrdinaryDifferentialEquation;)Lorg/hipparchus/ode/OrdinaryDifferentialEquation;");
          mids$[mid_convertSecondaryEquations_d676223cff6357ec] = env->getMethodID(cls, "convertSecondaryEquations", "(Lorg/hipparchus/ode/ComplexSecondaryODE;)Lorg/hipparchus/ode/SecondaryODE;");
          mids$[mid_convertState_7633856019a399bc] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ComplexODEStateAndDerivative;");
          mids$[mid_convertState_1f1fb5e568ed20f4] = env->getMethodID(cls, "convertState", "(Lorg/hipparchus/ode/ComplexODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEConverter::ComplexODEConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::hipparchus::ode::OrdinaryDifferentialEquation ComplexODEConverter::convertEquations(const ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation & a0) const
      {
        return ::org::hipparchus::ode::OrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_convertEquations_a4753ad476484b58], a0.this$));
      }

      ::org::hipparchus::ode::SecondaryODE ComplexODEConverter::convertSecondaryEquations(const ::org::hipparchus::ode::ComplexSecondaryODE & a0) const
      {
        return ::org::hipparchus::ode::SecondaryODE(env->callObjectMethod(this$, mids$[mid_convertSecondaryEquations_d676223cff6357ec], a0.this$));
      }

      ::org::hipparchus::ode::ComplexODEStateAndDerivative ComplexODEConverter::convertState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
      {
        return ::org::hipparchus::ode::ComplexODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_convertState_7633856019a399bc], a0.this$));
      }

      ::org::hipparchus::ode::ODEState ComplexODEConverter::convertState(const ::org::hipparchus::ode::ComplexODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_convertState_1f1fb5e568ed20f4], a0.this$));
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
      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg);
      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args);

      static PyMethodDef t_ComplexODEConverter__methods_[] = {
        DECLARE_METHOD(t_ComplexODEConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEConverter, convertEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertSecondaryEquations, METH_O),
        DECLARE_METHOD(t_ComplexODEConverter, convertState, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEConverter)[] = {
        { Py_tp_methods, t_ComplexODEConverter__methods_ },
        { Py_tp_init, (void *) t_ComplexODEConverter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEConverter, t_ComplexODEConverter, ComplexODEConverter);

      void t_ComplexODEConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEConverter), &PY_TYPE_DEF(ComplexODEConverter), module, "ComplexODEConverter", 0);
      }

      void t_ComplexODEConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "class_", make_descriptor(ComplexODEConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "wrapfn_", make_descriptor(t_ComplexODEConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEConverter::initializeClass, 1)))
          return NULL;
        return t_ComplexODEConverter::wrap_Object(ComplexODEConverter(((t_ComplexODEConverter *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEConverter_init_(t_ComplexODEConverter *self, PyObject *args, PyObject *kwds)
      {
        ComplexODEConverter object((jobject) NULL);

        INT_CALL(object = ComplexODEConverter());
        self->object = object;

        return 0;
      }

      static PyObject *t_ComplexODEConverter_convertEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation a0((jobject) NULL);
        ::org::hipparchus::ode::OrdinaryDifferentialEquation result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexOrdinaryDifferentialEquation::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertEquations(a0));
          return ::org::hipparchus::ode::t_OrdinaryDifferentialEquation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertSecondaryEquations(t_ComplexODEConverter *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ComplexSecondaryODE a0((jobject) NULL);
        ::org::hipparchus::ode::SecondaryODE result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ComplexSecondaryODE::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.convertSecondaryEquations(a0));
          return ::org::hipparchus::ode::t_SecondaryODE::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEConverter_convertState(t_ComplexODEConverter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
            ::org::hipparchus::ode::ComplexODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ComplexODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::ComplexODEState a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::ode::ComplexODEState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertState(a0));
              return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertState", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthITU453AtmosphereRefraction.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthITU453AtmosphereRefraction::class$ = NULL;
        jmethodID *EarthITU453AtmosphereRefraction::mids$ = NULL;
        bool EarthITU453AtmosphereRefraction::live$ = false;

        jclass EarthITU453AtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthITU453AtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getRefraction_04fd0666b613d2ab] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTheta0_b74f83833fdad017] = env->getMethodID(cls, "getTheta0", "()D");
            mids$[mid_getThetaMin_b74f83833fdad017] = env->getMethodID(cls, "getThetaMin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthITU453AtmosphereRefraction::EarthITU453AtmosphereRefraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble EarthITU453AtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_04fd0666b613d2ab], a0);
        }

        jdouble EarthITU453AtmosphereRefraction::getTheta0() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTheta0_b74f83833fdad017]);
        }

        jdouble EarthITU453AtmosphereRefraction::getThetaMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThetaMin_b74f83833fdad017]);
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
        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyGetSetDef t_EarthITU453AtmosphereRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, theta0),
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, thetaMin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthITU453AtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getTheta0, METH_NOARGS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getThetaMin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthITU453AtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthITU453AtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthITU453AtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthITU453AtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthITU453AtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthITU453AtmosphereRefraction, t_EarthITU453AtmosphereRefraction, EarthITU453AtmosphereRefraction);

        void t_EarthITU453AtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthITU453AtmosphereRefraction), &PY_TYPE_DEF(EarthITU453AtmosphereRefraction), module, "EarthITU453AtmosphereRefraction", 0);
        }

        void t_EarthITU453AtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "class_", make_descriptor(EarthITU453AtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthITU453AtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthITU453AtmosphereRefraction::wrap_Object(EarthITU453AtmosphereRefraction(((t_EarthITU453AtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EarthITU453AtmosphereRefraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EarthITU453AtmosphereRefraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTheta0());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThetaMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTheta0());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThetaMin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *InterSatDirectViewDetector::class$ = NULL;
        jmethodID *InterSatDirectViewDetector::mids$ = NULL;
        bool InterSatDirectViewDetector::live$ = false;

        jclass InterSatDirectViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/InterSatDirectViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_947a15dba0f7c30c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getCentralBody_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getCentralBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getSecondary_8a41319e47f3bd7c] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getSkimmingAltitude_b74f83833fdad017] = env->getMethodID(cls, "getSkimmingAltitude", "()D");
            mids$[mid_withSkimmingAltitude_bb5897b316ea28b5] = env->getMethodID(cls, "withSkimmingAltitude", "(D)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");
            mids$[mid_create_3371e3313c6813ea] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatDirectViewDetector::InterSatDirectViewDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_947a15dba0f7c30c, a0.this$, a1.this$)) {}

        jdouble InterSatDirectViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid InterSatDirectViewDetector::getCentralBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getCentralBody_dd5c4288aa5a3dd8]));
        }

        ::org::orekit::utils::PVCoordinatesProvider InterSatDirectViewDetector::getSecondary() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondary_8a41319e47f3bd7c]));
        }

        jdouble InterSatDirectViewDetector::getSkimmingAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkimmingAltitude_b74f83833fdad017]);
        }

        InterSatDirectViewDetector InterSatDirectViewDetector::withSkimmingAltitude(jdouble a0) const
        {
          return InterSatDirectViewDetector(env->callObjectMethod(this$, mids$[mid_withSkimmingAltitude_bb5897b316ea28b5], a0));
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
        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args);
        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args);
        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data);
        static PyGetSetDef t_InterSatDirectViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, centralBody),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, secondary),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, skimmingAltitude),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatDirectViewDetector__methods_[] = {
          DECLARE_METHOD(t_InterSatDirectViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getCentralBody, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSecondary, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSkimmingAltitude, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, withSkimmingAltitude, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatDirectViewDetector)[] = {
          { Py_tp_methods, t_InterSatDirectViewDetector__methods_ },
          { Py_tp_init, (void *) t_InterSatDirectViewDetector_init_ },
          { Py_tp_getset, t_InterSatDirectViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatDirectViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(InterSatDirectViewDetector, t_InterSatDirectViewDetector, InterSatDirectViewDetector);
        PyObject *t_InterSatDirectViewDetector::wrap_Object(const InterSatDirectViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatDirectViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatDirectViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatDirectViewDetector), &PY_TYPE_DEF(InterSatDirectViewDetector), module, "InterSatDirectViewDetector", 0);
        }

        void t_InterSatDirectViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "class_", make_descriptor(InterSatDirectViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "wrapfn_", make_descriptor(t_InterSatDirectViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatDirectViewDetector::initializeClass, 1)))
            return NULL;
          return t_InterSatDirectViewDetector::wrap_Object(InterSatDirectViewDetector(((t_InterSatDirectViewDetector *) arg)->object.this$));
        }
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatDirectViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          InterSatDirectViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InterSatDirectViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(InterSatDirectViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(InterSatDirectViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg)
        {
          jdouble a0;
          InterSatDirectViewDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withSkimmingAltitude(a0));
            return t_InterSatDirectViewDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSkimmingAltitude", arg);
          return NULL;
        }
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/IdentityConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IdentityConverter::class$ = NULL;
            jmethodID *IdentityConverter::mids$ = NULL;
            bool IdentityConverter::live$ = false;

            jclass IdentityConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IdentityConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_metersToRu_382e9a92dc257319] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_382e9a92dc257319] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IdentityConverter::IdentityConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble IdentityConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_382e9a92dc257319], a0.this$, a1.this$, a2);
            }

            jdouble IdentityConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_382e9a92dc257319], a0.this$, a1.this$, a2);
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
            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args);
            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args);

            static PyMethodDef t_IdentityConverter__methods_[] = {
              DECLARE_METHOD(t_IdentityConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IdentityConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_IdentityConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IdentityConverter)[] = {
              { Py_tp_methods, t_IdentityConverter__methods_ },
              { Py_tp_init, (void *) t_IdentityConverter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IdentityConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(IdentityConverter, t_IdentityConverter, IdentityConverter);

            void t_IdentityConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(IdentityConverter), &PY_TYPE_DEF(IdentityConverter), module, "IdentityConverter", 0);
            }

            void t_IdentityConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "class_", make_descriptor(IdentityConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "wrapfn_", make_descriptor(t_IdentityConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IdentityConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IdentityConverter::initializeClass, 1)))
                return NULL;
              return t_IdentityConverter::wrap_Object(IdentityConverter(((t_IdentityConverter *) arg)->object.this$));
            }
            static PyObject *t_IdentityConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IdentityConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IdentityConverter_init_(t_IdentityConverter *self, PyObject *args, PyObject *kwds)
            {
              IdentityConverter object((jobject) NULL);

              INT_CALL(object = IdentityConverter());
              self->object = object;

              return 0;
            }

            static PyObject *t_IdentityConverter_metersToRu(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_IdentityConverter_ruToMeters(t_IdentityConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_b74f83833fdad017] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_c2c9ac25aaca78ce] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonicsProvider::PythonUnnormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonUnnormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonicsProvider, t_PythonUnnormalizedSphericalHarmonicsProvider, PythonUnnormalizedSphericalHarmonicsProvider);

          void t_PythonUnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonicsProvider), module, "PythonUnnormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_Object(PythonUnnormalizedSphericalHarmonicsProvider(((t_PythonUnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data)
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
#include "org/hipparchus/linear/EigenDecompositionSymmetric.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionSymmetric::mids$ = NULL;
      bool EigenDecompositionSymmetric::live$ = false;
      jdouble EigenDecompositionSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_0e952c4cd7ebe1d5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DZ)V");
          mids$[mid_init$_ae4be200efff3af7] = env->getMethodID(cls, "<init>", "([D[DDZ)V");
          mids$[mid_getD_2d4bea390f44a6ac] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_getDeterminant_b74f83833fdad017] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalue_2afcbc21f4e57ab2] = env->getMethodID(cls, "getEigenvalue", "(I)D");
          mids$[mid_getEigenvalues_25e1757a36c4dde2] = env->getMethodID(cls, "getEigenvalues", "()[D");
          mids$[mid_getEigenvector_b50dc3915c68ddbc] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getEpsilon_b74f83833fdad017] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getSolver_5823fb909376de2c] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getSquareRoot_f77d745f2128c391] = env->getMethodID(cls, "getSquareRoot", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_f77d745f2128c391] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_f77d745f2128c391] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e952c4cd7ebe1d5, a0.this$, a1, a2)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae4be200efff3af7, a0.this$, a1.this$, a2, a3)) {}

      ::org::hipparchus::linear::DiagonalMatrix EigenDecompositionSymmetric::getD() const
      {
        return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getD_2d4bea390f44a6ac]));
      }

      jdouble EigenDecompositionSymmetric::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_b74f83833fdad017]);
      }

      jdouble EigenDecompositionSymmetric::getEigenvalue(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEigenvalue_2afcbc21f4e57ab2], a0);
      }

      JArray< jdouble > EigenDecompositionSymmetric::getEigenvalues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_25e1757a36c4dde2]));
      }

      ::org::hipparchus::linear::RealVector EigenDecompositionSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_b50dc3915c68ddbc], a0));
      }

      jdouble EigenDecompositionSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_b74f83833fdad017]);
      }

      ::org::hipparchus::linear::DecompositionSolver EigenDecompositionSymmetric::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_5823fb909376de2c]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getSquareRoot() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSquareRoot_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_f77d745f2128c391]));
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
      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, solver),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, squareRoot),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSquareRoot, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionSymmetric, t_EigenDecompositionSymmetric, EigenDecompositionSymmetric);

      void t_EigenDecompositionSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionSymmetric), &PY_TYPE_DEF(EigenDecompositionSymmetric), module, "EigenDecompositionSymmetric", 0);
      }

      void t_EigenDecompositionSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "class_", make_descriptor(EigenDecompositionSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionSymmetric::wrap_Object(EigenDecompositionSymmetric(((t_EigenDecompositionSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble a2;
            jboolean a3;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[DDZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2, a3));
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

      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return result.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return value.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagator::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagator::mids$ = NULL;
          bool GLONASSAnalyticalPropagator::live$ = false;

          jclass GLONASSAnalyticalPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_2c51111cc6894ba1] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_2c51111cc6894ba1] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getGLONASSOrbitalElements_ecd6853fd3b2ef73] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
              mids$[mid_getMU_b74f83833fdad017] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_propagateInEcef_686d17b8cfdd0634] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_2c51111cc6894ba1]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_2c51111cc6894ba1]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSAnalyticalPropagator::getGLONASSOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_ecd6853fd3b2ef73]));
          }

          jdouble GLONASSAnalyticalPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_b74f83833fdad017]);
          }

          ::org::orekit::utils::PVCoordinates GLONASSAnalyticalPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_686d17b8cfdd0634], a0.this$));
          }

          void GLONASSAnalyticalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
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
          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type);
          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyGetSetDef t_GLONASSAnalyticalPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCEF),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCI),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, frame),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, gLONASSOrbitalElements),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, mU),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GLONASSAnalyticalPropagator__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagator)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GLONASSAnalyticalPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagator, t_GLONASSAnalyticalPropagator, GLONASSAnalyticalPropagator);

          void t_GLONASSAnalyticalPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagator), &PY_TYPE_DEF(GLONASSAnalyticalPropagator), module, "GLONASSAnalyticalPropagator", 0);
          }

          void t_GLONASSAnalyticalPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "class_", make_descriptor(GLONASSAnalyticalPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagator::wrap_Object(GLONASSAnalyticalPropagator(((t_GLONASSAnalyticalPropagator *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder.h"
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

        ::java::lang::Class *MidpointFieldIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointFieldIntegratorBuilder::mids$ = NULL;
        bool MidpointFieldIntegratorBuilder::live$ = false;

        jclass MidpointFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator MidpointFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_MidpointFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegratorBuilder, t_MidpointFieldIntegratorBuilder, MidpointFieldIntegratorBuilder);
        PyObject *t_MidpointFieldIntegratorBuilder::wrap_Object(const MidpointFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegratorBuilder), &PY_TYPE_DEF(MidpointFieldIntegratorBuilder), module, "MidpointFieldIntegratorBuilder", 0);
        }

        void t_MidpointFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "class_", make_descriptor(MidpointFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegratorBuilder::wrap_Object(MidpointFieldIntegratorBuilder(((t_MidpointFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
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

        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(MidpointFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonPropagator.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonPropagator::class$ = NULL;
      jmethodID *PythonPropagator::mids$ = NULL;
      bool PythonPropagator::live$ = false;

      jclass PythonPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_40bf76e2f8bcdb6f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_e13564f833403504] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_5df44e253e7e7782] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_ec3241005499cbfa] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_4f0008999861ca31] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_6845ec704c846b03] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setEphemerisModeHandler_3c714d0cca30d176] = env->getMethodID(cls, "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setupMatricesComputation_353079da5ac9e8a7] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPropagator::PythonPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self);
      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args);
      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data);
      static PyGetSetDef t_PythonPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPropagator)[] = {
        { Py_tp_methods, t_PythonPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonPropagator_init_ },
        { Py_tp_getset, t_PythonPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPropagator, t_PythonPropagator, PythonPropagator);

      void t_PythonPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPropagator), &PY_TYPE_DEF(PythonPropagator), module, "PythonPropagator", 1);
      }

      void t_PythonPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "class_", make_descriptor(PythonPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "wrapfn_", make_descriptor(t_PythonPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonPropagator_setAttitudeProvider17 },
          { "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V", (void *) t_PythonPropagator_setEphemerisModeHandler18 },
          { "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonPropagator_setupMatricesComputation19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonPropagator::wrap_Object(PythonPropagator(((t_PythonPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonPropagator object((jobject) NULL);

        INT_CALL(object = PythonPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
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

      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
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

      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
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

      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepHandler::wrap_Object(::org::orekit::propagation::sampling::OrekitStepHandler(a0));
        PyObject *result = PyObject_CallMethod(obj, "setEphemerisModeHandler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *o1 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a1));
        PyObject *o2 = ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(::org::orekit::utils::DoubleArrayDictionary(a2));
        PyObject *result = PyObject_CallMethod(obj, "setupMatricesComputation", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
        {
          throwTypeError("setupMatricesComputation", result);
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

      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarN::class$ = NULL;
          jmethodID *CopolarN::mids$ = NULL;
          bool CopolarN::live$ = false;

          jclass CopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_b74f83833fdad017] = env->getMethodID(cls, "cn", "()D");
              mids$[mid_dn_b74f83833fdad017] = env->getMethodID(cls, "dn", "()D");
              mids$[mid_sn_b74f83833fdad017] = env->getMethodID(cls, "sn", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarN::cn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cn_b74f83833fdad017]);
          }

          jdouble CopolarN::dn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dn_b74f83833fdad017]);
          }

          jdouble CopolarN::sn() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sn_b74f83833fdad017]);
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
          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarN_cn(t_CopolarN *self);
          static PyObject *t_CopolarN_dn(t_CopolarN *self);
          static PyObject *t_CopolarN_sn(t_CopolarN *self);

          static PyMethodDef t_CopolarN__methods_[] = {
            DECLARE_METHOD(t_CopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_CopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarN)[] = {
            { Py_tp_methods, t_CopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarN, t_CopolarN, CopolarN);

          void t_CopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarN), &PY_TYPE_DEF(CopolarN), module, "CopolarN", 0);
          }

          void t_CopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "class_", make_descriptor(CopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "wrapfn_", make_descriptor(t_CopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarN::initializeClass, 1)))
              return NULL;
            return t_CopolarN::wrap_Object(CopolarN(((t_CopolarN *) arg)->object.this$));
          }
          static PyObject *t_CopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarN_cn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_dn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dn());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarN_sn(t_CopolarN *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sn());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/BasicScanAlgorithm.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *BasicScanAlgorithm::class$ = NULL;
        jmethodID *BasicScanAlgorithm::mids$ = NULL;
        bool BasicScanAlgorithm::live$ = false;

        jclass BasicScanAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/BasicScanAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c865a60f55bdbf0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getAlgorithmId_d67e2fdbea04a3ee] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_99e3200dafc19573] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_7819c980b8c560ad] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_882cf21796738f1c] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BasicScanAlgorithm::BasicScanAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c865a60f55bdbf0a, a0.this$, a1)) {}

        ::org::orekit::rugged::api::AlgorithmId BasicScanAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_d67e2fdbea04a3ee]));
        }

        jdouble BasicScanAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_99e3200dafc19573], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_7819c980b8c560ad], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint BasicScanAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_882cf21796738f1c], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self);
        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args);
        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data);
        static PyGetSetDef t_BasicScanAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_BasicScanAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BasicScanAlgorithm__methods_[] = {
          DECLARE_METHOD(t_BasicScanAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_BasicScanAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BasicScanAlgorithm)[] = {
          { Py_tp_methods, t_BasicScanAlgorithm__methods_ },
          { Py_tp_init, (void *) t_BasicScanAlgorithm_init_ },
          { Py_tp_getset, t_BasicScanAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BasicScanAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BasicScanAlgorithm, t_BasicScanAlgorithm, BasicScanAlgorithm);

        void t_BasicScanAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(BasicScanAlgorithm), &PY_TYPE_DEF(BasicScanAlgorithm), module, "BasicScanAlgorithm", 0);
        }

        void t_BasicScanAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "class_", make_descriptor(BasicScanAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "wrapfn_", make_descriptor(t_BasicScanAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BasicScanAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BasicScanAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BasicScanAlgorithm::initializeClass, 1)))
            return NULL;
          return t_BasicScanAlgorithm::wrap_Object(BasicScanAlgorithm(((t_BasicScanAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_BasicScanAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BasicScanAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BasicScanAlgorithm_init_(t_BasicScanAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          BasicScanAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BasicScanAlgorithm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BasicScanAlgorithm_getAlgorithmId(t_BasicScanAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_BasicScanAlgorithm_getElevation(t_BasicScanAlgorithm *self, PyObject *args)
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

        static PyObject *t_BasicScanAlgorithm_intersection(t_BasicScanAlgorithm *self, PyObject *args)
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

        static PyObject *t_BasicScanAlgorithm_refineIntersection(t_BasicScanAlgorithm *self, PyObject *args)
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

        static PyObject *t_BasicScanAlgorithm_get__algorithmId(t_BasicScanAlgorithm *self, void *data)
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
#include "org/orekit/forces/FixedPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *FixedPanel::class$ = NULL;
      jmethodID *FixedPanel::mids$ = NULL;
      bool FixedPanel::live$ = false;

      jclass FixedPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/FixedPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02d75209aa5e44fd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DZDDDD)V");
          mids$[mid_getNormal_de3c04262e60a5b3] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_9019a5b32b11453a] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedPanel::FixedPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_02d75209aa5e44fd, a0.this$, a1, a2, a3, a4, a5, a6)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_de3c04262e60a5b3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_9019a5b32b11453a], a0.this$));
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
      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args);

      static PyMethodDef t_FixedPanel__methods_[] = {
        DECLARE_METHOD(t_FixedPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedPanel)[] = {
        { Py_tp_methods, t_FixedPanel__methods_ },
        { Py_tp_init, (void *) t_FixedPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(FixedPanel, t_FixedPanel, FixedPanel);

      void t_FixedPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedPanel), &PY_TYPE_DEF(FixedPanel), module, "FixedPanel", 0);
      }

      void t_FixedPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "class_", make_descriptor(FixedPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "wrapfn_", make_descriptor(t_FixedPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedPanel::initializeClass, 1)))
          return NULL;
        return t_FixedPanel::wrap_Object(FixedPanel(((t_FixedPanel *) arg)->object.this$));
      }
      static PyObject *t_FixedPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedPanel_init_(t_FixedPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        jboolean a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        FixedPanel object((jobject) NULL);

        if (!parseArgs(args, "kDZDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          INT_CALL(object = FixedPanel(a0, a1, a2, a3, a4, a5, a6));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedPanel_getNormal(t_FixedPanel *self, PyObject *args)
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

        return callSuper(PY_TYPE(FixedPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/Duration.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *Duration::class$ = NULL;
          jmethodID *Duration::mids$ = NULL;
          bool Duration::live$ = false;

          jclass Duration::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/Duration");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_97df9017614a1945] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Duration::Duration(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > Duration::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f227e5f48720b798], a0.this$));
          }

          ::java::lang::String Duration::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          jboolean Duration::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_97df9017614a1945], a0.this$);
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
          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_getName(t_Duration *self);
          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg);
          static PyObject *t_Duration_get__name(t_Duration *self, void *data);
          static PyGetSetDef t_Duration__fields_[] = {
            DECLARE_GET_FIELD(t_Duration, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Duration__methods_[] = {
            DECLARE_METHOD(t_Duration, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Duration, getAdditionalState, METH_O),
            DECLARE_METHOD(t_Duration, getName, METH_NOARGS),
            DECLARE_METHOD(t_Duration, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Duration)[] = {
            { Py_tp_methods, t_Duration__methods_ },
            { Py_tp_init, (void *) t_Duration_init_ },
            { Py_tp_getset, t_Duration__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Duration)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Duration, t_Duration, Duration);

          void t_Duration::install(PyObject *module)
          {
            installType(&PY_TYPE(Duration), &PY_TYPE_DEF(Duration), module, "Duration", 0);
          }

          void t_Duration::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "class_", make_descriptor(Duration::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "wrapfn_", make_descriptor(t_Duration::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Duration), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Duration_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Duration::initializeClass, 1)))
              return NULL;
            return t_Duration::wrap_Object(Duration(((t_Duration *) arg)->object.this$));
          }
          static PyObject *t_Duration_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Duration::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Duration_init_(t_Duration *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Duration object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = Duration(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Duration_getAdditionalState(t_Duration *self, PyObject *arg)
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

          static PyObject *t_Duration_getName(t_Duration *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_Duration_yields(t_Duration *self, PyObject *arg)
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

          static PyObject *t_Duration_get__name(t_Duration *self, void *data)
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

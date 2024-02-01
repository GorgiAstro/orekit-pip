#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
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
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractAlfriend1999::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7eae8d8112e983e4], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractAlfriend1999::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8edb355cf7d54cf6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *BivariateFunction::class$ = NULL;
      jmethodID *BivariateFunction::mids$ = NULL;
      bool BivariateFunction::live$ = false;

      jclass BivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/BivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BivariateFunction::value(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args);

      static PyMethodDef t_BivariateFunction__methods_[] = {
        DECLARE_METHOD(t_BivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BivariateFunction)[] = {
        { Py_tp_methods, t_BivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BivariateFunction, t_BivariateFunction, BivariateFunction);

      void t_BivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(BivariateFunction), &PY_TYPE_DEF(BivariateFunction), module, "BivariateFunction", 0);
      }

      void t_BivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "class_", make_descriptor(BivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "wrapfn_", make_descriptor(t_BivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BivariateFunction::initializeClass, 1)))
          return NULL;
        return t_BivariateFunction::wrap_Object(BivariateFunction(((t_BivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
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
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldDecompositionSolver::class$ = NULL;
      jmethodID *FieldDecompositionSolver::mids$ = NULL;
      bool FieldDecompositionSolver::live$ = false;

      jclass FieldDecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldDecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_02883dbbe5db44ac] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_eee3de00fe971136] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_b180f987191970ad] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_solve_17fc5256c635037d] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint FieldDecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_02883dbbe5db44ac]));
      }

      jint FieldDecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      jboolean FieldDecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_eee3de00fe971136]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_solve_b180f987191970ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_solve_17fc5256c635037d], a0.this$));
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
      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data);
      static PyGetSetDef t_FieldDecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, rowDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_FieldDecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDecompositionSolver)[] = {
        { Py_tp_methods, t_FieldDecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldDecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDecompositionSolver, t_FieldDecompositionSolver, FieldDecompositionSolver);
      PyObject *t_FieldDecompositionSolver::wrap_Object(const FieldDecompositionSolver& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDecompositionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDecompositionSolver), &PY_TYPE_DEF(FieldDecompositionSolver), module, "FieldDecompositionSolver", 0);
      }

      void t_FieldDecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "class_", make_descriptor(FieldDecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "wrapfn_", make_descriptor(t_FieldDecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_FieldDecompositionSolver::wrap_Object(FieldDecompositionSolver(((t_FieldDecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data)
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
#include "org/orekit/data/ZipJarCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler::class$ = NULL;
      jmethodID *ZipJarCrawler::mids$ = NULL;
      bool ZipJarCrawler::live$ = false;

      jclass ZipJarCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44d81342f3d8a712] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_9a9c801b84dad3ae] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;)V");
          mids$[mid_init$_07cec9f1546bd55c] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ZipJarCrawler::ZipJarCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44d81342f3d8a712, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::net::URL & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a9c801b84dad3ae, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::ClassLoader & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07cec9f1546bd55c, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ZipJarCrawler__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler)[] = {
        { Py_tp_methods, t_ZipJarCrawler__methods_ },
        { Py_tp_init, (void *) t_ZipJarCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler, t_ZipJarCrawler, ZipJarCrawler);

      void t_ZipJarCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler), &PY_TYPE_DEF(ZipJarCrawler), module, "ZipJarCrawler", 0);
      }

      void t_ZipJarCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "class_", make_descriptor(ZipJarCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "wrapfn_", make_descriptor(t_ZipJarCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler::wrap_Object(ZipJarCrawler(((t_ZipJarCrawler *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::net::URL a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ZipJarCrawler(a0, a1));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *SimpleRatioAmbiguityAcceptance::class$ = NULL;
          jmethodID *SimpleRatioAmbiguityAcceptance::mids$ = NULL;
          bool SimpleRatioAmbiguityAcceptance::live$ = false;

          jclass SimpleRatioAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_accept_5ee686c7fe5c8130] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_d6ab429752e7c267] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleRatioAmbiguityAcceptance::SimpleRatioAmbiguityAcceptance(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution SimpleRatioAmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_5ee686c7fe5c8130], a0.this$));
          }

          jint SimpleRatioAmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_d6ab429752e7c267]);
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
          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self);

          static PyMethodDef t_SimpleRatioAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleRatioAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_SimpleRatioAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_SimpleRatioAmbiguityAcceptance_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleRatioAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleRatioAmbiguityAcceptance, t_SimpleRatioAmbiguityAcceptance, SimpleRatioAmbiguityAcceptance);

          void t_SimpleRatioAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleRatioAmbiguityAcceptance), &PY_TYPE_DEF(SimpleRatioAmbiguityAcceptance), module, "SimpleRatioAmbiguityAcceptance", 0);
          }

          void t_SimpleRatioAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "class_", make_descriptor(SimpleRatioAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "wrapfn_", make_descriptor(t_SimpleRatioAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_SimpleRatioAmbiguityAcceptance::wrap_Object(SimpleRatioAmbiguityAcceptance(((t_SimpleRatioAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            SimpleRatioAmbiguityAcceptance object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = SimpleRatioAmbiguityAcceptance(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DiagonalMatrix::class$ = NULL;
      jmethodID *DiagonalMatrix::mids$ = NULL;
      bool DiagonalMatrix::live$ = false;

      jclass DiagonalMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DiagonalMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d202a20516e33d93] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_add_e7181db5238eec46] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_addToEntry_e98d7b3e971b6087] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_b2eebabce70526d8] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_afc0d8087db42fe7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_eda3f19b8225f78f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_be783177b060994b] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getEntry_6d920aab27f0a3d2] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_inverse_4fb5d9750db49b3f] = env->getMethodID(cls, "inverse", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_inverse_81259d2fcdf6a429] = env->getMethodID(cls, "inverse", "(D)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_isSingular_7bc657d327f0f830] = env->getMethodID(cls, "isSingular", "(D)Z");
          mids$[mid_multiply_e7181db5238eec46] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiply_5a8a8185eb309db7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_e98d7b3e971b6087] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_e7181db5238eec46] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiplyTransposed_5a8a8185eb309db7] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_51f624c89851da7e] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_51f624c89851da7e] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_bf8d75e459632544] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_setEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_e7181db5238eec46] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_e7181db5238eec46] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_5a8a8185eb309db7] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      DiagonalMatrix::DiagonalMatrix(jint a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_d202a20516e33d93, a0.this$, a1)) {}

      DiagonalMatrix DiagonalMatrix::add(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_add_e7181db5238eec46], a0.this$));
      }

      void DiagonalMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_afc0d8087db42fe7], a0, a1));
      }

      jint DiagonalMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      JArray< JArray< jdouble > > DiagonalMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_eda3f19b8225f78f]));
      }

      JArray< jdouble > DiagonalMatrix::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_be783177b060994b]));
      }

      jdouble DiagonalMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_6d920aab27f0a3d2], a0, a1);
      }

      jint DiagonalMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      DiagonalMatrix DiagonalMatrix::inverse() const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_4fb5d9750db49b3f]));
      }

      DiagonalMatrix DiagonalMatrix::inverse(jdouble a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_81259d2fcdf6a429], a0));
      }

      jboolean DiagonalMatrix::isSingular(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSingular_7bc657d327f0f830], a0);
      }

      DiagonalMatrix DiagonalMatrix::multiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e7181db5238eec46], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_5a8a8185eb309db7], a0.this$));
      }

      void DiagonalMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::multiplyTransposed(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e7181db5238eec46], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_5a8a8185eb309db7], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_51f624c89851da7e], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_51f624c89851da7e], a0.this$));
      }

      ::org::hipparchus::linear::RealVector DiagonalMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_bf8d75e459632544], a0.this$));
      }

      void DiagonalMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_e98d7b3e971b6087], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::subtract(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e7181db5238eec46], a0.this$));
      }

      DiagonalMatrix DiagonalMatrix::transposeMultiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e7181db5238eec46], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_5a8a8185eb309db7], a0.this$));
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
      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self);
      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg);
      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data);
      static PyGetSetDef t_DiagonalMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_DiagonalMatrix, columnDimension),
        DECLARE_GET_FIELD(t_DiagonalMatrix, data),
        DECLARE_GET_FIELD(t_DiagonalMatrix, dataRef),
        DECLARE_GET_FIELD(t_DiagonalMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DiagonalMatrix__methods_[] = {
        DECLARE_METHOD(t_DiagonalMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, inverse, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, isSingular, METH_O),
        DECLARE_METHOD(t_DiagonalMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DiagonalMatrix)[] = {
        { Py_tp_methods, t_DiagonalMatrix__methods_ },
        { Py_tp_init, (void *) t_DiagonalMatrix_init_ },
        { Py_tp_getset, t_DiagonalMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DiagonalMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(DiagonalMatrix, t_DiagonalMatrix, DiagonalMatrix);

      void t_DiagonalMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(DiagonalMatrix), &PY_TYPE_DEF(DiagonalMatrix), module, "DiagonalMatrix", 0);
      }

      void t_DiagonalMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "class_", make_descriptor(DiagonalMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "wrapfn_", make_descriptor(t_DiagonalMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DiagonalMatrix::initializeClass, 1)))
          return NULL;
        return t_DiagonalMatrix::wrap_Object(DiagonalMatrix(((t_DiagonalMatrix *) arg)->object.this$));
      }
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DiagonalMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = DiagonalMatrix(a0, a1));
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

      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DiagonalMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.inverse());
            return t_DiagonalMatrix::wrap_Object(result);
          }
          break;
         case 1:
          {
            jdouble a0;
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.inverse(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "inverse", args);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isSingular(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSingular", arg);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args)
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
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data)
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
#include "org/orekit/estimation/measurements/AbstractMeasurement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AbstractMeasurement::class$ = NULL;
        jmethodID *AbstractMeasurement::mids$ = NULL;
        bool AbstractMeasurement::live$ = false;

        jclass AbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_a3bed5360bec47d0] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_eda25b8c88791d9a] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_be783177b060994b] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getCoordinates_8b861b31a49c2b7e] = env->getStaticMethodID(cls, "getCoordinates", "(Lorg/orekit/propagation/SpacecraftState;II)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getModifiers_d751c1a57012b438] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_be783177b060994b] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_d751c1a57012b438] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_be783177b060994b] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_eee3de00fe971136] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_b35db77cae58639e] = env->getMethodID(cls, "setEnabled", "(Z)V");
            mids$[mid_signalTimeOfFlight_85a9d161d0b12c2d] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_signalTimeOfFlight_274967c07d63ac06] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_addParameterDriver_680e005705d5f0aa] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_a3bed5360bec47d0], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement AbstractMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_eda25b8c88791d9a], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase AbstractMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_59954f62fc64aef2], a0, a1, a2.this$));
        }

        JArray< jdouble > AbstractMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_be783177b060994b]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates AbstractMeasurement::getCoordinates(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getCoordinates_8b861b31a49c2b7e], a0.this$, a1, a2));
        }

        ::org::orekit::time::AbsoluteDate AbstractMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jint AbstractMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        ::java::util::List AbstractMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_d751c1a57012b438]));
        }

        JArray< jdouble > AbstractMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_be783177b060994b]));
        }

        ::java::util::List AbstractMeasurement::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        ::java::util::List AbstractMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_d751c1a57012b438]));
        }

        JArray< jdouble > AbstractMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_be783177b060994b]));
        }

        jboolean AbstractMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_eee3de00fe971136]);
        }

        void AbstractMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_b35db77cae58639e], a0);
        }

        jdouble AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_signalTimeOfFlight_85a9d161d0b12c2d], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_signalTimeOfFlight_274967c07d63ac06], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data);
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data);
        static PyGetSetDef t_AbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_AbstractMeasurement, date),
          DECLARE_GET_FIELD(t_AbstractMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_AbstractMeasurement, enabled),
          DECLARE_GET_FIELD(t_AbstractMeasurement, modifiers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, observedValue),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parametersDrivers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, satellites),
          DECLARE_GET_FIELD(t_AbstractMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_AbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getCoordinates, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, setEnabled, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, signalTimeOfFlight, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurement)[] = {
          { Py_tp_methods, t_AbstractMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMeasurement, t_AbstractMeasurement, AbstractMeasurement);
        PyObject *t_AbstractMeasurement::wrap_Object(const AbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMeasurement), &PY_TYPE_DEF(AbstractMeasurement), module, "AbstractMeasurement", 0);
        }

        void t_AbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "class_", make_descriptor(AbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "wrapfn_", make_descriptor(t_AbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_AbstractMeasurement::wrap_Object(AbstractMeasurement(((t_AbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
          {
            OBJ_CALL(self->object.addModifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          jint a2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kII", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::getCoordinates(a0, a1, a2));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError(type, "getCoordinates", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kkk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "signalTimeOfFlight", args);
          return NULL;
        }
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *ParameterValidator::class$ = NULL;
            jmethodID *ParameterValidator::mids$ = NULL;
            bool ParameterValidator::live$ = false;

            jclass ParameterValidator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_validate_bf8d75e459632544] = env->getMethodID(cls, "validate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::linear::RealVector ParameterValidator::validate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_validate_bf8d75e459632544], a0.this$));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg);

            static PyMethodDef t_ParameterValidator__methods_[] = {
              DECLARE_METHOD(t_ParameterValidator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParameterValidator, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParameterValidator)[] = {
              { Py_tp_methods, t_ParameterValidator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParameterValidator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParameterValidator, t_ParameterValidator, ParameterValidator);

            void t_ParameterValidator::install(PyObject *module)
            {
              installType(&PY_TYPE(ParameterValidator), &PY_TYPE_DEF(ParameterValidator), module, "ParameterValidator", 0);
            }

            void t_ParameterValidator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "class_", make_descriptor(ParameterValidator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "wrapfn_", make_descriptor(t_ParameterValidator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterValidator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParameterValidator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParameterValidator::initializeClass, 1)))
                return NULL;
              return t_ParameterValidator::wrap_Object(ParameterValidator(((t_ParameterValidator *) arg)->object.this$));
            }
            static PyObject *t_ParameterValidator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParameterValidator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParameterValidator_validate(t_ParameterValidator *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.validate(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "validate", arg);
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_1e734c57d386c277] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_build_005e47daab5d946d] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator;");
            mids$[mid_decomposer_9824308623963869] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_1eba90d963c3b750] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimatorBuilder::SemiAnalyticalKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_1e734c57d386c277], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator SemiAnalyticalKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_005e47daab5d946d]));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_9824308623963869], a0.this$));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_1eba90d963c3b750], a0.this$, a1.this$));
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
      namespace sequential {
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimatorBuilder, t_SemiAnalyticalKalmanEstimatorBuilder, SemiAnalyticalKalmanEstimatorBuilder);

        void t_SemiAnalyticalKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimatorBuilder), module, "SemiAnalyticalKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalKalmanEstimatorBuilder(((t_SemiAnalyticalKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages::class$ = NULL;
        jmethodID *RuggedMessages::mids$ = NULL;
        bool RuggedMessages::live$ = false;
        RuggedMessages *RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::CANNOT_PARSE_LINE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_NOT_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = NULL;
        RuggedMessages *RuggedMessages::DUPLICATED_PARAMETER_NAME = NULL;
        RuggedMessages *RuggedMessages::EMPTY_TILE = NULL;
        RuggedMessages *RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = NULL;
        RuggedMessages *RuggedMessages::INTERNAL_ERROR = NULL;
        RuggedMessages *RuggedMessages::INVALID_RANGE_FOR_LINES = NULL;
        RuggedMessages *RuggedMessages::INVALID_RUGGED_NAME = NULL;
        RuggedMessages *RuggedMessages::INVALID_STEP = NULL;
        RuggedMessages *RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = NULL;
        RuggedMessages *RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_DEM_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_LAYER_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_PARAMETERS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::NO_REFERENCE_MAPPINGS = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_ANGLES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_INDICES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TIME_RANGE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = NULL;
        RuggedMessages *RuggedMessages::TILE_ALREADY_DEFINED = NULL;
        RuggedMessages *RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::UNINITIALIZED_CONTEXT = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_SENSOR = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_TILE = NULL;
        RuggedMessages *RuggedMessages::UNSUPPORTED_REFINING_CONTEXT = NULL;

        jclass RuggedMessages::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
            mids$[mid_valueOf_f3c0946e7f4a99e7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/errors/RuggedMessages;");
            mids$[mid_values_9cdc23c74366e4bd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/errors/RuggedMessages;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            ATMOSPHERIC_REFRACTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ATMOSPHERIC_REFRACTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            CANNOT_PARSE_LINE = new RuggedMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ACTIVATION_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ACTIVATION_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ALREADY_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ALREADY_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_NOT_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_NOT_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = new RuggedMessages(env->getStaticObjectField(cls, "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DUPLICATED_PARAMETER_NAME = new RuggedMessages(env->getStaticObjectField(cls, "DUPLICATED_PARAMETER_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            EMPTY_TILE = new RuggedMessages(env->getStaticObjectField(cls, "EMPTY_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = new RuggedMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INTERNAL_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RANGE_FOR_LINES = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RANGE_FOR_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RUGGED_NAME = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RUGGED_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_STEP = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_STEP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LIGHT_TIME_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "LIGHT_TIME_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NOT_INTERPOLATOR_DUMP_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NOT_INTERPOLATOR_DUMP_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_DEM_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_DEM_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_LAYER_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_LAYER_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_PARAMETERS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "NO_PARAMETERS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_REFERENCE_MAPPINGS = new RuggedMessages(env->getStaticObjectField(cls, "NO_REFERENCE_MAPPINGS", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_ANGLES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_ANGLES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_INDICES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_INDICES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TIME_RANGE = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TIME_RANGE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_ALREADY_DEFINED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_ALREADY_DEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNINITIALIZED_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNINITIALIZED_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_SENSOR = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_SENSOR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_TILE = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNSUPPORTED_REFINING_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNSUPPORTED_REFINING_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String RuggedMessages::getLocalizedString(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
        }

        ::java::lang::String RuggedMessages::getSourceString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
        }

        RuggedMessages RuggedMessages::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return RuggedMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f3c0946e7f4a99e7], a0.this$));
        }

        JArray< RuggedMessages > RuggedMessages::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< RuggedMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_9cdc23c74366e4bd]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args);
        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg);
        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self);
        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_RuggedMessages_values(PyTypeObject *type);
        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data);
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data);
        static PyGetSetDef t_RuggedMessages__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages, sourceString),
          DECLARE_GET_FIELD(t_RuggedMessages, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages, getLocalizedString, METH_O),
          DECLARE_METHOD(t_RuggedMessages, getSourceString, METH_NOARGS),
          DECLARE_METHOD(t_RuggedMessages, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages)[] = {
          { Py_tp_methods, t_RuggedMessages__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RuggedMessages__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(RuggedMessages, t_RuggedMessages, RuggedMessages);
        PyObject *t_RuggedMessages::wrap_Object(const RuggedMessages& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages), &PY_TYPE_DEF(RuggedMessages), module, "RuggedMessages", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(RuggedMessages$UTF8Control)));
        }

        void t_RuggedMessages::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "class_", make_descriptor(RuggedMessages::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "wrapfn_", make_descriptor(t_RuggedMessages::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "boxfn_", make_descriptor(boxObject));
          env->getClass(RuggedMessages::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ATMOSPHERIC_REFRACTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "CANNOT_PARSE_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::CANNOT_PARSE_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ACTIVATION_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ALREADY_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_NOT_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_NOT_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DUPLICATED_PARAMETER_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DUPLICATED_PARAMETER_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "EMPTY_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::EMPTY_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INTERNAL_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INTERNAL_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RANGE_FOR_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RANGE_FOR_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RUGGED_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RUGGED_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_STEP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_STEP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LIGHT_TIME_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NOT_INTERPOLATOR_DUMP_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_DEM_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_DEM_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_LAYER_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_LAYER_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_PARAMETERS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_PARAMETERS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_REFERENCE_MAPPINGS", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_REFERENCE_MAPPINGS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_ANGLES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_ANGLES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_INDICES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_INDICES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TIME_RANGE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TIME_RANGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_ALREADY_DEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_ALREADY_DEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNINITIALIZED_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNINITIALIZED_CONTEXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_SENSOR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_SENSOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNSUPPORTED_REFINING_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNSUPPORTED_REFINING_CONTEXT)));
        }

        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages::wrap_Object(RuggedMessages(((t_RuggedMessages *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg)
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

        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceString());
          return j2p(result);
        }

        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          RuggedMessages result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::valueOf(a0));
            return t_RuggedMessages::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_RuggedMessages_values(PyTypeObject *type)
        {
          JArray< RuggedMessages > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::values());
          return JArray<jobject>(result.this$).wrap(t_RuggedMessages::wrap_jobject);
        }
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceString());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PolynomialRotation.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *PolynomialRotation::class$ = NULL;
        jmethodID *PolynomialRotation::mids$ = NULL;
        bool PolynomialRotation::live$ = false;

        jclass PolynomialRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/PolynomialRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3f98e2eefc09629d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_init$_e7ea792d5ffd15a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_21cc615301704d02] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_41d9b45a2778847c] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f98e2eefc09629d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e7ea792d5ffd15a3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::stream::Stream PolynomialRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_11e4ca8182c1933d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_21cc615301704d02], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_41d9b45a2778847c], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self);
        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args);
        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data);
        static PyGetSetDef t_PolynomialRotation__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialRotation__methods_[] = {
          DECLARE_METHOD(t_PolynomialRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialRotation)[] = {
          { Py_tp_methods, t_PolynomialRotation__methods_ },
          { Py_tp_init, (void *) t_PolynomialRotation_init_ },
          { Py_tp_getset, t_PolynomialRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialRotation, t_PolynomialRotation, PolynomialRotation);

        void t_PolynomialRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialRotation), &PY_TYPE_DEF(PolynomialRotation), module, "PolynomialRotation", 0);
        }

        void t_PolynomialRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "class_", make_descriptor(PolynomialRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "wrapfn_", make_descriptor(t_PolynomialRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialRotation::initializeClass, 1)))
            return NULL;
          return t_PolynomialRotation::wrap_Object(PolynomialRotation(((t_PolynomialRotation *) arg)->object.this$));
        }
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skk[D", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
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

        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PredictedEOPHistory.h"
#include "org/orekit/frames/EOPFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PredictedEOPHistory::class$ = NULL;
      jmethodID *PredictedEOPHistory::mids$ = NULL;
      bool PredictedEOPHistory::live$ = false;

      jclass PredictedEOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PredictedEOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939fd4491c9559b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/EOPHistory;DLorg/orekit/frames/EOPFitter;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PredictedEOPHistory::PredictedEOPHistory(const ::org::orekit::frames::EOPHistory & a0, jdouble a1, const ::org::orekit::frames::EOPFitter & a2) : ::org::orekit::frames::EOPHistory(env->newObject(initializeClass, &mids$, mid_init$_e939fd4491c9559b, a0.this$, a1, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PredictedEOPHistory__methods_[] = {
        DECLARE_METHOD(t_PredictedEOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PredictedEOPHistory, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PredictedEOPHistory)[] = {
        { Py_tp_methods, t_PredictedEOPHistory__methods_ },
        { Py_tp_init, (void *) t_PredictedEOPHistory_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PredictedEOPHistory)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::EOPHistory),
        NULL
      };

      DEFINE_TYPE(PredictedEOPHistory, t_PredictedEOPHistory, PredictedEOPHistory);

      void t_PredictedEOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(PredictedEOPHistory), &PY_TYPE_DEF(PredictedEOPHistory), module, "PredictedEOPHistory", 0);
      }

      void t_PredictedEOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "class_", make_descriptor(PredictedEOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "wrapfn_", make_descriptor(t_PredictedEOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PredictedEOPHistory::initializeClass, 1)))
          return NULL;
        return t_PredictedEOPHistory::wrap_Object(PredictedEOPHistory(((t_PredictedEOPHistory *) arg)->object.this$));
      }
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PredictedEOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::frames::EOPFitter a2((jobject) NULL);
        PredictedEOPHistory object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::frames::EOPFitter::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PredictedEOPHistory(a0, a1, a2));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedForm::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedForm::mids$ = NULL;
            bool DSSTJ2SquaredClosedForm::live$ = false;

            jclass DSSTJ2SquaredClosedForm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_755ae497b8af3c9a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedForm::DSSTJ2SquaredClosedForm(const ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_755ae497b8af3c9a, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3eb9526d5d611f82], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_43ba9f5eaba95dbb], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6], a0.this$, a1.this$, a2.this$));
            }

            void DSSTJ2SquaredClosedForm::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_61d4f27408b30d56], a0.this$, a1.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_49390f5c28b648db], a0.this$, a1.this$);
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
            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self);
            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedForm__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedForm, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedForm__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedForm)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedForm__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedForm_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedForm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedForm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedForm, t_DSSTJ2SquaredClosedForm, DSSTJ2SquaredClosedForm);

            void t_DSSTJ2SquaredClosedForm::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedForm), &PY_TYPE_DEF(DSSTJ2SquaredClosedForm), module, "DSSTJ2SquaredClosedForm", 0);
            }

            void t_DSSTJ2SquaredClosedForm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "class_", make_descriptor(DSSTJ2SquaredClosedForm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedForm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedForm::wrap_Object(DSSTJ2SquaredClosedForm(((t_DSSTJ2SquaredClosedForm *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedForm object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedForm(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_1_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_3_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::HECTO_PASCAL = NULL;
          ::org::orekit::utils::units::Unit *Units::HZ_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KG_M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM3_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S3 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NANO_TESLA = NULL;
          ::org::orekit::utils::units::Unit *Units::NB_PER_Y = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M_S = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_ER = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY2_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY3_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::W_PER_KG = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEG_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_1_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_1_2", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_3_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_3_2", "Lorg/orekit/utils/units/Unit;"));
              HECTO_PASCAL = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HECTO_PASCAL", "Lorg/orekit/utils/units/Unit;"));
              HZ_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HZ_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KG_M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KG_M2", "Lorg/orekit/utils/units/Unit;"));
              KM2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM3_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM3_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S3 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S3", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S4", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS2", "Lorg/orekit/utils/units/Unit;"));
              M4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG2", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NANO_TESLA = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NANO_TESLA", "Lorg/orekit/utils/units/Unit;"));
              NB_PER_Y = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NB_PER_Y", "Lorg/orekit/utils/units/Unit;"));
              N_M = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M", "Lorg/orekit/utils/units/Unit;"));
              N_M_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M_S", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_ER = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_ER", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_S", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY2_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY2_SCALED", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY3_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY3_SCALED", "Lorg/orekit/utils/units/Unit;"));
              W_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "W_PER_KG", "Lorg/orekit/utils/units/Unit;"));
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
        namespace definitions {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_1_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_1_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_3_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_3_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HECTO_PASCAL", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HECTO_PASCAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HZ_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HZ_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KG_M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KG_M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM3_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM3_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S3", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NANO_TESLA", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NANO_TESLA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NB_PER_Y", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NB_PER_Y)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_ER", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_ER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY2_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY2_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY3_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY3_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "W_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::W_PER_KG)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
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
#include "org/orekit/time/PythonFieldTimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeInterpolator::class$ = NULL;
      jmethodID *PythonFieldTimeInterpolator::mids$ = NULL;
      bool PythonFieldTimeInterpolator::live$ = false;

      jclass PythonFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_6042ab31a60ab114] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_interpolate_cebe555f260562be] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeInterpolator::PythonFieldTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldTimeInterpolator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self);
      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data);
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeInterpolator, t_PythonFieldTimeInterpolator, PythonFieldTimeInterpolator);
      PyObject *t_PythonFieldTimeInterpolator::wrap_Object(const PythonFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeInterpolator), &PY_TYPE_DEF(PythonFieldTimeInterpolator), module, "PythonFieldTimeInterpolator", 1);
      }

      void t_PythonFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "class_", make_descriptor(PythonFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "wrapfn_", make_descriptor(t_PythonFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonFieldTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonFieldTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonFieldTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeInterpolator::wrap_Object(PythonFieldTimeInterpolator(((t_PythonFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *PSquarePercentile::class$ = NULL;
          jmethodID *PSquarePercentile::mids$ = NULL;
          bool PSquarePercentile::live$ = false;

          jclass PSquarePercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/PSquarePercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_e6a4add1a9e771f4] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/PSquarePercentile;");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantile_9981f74b2d109da6] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_quantile_9981f74b2d109da6] = env->getMethodID(cls, "quantile", "()D");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PSquarePercentile::PSquarePercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          void PSquarePercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          PSquarePercentile PSquarePercentile::copy() const
          {
            return PSquarePercentile(env->callObjectMethod(this$, mids$[mid_copy_e6a4add1a9e771f4]));
          }

          jboolean PSquarePercentile::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jlong PSquarePercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble PSquarePercentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_9981f74b2d109da6]);
          }

          jdouble PSquarePercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          jint PSquarePercentile::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          void PSquarePercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
          }

          jdouble PSquarePercentile::quantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_quantile_9981f74b2d109da6]);
          }

          ::java::lang::String PSquarePercentile::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        namespace rank {
          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self);
          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args);
          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data);
          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data);
          static PyGetSetDef t_PSquarePercentile__fields_[] = {
            DECLARE_GET_FIELD(t_PSquarePercentile, n),
            DECLARE_GET_FIELD(t_PSquarePercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PSquarePercentile__methods_[] = {
            DECLARE_METHOD(t_PSquarePercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PSquarePercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, equals, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_PSquarePercentile, quantile, METH_NOARGS),
            DECLARE_METHOD(t_PSquarePercentile, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PSquarePercentile)[] = {
            { Py_tp_methods, t_PSquarePercentile__methods_ },
            { Py_tp_init, (void *) t_PSquarePercentile_init_ },
            { Py_tp_getset, t_PSquarePercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PSquarePercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(PSquarePercentile, t_PSquarePercentile, PSquarePercentile);

          void t_PSquarePercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(PSquarePercentile), &PY_TYPE_DEF(PSquarePercentile), module, "PSquarePercentile", 0);
          }

          void t_PSquarePercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "class_", make_descriptor(PSquarePercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "wrapfn_", make_descriptor(t_PSquarePercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PSquarePercentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PSquarePercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PSquarePercentile::initializeClass, 1)))
              return NULL;
            return t_PSquarePercentile::wrap_Object(PSquarePercentile(((t_PSquarePercentile *) arg)->object.this$));
          }
          static PyObject *t_PSquarePercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PSquarePercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PSquarePercentile_init_(t_PSquarePercentile *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            PSquarePercentile object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = PSquarePercentile(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PSquarePercentile_clear(t_PSquarePercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_PSquarePercentile_copy(t_PSquarePercentile *self, PyObject *args)
          {
            PSquarePercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_PSquarePercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_PSquarePercentile_equals(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_PSquarePercentile_getN(t_PSquarePercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_PSquarePercentile_getQuantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_getResult(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_PSquarePercentile_hashCode(t_PSquarePercentile *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_PSquarePercentile_increment(t_PSquarePercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_PSquarePercentile_quantile(t_PSquarePercentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.quantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PSquarePercentile_toString(t_PSquarePercentile *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(PSquarePercentile), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_PSquarePercentile_get__n(t_PSquarePercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_PSquarePercentile_get__result(t_PSquarePercentile *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008InputParameters::class$ = NULL;
          jmethodID *JB2008InputParameters::mids$ = NULL;
          bool JB2008InputParameters::live$ = false;

          jclass JB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDSTDTC_209f08246d708042] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_209f08246d708042] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_209f08246d708042] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_209f08246d708042] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_209f08246d708042] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_209f08246d708042] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_209f08246d708042] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_209f08246d708042] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_209f08246d708042] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JB2008InputParameters::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_209f08246d708042], a0.this$);
          }

          jdouble JB2008InputParameters::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10_209f08246d708042], a0.this$);
          }

          jdouble JB2008InputParameters::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getF10B_209f08246d708042], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMaxDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
          }

          ::org::orekit::time::AbsoluteDate JB2008InputParameters::getMinDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
          }

          jdouble JB2008InputParameters::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10_209f08246d708042], a0.this$);
          }

          jdouble JB2008InputParameters::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getS10B_209f08246d708042], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10_209f08246d708042], a0.this$);
          }

          jdouble JB2008InputParameters::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXM10B_209f08246d708042], a0.this$);
          }

          jdouble JB2008InputParameters::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10_209f08246d708042], a0.this$);
          }

          jdouble JB2008InputParameters::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY10B_209f08246d708042], a0.this$);
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
          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self);
          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg);
          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data);
          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data);
          static PyGetSetDef t_JB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008InputParameters, maxDate),
            DECLARE_GET_FIELD(t_JB2008InputParameters, minDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_JB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008InputParameters, getDSTDTC, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getF10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getMaxDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getMinDate, METH_NOARGS),
            DECLARE_METHOD(t_JB2008InputParameters, getS10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getS10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getXM10B, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10, METH_O),
            DECLARE_METHOD(t_JB2008InputParameters, getY10B, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008InputParameters)[] = {
            { Py_tp_methods, t_JB2008InputParameters__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::io::Serializable),
            NULL
          };

          DEFINE_TYPE(JB2008InputParameters, t_JB2008InputParameters, JB2008InputParameters);

          void t_JB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008InputParameters), &PY_TYPE_DEF(JB2008InputParameters), module, "JB2008InputParameters", 0);
          }

          void t_JB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "class_", make_descriptor(JB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "wrapfn_", make_descriptor(t_JB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008InputParameters), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_JB2008InputParameters::wrap_Object(JB2008InputParameters(((t_JB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_JB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JB2008InputParameters_getDSTDTC(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDSTDTC(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getF10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getF10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getMaxDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getMinDate(t_JB2008InputParameters *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getMinDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_JB2008InputParameters_getS10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getS10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getS10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getXM10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXM10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_getY10B(t_JB2008InputParameters *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getY10B(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
            return NULL;
          }

          static PyObject *t_JB2008InputParameters_get__maxDate(t_JB2008InputParameters *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getMaxDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_JB2008InputParameters_get__minDate(t_JB2008InputParameters *self, void *data)
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
#include "org/orekit/forces/gravity/Relativity.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *Relativity::class$ = NULL;
        jmethodID *Relativity::mids$ = NULL;
        bool Relativity::live$ = false;

        jclass Relativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/Relativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relativity::Relativity(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Relativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Relativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean Relativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::List Relativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args);
        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self);
        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self);
        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data);
        static PyGetSetDef t_Relativity__fields_[] = {
          DECLARE_GET_FIELD(t_Relativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relativity__methods_[] = {
          DECLARE_METHOD(t_Relativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Relativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Relativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relativity)[] = {
          { Py_tp_methods, t_Relativity__methods_ },
          { Py_tp_init, (void *) t_Relativity_init_ },
          { Py_tp_getset, t_Relativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Relativity, t_Relativity, Relativity);

        void t_Relativity::install(PyObject *module)
        {
          installType(&PY_TYPE(Relativity), &PY_TYPE_DEF(Relativity), module, "Relativity", 0);
        }

        void t_Relativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "class_", make_descriptor(Relativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "wrapfn_", make_descriptor(t_Relativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relativity::initializeClass, 1)))
            return NULL;
          return t_Relativity::wrap_Object(Relativity(((t_Relativity *) arg)->object.this$));
        }
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Relativity object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Relativity(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Double.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Double::class$ = NULL;
    jmethodID *Double::mids$ = NULL;
    bool Double::live$ = false;
    jint Double::BYTES = (jint) 0;
    jint Double::MAX_EXPONENT = (jint) 0;
    jdouble Double::MAX_VALUE = (jdouble) 0;
    jint Double::MIN_EXPONENT = (jint) 0;
    jdouble Double::MIN_NORMAL = (jdouble) 0;
    jdouble Double::MIN_VALUE = (jdouble) 0;
    jdouble Double::NEGATIVE_INFINITY = (jdouble) 0;
    jdouble Double::NaN = (jdouble) 0;
    jdouble Double::POSITIVE_INFINITY = (jdouble) 0;
    jint Double::SIZE = (jint) 0;
    ::java::lang::Class *Double::TYPE = NULL;

    jclass Double::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Double");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_d24e476c7bde1014] = env->getStaticMethodID(cls, "compare", "(DD)I");
        mids$[mid_compareTo_319a23a219449ab0] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Double;)I");
        mids$[mid_doubleToLongBits_6883df933d8a0182] = env->getStaticMethodID(cls, "doubleToLongBits", "(D)J");
        mids$[mid_doubleToRawLongBits_6883df933d8a0182] = env->getStaticMethodID(cls, "doubleToRawLongBits", "(D)J");
        mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_9e72cb20adb363fb] = env->getStaticMethodID(cls, "hashCode", "(D)I");
        mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_7bc657d327f0f830] = env->getStaticMethodID(cls, "isFinite", "(D)Z");
        mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_7bc657d327f0f830] = env->getStaticMethodID(cls, "isInfinite", "(D)Z");
        mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_7bc657d327f0f830] = env->getStaticMethodID(cls, "isNaN", "(D)Z");
        mids$[mid_longBitsToDouble_6465ccda9a6ad345] = env->getStaticMethodID(cls, "longBitsToDouble", "(J)D");
        mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_82f92590f4247da1] = env->getStaticMethodID(cls, "max", "(DD)D");
        mids$[mid_min_82f92590f4247da1] = env->getStaticMethodID(cls, "min", "(DD)D");
        mids$[mid_parseDouble_f2fc085ab82846a3] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");
        mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_82f92590f4247da1] = env->getStaticMethodID(cls, "sum", "(DD)D");
        mids$[mid_toHexString_e3ac8af686594d08] = env->getStaticMethodID(cls, "toHexString", "(D)Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_e3ac8af686594d08] = env->getStaticMethodID(cls, "toString", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_2458201c8d94260e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Double;");
        mids$[mid_valueOf_ab8f9f38a3b73ffe] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/Double;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticDoubleField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticDoubleField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticDoubleField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticDoubleField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticDoubleField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticDoubleField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Double::Double(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Double::Double(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

    jbyte Double::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
    }

    jint Double::compare(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_d24e476c7bde1014], a0, a1);
    }

    jint Double::compareTo(const Double & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_319a23a219449ab0], a0.this$);
    }

    jlong Double::doubleToLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToLongBits_6883df933d8a0182], a0);
    }

    jlong Double::doubleToRawLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToRawLongBits_6883df933d8a0182], a0);
    }

    jdouble Double::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
    }

    jboolean Double::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jfloat Double::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
    }

    jint Double::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Double::hashCode(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_9e72cb20adb363fb], a0);
    }

    jint Double::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
    }

    jboolean Double::isFinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_7bc657d327f0f830], a0);
    }

    jboolean Double::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
    }

    jboolean Double::isInfinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_7bc657d327f0f830], a0);
    }

    jboolean Double::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
    }

    jboolean Double::isNaN(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_7bc657d327f0f830], a0);
    }

    jdouble Double::longBitsToDouble(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_longBitsToDouble_6465ccda9a6ad345], a0);
    }

    jlong Double::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
    }

    jdouble Double::max$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_max_82f92590f4247da1], a0, a1);
    }

    jdouble Double::min$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_min_82f92590f4247da1], a0, a1);
    }

    jdouble Double::parseDouble(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_f2fc085ab82846a3], a0.this$);
    }

    jshort Double::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
    }

    jdouble Double::sum(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_sum_82f92590f4247da1], a0, a1);
    }

    ::java::lang::String Double::toHexString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_e3ac8af686594d08], a0));
    }

    ::java::lang::String Double::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Double::toString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_e3ac8af686594d08], a0));
    }

    Double Double::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2458201c8d94260e], a0.this$));
    }

    Double Double::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ab8f9f38a3b73ffe], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg);
    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_equals(t_Double *self, PyObject *args);
    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_intValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isInfinite(t_Double *self);
    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isNaN(t_Double *self);
    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_toString(t_Double *self, PyObject *args);
    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_get__infinite(t_Double *self, void *data);
    static PyObject *t_Double_get__naN(t_Double *self, void *data);
    static PyGetSetDef t_Double__fields_[] = {
      DECLARE_GET_FIELD(t_Double, infinite),
      DECLARE_GET_FIELD(t_Double, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Double__methods_[] = {
      DECLARE_METHOD(t_Double, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, compareTo, METH_O),
      DECLARE_METHOD(t_Double, doubleToLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleToRawLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, equals, METH_VARARGS),
      DECLARE_METHOD(t_Double, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Double, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Double, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longBitsToDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, parseDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, toString, METH_VARARGS),
      DECLARE_METHOD(t_Double, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Double)[] = {
      { Py_tp_methods, t_Double__methods_ },
      { Py_tp_init, (void *) t_Double_init_ },
      { Py_tp_getset, t_Double__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Double)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Double, t_Double, Double);

    void t_Double::install(PyObject *module)
    {
      installType(&PY_TYPE(Double), &PY_TYPE_DEF(Double), module, "Double", 0);
    }

    void t_Double::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "class_", make_descriptor(Double::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "wrapfn_", make_descriptor(unboxDouble));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "boxfn_", make_descriptor(boxDouble));
      env->getClass(Double::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "BYTES", make_descriptor(Double::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_EXPONENT", make_descriptor(Double::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_VALUE", make_descriptor(Double::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_EXPONENT", make_descriptor(Double::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_NORMAL", make_descriptor(Double::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_VALUE", make_descriptor(Double::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NEGATIVE_INFINITY", make_descriptor(Double::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NaN", make_descriptor(Double::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "POSITIVE_INFINITY", make_descriptor(Double::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "SIZE", make_descriptor(Double::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Double::TYPE)));
    }

    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Double::initializeClass, 1)))
        return NULL;
      return t_Double::wrap_Object(Double(((t_Double *) arg)->object.this$));
    }
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Double::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Double(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Double object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Double(a0));
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

    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jint result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg)
    {
      Double a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Double), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToRawLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToRawLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Double_equals(t_Double *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jint result;

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Double_intValue(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Double_isInfinite(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Double_isNaN(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jdouble result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::longBitsToDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "longBitsToDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_longValue(t_Double *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jdouble result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::parseDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Double_toString(t_Double *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          Double result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Double_get__infinite(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Double_get__naN(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldAbstractGaussianContributionContext::class$ = NULL;
            jmethodID *FieldAbstractGaussianContributionContext::mids$ = NULL;
            bool FieldAbstractGaussianContributionContext::live$ = false;

            jclass FieldAbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_08d37e3f77b7239d] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_08d37e3f77b7239d] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOA_08d37e3f77b7239d] = env->getMethodID(cls, "getOOA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOAB_08d37e3f77b7239d] = env->getMethodID(cls, "getOOAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoBpo_08d37e3f77b7239d] = env->getMethodID(cls, "getOoBpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoMU_08d37e3f77b7239d] = env->getMethodID(cls, "getOoMU", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTon2a_08d37e3f77b7239d] = env->getMethodID(cls, "getTon2a", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMu() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOAB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoBpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoBpo_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoMU() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoMU_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getTon2a() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTon2a_08d37e3f77b7239d]));
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
            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args);
            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_FieldAbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ton2a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_FieldAbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldAbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldAbstractGaussianContributionContext, t_FieldAbstractGaussianContributionContext, FieldAbstractGaussianContributionContext);
            PyObject *t_FieldAbstractGaussianContributionContext::wrap_Object(const FieldAbstractGaussianContributionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAbstractGaussianContributionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAbstractGaussianContributionContext), &PY_TYPE_DEF(FieldAbstractGaussianContributionContext), module, "FieldAbstractGaussianContributionContext", 0);
            }

            void t_FieldAbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "class_", make_descriptor(FieldAbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_FieldAbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_FieldAbstractGaussianContributionContext::wrap_Object(FieldAbstractGaussianContributionContext(((t_FieldAbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMu());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoBpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoMU());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTon2a());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMu());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoBpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoMU());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTon2a());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IgnoreDEMAlgorithm.h"
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

        ::java::lang::Class *IgnoreDEMAlgorithm::class$ = NULL;
        jmethodID *IgnoreDEMAlgorithm::mids$ = NULL;
        bool IgnoreDEMAlgorithm::live$ = false;

        jclass IgnoreDEMAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IgnoreDEMAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAlgorithmId_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_82f92590f4247da1] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_5c14acfe95406f7d] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_1feab13663326a32] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IgnoreDEMAlgorithm::IgnoreDEMAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::rugged::api::AlgorithmId IgnoreDEMAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_65c2eab2e30f9d2d]));
        }

        jdouble IgnoreDEMAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_82f92590f4247da1], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_5c14acfe95406f7d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
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
        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self);
        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data);
        static PyGetSetDef t_IgnoreDEMAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IgnoreDEMAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IgnoreDEMAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IgnoreDEMAlgorithm)[] = {
          { Py_tp_methods, t_IgnoreDEMAlgorithm__methods_ },
          { Py_tp_init, (void *) t_IgnoreDEMAlgorithm_init_ },
          { Py_tp_getset, t_IgnoreDEMAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IgnoreDEMAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IgnoreDEMAlgorithm, t_IgnoreDEMAlgorithm, IgnoreDEMAlgorithm);

        void t_IgnoreDEMAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IgnoreDEMAlgorithm), &PY_TYPE_DEF(IgnoreDEMAlgorithm), module, "IgnoreDEMAlgorithm", 0);
        }

        void t_IgnoreDEMAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "class_", make_descriptor(IgnoreDEMAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "wrapfn_", make_descriptor(t_IgnoreDEMAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IgnoreDEMAlgorithm::wrap_Object(IgnoreDEMAlgorithm(((t_IgnoreDEMAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          IgnoreDEMAlgorithm object((jobject) NULL);

          INT_CALL(object = IgnoreDEMAlgorithm());
          self->object = object;

          return 0;
        }

        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args)
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

        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
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

        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
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

        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data)
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
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ReferenceClock::class$ = NULL;
          jmethodID *RinexClock$ReferenceClock::mids$ = NULL;
          bool RinexClock$ReferenceClock::live$ = false;

          jclass RinexClock$ReferenceClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ReferenceClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_74e16283121a89b8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getClockConstraint_9981f74b2d109da6] = env->getMethodID(cls, "getClockConstraint", "()D");
              mids$[mid_getClockID_d2c8eb4129821f0e] = env->getMethodID(cls, "getClockID", "()Ljava/lang/String;");
              mids$[mid_getEndDate_80e11148db499dda] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceName_d2c8eb4129821f0e] = env->getMethodID(cls, "getReferenceName", "()Ljava/lang/String;");
              mids$[mid_getStartDate_80e11148db499dda] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ReferenceClock::RinexClock$ReferenceClock(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_74e16283121a89b8, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

          jdouble RinexClock$ReferenceClock::getClockConstraint() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockConstraint_9981f74b2d109da6]);
          }

          ::java::lang::String RinexClock$ReferenceClock::getClockID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClockID_d2c8eb4129821f0e]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_80e11148db499dda]));
          }

          ::java::lang::String RinexClock$ReferenceClock::getReferenceName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReferenceName_d2c8eb4129821f0e]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_80e11148db499dda]));
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
        namespace clock {
          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyGetSetDef t_RinexClock$ReferenceClock__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockConstraint),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockID),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, endDate),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, referenceName),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, startDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ReferenceClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ReferenceClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockConstraint, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getReferenceName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ReferenceClock)[] = {
            { Py_tp_methods, t_RinexClock$ReferenceClock__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ReferenceClock_init_ },
            { Py_tp_getset, t_RinexClock$ReferenceClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ReferenceClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ReferenceClock, t_RinexClock$ReferenceClock, RinexClock$ReferenceClock);

          void t_RinexClock$ReferenceClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ReferenceClock), &PY_TYPE_DEF(RinexClock$ReferenceClock), module, "RinexClock$ReferenceClock", 0);
          }

          void t_RinexClock$ReferenceClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "class_", make_descriptor(RinexClock$ReferenceClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "wrapfn_", make_descriptor(t_RinexClock$ReferenceClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ReferenceClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ReferenceClock::wrap_Object(RinexClock$ReferenceClock(((t_RinexClock$ReferenceClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ReferenceClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            RinexClock$ReferenceClock object((jobject) NULL);

            if (!parseArgs(args, "ssDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$ReferenceClock(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockID());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockID());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionHeader::class$ = NULL;
              jmethodID *RtcmCorrectionHeader::mids$ = NULL;
              bool RtcmCorrectionHeader::live$ = false;

              jclass RtcmCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEpochTime1s_9981f74b2d109da6] = env->getMethodID(cls, "getEpochTime1s", "()D");
                  mids$[mid_getIodSsr_d6ab429752e7c267] = env->getMethodID(cls, "getIodSsr", "()I");
                  mids$[mid_getMultipleMessageIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getMultipleMessageIndicator", "()I");
                  mids$[mid_getNumberOfSatellites_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_getSsrProviderId_d6ab429752e7c267] = env->getMethodID(cls, "getSsrProviderId", "()I");
                  mids$[mid_getSsrSolutionId_d6ab429752e7c267] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                  mids$[mid_getSsrUpdateInterval_9dfd1882807e8d80] = env->getMethodID(cls, "getSsrUpdateInterval", "()Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;");
                  mids$[mid_setEpochTime1s_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEpochTime1s", "(D)V");
                  mids$[mid_setIodSsr_8fd427ab23829bf5] = env->getMethodID(cls, "setIodSsr", "(I)V");
                  mids$[mid_setMultipleMessageIndicator_8fd427ab23829bf5] = env->getMethodID(cls, "setMultipleMessageIndicator", "(I)V");
                  mids$[mid_setNumberOfSatellites_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");
                  mids$[mid_setSsrProviderId_8fd427ab23829bf5] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                  mids$[mid_setSsrSolutionId_8fd427ab23829bf5] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                  mids$[mid_setSsrUpdateInterval_e0673b36c7101226] = env->getMethodID(cls, "setSsrUpdateInterval", "(Lorg/orekit/gnss/metric/messages/common/SsrUpdateInterval;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionHeader::RtcmCorrectionHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble RtcmCorrectionHeader::getEpochTime1s() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochTime1s_9981f74b2d109da6]);
              }

              jint RtcmCorrectionHeader::getIodSsr() const
              {
                return env->callIntMethod(this$, mids$[mid_getIodSsr_d6ab429752e7c267]);
              }

              jint RtcmCorrectionHeader::getMultipleMessageIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getMultipleMessageIndicator_d6ab429752e7c267]);
              }

              jint RtcmCorrectionHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_d6ab429752e7c267]);
              }

              jint RtcmCorrectionHeader::getSsrProviderId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrProviderId_d6ab429752e7c267]);
              }

              jint RtcmCorrectionHeader::getSsrSolutionId() const
              {
                return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_d6ab429752e7c267]);
              }

              ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval RtcmCorrectionHeader::getSsrUpdateInterval() const
              {
                return ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval(env->callObjectMethod(this$, mids$[mid_getSsrUpdateInterval_9dfd1882807e8d80]));
              }

              void RtcmCorrectionHeader::setEpochTime1s(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochTime1s_1ad26e8c8c0cd65b], a0);
              }

              void RtcmCorrectionHeader::setIodSsr(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIodSsr_8fd427ab23829bf5], a0);
              }

              void RtcmCorrectionHeader::setMultipleMessageIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMultipleMessageIndicator_8fd427ab23829bf5], a0);
              }

              void RtcmCorrectionHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_8fd427ab23829bf5], a0);
              }

              void RtcmCorrectionHeader::setSsrProviderId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrProviderId_8fd427ab23829bf5], a0);
              }

              void RtcmCorrectionHeader::setSsrSolutionId(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_8fd427ab23829bf5], a0);
              }

              void RtcmCorrectionHeader::setSsrUpdateInterval(const ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_e0673b36c7101226], a0.this$);
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
              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self);
              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data);
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, epochTime1s),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, iodSsr),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, multipleMessageIndicator),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, numberOfSatellites),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrProviderId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrSolutionId),
                DECLARE_GETSET_FIELD(t_RtcmCorrectionHeader, ssrUpdateInterval),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getEpochTime1s, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getIodSsr, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getMultipleMessageIndicator, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrProviderId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrSolutionId, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, getSsrUpdateInterval, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setEpochTime1s, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setIodSsr, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setMultipleMessageIndicator, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setNumberOfSatellites, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrProviderId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrSolutionId, METH_O),
                DECLARE_METHOD(t_RtcmCorrectionHeader, setSsrUpdateInterval, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionHeader)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionHeader, t_RtcmCorrectionHeader, RtcmCorrectionHeader);

              void t_RtcmCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionHeader), &PY_TYPE_DEF(RtcmCorrectionHeader), module, "RtcmCorrectionHeader", 0);
              }

              void t_RtcmCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "class_", make_descriptor(RtcmCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionHeader::wrap_Object(RtcmCorrectionHeader(((t_RtcmCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionHeader_init_(t_RtcmCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionHeader_getEpochTime1s(t_RtcmCorrectionHeader *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getIodSsr(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getIodSsr());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getMultipleMessageIndicator(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getNumberOfSatellites(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrProviderId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrProviderId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrSolutionId(t_RtcmCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionHeader_getSsrUpdateInterval(t_RtcmCorrectionHeader *self)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionHeader_setEpochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochTime1s(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochTime1s", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setIodSsr(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setIodSsr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIodSsr", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setMultipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setMultipleMessageIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMultipleMessageIndicator", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setNumberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrProviderId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrProviderId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSsrSolutionId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrSolutionId", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_setSsrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionHeader_get__epochTime1s(t_RtcmCorrectionHeader *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochTime1s());
                return PyFloat_FromDouble((double) value);
              }
              static int t_RtcmCorrectionHeader_set__epochTime1s(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochTime1s(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochTime1s", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__iodSsr(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getIodSsr());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__iodSsr(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setIodSsr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iodSsr", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__multipleMessageIndicator(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getMultipleMessageIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__multipleMessageIndicator(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setMultipleMessageIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "multipleMessageIndicator", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__numberOfSatellites(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__numberOfSatellites(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrProviderId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrProviderId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrProviderId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrProviderId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrProviderId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrSolutionId(t_RtcmCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSsrSolutionId());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionHeader_set__ssrSolutionId(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSsrSolutionId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrSolutionId", arg);
                return -1;
              }

              static PyObject *t_RtcmCorrectionHeader_get__ssrUpdateInterval(t_RtcmCorrectionHeader *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrUpdateInterval());
                return ::org::orekit::gnss::metric::messages::common::t_SsrUpdateInterval::wrap_Object(value);
              }
              static int t_RtcmCorrectionHeader_set__ssrUpdateInterval(t_RtcmCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::SsrUpdateInterval::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSsrUpdateInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUpdateInterval", arg);
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
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCircularOrbit::class$ = NULL;
      jmethodID *FieldCircularOrbit::mids$ = NULL;
      bool FieldCircularOrbit::live$ = false;

      jclass FieldCircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e61171636c74f2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_0da6878cdaf9861b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CircularOrbit;)V");
          mids$[mid_init$_0fcb30f8b968c16a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_cc80ec5d9d193ad9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_29a388389f8e2031] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_bfc63e9af3b225c7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b4fb0a8689671ebc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_210d5c728d3233b4] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_3130e338b3b4d904] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_3130e338b3b4d904] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_08d37e3f77b7239d] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlpha_1982048877fe3264] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaDot_1982048877fe3264] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaE_08d37e3f77b7239d] = env->getMethodID(cls, "getAlphaE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getAlphaEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaM_08d37e3f77b7239d] = env->getMethodID(cls, "getAlphaM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaMDot_08d37e3f77b7239d] = env->getMethodID(cls, "getAlphaMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaV_08d37e3f77b7239d] = env->getMethodID(cls, "getAlphaV", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaVDot_08d37e3f77b7239d] = env->getMethodID(cls, "getAlphaVDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_08d37e3f77b7239d] = env->getMethodID(cls, "getCircularEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularExDot_08d37e3f77b7239d] = env->getMethodID(cls, "getCircularExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEy_08d37e3f77b7239d] = env->getMethodID(cls, "getCircularEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getCircularEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_08d37e3f77b7239d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_08d37e3f77b7239d] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_08d37e3f77b7239d] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_08d37e3f77b7239d] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_08d37e3f77b7239d] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_08d37e3f77b7239d] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_08d37e3f77b7239d] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_08d37e3f77b7239d] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_08d37e3f77b7239d] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_eee3de00fe971136] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_3130e338b3b4d904] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_b1146b63c68ce3c6] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_f4a7e509a1ad4759] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_59c7ae77b36aa163] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_toOrbit_3c88d8f1cf664f96] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_3130e338b3b4d904] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPosition_d1b42a6748e907f9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3e61171636c74f2c, a0.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CircularOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_0da6878cdaf9861b, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_0fcb30f8b968c16a, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cc80ec5d9d193ad9, a0.this$, a1.this$, a2.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_29a388389f8e2031, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_bfc63e9af3b225c7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b4fb0a8689671ebc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldCircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_210d5c728d3233b4], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_1982048877fe3264], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaDot_1982048877fe3264], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaM_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaMDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaV() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaV_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaVDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaVDot_08d37e3f77b7239d]));
      }

      ::org::orekit::orbits::PositionAngleType FieldCircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularExDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_08d37e3f77b7239d]));
      }

      ::org::orekit::orbits::OrbitType FieldCircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean FieldCircularOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_eee3de00fe971136]);
      }

      jboolean FieldCircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
      }

      FieldCircularOrbit FieldCircularOrbit::removeRates() const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_b1146b63c68ce3c6]));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_f4a7e509a1ad4759], a0));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_59c7ae77b36aa163], a0.this$));
      }

      ::org::orekit::orbits::CircularOrbit FieldCircularOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CircularOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_3c88d8f1cf664f96]));
      }

      ::java::lang::String FieldCircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args);
      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data);
      static PyGetSetDef t_FieldCircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCircularOrbit, a),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, e),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, i),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, type),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCircularOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCircularOrbit)[] = {
        { Py_tp_methods, t_FieldCircularOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCircularOrbit_init_ },
        { Py_tp_getset, t_FieldCircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCircularOrbit, t_FieldCircularOrbit, FieldCircularOrbit);
      PyObject *t_FieldCircularOrbit::wrap_Object(const FieldCircularOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCircularOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCircularOrbit), &PY_TYPE_DEF(FieldCircularOrbit), module, "FieldCircularOrbit", 0);
      }

      void t_FieldCircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "class_", make_descriptor(FieldCircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "wrapfn_", make_descriptor(t_FieldCircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCircularOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCircularOrbit::wrap_Object(FieldCircularOrbit(((t_FieldCircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CircularOrbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CircularOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
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
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
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
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
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
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaV());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaVDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
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
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self)
      {
        FieldCircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
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
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaV());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaVDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/net/URL.h"
#include "java/io/IOException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace java {
  namespace net {

    ::java::lang::Class *URL::class$ = NULL;
    jmethodID *URL::mids$ = NULL;
    bool URL::live$ = false;

    jclass URL::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/net/URL");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c894909a2ed66b4a] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;Ljava/lang/String;)V");
        mids$[mid_init$_56b987237c71cdbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_13f35cf1b01dc50a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAuthority_d2c8eb4129821f0e] = env->getMethodID(cls, "getAuthority", "()Ljava/lang/String;");
        mids$[mid_getContent_704a5bee58538972] = env->getMethodID(cls, "getContent", "()Ljava/lang/Object;");
        mids$[mid_getContent_d7e097a17f55e415] = env->getMethodID(cls, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
        mids$[mid_getDefaultPort_d6ab429752e7c267] = env->getMethodID(cls, "getDefaultPort", "()I");
        mids$[mid_getFile_d2c8eb4129821f0e] = env->getMethodID(cls, "getFile", "()Ljava/lang/String;");
        mids$[mid_getHost_d2c8eb4129821f0e] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
        mids$[mid_getPath_d2c8eb4129821f0e] = env->getMethodID(cls, "getPath", "()Ljava/lang/String;");
        mids$[mid_getPort_d6ab429752e7c267] = env->getMethodID(cls, "getPort", "()I");
        mids$[mid_getProtocol_d2c8eb4129821f0e] = env->getMethodID(cls, "getProtocol", "()Ljava/lang/String;");
        mids$[mid_getQuery_d2c8eb4129821f0e] = env->getMethodID(cls, "getQuery", "()Ljava/lang/String;");
        mids$[mid_getRef_d2c8eb4129821f0e] = env->getMethodID(cls, "getRef", "()Ljava/lang/String;");
        mids$[mid_getUserInfo_d2c8eb4129821f0e] = env->getMethodID(cls, "getUserInfo", "()Ljava/lang/String;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_openStream_af9d97da329e95d9] = env->getMethodID(cls, "openStream", "()Ljava/io/InputStream;");
        mids$[mid_sameFile_64047ecd76edcfe8] = env->getMethodID(cls, "sameFile", "(Ljava/net/URL;)Z");
        mids$[mid_toExternalForm_d2c8eb4129821f0e] = env->getMethodID(cls, "toExternalForm", "()Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    URL::URL(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    URL::URL(const URL & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c894909a2ed66b4a, a0.this$, a1.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56b987237c71cdbb, a0.this$, a1.this$, a2.this$)) {}

    URL::URL(const ::java::lang::String & a0, const ::java::lang::String & a1, jint a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13f35cf1b01dc50a, a0.this$, a1.this$, a2, a3.this$)) {}

    jboolean URL::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::String URL::getAuthority() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAuthority_d2c8eb4129821f0e]));
    }

    ::java::lang::Object URL::getContent() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_704a5bee58538972]));
    }

    ::java::lang::Object URL::getContent(const JArray< ::java::lang::Class > & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getContent_d7e097a17f55e415], a0.this$));
    }

    jint URL::getDefaultPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultPort_d6ab429752e7c267]);
    }

    ::java::lang::String URL::getFile() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFile_d2c8eb4129821f0e]));
    }

    ::java::lang::String URL::getHost() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_d2c8eb4129821f0e]));
    }

    ::java::lang::String URL::getPath() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPath_d2c8eb4129821f0e]));
    }

    jint URL::getPort() const
    {
      return env->callIntMethod(this$, mids$[mid_getPort_d6ab429752e7c267]);
    }

    ::java::lang::String URL::getProtocol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProtocol_d2c8eb4129821f0e]));
    }

    ::java::lang::String URL::getQuery() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getQuery_d2c8eb4129821f0e]));
    }

    ::java::lang::String URL::getRef() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRef_d2c8eb4129821f0e]));
    }

    ::java::lang::String URL::getUserInfo() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUserInfo_d2c8eb4129821f0e]));
    }

    jint URL::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    ::java::io::InputStream URL::openStream() const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStream_af9d97da329e95d9]));
    }

    jboolean URL::sameFile(const URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_sameFile_64047ecd76edcfe8], a0.this$);
    }

    ::java::lang::String URL::toExternalForm() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toExternalForm_d2c8eb4129821f0e]));
    }

    ::java::lang::String URL::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace net {
    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg);
    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds);
    static PyObject *t_URL_equals(t_URL *self, PyObject *args);
    static PyObject *t_URL_getAuthority(t_URL *self);
    static PyObject *t_URL_getContent(t_URL *self, PyObject *args);
    static PyObject *t_URL_getDefaultPort(t_URL *self);
    static PyObject *t_URL_getFile(t_URL *self);
    static PyObject *t_URL_getHost(t_URL *self);
    static PyObject *t_URL_getPath(t_URL *self);
    static PyObject *t_URL_getPort(t_URL *self);
    static PyObject *t_URL_getProtocol(t_URL *self);
    static PyObject *t_URL_getQuery(t_URL *self);
    static PyObject *t_URL_getRef(t_URL *self);
    static PyObject *t_URL_getUserInfo(t_URL *self);
    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args);
    static PyObject *t_URL_openStream(t_URL *self);
    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg);
    static PyObject *t_URL_toExternalForm(t_URL *self);
    static PyObject *t_URL_toString(t_URL *self, PyObject *args);
    static PyObject *t_URL_get__authority(t_URL *self, void *data);
    static PyObject *t_URL_get__content(t_URL *self, void *data);
    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data);
    static PyObject *t_URL_get__file(t_URL *self, void *data);
    static PyObject *t_URL_get__host(t_URL *self, void *data);
    static PyObject *t_URL_get__path(t_URL *self, void *data);
    static PyObject *t_URL_get__port(t_URL *self, void *data);
    static PyObject *t_URL_get__protocol(t_URL *self, void *data);
    static PyObject *t_URL_get__query(t_URL *self, void *data);
    static PyObject *t_URL_get__ref(t_URL *self, void *data);
    static PyObject *t_URL_get__userInfo(t_URL *self, void *data);
    static PyGetSetDef t_URL__fields_[] = {
      DECLARE_GET_FIELD(t_URL, authority),
      DECLARE_GET_FIELD(t_URL, content),
      DECLARE_GET_FIELD(t_URL, defaultPort),
      DECLARE_GET_FIELD(t_URL, file),
      DECLARE_GET_FIELD(t_URL, host),
      DECLARE_GET_FIELD(t_URL, path),
      DECLARE_GET_FIELD(t_URL, port),
      DECLARE_GET_FIELD(t_URL, protocol),
      DECLARE_GET_FIELD(t_URL, query),
      DECLARE_GET_FIELD(t_URL, ref),
      DECLARE_GET_FIELD(t_URL, userInfo),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_URL__methods_[] = {
      DECLARE_METHOD(t_URL, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_URL, equals, METH_VARARGS),
      DECLARE_METHOD(t_URL, getAuthority, METH_NOARGS),
      DECLARE_METHOD(t_URL, getContent, METH_VARARGS),
      DECLARE_METHOD(t_URL, getDefaultPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getFile, METH_NOARGS),
      DECLARE_METHOD(t_URL, getHost, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPath, METH_NOARGS),
      DECLARE_METHOD(t_URL, getPort, METH_NOARGS),
      DECLARE_METHOD(t_URL, getProtocol, METH_NOARGS),
      DECLARE_METHOD(t_URL, getQuery, METH_NOARGS),
      DECLARE_METHOD(t_URL, getRef, METH_NOARGS),
      DECLARE_METHOD(t_URL, getUserInfo, METH_NOARGS),
      DECLARE_METHOD(t_URL, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_URL, openStream, METH_NOARGS),
      DECLARE_METHOD(t_URL, sameFile, METH_O),
      DECLARE_METHOD(t_URL, toExternalForm, METH_NOARGS),
      DECLARE_METHOD(t_URL, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(URL)[] = {
      { Py_tp_methods, t_URL__methods_ },
      { Py_tp_init, (void *) t_URL_init_ },
      { Py_tp_getset, t_URL__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(URL)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(URL, t_URL, URL);

    void t_URL::install(PyObject *module)
    {
      installType(&PY_TYPE(URL), &PY_TYPE_DEF(URL), module, "URL", 0);
    }

    void t_URL::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "class_", make_descriptor(URL::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "wrapfn_", make_descriptor(t_URL::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(URL), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_URL_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, URL::initializeClass, 1)))
        return NULL;
      return t_URL::wrap_Object(URL(((t_URL *) arg)->object.this$));
    }
    static PyObject *t_URL_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, URL::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_URL_init_(t_URL *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = URL(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          URL a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ks", URL::initializeClass, &a0, &a1))
          {
            INT_CALL(object = URL(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = URL(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          URL object((jobject) NULL);

          if (!parseArgs(args, "ssIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = URL(a0, a1, a2, a3));
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

    static PyObject *t_URL_equals(t_URL *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_URL_getAuthority(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getAuthority());
      return j2p(result);
    }

    static PyObject *t_URL_getContent(t_URL *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getContent());
          return ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Class > a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "[K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = self->object.getContent(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getContent", args);
      return NULL;
    }

    static PyObject *t_URL_getDefaultPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getFile(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getFile());
      return j2p(result);
    }

    static PyObject *t_URL_getHost(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getHost());
      return j2p(result);
    }

    static PyObject *t_URL_getPath(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPath());
      return j2p(result);
    }

    static PyObject *t_URL_getPort(t_URL *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getPort());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_URL_getProtocol(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getProtocol());
      return j2p(result);
    }

    static PyObject *t_URL_getQuery(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getQuery());
      return j2p(result);
    }

    static PyObject *t_URL_getRef(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getRef());
      return j2p(result);
    }

    static PyObject *t_URL_getUserInfo(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getUserInfo());
      return j2p(result);
    }

    static PyObject *t_URL_hashCode(t_URL *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_URL_openStream(t_URL *self)
    {
      ::java::io::InputStream result((jobject) NULL);
      OBJ_CALL(result = self->object.openStream());
      return ::java::io::t_InputStream::wrap_Object(result);
    }

    static PyObject *t_URL_sameFile(t_URL *self, PyObject *arg)
    {
      URL a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", URL::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.sameFile(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "sameFile", arg);
      return NULL;
    }

    static PyObject *t_URL_toExternalForm(t_URL *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toExternalForm());
      return j2p(result);
    }

    static PyObject *t_URL_toString(t_URL *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(URL), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_URL_get__authority(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getAuthority());
      return j2p(value);
    }

    static PyObject *t_URL_get__content(t_URL *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getContent());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_URL_get__defaultPort(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__file(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getFile());
      return j2p(value);
    }

    static PyObject *t_URL_get__host(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getHost());
      return j2p(value);
    }

    static PyObject *t_URL_get__path(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPath());
      return j2p(value);
    }

    static PyObject *t_URL_get__port(t_URL *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getPort());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_URL_get__protocol(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getProtocol());
      return j2p(value);
    }

    static PyObject *t_URL_get__query(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getQuery());
      return j2p(value);
    }

    static PyObject *t_URL_get__ref(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getRef());
      return j2p(value);
    }

    static PyObject *t_URL_get__userInfo(t_URL *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getUserInfo());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *OffsetModel::class$ = NULL;
      jmethodID *OffsetModel::mids$ = NULL;
      bool OffsetModel::live$ = false;

      jclass OffsetModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/OffsetModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5e81a70a44ab7b55] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;I)V");
          mids$[mid_init$_d8a7650742cb664b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;IDD)V");
          mids$[mid_getMJDRef_d6ab429752e7c267] = env->getMethodID(cls, "getMJDRef", "()I");
          mids$[mid_getOffset_9981f74b2d109da6] = env->getMethodID(cls, "getOffset", "()D");
          mids$[mid_getSlope_9981f74b2d109da6] = env->getMethodID(cls, "getSlope", "()D");
          mids$[mid_getStart_70bc100457881a79] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/DateComponents;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e81a70a44ab7b55, a0.this$, a1)) {}

      OffsetModel::OffsetModel(const ::org::orekit::time::DateComponents & a0, jint a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8a7650742cb664b, a0.this$, a1, a2, a3)) {}

      jint OffsetModel::getMJDRef() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJDRef_d6ab429752e7c267]);
      }

      jdouble OffsetModel::getOffset() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_9981f74b2d109da6]);
      }

      jdouble OffsetModel::getSlope() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSlope_9981f74b2d109da6]);
      }

      ::org::orekit::time::DateComponents OffsetModel::getStart() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getStart_70bc100457881a79]));
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
      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self);
      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self);
      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data);
      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data);
      static PyGetSetDef t_OffsetModel__fields_[] = {
        DECLARE_GET_FIELD(t_OffsetModel, mJDRef),
        DECLARE_GET_FIELD(t_OffsetModel, offset),
        DECLARE_GET_FIELD(t_OffsetModel, slope),
        DECLARE_GET_FIELD(t_OffsetModel, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OffsetModel__methods_[] = {
        DECLARE_METHOD(t_OffsetModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OffsetModel, getMJDRef, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getOffset, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getSlope, METH_NOARGS),
        DECLARE_METHOD(t_OffsetModel, getStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OffsetModel)[] = {
        { Py_tp_methods, t_OffsetModel__methods_ },
        { Py_tp_init, (void *) t_OffsetModel_init_ },
        { Py_tp_getset, t_OffsetModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OffsetModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OffsetModel, t_OffsetModel, OffsetModel);

      void t_OffsetModel::install(PyObject *module)
      {
        installType(&PY_TYPE(OffsetModel), &PY_TYPE_DEF(OffsetModel), module, "OffsetModel", 0);
      }

      void t_OffsetModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "class_", make_descriptor(OffsetModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "wrapfn_", make_descriptor(t_OffsetModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OffsetModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OffsetModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OffsetModel::initializeClass, 1)))
          return NULL;
        return t_OffsetModel::wrap_Object(OffsetModel(((t_OffsetModel *) arg)->object.this$));
      }
      static PyObject *t_OffsetModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OffsetModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OffsetModel_init_(t_OffsetModel *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OffsetModel(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            jint a1;
            jdouble a2;
            jdouble a3;
            OffsetModel object((jobject) NULL);

            if (!parseArgs(args, "kIDD", ::org::orekit::time::DateComponents::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OffsetModel(a0, a1, a2, a3));
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

      static PyObject *t_OffsetModel_getMJDRef(t_OffsetModel *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJDRef());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OffsetModel_getOffset(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOffset());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getSlope(t_OffsetModel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSlope());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OffsetModel_getStart(t_OffsetModel *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_OffsetModel_get__mJDRef(t_OffsetModel *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJDRef());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OffsetModel_get__offset(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOffset());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__slope(t_OffsetModel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSlope());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OffsetModel_get__start(t_OffsetModel *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"
#include "java/util/Locale.h"
#include "java/io/IOException.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages$UTF8Control::class$ = NULL;
        jmethodID *RuggedMessages$UTF8Control::mids$ = NULL;
        bool RuggedMessages$UTF8Control::live$ = false;

        jclass RuggedMessages$UTF8Control::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages$UTF8Control");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newBundle_9d8ce1b08b92301a] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedMessages$UTF8Control::RuggedMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::java::util::ResourceBundle RuggedMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
        {
          return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_9d8ce1b08b92301a], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
      namespace errors {
        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args);
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data);
        static PyGetSetDef t_RuggedMessages$UTF8Control__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages$UTF8Control, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages$UTF8Control__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages$UTF8Control, newBundle, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages$UTF8Control)[] = {
          { Py_tp_methods, t_RuggedMessages$UTF8Control__methods_ },
          { Py_tp_init, (void *) t_RuggedMessages$UTF8Control_init_ },
          { Py_tp_getset, t_RuggedMessages$UTF8Control__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages$UTF8Control)[] = {
          &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
          NULL
        };

        DEFINE_TYPE(RuggedMessages$UTF8Control, t_RuggedMessages$UTF8Control, RuggedMessages$UTF8Control);
        PyObject *t_RuggedMessages$UTF8Control::wrap_Object(const RuggedMessages$UTF8Control& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages$UTF8Control::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages$UTF8Control *self = (t_RuggedMessages$UTF8Control *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages$UTF8Control::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages$UTF8Control), &PY_TYPE_DEF(RuggedMessages$UTF8Control), module, "RuggedMessages$UTF8Control", 0);
        }

        void t_RuggedMessages$UTF8Control::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "class_", make_descriptor(RuggedMessages$UTF8Control::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "wrapfn_", make_descriptor(t_RuggedMessages$UTF8Control::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages$UTF8Control::wrap_Object(RuggedMessages$UTF8Control(((t_RuggedMessages$UTF8Control *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages$UTF8Control::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages$UTF8Control_of_(t_RuggedMessages$UTF8Control *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RuggedMessages$UTF8Control_init_(t_RuggedMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
        {
          RuggedMessages$UTF8Control object((jobject) NULL);

          INT_CALL(object = RuggedMessages$UTF8Control());
          self->object = object;
          self->parameters[0] = ::org::orekit::rugged::errors::PY_TYPE(RuggedMessages);

          return 0;
        }

        static PyObject *t_RuggedMessages$UTF8Control_newBundle(t_RuggedMessages$UTF8Control *self, PyObject *args)
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

          return callSuper(PY_TYPE(RuggedMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
        }
        static PyObject *t_RuggedMessages$UTF8Control_get__parameters_(t_RuggedMessages$UTF8Control *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Map::class$ = NULL;
    jmethodID *Map::mids$ = NULL;
    bool Map::live$ = false;

    jclass Map::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Map");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_72faff9b05f5ed5e] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_72faff9b05f5ed5e] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_copyOf_f2600be6f3b6923e] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_entry_c7aa0f99f7eeeae8] = env->getStaticMethodID(cls, "entry", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_entrySet_6b191a9b12c1004b] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_05290476c26136d7] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_ca14a13ec9c67cd5] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_6b191a9b12c1004b] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_of_dbcb8bbac6b35e0d] = env->getStaticMethodID(cls, "of", "()Ljava/util/Map;");
        mids$[mid_of_77f04c24e79d294d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_425d268c44fb71c3] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_50d98a4b073c38dc] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_402d10eacc10e46a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_3098700cc0ac4448] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_1ee05b4b5a91aaf3] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_267e63f67a042692] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_0dd47f973b0eb286] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_22f267159dfec477] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_of_4efc62f7483e250e] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_ofEntries_10b71bb7cfb236b4] = env->getStaticMethodID(cls, "ofEntries", "([Ljava/util/Map$Entry;)Ljava/util/Map;");
        mids$[mid_put_ca14a13ec9c67cd5] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_df2bb61624910c2a] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_ca14a13ec9c67cd5] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_05290476c26136d7] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_3bf9f05b3327e056] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_ca14a13ec9c67cd5] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9bb49a94d944b361] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_3bfef5c77ceb081a] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Map::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    jboolean Map::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Map::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_72faff9b05f5ed5e], a0.this$);
    }

    Map Map::copyOf(const Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_copyOf_f2600be6f3b6923e], a0.this$));
    }

    ::java::util::Map$Entry Map::entry(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map$Entry(env->callStaticObjectMethod(cls, mids$[mid_entry_c7aa0f99f7eeeae8], a0.this$, a1.this$));
    }

    ::java::util::Set Map::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_6b191a9b12c1004b]));
    }

    jboolean Map::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    ::java::lang::Object Map::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_05290476c26136d7], a0.this$));
    }

    ::java::lang::Object Map::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    jint Map::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Map::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Set Map::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_6b191a9b12c1004b]));
    }

    Map Map::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_dbcb8bbac6b35e0d]));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_77f04c24e79d294d], a0.this$, a1.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_425d268c44fb71c3], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_50d98a4b073c38dc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_402d10eacc10e46a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_3098700cc0ac4448], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_1ee05b4b5a91aaf3], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_267e63f67a042692], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_0dd47f973b0eb286], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_22f267159dfec477], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$));
    }

    Map Map::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9, const ::java::lang::Object & a10, const ::java::lang::Object & a11, const ::java::lang::Object & a12, const ::java::lang::Object & a13, const ::java::lang::Object & a14, const ::java::lang::Object & a15, const ::java::lang::Object & a16, const ::java::lang::Object & a17, const ::java::lang::Object & a18, const ::java::lang::Object & a19)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_of_4efc62f7483e250e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$));
    }

    Map Map::ofEntries(const JArray< ::java::util::Map$Entry > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Map(env->callStaticObjectMethod(cls, mids$[mid_ofEntries_10b71bb7cfb236b4], a0.this$));
    }

    ::java::lang::Object Map::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    void Map::putAll(const Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_df2bb61624910c2a], a0.this$);
    }

    ::java::lang::Object Map::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    ::java::lang::Object Map::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_05290476c26136d7], a0.this$));
    }

    jboolean Map::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_3bf9f05b3327e056], a0.this$, a1.this$);
    }

    ::java::lang::Object Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_ca14a13ec9c67cd5], a0.this$, a1.this$));
    }

    jboolean Map::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9bb49a94d944b361], a0.this$, a1.this$, a2.this$);
    }

    jint Map::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::util::Collection Map::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_3bfef5c77ceb081a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_of_(t_Map *self, PyObject *args);
    static PyObject *t_Map_clear(t_Map *self);
    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg);
    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg);
    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_entrySet(t_Map *self);
    static PyObject *t_Map_equals(t_Map *self, PyObject *args);
    static PyObject *t_Map_get(t_Map *self, PyObject *arg);
    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args);
    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args);
    static PyObject *t_Map_isEmpty(t_Map *self);
    static PyObject *t_Map_keySet(t_Map *self);
    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map_put(t_Map *self, PyObject *args);
    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg);
    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args);
    static PyObject *t_Map_remove(t_Map *self, PyObject *args);
    static PyObject *t_Map_replace(t_Map *self, PyObject *args);
    static PyObject *t_Map_size(t_Map *self);
    static PyObject *t_Map_values(t_Map *self);
    static PyObject *t_Map_get__empty(t_Map *self, void *data);
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data);
    static PyGetSetDef t_Map__fields_[] = {
      DECLARE_GET_FIELD(t_Map, empty),
      DECLARE_GET_FIELD(t_Map, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Map__methods_[] = {
      DECLARE_METHOD(t_Map, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, of_, METH_VARARGS),
      DECLARE_METHOD(t_Map, clear, METH_NOARGS),
      DECLARE_METHOD(t_Map, containsKey, METH_O),
      DECLARE_METHOD(t_Map, containsValue, METH_O),
      DECLARE_METHOD(t_Map, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, entry, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, equals, METH_VARARGS),
      DECLARE_METHOD(t_Map, get, METH_O),
      DECLARE_METHOD(t_Map, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Map, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Map, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Map, keySet, METH_NOARGS),
      DECLARE_METHOD(t_Map, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map, ofEntries, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map, put, METH_VARARGS),
      DECLARE_METHOD(t_Map, putAll, METH_O),
      DECLARE_METHOD(t_Map, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Map, remove, METH_VARARGS),
      DECLARE_METHOD(t_Map, replace, METH_VARARGS),
      DECLARE_METHOD(t_Map, size, METH_NOARGS),
      DECLARE_METHOD(t_Map, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Map)[] = {
      { Py_tp_methods, t_Map__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Map__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Map)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Map, t_Map, Map);
    PyObject *t_Map::wrap_Object(const Map& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Map::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map *self = (t_Map *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Map::install(PyObject *module)
    {
      installType(&PY_TYPE(Map), &PY_TYPE_DEF(Map), module, "Map", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "Entry", make_descriptor(&PY_TYPE_DEF(Map$Entry)));
    }

    void t_Map::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "class_", make_descriptor(Map::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "wrapfn_", make_descriptor(t_Map::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Map_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Map::initializeClass, 1)))
        return NULL;
      return t_Map::wrap_Object(Map(((t_Map *) arg)->object.this$));
    }
    static PyObject *t_Map_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Map::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Map_of_(t_Map *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Map_clear(t_Map *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Map_containsKey(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_Map_containsValue(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_Map_copyOf(PyTypeObject *type, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::copyOf(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Map_entry(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Map::entry(a0, a1));
        return ::java::util::t_Map$Entry::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "entry", args);
      return NULL;
    }

    static PyObject *t_Map_entrySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Map_equals(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Map_get(t_Map *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_Map_getOrDefault(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oO", self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getOrDefault", args);
      return NULL;
    }

    static PyObject *t_Map_hashCode(t_Map *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Map), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Map_isEmpty(t_Map *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Map_keySet(t_Map *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Map_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Map result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map::of());
          return t_Map::wrap_Object(result);
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 12:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 14:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 16:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 18:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
            return t_Map::wrap_Object(result);
          }
        }
        break;
       case 20:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          ::java::lang::Object a10((jobject) NULL);
          ::java::lang::Object a11((jobject) NULL);
          ::java::lang::Object a12((jobject) NULL);
          ::java::lang::Object a13((jobject) NULL);
          ::java::lang::Object a14((jobject) NULL);
          ::java::lang::Object a15((jobject) NULL);
          ::java::lang::Object a16((jobject) NULL);
          ::java::lang::Object a17((jobject) NULL);
          ::java::lang::Object a18((jobject) NULL);
          ::java::lang::Object a19((jobject) NULL);
          Map result((jobject) NULL);

          if (!parseArgs(args, "oooooooooooooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19))
          {
            OBJ_CALL(result = ::java::util::Map::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19));
            return t_Map::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Map_ofEntries(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::util::Map$Entry > a0((jobject) NULL);
      PyTypeObject **p0;
      Map result((jobject) NULL);

      if (!parseArg(arg, "[K", ::java::util::Map$Entry::initializeClass, &a0, &p0, ::java::util::t_Map$Entry::parameters_))
      {
        OBJ_CALL(result = ::java::util::Map::ofEntries(a0));
        return t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "ofEntries", arg);
      return NULL;
    }

    static PyObject *t_Map_put(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_Map_putAll(t_Map *self, PyObject *arg)
    {
      Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", Map::initializeClass, &a0, &p0, t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_Map_putIfAbsent(t_Map *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "putIfAbsent", args);
      return NULL;
    }

    static PyObject *t_Map_remove(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remove", args);
      return NULL;
    }

    static PyObject *t_Map_replace(t_Map *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_Map_size(t_Map *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Map_values(t_Map *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_Map_get__parameters_(t_Map *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Map_get__empty(t_Map *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldQRDecomposer.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposer::class$ = NULL;
      jmethodID *FieldQRDecomposer::mids$ = NULL;
      bool FieldQRDecomposer::live$ = false;

      jclass FieldQRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_decompose_eea5b130cde95d83] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposer::FieldQRDecomposer(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_eea5b130cde95d83], a0.this$));
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
      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args);
      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data);
      static PyGetSetDef t_FieldQRDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposer)[] = {
        { Py_tp_methods, t_FieldQRDecomposer__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposer_init_ },
        { Py_tp_getset, t_FieldQRDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposer, t_FieldQRDecomposer, FieldQRDecomposer);
      PyObject *t_FieldQRDecomposer::wrap_Object(const FieldQRDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposer), &PY_TYPE_DEF(FieldQRDecomposer), module, "FieldQRDecomposer", 0);
      }

      void t_FieldQRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "class_", make_descriptor(FieldQRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "wrapfn_", make_descriptor(t_FieldQRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposer::wrap_Object(FieldQRDecomposer(((t_FieldQRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldQRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldQRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg)
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
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SystemTimeOffsetMessage::class$ = NULL;
          jmethodID *SystemTimeOffsetMessage::mids$ = NULL;
          bool SystemTimeOffsetMessage::live$ = false;

          jclass SystemTimeOffsetMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SystemTimeOffsetMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96a1aa7c5f1486f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getA0_9981f74b2d109da6] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_9981f74b2d109da6] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getA2_9981f74b2d109da6] = env->getMethodID(cls, "getA2", "()D");
              mids$[mid_getDefinedTimeSystem_6110a08bedf3a63d] = env->getMethodID(cls, "getDefinedTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getReferenceEpoch_80e11148db499dda] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceTimeSystem_6110a08bedf3a63d] = env->getMethodID(cls, "getReferenceTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getSbasId_2283113625471906] = env->getMethodID(cls, "getSbasId", "()Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_getTransmissionTime_9981f74b2d109da6] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getUtcId_134f3d1538d51fec] = env->getMethodID(cls, "getUtcId", "()Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_setA0_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setA0", "(D)V");
              mids$[mid_setA1_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setA1", "(D)V");
              mids$[mid_setA2_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setA2", "(D)V");
              mids$[mid_setDefinedTimeSystem_70481f478101edcd] = env->getMethodID(cls, "setDefinedTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setReferenceEpoch_8497861b879c83f7] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setReferenceTimeSystem_70481f478101edcd] = env->getMethodID(cls, "setReferenceTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setSbasId_8b3600b2465c5922] = env->getMethodID(cls, "setSbasId", "(Lorg/orekit/files/rinex/navigation/SbasId;)V");
              mids$[mid_setTransmissionTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setUtcId_807231b213efdb3e] = env->getMethodID(cls, "setUtcId", "(Lorg/orekit/files/rinex/navigation/UtcId;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SystemTimeOffsetMessage::SystemTimeOffsetMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_96a1aa7c5f1486f9, a0.this$, a1, a2.this$)) {}

          jdouble SystemTimeOffsetMessage::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_9981f74b2d109da6]);
          }

          jdouble SystemTimeOffsetMessage::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_9981f74b2d109da6]);
          }

          jdouble SystemTimeOffsetMessage::getA2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA2_9981f74b2d109da6]);
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getDefinedTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getDefinedTimeSystem_6110a08bedf3a63d]));
          }

          ::org::orekit::time::AbsoluteDate SystemTimeOffsetMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_80e11148db499dda]));
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getReferenceTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getReferenceTimeSystem_6110a08bedf3a63d]));
          }

          ::org::orekit::files::rinex::navigation::SbasId SystemTimeOffsetMessage::getSbasId() const
          {
            return ::org::orekit::files::rinex::navigation::SbasId(env->callObjectMethod(this$, mids$[mid_getSbasId_2283113625471906]));
          }

          jdouble SystemTimeOffsetMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_9981f74b2d109da6]);
          }

          ::org::orekit::files::rinex::navigation::UtcId SystemTimeOffsetMessage::getUtcId() const
          {
            return ::org::orekit::files::rinex::navigation::UtcId(env->callObjectMethod(this$, mids$[mid_getUtcId_134f3d1538d51fec]));
          }

          void SystemTimeOffsetMessage::setA0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA0_1ad26e8c8c0cd65b], a0);
          }

          void SystemTimeOffsetMessage::setA1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA1_1ad26e8c8c0cd65b], a0);
          }

          void SystemTimeOffsetMessage::setA2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA2_1ad26e8c8c0cd65b], a0);
          }

          void SystemTimeOffsetMessage::setDefinedTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDefinedTimeSystem_70481f478101edcd], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_8497861b879c83f7], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceTimeSystem_70481f478101edcd], a0.this$);
          }

          void SystemTimeOffsetMessage::setSbasId(const ::org::orekit::files::rinex::navigation::SbasId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSbasId_8b3600b2465c5922], a0.this$);
          }

          void SystemTimeOffsetMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_1ad26e8c8c0cd65b], a0);
          }

          void SystemTimeOffsetMessage::setUtcId(const ::org::orekit::files::rinex::navigation::UtcId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setUtcId_807231b213efdb3e], a0.this$);
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
          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_SystemTimeOffsetMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a0),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a1),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a2),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, definedTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, sbasId),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, utcId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SystemTimeOffsetMessage__methods_[] = {
            DECLARE_METHOD(t_SystemTimeOffsetMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA2, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getDefinedTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getSbasId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getUtcId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA0, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA1, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA2, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setDefinedTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setSbasId, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setUtcId, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SystemTimeOffsetMessage)[] = {
            { Py_tp_methods, t_SystemTimeOffsetMessage__methods_ },
            { Py_tp_init, (void *) t_SystemTimeOffsetMessage_init_ },
            { Py_tp_getset, t_SystemTimeOffsetMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SystemTimeOffsetMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(SystemTimeOffsetMessage, t_SystemTimeOffsetMessage, SystemTimeOffsetMessage);

          void t_SystemTimeOffsetMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(SystemTimeOffsetMessage), &PY_TYPE_DEF(SystemTimeOffsetMessage), module, "SystemTimeOffsetMessage", 0);
          }

          void t_SystemTimeOffsetMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "class_", make_descriptor(SystemTimeOffsetMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "wrapfn_", make_descriptor(t_SystemTimeOffsetMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SystemTimeOffsetMessage::initializeClass, 1)))
              return NULL;
            return t_SystemTimeOffsetMessage::wrap_Object(SystemTimeOffsetMessage(((t_SystemTimeOffsetMessage *) arg)->object.this$));
          }
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SystemTimeOffsetMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            SystemTimeOffsetMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = SystemTimeOffsetMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::SbasId result((jobject) NULL);
            OBJ_CALL(result = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::UtcId result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA0", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA1", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA2", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setDefinedTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDefinedTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setReferenceTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SbasId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_SbasId::parameters_))
            {
              OBJ_CALL(self->object.setSbasId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSbasId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::UtcId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_UtcId::parameters_))
            {
              OBJ_CALL(self->object.setUtcId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setUtcId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a0", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a1", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a2", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setDefinedTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "definedTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
            OBJ_CALL(value = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &value))
              {
                INT_CALL(self->object.setSbasId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sbasId", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &value))
              {
                INT_CALL(self->object.setUtcId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "utcId", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$LabeledDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$LabeledDoubleConsumer::mids$ = NULL;
            bool ParseToken$LabeledDoubleConsumer::live$ = false;

            jclass ParseToken$LabeledDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_d710506c983a8ade] = env->getMethodID(cls, "accept", "(CD)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$LabeledDoubleConsumer::accept(jchar a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_d710506c983a8ade], a0, a1);
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
            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$LabeledDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$LabeledDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$LabeledDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$LabeledDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$LabeledDoubleConsumer, t_ParseToken$LabeledDoubleConsumer, ParseToken$LabeledDoubleConsumer);

            void t_ParseToken$LabeledDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$LabeledDoubleConsumer), &PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer), module, "ParseToken$LabeledDoubleConsumer", 0);
            }

            void t_ParseToken$LabeledDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "class_", make_descriptor(ParseToken$LabeledDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$LabeledDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$LabeledDoubleConsumer::wrap_Object(ParseToken$LabeledDoubleConsumer(((t_ParseToken$LabeledDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args)
            {
              jchar a0;
              jdouble a1;

              if (!parseArgs(args, "CD", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *ModifiedLambdaMethod::class$ = NULL;
          jmethodID *ModifiedLambdaMethod::mids$ = NULL;
          bool ModifiedLambdaMethod::live$ = false;

          jclass ModifiedLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_inverseDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_ltdlDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_ff7cb6c242604316] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_ff7cb6c242604316] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_sign_bf28ed64d6e8576b] = env->getMethodID(cls, "sign", "(D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedLambdaMethod::ModifiedLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifiedLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_ModifiedLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedLambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedLambdaMethod)[] = {
            { Py_tp_methods, t_ModifiedLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_ModifiedLambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(ModifiedLambdaMethod, t_ModifiedLambdaMethod, ModifiedLambdaMethod);

          void t_ModifiedLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedLambdaMethod), &PY_TYPE_DEF(ModifiedLambdaMethod), module, "ModifiedLambdaMethod", 0);
          }

          void t_ModifiedLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "class_", make_descriptor(ModifiedLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "wrapfn_", make_descriptor(t_ModifiedLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_ModifiedLambdaMethod::wrap_Object(ModifiedLambdaMethod(((t_ModifiedLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            ModifiedLambdaMethod object((jobject) NULL);

            INT_CALL(object = ModifiedLambdaMethod());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}

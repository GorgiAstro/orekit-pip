#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonFieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonFieldODEIntegratorBuilder::mids$ = NULL;
        bool PythonFieldODEIntegratorBuilder::live$ = false;

        jclass PythonFieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_071d3edeab1fa823] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldODEIntegratorBuilder::PythonFieldODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldODEIntegratorBuilder::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self);
        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonFieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, self),
          DECLARE_GET_FIELD(t_PythonFieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonFieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonFieldODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonFieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldODEIntegratorBuilder, t_PythonFieldODEIntegratorBuilder, PythonFieldODEIntegratorBuilder);
        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_Object(const PythonFieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldODEIntegratorBuilder *self = (t_PythonFieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldODEIntegratorBuilder), &PY_TYPE_DEF(PythonFieldODEIntegratorBuilder), module, "PythonFieldODEIntegratorBuilder", 1);
        }

        void t_PythonFieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "class_", make_descriptor(PythonFieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonFieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator0 },
            { "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;", (void *) t_PythonFieldODEIntegratorBuilder_buildIntegrator1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldODEIntegratorBuilder_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonFieldODEIntegratorBuilder::wrap_Object(PythonFieldODEIntegratorBuilder(((t_PythonFieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_of_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldODEIntegratorBuilder_init_(t_PythonFieldODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonFieldODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_finalize(t_PythonFieldODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_pythonExtension(t_PythonFieldODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static jobject JNICALL t_PythonFieldODEIntegratorBuilder_buildIntegrator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractFieldIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractFieldIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonFieldODEIntegratorBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldODEIntegratorBuilder::mids$[PythonFieldODEIntegratorBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldODEIntegratorBuilder_get__self(t_PythonFieldODEIntegratorBuilder *self, void *data)
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
        static PyObject *t_PythonFieldODEIntegratorBuilder_get__parameters_(t_PythonFieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseSecantSolver::class$ = NULL;
        jmethodID *BaseSecantSolver::mids$ = NULL;
        bool BaseSecantSolver::live$ = false;

        jclass BaseSecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseSecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_0c4af17577847ef5] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_5ec58f5d7d8b216f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_solve_d096fb40d6053e92] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_f22794092f257ec3] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_315a1f5b2b06e1be] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_0c4af17577847ef5], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5ec58f5d7d8b216f], a0, a1.this$, a2, a3, a4);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_d096fb40d6053e92], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BaseSecantSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_f22794092f257ec3], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data);
        static PyGetSetDef t_BaseSecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseSecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseSecantSolver__methods_[] = {
          DECLARE_METHOD(t_BaseSecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseSecantSolver)[] = {
          { Py_tp_methods, t_BaseSecantSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseSecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseSecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BaseSecantSolver, t_BaseSecantSolver, BaseSecantSolver);
        PyObject *t_BaseSecantSolver::wrap_Object(const BaseSecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseSecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseSecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseSecantSolver), &PY_TYPE_DEF(BaseSecantSolver), module, "BaseSecantSolver", 0);
        }

        void t_BaseSecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "class_", make_descriptor(BaseSecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "wrapfn_", make_descriptor(t_BaseSecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseSecantSolver::initializeClass, 1)))
            return NULL;
          return t_BaseSecantSolver::wrap_Object(BaseSecantSolver(((t_BaseSecantSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseSecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args)
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
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
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

          return callSuper(PY_TYPE(BaseSecantSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args)
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
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
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
            mids$[mid_convert_b26c78fdb005126c] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_392814b1b1bbdd34] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_979b6b07281c1e27] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_b641a72d0c9694a7] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_getAdaptedPropagator_46f8fd1706005d71] = env->getMethodID(cls, "getAdaptedPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getRMS_456d9a2f64d6b28d] = env->getMethodID(cls, "getRMS", "()D");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getObjectiveFunction_aaef55ff59f9c00e] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getModel_b196da25fd980476] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getTargetSize_f2f64475e4580546] = env->getMethodID(cls, "getTargetSize", "()I");
            mids$[mid_isOnlyPosition_e470b6d9e0d979db] = env->getMethodID(cls, "isOnlyPosition", "()Z");
            mids$[mid_getSample_a6156df500549a58] = env->getMethodID(cls, "getSample", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_b26c78fdb005126c], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_392814b1b1bbdd34], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_979b6b07281c1e27], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_b641a72d0c9694a7], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::getAdaptedPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getAdaptedPropagator_46f8fd1706005d71]));
        }

        jint AbstractPropagatorConverter::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        jdouble AbstractPropagatorConverter::getRMS() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRMS_456d9a2f64d6b28d]);
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
#include "org/orekit/data/ZipJarCrawler$Archive$EntryStream.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler$Archive$EntryStream::class$ = NULL;
      jmethodID *ZipJarCrawler$Archive$EntryStream::mids$ = NULL;
      bool ZipJarCrawler$Archive$EntryStream::live$ = false;

      jclass ZipJarCrawler$Archive$EntryStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler$Archive$EntryStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_available_f2f64475e4580546] = env->getMethodID(cls, "available", "()I");
          mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isDirectory_e470b6d9e0d979db] = env->getMethodID(cls, "isDirectory", "()Z");
          mids$[mid_mark_0a2a1ac2721c0336] = env->getMethodID(cls, "mark", "(I)V");
          mids$[mid_markSupported_e470b6d9e0d979db] = env->getMethodID(cls, "markSupported", "()Z");
          mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
          mids$[mid_read_11d417f25cf33664] = env->getMethodID(cls, "read", "([B)I");
          mids$[mid_read_4e993e185759f10d] = env->getMethodID(cls, "read", "([BII)I");
          mids$[mid_reset_7ae3461a92a43152] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_skip_955f7541fca701ab] = env->getMethodID(cls, "skip", "(J)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ZipJarCrawler$Archive$EntryStream::available() const
      {
        return env->callIntMethod(this$, mids$[mid_available_f2f64475e4580546]);
      }

      void ZipJarCrawler$Archive$EntryStream::close() const
      {
        env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
      }

      ::java::lang::String ZipJarCrawler$Archive$EntryStream::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jboolean ZipJarCrawler$Archive$EntryStream::isDirectory() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDirectory_e470b6d9e0d979db]);
      }

      void ZipJarCrawler$Archive$EntryStream::mark(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_mark_0a2a1ac2721c0336], a0);
      }

      jboolean ZipJarCrawler$Archive$EntryStream::markSupported() const
      {
        return env->callBooleanMethod(this$, mids$[mid_markSupported_e470b6d9e0d979db]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read() const
      {
        return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_read_11d417f25cf33664], a0.this$);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_read_4e993e185759f10d], a0.this$, a1, a2);
      }

      void ZipJarCrawler$Archive$EntryStream::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_7ae3461a92a43152]);
      }

      jlong ZipJarCrawler$Archive$EntryStream::skip(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_skip_955f7541fca701ab], a0);
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
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyGetSetDef t_ZipJarCrawler$Archive$EntryStream__fields_[] = {
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, directory),
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ZipJarCrawler$Archive$EntryStream__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, available, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, close, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, getName, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, isDirectory, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, mark, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, markSupported, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, read, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, reset, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, skip, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler$Archive$EntryStream)[] = {
        { Py_tp_methods, t_ZipJarCrawler$Archive$EntryStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ZipJarCrawler$Archive$EntryStream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler$Archive$EntryStream)[] = {
        &PY_TYPE_DEF(::java::io::InputStream),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler$Archive$EntryStream, t_ZipJarCrawler$Archive$EntryStream, ZipJarCrawler$Archive$EntryStream);

      void t_ZipJarCrawler$Archive$EntryStream::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler$Archive$EntryStream), &PY_TYPE_DEF(ZipJarCrawler$Archive$EntryStream), module, "ZipJarCrawler$Archive$EntryStream", 0);
      }

      void t_ZipJarCrawler$Archive$EntryStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "class_", make_descriptor(ZipJarCrawler$Archive$EntryStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "wrapfn_", make_descriptor(t_ZipJarCrawler$Archive$EntryStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler$Archive$EntryStream::wrap_Object(ZipJarCrawler$Archive$EntryStream(((t_ZipJarCrawler$Archive$EntryStream *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.available());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "available", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.close());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "close", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDirectory());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.mark(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "mark", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.markSupported());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "markSupported", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.read());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(result = self->object.read(a0));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.read(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "read", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.reset());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "reset", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jlong a0;
        jlong result;

        if (!parseArgs(args, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "skip", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDirectory());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterFunction.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterFunction::class$ = NULL;
      jmethodID *PythonParameterFunction::mids$ = NULL;
      bool PythonParameterFunction::live$ = false;

      jclass PythonParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_01060f5a87e1d6cd] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterFunction::PythonParameterFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonParameterFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonParameterFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonParameterFunction::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self);
      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args);
      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data);
      static PyGetSetDef t_PythonParameterFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterFunction__methods_[] = {
        DECLARE_METHOD(t_PythonParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterFunction)[] = {
        { Py_tp_methods, t_PythonParameterFunction__methods_ },
        { Py_tp_init, (void *) t_PythonParameterFunction_init_ },
        { Py_tp_getset, t_PythonParameterFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterFunction, t_PythonParameterFunction, PythonParameterFunction);

      void t_PythonParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterFunction), &PY_TYPE_DEF(PythonParameterFunction), module, "PythonParameterFunction", 1);
      }

      void t_PythonParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "class_", make_descriptor(PythonParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "wrapfn_", make_descriptor(t_PythonParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonParameterFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterFunction::initializeClass, 1)))
          return NULL;
        return t_PythonParameterFunction::wrap_Object(PythonParameterFunction(((t_PythonParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterFunction object((jobject) NULL);

        INT_CALL(object = PythonParameterFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args)
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

      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "value", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
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

      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalProperties::class$ = NULL;
              jmethodID *OrbitPhysicalProperties::mids$ = NULL;
              bool OrbitPhysicalProperties::live$ = false;

              jclass OrbitPhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e82d68cd9f886886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getAttitudeActuatorType_0090f7797e403f43] = env->getMethodID(cls, "getAttitudeActuatorType", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeControlAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAttitudeControlAccuracy", "()D");
                  mids$[mid_getAttitudeControlMode_0090f7797e403f43] = env->getMethodID(cls, "getAttitudeControlMode", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeKnowledgeAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAttitudeKnowledgeAccuracy", "()D");
                  mids$[mid_getAttitudePointingAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAttitudePointingAccuracy", "()D");
                  mids$[mid_getBolDv_456d9a2f64d6b28d] = env->getMethodID(cls, "getBolDv", "()D");
                  mids$[mid_getBusModel_0090f7797e403f43] = env->getMethodID(cls, "getBusModel", "()Ljava/lang/String;");
                  mids$[mid_getDockedWith_a6156df500549a58] = env->getMethodID(cls, "getDockedWith", "()Ljava/util/List;");
                  mids$[mid_getDragCoefficient_456d9a2f64d6b28d] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDragConstantArea_456d9a2f64d6b28d] = env->getMethodID(cls, "getDragConstantArea", "()D");
                  mids$[mid_getDragUncertainty_456d9a2f64d6b28d] = env->getMethodID(cls, "getDragUncertainty", "()D");
                  mids$[mid_getDryMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInitialWetMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getInitialWetMass", "()D");
                  mids$[mid_getManeuversFrequency_456d9a2f64d6b28d] = env->getMethodID(cls, "getManeuversFrequency", "()D");
                  mids$[mid_getManeuversPerYear_456d9a2f64d6b28d] = env->getMethodID(cls, "getManeuversPerYear", "()D");
                  mids$[mid_getManufacturer_0090f7797e403f43] = env->getMethodID(cls, "getManufacturer", "()Ljava/lang/String;");
                  mids$[mid_getMaxAreaForCollisionProbability_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxAreaForCollisionProbability", "()D");
                  mids$[mid_getMaxThrust_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxThrust", "()D");
                  mids$[mid_getMinAreaForCollisionProbability_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinAreaForCollisionProbability", "()D");
                  mids$[mid_getRemainingDv_456d9a2f64d6b28d] = env->getMethodID(cls, "getRemainingDv", "()D");
                  mids$[mid_getSrpCoefficient_456d9a2f64d6b28d] = env->getMethodID(cls, "getSrpCoefficient", "()D");
                  mids$[mid_getSrpConstantArea_456d9a2f64d6b28d] = env->getMethodID(cls, "getSrpConstantArea", "()D");
                  mids$[mid_getSrpUncertainty_456d9a2f64d6b28d] = env->getMethodID(cls, "getSrpUncertainty", "()D");
                  mids$[mid_getTypAreaForCollisionProbability_456d9a2f64d6b28d] = env->getMethodID(cls, "getTypAreaForCollisionProbability", "()D");
                  mids$[mid_getWetMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setAttitudeActuatorType_e939c6558ae8d313] = env->getMethodID(cls, "setAttitudeActuatorType", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeControlAccuracy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAttitudeControlAccuracy", "(D)V");
                  mids$[mid_setAttitudeControlMode_e939c6558ae8d313] = env->getMethodID(cls, "setAttitudeControlMode", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeKnowledgeAccuracy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAttitudeKnowledgeAccuracy", "(D)V");
                  mids$[mid_setAttitudePointingAccuracy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAttitudePointingAccuracy", "(D)V");
                  mids$[mid_setBolDv_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBolDv", "(D)V");
                  mids$[mid_setBusModel_e939c6558ae8d313] = env->getMethodID(cls, "setBusModel", "(Ljava/lang/String;)V");
                  mids$[mid_setDockedWith_65de9727799c5641] = env->getMethodID(cls, "setDockedWith", "(Ljava/util/List;)V");
                  mids$[mid_setDragCoefficient_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDragConstantArea_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDragConstantArea", "(D)V");
                  mids$[mid_setDragUncertainty_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDragUncertainty", "(D)V");
                  mids$[mid_setDryMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_78e41e7b5124a628] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInitialWetMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInitialWetMass", "(D)V");
                  mids$[mid_setManeuversFrequency_77e0f9a1f260e2e5] = env->getMethodID(cls, "setManeuversFrequency", "(D)V");
                  mids$[mid_setManufacturer_e939c6558ae8d313] = env->getMethodID(cls, "setManufacturer", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxAreaForCollisionProbability_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxAreaForCollisionProbability", "(D)V");
                  mids$[mid_setMaxThrust_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxThrust", "(D)V");
                  mids$[mid_setMinAreaForCollisionProbability_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMinAreaForCollisionProbability", "(D)V");
                  mids$[mid_setRemainingDv_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRemainingDv", "(D)V");
                  mids$[mid_setSrpCoefficient_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSrpCoefficient", "(D)V");
                  mids$[mid_setSrpConstantArea_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSrpConstantArea", "(D)V");
                  mids$[mid_setSrpUncertainty_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSrpUncertainty", "(D)V");
                  mids$[mid_setTypAreaForCollisionProbability_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTypAreaForCollisionProbability", "(D)V");
                  mids$[mid_setWetMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setWetMass", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitPhysicalProperties::OrbitPhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_e82d68cd9f886886, a0.this$)) {}

              ::java::lang::String OrbitPhysicalProperties::getAttitudeActuatorType() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeActuatorType_0090f7797e403f43]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeControlAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeControlAccuracy_456d9a2f64d6b28d]);
              }

              ::java::lang::String OrbitPhysicalProperties::getAttitudeControlMode() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeControlMode_0090f7797e403f43]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeKnowledgeAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeKnowledgeAccuracy_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getAttitudePointingAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudePointingAccuracy_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getBolDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBolDv_456d9a2f64d6b28d]);
              }

              ::java::lang::String OrbitPhysicalProperties::getBusModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBusModel_0090f7797e403f43]));
              }

              ::java::util::List OrbitPhysicalProperties::getDockedWith() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDockedWith_a6156df500549a58]));
              }

              jdouble OrbitPhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getDragConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragConstantArea_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getDragUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragUncertainty_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_456d9a2f64d6b28d]);
              }

              ::org::hipparchus::linear::RealMatrix OrbitPhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_7116bbecdd8ceb21]));
              }

              jdouble OrbitPhysicalProperties::getInitialWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getInitialWetMass_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getManeuversFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversFrequency_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getManeuversPerYear() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversPerYear_456d9a2f64d6b28d]);
              }

              ::java::lang::String OrbitPhysicalProperties::getManufacturer() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManufacturer_0090f7797e403f43]));
              }

              jdouble OrbitPhysicalProperties::getMaxAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxAreaForCollisionProbability_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getMaxThrust() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxThrust_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getMinAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinAreaForCollisionProbability_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getRemainingDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRemainingDv_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getSrpCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpCoefficient_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getSrpConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpConstantArea_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getSrpUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpUncertainty_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getTypAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTypAreaForCollisionProbability_456d9a2f64d6b28d]);
              }

              jdouble OrbitPhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_456d9a2f64d6b28d]);
              }

              void OrbitPhysicalProperties::setAttitudeActuatorType(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeActuatorType_e939c6558ae8d313], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeControlAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlAccuracy_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setAttitudeControlMode(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlMode_e939c6558ae8d313], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeKnowledgeAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeKnowledgeAccuracy_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setAttitudePointingAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudePointingAccuracy_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setBolDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBolDv_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setBusModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBusModel_e939c6558ae8d313], a0.this$);
              }

              void OrbitPhysicalProperties::setDockedWith(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDockedWith_65de9727799c5641], a0.this$);
              }

              void OrbitPhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setDragConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragConstantArea_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setDragUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragUncertainty_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_78e41e7b5124a628], a0, a1, a2);
              }

              void OrbitPhysicalProperties::setInitialWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInitialWetMass_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setManeuversFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManeuversFrequency_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setManufacturer(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManufacturer_e939c6558ae8d313], a0.this$);
              }

              void OrbitPhysicalProperties::setMaxAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxAreaForCollisionProbability_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setMaxThrust(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxThrust_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setMinAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinAreaForCollisionProbability_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setRemainingDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRemainingDv_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setSrpCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpCoefficient_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setSrpConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpConstantArea_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setSrpUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpUncertainty_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setTypAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTypAreaForCollisionProbability_77e0f9a1f260e2e5], a0);
              }

              void OrbitPhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args);
              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitPhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeActuatorType),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlMode),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeKnowledgeAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudePointingAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, bolDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, busModel),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dockedWith),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, initialWetMass),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maneuversFrequency),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, maneuversPerYear),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, manufacturer),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxThrust),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, minAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, remainingDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, typAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeActuatorType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlMode, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeKnowledgeAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudePointingAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBolDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBusModel, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDockedWith, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInitialWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversFrequency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversPerYear, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManufacturer, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMinAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getRemainingDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getTypAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeActuatorType, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlMode, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeKnowledgeAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudePointingAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBolDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBusModel, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDockedWith, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInitialWetMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManeuversFrequency, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManufacturer, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxThrust, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMinAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setRemainingDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setTypAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setWetMass, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalProperties)[] = {
                { Py_tp_methods, t_OrbitPhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_OrbitPhysicalProperties_init_ },
                { Py_tp_getset, t_OrbitPhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalProperties, t_OrbitPhysicalProperties, OrbitPhysicalProperties);

              void t_OrbitPhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalProperties), &PY_TYPE_DEF(OrbitPhysicalProperties), module, "OrbitPhysicalProperties", 0);
              }

              void t_OrbitPhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "class_", make_descriptor(OrbitPhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "wrapfn_", make_descriptor(t_OrbitPhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalProperties::wrap_Object(OrbitPhysicalProperties(((t_OrbitPhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitPhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitPhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeActuatorType());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeControlMode());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBolDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getBusModel());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManufacturer());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeActuatorType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeActuatorType", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlMode(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlMode", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeKnowledgeAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeKnowledgeAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudePointingAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudePointingAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBolDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBolDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setBusModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBusModel", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDockedWith(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDockedWith", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setInitialWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInitialWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setManeuversFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManeuversFrequency", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManufacturer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManufacturer", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxThrust(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxThrust", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRemainingDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRemainingDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTypAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTypAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeActuatorType());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeActuatorType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeActuatorType", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeControlMode());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlMode(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlMode", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeKnowledgeAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeKnowledgeAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudePointingAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudePointingAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBolDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBolDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bolDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getBusModel());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setBusModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "busModel", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDockedWith(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dockedWith", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setInitialWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "initialWetMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setManeuversFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maneuversFrequency", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManufacturer());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManufacturer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manufacturer", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxThrust(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxThrust", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRemainingDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "remainingDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTypAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "typAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$NptRangeMeasurement::class$ = NULL;
        jmethodID *CRD$NptRangeMeasurement::mids$ = NULL;
        bool CRD$NptRangeMeasurement::live$ = false;

        jclass CRD$NptRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$NptRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ba58bdeca658222c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_init$_653fb7785563927c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;DIDDDDDI)V");
            mids$[mid_getBinKurtosis_456d9a2f64d6b28d] = env->getMethodID(cls, "getBinKurtosis", "()D");
            mids$[mid_getBinPeakMinusMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getBinPeakMinusMean", "()D");
            mids$[mid_getBinRms_456d9a2f64d6b28d] = env->getMethodID(cls, "getBinRms", "()D");
            mids$[mid_getBinSkew_456d9a2f64d6b28d] = env->getMethodID(cls, "getBinSkew", "()D");
            mids$[mid_getDetectorChannel_f2f64475e4580546] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getNumberOfRawRanges_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfRawRanges", "()I");
            mids$[mid_getReturnRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getWindowLength_456d9a2f64d6b28d] = env->getMethodID(cls, "getWindowLength", "()D");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_ba58bdeca658222c, a0.this$, a1, a2, a3, a4.this$)) {}

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_653fb7785563927c, a0.this$, a1, a2, a3, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble CRD$NptRangeMeasurement::getBinKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinKurtosis_456d9a2f64d6b28d]);
        }

        jdouble CRD$NptRangeMeasurement::getBinPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinPeakMinusMean_456d9a2f64d6b28d]);
        }

        jdouble CRD$NptRangeMeasurement::getBinRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinRms_456d9a2f64d6b28d]);
        }

        jdouble CRD$NptRangeMeasurement::getBinSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinSkew_456d9a2f64d6b28d]);
        }

        jint CRD$NptRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_f2f64475e4580546]);
        }

        jint CRD$NptRangeMeasurement::getNumberOfRawRanges() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfRawRanges_f2f64475e4580546]);
        }

        jdouble CRD$NptRangeMeasurement::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_456d9a2f64d6b28d]);
        }

        jdouble CRD$NptRangeMeasurement::getWindowLength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWindowLength_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRD$NptRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRD$NptRangeMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$NptRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binKurtosis),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binPeakMinusMean),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binRms),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binSkew),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, numberOfRawRanges),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, returnRate),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, windowLength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$NptRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getNumberOfRawRanges, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getWindowLength, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$NptRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$NptRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$NptRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$NptRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$NptRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$NptRangeMeasurement, t_CRD$NptRangeMeasurement, CRD$NptRangeMeasurement);

        void t_CRD$NptRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$NptRangeMeasurement), &PY_TYPE_DEF(CRD$NptRangeMeasurement), module, "CRD$NptRangeMeasurement", 0);
        }

        void t_CRD$NptRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "class_", make_descriptor(CRD$NptRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$NptRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$NptRangeMeasurement::wrap_Object(CRD$NptRangeMeasurement(((t_CRD$NptRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              jint a12;
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDsDIDDDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWindowLength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWindowLength());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory$DerivativeField::class$ = NULL;
        jmethodID *FDSFactory$DerivativeField::mids$ = NULL;
        bool FDSFactory$DerivativeField::live$ = false;

        jclass FDSFactory$DerivativeField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_7208bb4259086f92] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getPi_7208bb4259086f92] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_7208bb4259086f92] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FDSFactory$DerivativeField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_7208bb4259086f92]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_7208bb4259086f92]));
        }

        ::java::lang::Class FDSFactory$DerivativeField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_7208bb4259086f92]));
        }

        jint FDSFactory$DerivativeField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data);
        static PyGetSetDef t_FDSFactory$DerivativeField__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, one),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, pi),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, runtimeClass),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, zero),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory$DerivativeField__methods_[] = {
          DECLARE_METHOD(t_FDSFactory$DerivativeField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory$DerivativeField)[] = {
          { Py_tp_methods, t_FDSFactory$DerivativeField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FDSFactory$DerivativeField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory$DerivativeField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory$DerivativeField, t_FDSFactory$DerivativeField, FDSFactory$DerivativeField);
        PyObject *t_FDSFactory$DerivativeField::wrap_Object(const FDSFactory$DerivativeField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory$DerivativeField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory$DerivativeField::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory$DerivativeField), &PY_TYPE_DEF(FDSFactory$DerivativeField), module, "FDSFactory$DerivativeField", 0);
        }

        void t_FDSFactory$DerivativeField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "class_", make_descriptor(FDSFactory$DerivativeField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "wrapfn_", make_descriptor(t_FDSFactory$DerivativeField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory$DerivativeField::initializeClass, 1)))
            return NULL;
          return t_FDSFactory$DerivativeField::wrap_Object(FDSFactory$DerivativeField(((t_FDSFactory$DerivativeField *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory$DerivativeField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1240::class$ = NULL;
              jmethodID *Rtcm1240::mids$ = NULL;
              bool Rtcm1240::live$ = false;

              jclass Rtcm1240::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_68ffe0e149823d38] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1240::Rtcm1240(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_68ffe0e149823d38, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args);
              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data);
              static PyGetSetDef t_Rtcm1240__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1240, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1240__methods_[] = {
                DECLARE_METHOD(t_Rtcm1240, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1240)[] = {
                { Py_tp_methods, t_Rtcm1240__methods_ },
                { Py_tp_init, (void *) t_Rtcm1240_init_ },
                { Py_tp_getset, t_Rtcm1240__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1240)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1240, t_Rtcm1240, Rtcm1240);
              PyObject *t_Rtcm1240::wrap_Object(const Rtcm1240& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1240::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1240::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1240), &PY_TYPE_DEF(Rtcm1240), module, "Rtcm1240", 0);
              }

              void t_Rtcm1240::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "class_", make_descriptor(Rtcm1240::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "wrapfn_", make_descriptor(t_Rtcm1240::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1240::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1240::wrap_Object(Rtcm1240(((t_Rtcm1240 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1240::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1240 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1240(a0, a1, a2));
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
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data)
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
#include "org/orekit/data/ExceptionalDataContext.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ExceptionalDataContext::class$ = NULL;
      jmethodID *ExceptionalDataContext::mids$ = NULL;
      bool ExceptionalDataContext::live$ = false;

      jclass ExceptionalDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ExceptionalDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_f685d2a163f9f12b] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getFrames_279cf148ff8a6939] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_2e55f41473500ba6] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_4859dab0854ea5fb] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_8c0eab743ddad863] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExceptionalDataContext::ExceptionalDataContext() : ::org::orekit::data::LazyLoadedDataContext(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies ExceptionalDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_f685d2a163f9f12b]));
      }

      ::org::orekit::frames::LazyLoadedFrames ExceptionalDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_279cf148ff8a6939]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields ExceptionalDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_2e55f41473500ba6]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields ExceptionalDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_4859dab0854ea5fb]));
      }

      ::org::orekit::time::LazyLoadedTimeScales ExceptionalDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_8c0eab743ddad863]));
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
      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args);
      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data);
      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data);
      static PyGetSetDef t_ExceptionalDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_ExceptionalDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, frames),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, gravityFields),
        DECLARE_GET_FIELD(t_ExceptionalDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ExceptionalDataContext__methods_[] = {
        DECLARE_METHOD(t_ExceptionalDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExceptionalDataContext, getCelestialBodies, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getFrames, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGeoMagneticFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getGravityFields, METH_VARARGS),
        DECLARE_METHOD(t_ExceptionalDataContext, getTimeScales, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExceptionalDataContext)[] = {
        { Py_tp_methods, t_ExceptionalDataContext__methods_ },
        { Py_tp_init, (void *) t_ExceptionalDataContext_init_ },
        { Py_tp_getset, t_ExceptionalDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExceptionalDataContext)[] = {
        &PY_TYPE_DEF(::org::orekit::data::LazyLoadedDataContext),
        NULL
      };

      DEFINE_TYPE(ExceptionalDataContext, t_ExceptionalDataContext, ExceptionalDataContext);

      void t_ExceptionalDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(ExceptionalDataContext), &PY_TYPE_DEF(ExceptionalDataContext), module, "ExceptionalDataContext", 0);
      }

      void t_ExceptionalDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "class_", make_descriptor(ExceptionalDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "wrapfn_", make_descriptor(t_ExceptionalDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExceptionalDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExceptionalDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExceptionalDataContext::initializeClass, 1)))
          return NULL;
        return t_ExceptionalDataContext::wrap_Object(ExceptionalDataContext(((t_ExceptionalDataContext *) arg)->object.this$));
      }
      static PyObject *t_ExceptionalDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExceptionalDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExceptionalDataContext_init_(t_ExceptionalDataContext *self, PyObject *args, PyObject *kwds)
      {
        ExceptionalDataContext object((jobject) NULL);

        INT_CALL(object = ExceptionalDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_ExceptionalDataContext_getCelestialBodies(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getCelestialBodies());
          return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getCelestialBodies", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getFrames(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrames());
          return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getFrames", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGeoMagneticFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGeoMagneticFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getGravityFields(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGravityFields());
          return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getGravityFields", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_getTimeScales(t_ExceptionalDataContext *self, PyObject *args)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTimeScales());
          return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExceptionalDataContext), (PyObject *) self, "getTimeScales", args, 2);
      }

      static PyObject *t_ExceptionalDataContext_get__celestialBodies(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__frames(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__geoMagneticFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__gravityFields(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_ExceptionalDataContext_get__timeScales(t_ExceptionalDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame2.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame2::class$ = NULL;
          jmethodID *SubFrame2::mids$ = NULL;
          bool SubFrame2::live$ = false;

          jclass SubFrame2::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame2");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAODO_f2f64475e4580546] = env->getMethodID(cls, "getAODO", "()I");
              mids$[mid_getCrs_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrs", "()D");
              mids$[mid_getCuc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCuc", "()D");
              mids$[mid_getCus_456d9a2f64d6b28d] = env->getMethodID(cls, "getCus", "()D");
              mids$[mid_getDeltaN_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaN", "()D");
              mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getFitInterval_f2f64475e4580546] = env->getMethodID(cls, "getFitInterval", "()I");
              mids$[mid_getIODE_f2f64475e4580546] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getM0_456d9a2f64d6b28d] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getSqrtA_456d9a2f64d6b28d] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getToe_f2f64475e4580546] = env->getMethodID(cls, "getToe", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame2::getAODO() const
          {
            return env->callIntMethod(this$, mids$[mid_getAODO_f2f64475e4580546]);
          }

          jdouble SubFrame2::getCrs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrs_456d9a2f64d6b28d]);
          }

          jdouble SubFrame2::getCuc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCuc_456d9a2f64d6b28d]);
          }

          jdouble SubFrame2::getCus() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCus_456d9a2f64d6b28d]);
          }

          jdouble SubFrame2::getDeltaN() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltaN_456d9a2f64d6b28d]);
          }

          jdouble SubFrame2::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
          }

          jint SubFrame2::getFitInterval() const
          {
            return env->callIntMethod(this$, mids$[mid_getFitInterval_f2f64475e4580546]);
          }

          jint SubFrame2::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_f2f64475e4580546]);
          }

          jdouble SubFrame2::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_456d9a2f64d6b28d]);
          }

          jdouble SubFrame2::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_456d9a2f64d6b28d]);
          }

          jint SubFrame2::getToe() const
          {
            return env->callIntMethod(this$, mids$[mid_getToe_f2f64475e4580546]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data);
          static PyGetSetDef t_SubFrame2__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame2, aODO),
            DECLARE_GET_FIELD(t_SubFrame2, crs),
            DECLARE_GET_FIELD(t_SubFrame2, cuc),
            DECLARE_GET_FIELD(t_SubFrame2, cus),
            DECLARE_GET_FIELD(t_SubFrame2, deltaN),
            DECLARE_GET_FIELD(t_SubFrame2, e),
            DECLARE_GET_FIELD(t_SubFrame2, fitInterval),
            DECLARE_GET_FIELD(t_SubFrame2, iODE),
            DECLARE_GET_FIELD(t_SubFrame2, m0),
            DECLARE_GET_FIELD(t_SubFrame2, sqrtA),
            DECLARE_GET_FIELD(t_SubFrame2, toe),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame2__methods_[] = {
            DECLARE_METHOD(t_SubFrame2, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, getAODO, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCrs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCuc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getDeltaN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getFitInterval, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getToe, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame2)[] = {
            { Py_tp_methods, t_SubFrame2__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame2__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame2)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame2, t_SubFrame2, SubFrame2);

          void t_SubFrame2::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame2), &PY_TYPE_DEF(SubFrame2), module, "SubFrame2", 0);
          }

          void t_SubFrame2::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "class_", make_descriptor(SubFrame2::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "wrapfn_", make_descriptor(t_SubFrame2::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame2::initializeClass, 1)))
              return NULL;
            return t_SubFrame2::wrap_Object(SubFrame2(((t_SubFrame2 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame2::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAODO());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCuc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCus());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltaN());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFitInterval());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToe());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAODO());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrs());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCuc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCus());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltaN());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFitInterval());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToe());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableFunction::mids$ = NULL;
        bool UnivariateDifferentiableFunction::live$ = false;

        jclass UnivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative UnivariateDifferentiableFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableFunction, t_UnivariateDifferentiableFunction, UnivariateDifferentiableFunction);

        void t_UnivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableFunction), &PY_TYPE_DEF(UnivariateDifferentiableFunction), module, "UnivariateDifferentiableFunction", 0);
        }

        void t_UnivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "class_", make_descriptor(UnivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableFunction::wrap_Object(UnivariateDifferentiableFunction(((t_UnivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateFunctionDifferentiator::mids$ = NULL;
        bool UnivariateFunctionDifferentiator::live$ = false;

        jclass UnivariateFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_39c5729c9c0cff99] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction UnivariateFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_39c5729c9c0cff99], a0.this$));
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
        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateFunctionDifferentiator, t_UnivariateFunctionDifferentiator, UnivariateFunctionDifferentiator);

        void t_UnivariateFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateFunctionDifferentiator), &PY_TYPE_DEF(UnivariateFunctionDifferentiator), module, "UnivariateFunctionDifferentiator", 0);
        }

        void t_UnivariateFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "class_", make_descriptor(UnivariateFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateFunctionDifferentiator::wrap_Object(UnivariateFunctionDifferentiator(((t_UnivariateFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05::class$ = NULL;
              jmethodID *SsrIgm05::mids$ = NULL;
              bool SsrIgm05::live$ = false;

              jclass SsrIgm05::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_64f96db32a10c94c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm05Data_d6753b7055940a54] = env->getMethodID(cls, "getSsrIgm05Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05::SsrIgm05(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_64f96db32a10c94c, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm05::getSsrIgm05Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm05Data_d6753b7055940a54]));
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
              static PyObject *t_SsrIgm05_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05_of_(t_SsrIgm05 *self, PyObject *args);
              static int t_SsrIgm05_init_(t_SsrIgm05 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm05_getSsrIgm05Data(t_SsrIgm05 *self);
              static PyObject *t_SsrIgm05_get__ssrIgm05Data(t_SsrIgm05 *self, void *data);
              static PyObject *t_SsrIgm05_get__parameters_(t_SsrIgm05 *self, void *data);
              static PyGetSetDef t_SsrIgm05__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm05, ssrIgm05Data),
                DECLARE_GET_FIELD(t_SsrIgm05, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm05__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm05, getSsrIgm05Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05)[] = {
                { Py_tp_methods, t_SsrIgm05__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05_init_ },
                { Py_tp_getset, t_SsrIgm05__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm05, t_SsrIgm05, SsrIgm05);
              PyObject *t_SsrIgm05::wrap_Object(const SsrIgm05& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm05::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm05 *self = (t_SsrIgm05 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm05::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm05::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm05 *self = (t_SsrIgm05 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm05::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05), &PY_TYPE_DEF(SsrIgm05), module, "SsrIgm05", 0);
              }

              void t_SsrIgm05::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "class_", make_descriptor(SsrIgm05::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "wrapfn_", make_descriptor(t_SsrIgm05::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05::wrap_Object(SsrIgm05(((t_SsrIgm05 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm05_of_(t_SsrIgm05 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm05_init_(t_SsrIgm05 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm05 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm05Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm05(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm05Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm05Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm05_getSsrIgm05Data(t_SsrIgm05 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm05Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm05_get__parameters_(t_SsrIgm05 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm05_get__ssrIgm05Data(t_SsrIgm05 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm05Data());
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionHeader::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionHeader::mids$ = NULL;
              bool RtcmOrbitCorrectionHeader::live$ = false;

              jclass RtcmOrbitCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteReferenceDatum_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteReferenceDatum", "()I");
                  mids$[mid_setSatelliteReferenceDatum_0a2a1ac2721c0336] = env->getMethodID(cls, "setSatelliteReferenceDatum", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionHeader::RtcmOrbitCorrectionHeader() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jint RtcmOrbitCorrectionHeader::getSatelliteReferenceDatum() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteReferenceDatum_f2f64475e4580546]);
              }

              void RtcmOrbitCorrectionHeader::setSatelliteReferenceDatum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteReferenceDatum_0a2a1ac2721c0336], a0);
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
              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self);
              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data);
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionHeader, satelliteReferenceDatum),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, getSatelliteReferenceDatum, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, setSatelliteReferenceDatum, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionHeader, t_RtcmOrbitCorrectionHeader, RtcmOrbitCorrectionHeader);

              void t_RtcmOrbitCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionHeader), &PY_TYPE_DEF(RtcmOrbitCorrectionHeader), module, "RtcmOrbitCorrectionHeader", 0);
              }

              void t_RtcmOrbitCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "class_", make_descriptor(RtcmOrbitCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionHeader::wrap_Object(RtcmOrbitCorrectionHeader(((t_RtcmOrbitCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteReferenceDatum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteReferenceDatum", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteReferenceDatum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteReferenceDatum", arg);
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
#include "org/orekit/orbits/AbstractOrbitInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractOrbitInterpolator::mids$ = NULL;
      bool AbstractOrbitInterpolator::live$ = false;

      jclass AbstractOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_544055afce312742] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_checkOrbitsConsistency_26b3669ec54017ce] = env->getStaticMethodID(cls, "checkOrbitsConsistency", "(Ljava/util/Collection;)V");
          mids$[mid_getOutputInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_efb413e9abb8e0a2] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractOrbitInterpolator::AbstractOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_544055afce312742, a0, a1, a2.this$)) {}

      void AbstractOrbitInterpolator::checkOrbitsConsistency(const ::java::util::Collection & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrbitsConsistency_26b3669ec54017ce], a0.this$);
      }

      ::org::orekit::frames::Frame AbstractOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::orbits::Orbit AbstractOrbitInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_interpolate_efb413e9abb8e0a2], a0.this$, a1.this$));
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
      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args);
      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self);
      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, checkOrbitsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractOrbitInterpolator, t_AbstractOrbitInterpolator, AbstractOrbitInterpolator);
      PyObject *t_AbstractOrbitInterpolator::wrap_Object(const AbstractOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractOrbitInterpolator), &PY_TYPE_DEF(AbstractOrbitInterpolator), module, "AbstractOrbitInterpolator", 0);
      }

      void t_AbstractOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "class_", make_descriptor(AbstractOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractOrbitInterpolator::wrap_Object(AbstractOrbitInterpolator(((t_AbstractOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractOrbitInterpolator(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(::org::orekit::orbits::AbstractOrbitInterpolator::checkOrbitsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkOrbitsConsistency", arg);
        return NULL;
      }

      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::Orbit result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbstractOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2d511f7455dd3ab4] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_0fefe87a84aeb22a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_c14c1c09874639c8] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_26e112f5471c79fa] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2d511f7455dd3ab4, a0, a1.this$)) {}

      TimeStampedAngularCoordinatesHermiteInterpolator::TimeStampedAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0fefe87a84aeb22a, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_c14c1c09874639c8]));
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
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator, t_TimeStampedAngularCoordinatesHermiteInterpolator, TimeStampedAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedAngularCoordinatesHermiteInterpolator), module, "TimeStampedAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedAngularCoordinatesHermiteInterpolator(((t_TimeStampedAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator());
            self->object = object;
            self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates);
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

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagatorBuilder::class$ = NULL;
          jmethodID *GNSSPropagatorBuilder::mids$ = NULL;
          bool GNSSPropagatorBuilder::live$ = false;

          jclass GNSSPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fc1b969978b6e6ec] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;)V");
              mids$[mid_init$_c7786e7433bcd943] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_dc98c08fd74760c1] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_build_9bde3ac5a964eae4] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
              mids$[mid_ecef_05e6acb69712cca5] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_eci_05e6acb69712cca5] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_mass_a9c822d0d5a394d3] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc1b969978b6e6ec, a0.this$)) {}

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7786e7433bcd943, a0.this$, a1.this$)) {}

          GNSSPropagatorBuilder GNSSPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_dc98c08fd74760c1], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_build_9bde3ac5a964eae4]));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_05e6acb69712cca5], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_05e6acb69712cca5], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::mass(jdouble a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_a9c822d0d5a394d3], a0));
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
          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self);
          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GNSSPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagatorBuilder)[] = {
            { Py_tp_methods, t_GNSSPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GNSSPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GNSSPropagatorBuilder, t_GNSSPropagatorBuilder, GNSSPropagatorBuilder);

          void t_GNSSPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagatorBuilder), &PY_TYPE_DEF(GNSSPropagatorBuilder), module, "GNSSPropagatorBuilder", 0);
          }

          void t_GNSSPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "class_", make_descriptor(GNSSPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "wrapfn_", make_descriptor(t_GNSSPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagatorBuilder::wrap_Object(GNSSPropagatorBuilder(((t_GNSSPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0, a1));
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

          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStreamReader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStreamReader::class$ = NULL;
    jmethodID *InputStreamReader::mids$ = NULL;
    bool InputStreamReader::live$ = false;

    jclass InputStreamReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStreamReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a51aa99816400fdd] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_init$_ec60cb5f4b3de555] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getEncoding_0090f7797e403f43] = env->getMethodID(cls, "getEncoding", "()Ljava/lang/String;");
        mids$[mid_read_f2f64475e4580546] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_a7dcb595f3e6fbfc] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_e470b6d9e0d979db] = env->getMethodID(cls, "ready", "()Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_a51aa99816400fdd, a0.this$)) {}

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0, const ::java::lang::String & a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_ec60cb5f4b3de555, a0.this$, a1.this$)) {}

    void InputStreamReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    ::java::lang::String InputStreamReader::getEncoding() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEncoding_0090f7797e403f43]));
    }

    jint InputStreamReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_f2f64475e4580546]);
    }

    jint InputStreamReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_a7dcb595f3e6fbfc], a0.this$, a1, a2);
    }

    jboolean InputStreamReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_e470b6d9e0d979db]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self);
    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data);
    static PyGetSetDef t_InputStreamReader__fields_[] = {
      DECLARE_GET_FIELD(t_InputStreamReader, encoding),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_InputStreamReader__methods_[] = {
      DECLARE_METHOD(t_InputStreamReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, close, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, getEncoding, METH_NOARGS),
      DECLARE_METHOD(t_InputStreamReader, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, ready, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStreamReader)[] = {
      { Py_tp_methods, t_InputStreamReader__methods_ },
      { Py_tp_init, (void *) t_InputStreamReader_init_ },
      { Py_tp_getset, t_InputStreamReader__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStreamReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(InputStreamReader, t_InputStreamReader, InputStreamReader);

    void t_InputStreamReader::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStreamReader), &PY_TYPE_DEF(InputStreamReader), module, "InputStreamReader", 0);
    }

    void t_InputStreamReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "class_", make_descriptor(InputStreamReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "wrapfn_", make_descriptor(t_InputStreamReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStreamReader::initializeClass, 1)))
        return NULL;
      return t_InputStreamReader::wrap_Object(InputStreamReader(((t_InputStreamReader *) arg)->object.this$));
    }
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStreamReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            INT_CALL(object = InputStreamReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::InputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InputStreamReader(a0, a1));
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

    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getEncoding());
      return j2p(result);
    }

    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getEncoding());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonGenerator::class$ = NULL;
            jmethodID *PythonGenerator::mids$ = NULL;
            bool PythonGenerator::live$ = false;

            jclass PythonGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_e9166ff038580198] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_e9166ff038580198] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_5f1e8067dcf848fb] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_085bbc49599fa163] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_e939c6558ae8d313] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_e939c6558ae8d313] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_0090f7797e403f43] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_0090f7797e403f43] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_7ae3461a92a43152] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_siToCcsdsName_43625fc1c3d86afe] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_f7e4436e61826cb4] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_7df61b71f083fbd6] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_65de9727799c5641] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_c0315b1049063d00] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_8ef0818590b472f3] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_0a2534765e753ec9] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_a1392c2233da957d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_fd7b1fd8e935b456] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_110375161a97bc67] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_b458f0406720c03f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_20cfd7e2288cf462] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_be0046d7f7239695] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_d77f10dac029c69d] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonGenerator::PythonGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonGenerator::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self);
            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args);
            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5);
            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0);
            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3);
            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4);
            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0);
            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data);
            static PyGetSetDef t_PythonGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonGenerator)[] = {
              { Py_tp_methods, t_PythonGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonGenerator_init_ },
              { Py_tp_getset, t_PythonGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonGenerator)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonGenerator, t_PythonGenerator, PythonGenerator);

            void t_PythonGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonGenerator), &PY_TYPE_DEF(PythonGenerator), module, "PythonGenerator", 1);
            }

            void t_PythonGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "class_", make_descriptor(PythonGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "wrapfn_", make_descriptor(t_PythonGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "close", "()V", (void *) t_PythonGenerator_close0 },
                { "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToCalendarString1 },
                { "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString2 },
                { "dateToString", "(IIIIID)Ljava/lang/String;", (void *) t_PythonGenerator_dateToString3 },
                { "doubleToString", "(D)Ljava/lang/String;", (void *) t_PythonGenerator_doubleToString4 },
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_endMessage5 },
                { "enterSection", "(Ljava/lang/String;)V", (void *) t_PythonGenerator_enterSection6 },
                { "exitSection", "()Ljava/lang/String;", (void *) t_PythonGenerator_exitSection7 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonGenerator_getFormat8 },
                { "getOutputName", "()Ljava/lang/String;", (void *) t_PythonGenerator_getOutputName9 },
                { "newLine", "()V", (void *) t_PythonGenerator_newLine10 },
                { "pythonDecRef", "()V", (void *) t_PythonGenerator_pythonDecRef11 },
                { "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;", (void *) t_PythonGenerator_siToCcsdsName12 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonGenerator_startMessage13 },
                { "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;", (void *) t_PythonGenerator_unitsListToString14 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonGenerator_writeComments15 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V", (void *) t_PythonGenerator_writeEntry16 },
                { "writeEntry", "(Ljava/lang/String;CZ)V", (void *) t_PythonGenerator_writeEntry17 },
                { "writeEntry", "(Ljava/lang/String;IZ)V", (void *) t_PythonGenerator_writeEntry18 },
                { "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V", (void *) t_PythonGenerator_writeEntry19 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry20 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry21 },
                { "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonGenerator_writeEntry22 },
                { "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V", (void *) t_PythonGenerator_writeEntry23 },
                { "writeRawData", "(C)V", (void *) t_PythonGenerator_writeRawData24 },
                { "writeRawData", "(Ljava/lang/CharSequence;)V", (void *) t_PythonGenerator_writeRawData25 },
              };
              env->registerNatives(cls, methods, 26);
            }

            static PyObject *t_PythonGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonGenerator::wrap_Object(PythonGenerator(((t_PythonGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonGenerator_init_(t_PythonGenerator *self, PyObject *args, PyObject *kwds)
            {
              PythonGenerator object((jobject) NULL);

              INT_CALL(object = PythonGenerator());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonGenerator_finalize(t_PythonGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonGenerator_pythonExtension(t_PythonGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonGenerator_close0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "close", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_dateToCalendarString1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToCalendarString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToCalendarString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_dateToString3(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "dateToString", "iiiiid", (int) a0, (int) a1, (int) a2, (int) a3, (int) a4, (double) a5);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("dateToString", result);
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

            static jobject JNICALL t_PythonGenerator_doubleToString4(JNIEnv *jenv, jobject jobj, jdouble a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "doubleToString", "d", (double) a0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("doubleToString", result);
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

            static void JNICALL t_PythonGenerator_endMessage5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_enterSection6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "enterSection", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_exitSection7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "exitSection", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("exitSection", result);
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

            static jobject JNICALL t_PythonGenerator_getFormat8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static jobject JNICALL t_PythonGenerator_getOutputName9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getOutputName", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getOutputName", result);
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

            static void JNICALL t_PythonGenerator_newLine10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *result = PyObject_CallMethod(obj, "newLine", "");
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonGenerator_siToCcsdsName12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "siToCcsdsName", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("siToCcsdsName", result);
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

            static void JNICALL t_PythonGenerator_startMessage13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonGenerator_unitsListToString14(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "unitsListToString", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("unitsListToString", result);
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

            static void JNICALL t_PythonGenerator_writeComments15(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Enum::wrap_Object(::java::lang::Enum(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry17(JNIEnv *jenv, jobject jobj, jobject a0, jchar a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = c2p(a1);;
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry18(JNIEnv *jenv, jobject jobj, jobject a0, jint a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OiO", o0, (int) a1, o2);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
              PyObject *o2 = (a2 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry20(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::java::lang::t_Double::wrap_Object(::java::lang::Double(a1));
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry21(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry22(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OdOO", o0, (double) a1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeEntry23(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3, jboolean a4)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(::org::orekit::files::ccsds::definitions::TimeConverter(a1));
              PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *o4 = (a4 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOOO", o0, o1, o2, o3, o4);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData24(JNIEnv *jenv, jobject jobj, jchar a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = c2p(a0);;
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonGenerator_writeRawData25(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonGenerator::mids$[PythonGenerator::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::lang::t_CharSequence::wrap_Object(::java::lang::CharSequence(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeRawData", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonGenerator_get__self(t_PythonGenerator *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999Max::class$ = NULL;
              jmethodID *Alfriend1999Max::mids$ = NULL;
              bool Alfriend1999Max::live$ = false;

              jclass Alfriend1999Max::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_computeValue_c564d6ace53a5934] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_f56548599899c286] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999Max::Alfriend1999Max() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble Alfriend1999Max::computeValue(jdouble a0, jdouble a1, jdouble a2) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeValue_c564d6ace53a5934], a0, a1, a2);
              }

              ::org::hipparchus::CalculusFieldElement Alfriend1999Max::computeValue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeValue_f56548599899c286], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999Max::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_830fb81b25fc6619]));
              }

              jboolean Alfriend1999Max::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db]);
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
              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data);
              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data);
              static PyGetSetDef t_Alfriend1999Max__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999Max, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999Max, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999Max__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999Max, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, computeValue, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999Max)[] = {
                { Py_tp_methods, t_Alfriend1999Max__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999Max_init_ },
                { Py_tp_getset, t_Alfriend1999Max__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999Max)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999Max, t_Alfriend1999Max, Alfriend1999Max);

              void t_Alfriend1999Max::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999Max), &PY_TYPE_DEF(Alfriend1999Max), module, "Alfriend1999Max", 0);
              }

              void t_Alfriend1999Max::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "class_", make_descriptor(Alfriend1999Max::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "wrapfn_", make_descriptor(t_Alfriend1999Max::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999Max::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999Max::wrap_Object(Alfriend1999Max(((t_Alfriend1999Max *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999Max::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999Max object((jobject) NULL);

                INT_CALL(object = Alfriend1999Max());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble result;

                    if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
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
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeValue", args);
                return NULL;
              }

              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data)
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
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *UnivariateStatistic::class$ = NULL;
        jmethodID *UnivariateStatistic::mids$ = NULL;
        bool UnivariateStatistic::live$ = false;

        jclass UnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/UnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copy_00705cc7a411fc09] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "evaluate", "([D)D");
            mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateStatistic UnivariateStatistic::copy() const
        {
          return UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_00705cc7a411fc09]));
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_f05cb8c6dfd5e0b9], a0.this$);
        }

        jdouble UnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
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
        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self);
        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args);

        static PyMethodDef t_UnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_UnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateStatistic, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateStatistic)[] = {
          { Py_tp_methods, t_UnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::util::MathArrays$Function),
          NULL
        };

        DEFINE_TYPE(UnivariateStatistic, t_UnivariateStatistic, UnivariateStatistic);

        void t_UnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateStatistic), &PY_TYPE_DEF(UnivariateStatistic), module, "UnivariateStatistic", 0);
        }

        void t_UnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "class_", make_descriptor(UnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "wrapfn_", make_descriptor(t_UnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_UnivariateStatistic::wrap_Object(UnivariateStatistic(((t_UnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_UnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateStatistic_copy(t_UnivariateStatistic *self)
        {
          UnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_UnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_UnivariateStatistic_evaluate(t_UnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
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
          }

          return callSuper(PY_TYPE(UnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencySmoother.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencySmoother::class$ = NULL;
          jmethodID *SingleFrequencySmoother::mids$ = NULL;
          bool SingleFrequencySmoother::live$ = false;

          jclass SingleFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_37ca915d2783a418] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/MeasurementType;DID)V");
              mids$[mid_copyObservationData_325a244031154856] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_0641b178f2aabfe4] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter;");
              mids$[mid_filterDataSet_fc4b499ed0c77944] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_33636af8c0b8305c] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_33636af8c0b8305c] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencySmoother::SingleFrequencySmoother(const ::org::orekit::gnss::MeasurementType & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_37ca915d2783a418, a0.this$, a1, a2, a3)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_325a244031154856], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter SingleFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::SatelliteSystem & a2) const
          {
            return ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_0641b178f2aabfe4], a0.this$, a1.this$, a2.this$));
          }

          void SingleFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_fc4b499ed0c77944], a0.this$, a1.this$, a2, a3.this$);
          }

          ::java::util::HashMap SingleFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_33636af8c0b8305c]));
          }

          ::java::util::HashMap SingleFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_33636af8c0b8305c]));
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
          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg);
          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args);
          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self);
          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data);
          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data);
          static PyGetSetDef t_SingleFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_SingleFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SingleFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_SingleFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_SingleFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencySmoother)[] = {
            { Py_tp_methods, t_SingleFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencySmoother_init_ },
            { Py_tp_getset, t_SingleFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleFrequencySmoother, t_SingleFrequencySmoother, SingleFrequencySmoother);

          void t_SingleFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencySmoother), &PY_TYPE_DEF(SingleFrequencySmoother), module, "SingleFrequencySmoother", 0);
          }

          void t_SingleFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "class_", make_descriptor(SingleFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "wrapfn_", make_descriptor(t_SingleFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencySmoother::wrap_Object(SingleFrequencySmoother(((t_SingleFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencySmoother_init_(t_SingleFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::MeasurementType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jdouble a3;
            SingleFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "KDID", ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_MeasurementType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = SingleFrequencySmoother(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencySmoother_copyObservationData(t_SingleFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_createFilter(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::estimation::measurements::filtering::SingleFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2));
              return ::org::orekit::estimation::measurements::filtering::t_SingleFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_filterDataSet(t_SingleFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KKIK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_SingleFrequencySmoother_getFilteredDataMap(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_SingleFrequencySmoother_getMapFilters(t_SingleFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(SingleFrequencyHatchFilter));
          }

          static PyObject *t_SingleFrequencySmoother_get__filteredDataMap(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_SingleFrequencySmoother_get__mapFilters(t_SingleFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
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
          mids$[mid_init$_ae772aa1e16db643] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_e6d4d3215c30992a] = env->getMethodID(cls, "getB", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCenter_5791f80683b5227e] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getCenterOfCurvature_5e94b047a6786e99] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_5791f80683b5227e] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getV_5791f80683b5227e] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pointAt_3023f195d3eecf7e] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_projectToEllipse_dc7eea29a4d4ad51] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_projectToEllipse_5e94b047a6786e99] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toPlane_cc9be632777be51e] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
          mids$[mid_toSpace_f08c9c2e7b3f66a1] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEllipse::FieldEllipse(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae772aa1e16db643, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEllipse::getB() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_e6d4d3215c30992a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCenter_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_5e94b047a6786e99], a0.this$));
      }

      ::org::orekit::frames::Frame FieldEllipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getU_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getV_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_3023f195d3eecf7e], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldEllipse::projectToEllipse(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_dc7eea29a4d4ad51], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_5e94b047a6786e99], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::FieldVector2D FieldEllipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_toPlane_cc9be632777be51e], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldEllipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toSpace_f08c9c2e7b3f66a1], a0.this$));
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
#include "org/orekit/estimation/iod/IodLambert.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_3d88ae3536292b72] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_05eda5baa04a775c] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_d907663807aaa6a2] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLambert::IodLambert(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::PV & a3, const ::org::orekit::estimation::measurements::PV & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_3d88ae3536292b72], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::Position & a3, const ::org::orekit::estimation::measurements::Position & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_05eda5baa04a775c], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_d907663807aaa6a2], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$));
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
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/util/Map$Entry.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToGroundMapping::class$ = NULL;
          jmethodID *SensorToGroundMapping::mids$ = NULL;
          bool SensorToGroundMapping::live$ = false;

          jclass SensorToGroundMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToGroundMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_0a00c01ab4d2ca50] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getMapping_e9e1a6780fe94297] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_0090f7797e403f43] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_0090f7797e403f43] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

          void SensorToGroundMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_0a00c01ab4d2ca50], a0.this$, a1.this$);
          }

          ::java::util::Set SensorToGroundMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_e9e1a6780fe94297]));
          }

          ::java::lang::String SensorToGroundMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_0090f7797e403f43]));
          }

          ::java::lang::String SensorToGroundMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_0090f7797e403f43]));
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args);
          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data);
          static PyGetSetDef t_SensorToGroundMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorToGroundMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, sensorName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToGroundMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToGroundMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToGroundMapping)[] = {
            { Py_tp_methods, t_SensorToGroundMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToGroundMapping_init_ },
            { Py_tp_getset, t_SensorToGroundMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToGroundMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToGroundMapping, t_SensorToGroundMapping, SensorToGroundMapping);

          void t_SensorToGroundMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToGroundMapping), &PY_TYPE_DEF(SensorToGroundMapping), module, "SensorToGroundMapping", 0);
          }

          void t_SensorToGroundMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "class_", make_descriptor(SensorToGroundMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "wrapfn_", make_descriptor(t_SensorToGroundMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToGroundMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToGroundMapping::wrap_Object(SensorToGroundMapping(((t_SensorToGroundMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToGroundMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorToGroundMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToGroundMapping(a0, a1));
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

          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonBatchLSObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonBatchLSObserver::class$ = NULL;
        jmethodID *PythonBatchLSObserver::mids$ = NULL;
        bool PythonBatchLSObserver::live$ = false;

        jclass PythonBatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonBatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_385d95579a122c42] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonBatchLSObserver::PythonBatchLSObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonBatchLSObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonBatchLSObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonBatchLSObserver::pythonExtension(jlong a0) const
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
      namespace leastsquares {
        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self);
        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args);
        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7);
        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data);
        static PyGetSetDef t_PythonBatchLSObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonBatchLSObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonBatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_PythonBatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonBatchLSObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonBatchLSObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonBatchLSObserver)[] = {
          { Py_tp_methods, t_PythonBatchLSObserver__methods_ },
          { Py_tp_init, (void *) t_PythonBatchLSObserver_init_ },
          { Py_tp_getset, t_PythonBatchLSObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonBatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonBatchLSObserver, t_PythonBatchLSObserver, PythonBatchLSObserver);

        void t_PythonBatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonBatchLSObserver), &PY_TYPE_DEF(PythonBatchLSObserver), module, "PythonBatchLSObserver", 1);
        }

        void t_PythonBatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "class_", make_descriptor(PythonBatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "wrapfn_", make_descriptor(t_PythonBatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBatchLSObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonBatchLSObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V", (void *) t_PythonBatchLSObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonBatchLSObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonBatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonBatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_PythonBatchLSObserver::wrap_Object(PythonBatchLSObserver(((t_PythonBatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonBatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonBatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonBatchLSObserver_init_(t_PythonBatchLSObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonBatchLSObserver object((jobject) NULL);

          INT_CALL(object = PythonBatchLSObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonBatchLSObserver_finalize(t_PythonBatchLSObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonBatchLSObserver_pythonExtension(t_PythonBatchLSObserver *self, PyObject *args)
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

        static void JNICALL t_PythonBatchLSObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2, jobject a3, jobject a4, jobject a5, jobject a6, jobject a7)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::orbits::t_Orbit::wrap_jobject);
          PyObject *o3 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a3));
          PyObject *o4 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a4));
          PyObject *o5 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a5));
          PyObject *o6 = ::org::orekit::estimation::measurements::t_EstimationsProvider::wrap_Object(::org::orekit::estimation::measurements::EstimationsProvider(a6));
          PyObject *o7 = ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(a7));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "iiOOOOOO", (int) a0, (int) a1, o2, o3, o4, o5, o6, o7);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          Py_DECREF(o6);
          Py_DECREF(o7);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonBatchLSObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonBatchLSObserver_get__self(t_PythonBatchLSObserver *self, void *data)
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
#include "org/orekit/rugged/errors/DumpReplayer.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer::class$ = NULL;
        jmethodID *DumpReplayer::mids$ = NULL;
        bool DumpReplayer::live$ = false;

        jclass DumpReplayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createRugged_aadda624fd91f07a] = env->getMethodID(cls, "createRugged", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_execute_94b9397060e1970f] = env->getMethodID(cls, "execute", "(Lorg/orekit/rugged/api/Rugged;)[Lorg/orekit/rugged/errors/DumpReplayer$Result;");
            mids$[mid_parse_46e66c77c82c9a6b] = env->getMethodID(cls, "parse", "(Ljava/io/File;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DumpReplayer::DumpReplayer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::rugged::api::Rugged DumpReplayer::createRugged() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_createRugged_aadda624fd91f07a]));
        }

        JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > DumpReplayer::execute(const ::org::orekit::rugged::api::Rugged & a0) const
        {
          return JArray< ::org::orekit::rugged::errors::DumpReplayer$Result >(env->callObjectMethod(this$, mids$[mid_execute_94b9397060e1970f], a0.this$));
        }

        void DumpReplayer::parse(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_parse_46e66c77c82c9a6b], a0.this$);
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
        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self);
        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg);
        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg);

        static PyMethodDef t_DumpReplayer__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer, createRugged, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer, execute, METH_O),
          DECLARE_METHOD(t_DumpReplayer, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer)[] = {
          { Py_tp_methods, t_DumpReplayer__methods_ },
          { Py_tp_init, (void *) t_DumpReplayer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer, t_DumpReplayer, DumpReplayer);

        void t_DumpReplayer::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer), &PY_TYPE_DEF(DumpReplayer), module, "DumpReplayer", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "Result", make_descriptor(&PY_TYPE_DEF(DumpReplayer$Result)));
        }

        void t_DumpReplayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "class_", make_descriptor(DumpReplayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "wrapfn_", make_descriptor(t_DumpReplayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer::wrap_Object(DumpReplayer(((t_DumpReplayer *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DumpReplayer_init_(t_DumpReplayer *self, PyObject *args, PyObject *kwds)
        {
          DumpReplayer object((jobject) NULL);

          INT_CALL(object = DumpReplayer());
          self->object = object;

          return 0;
        }

        static PyObject *t_DumpReplayer_createRugged(t_DumpReplayer *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.createRugged());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer_execute(t_DumpReplayer *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::Rugged a0((jobject) NULL);
          JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::api::Rugged::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.execute(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::rugged::errors::t_DumpReplayer$Result::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "execute", arg);
          return NULL;
        }

        static PyObject *t_DumpReplayer_parse(t_DumpReplayer *self, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(self->object.parse(a0));
            Py_RETURN_NONE;
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmData::class$ = NULL;
              jmethodID *ApmData::mids$ = NULL;
              bool ApmData::live$ = false;

              jclass ApmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a3b345dc2e5e217e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)V");
                  mids$[mid_addManeuver_2cacb852abdd9ab2] = env->getMethodID(cls, "addManeuver", "(Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)V");
                  mids$[mid_getAngularVelocityBlock_823b754c89de7444] = env->getMethodID(cls, "getAngularVelocityBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;");
                  mids$[mid_getAttitude_c9f7c61258637afb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                  mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEulerBlock_301234b29a78b283] = env->getMethodID(cls, "getEulerBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;");
                  mids$[mid_getInertiaBlock_088066ecce55e9da] = env->getMethodID(cls, "getInertiaBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;");
                  mids$[mid_getManeuver_772b477dd100a5e5] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;");
                  mids$[mid_getManeuvers_a6156df500549a58] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getNbManeuvers_f2f64475e4580546] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getQuaternionBlock_3c083987606cd635] = env->getMethodID(cls, "getQuaternionBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;");
                  mids$[mid_getSpinStabilizedBlock_dbe935df64fa91c5] = env->getMethodID(cls, "getSpinStabilizedBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;");
                  mids$[mid_hasManeuvers_e470b6d9e0d979db] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmData::ApmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a3, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a4, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a5, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3b345dc2e5e217e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              void ApmData::addManeuver(const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addManeuver_2cacb852abdd9ab2], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity ApmData::getAngularVelocityBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity(env->callObjectMethod(this$, mids$[mid_getAngularVelocityBlock_823b754c89de7444]));
              }

              ::org::orekit::attitudes::Attitude ApmData::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_c9f7c61258637afb], a0.this$, a1.this$));
              }

              ::java::util::List ApmData::getComments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
              }

              ::org::orekit::time::AbsoluteDate ApmData::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Euler ApmData::getEulerBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Euler(env->callObjectMethod(this$, mids$[mid_getEulerBlock_301234b29a78b283]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Inertia ApmData::getInertiaBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Inertia(env->callObjectMethod(this$, mids$[mid_getInertiaBlock_088066ecce55e9da]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver ApmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_772b477dd100a5e5], a0));
              }

              ::java::util::List ApmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_a6156df500549a58]));
              }

              jint ApmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_f2f64475e4580546]);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion ApmData::getQuaternionBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionBlock_3c083987606cd635]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized ApmData::getSpinStabilizedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized(env->callObjectMethod(this$, mids$[mid_getSpinStabilizedBlock_dbe935df64fa91c5]));
              }

              jboolean ApmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_e470b6d9e0d979db]);
              }

              void ApmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self);
              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args);
              static PyObject *t_ApmData_getComments(t_ApmData *self);
              static PyObject *t_ApmData_getEpoch(t_ApmData *self);
              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self);
              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self);
              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self);
              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self);
              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data);
              static PyGetSetDef t_ApmData__fields_[] = {
                DECLARE_GET_FIELD(t_ApmData, angularVelocityBlock),
                DECLARE_GET_FIELD(t_ApmData, comments),
                DECLARE_GET_FIELD(t_ApmData, epoch),
                DECLARE_GET_FIELD(t_ApmData, eulerBlock),
                DECLARE_GET_FIELD(t_ApmData, inertiaBlock),
                DECLARE_GET_FIELD(t_ApmData, maneuvers),
                DECLARE_GET_FIELD(t_ApmData, nbManeuvers),
                DECLARE_GET_FIELD(t_ApmData, quaternionBlock),
                DECLARE_GET_FIELD(t_ApmData, spinStabilizedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmData__methods_[] = {
                DECLARE_METHOD(t_ApmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, addManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getAngularVelocityBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_ApmData, getComments, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEulerBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getInertiaBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getQuaternionBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getSpinStabilizedBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmData)[] = {
                { Py_tp_methods, t_ApmData__methods_ },
                { Py_tp_init, (void *) t_ApmData_init_ },
                { Py_tp_getset, t_ApmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ApmData, t_ApmData, ApmData);

              void t_ApmData::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmData), &PY_TYPE_DEF(ApmData), module, "ApmData", 0);
              }

              void t_ApmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "class_", make_descriptor(ApmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "wrapfn_", make_descriptor(t_ApmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmData::initializeClass, 1)))
                  return NULL;
                return t_ApmData::wrap_Object(ApmData(((t_ApmData *) arg)->object.this$));
              }
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a6((jobject) NULL);
                ApmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = ApmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addManeuver(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(result);
              }

              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_ApmData_getComments(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getComments());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_ApmData_getEpoch(t_ApmData *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(result);
              }

              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(result);
              }

              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getManeuvers(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Maneuver));
              }

              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(result);
              }

              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(result);
              }

              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "validate", arg);
                return NULL;
              }

              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getComments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}

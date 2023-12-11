#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/RegulaFalsiSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RegulaFalsiSolver::class$ = NULL;
        jmethodID *RegulaFalsiSolver::mids$ = NULL;
        bool RegulaFalsiSolver::live$ = false;

        jclass RegulaFalsiSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RegulaFalsiSolver");

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

        RegulaFalsiSolver::RegulaFalsiSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}
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
        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args);
        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data);
        static PyGetSetDef t_RegulaFalsiSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RegulaFalsiSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegulaFalsiSolver__methods_[] = {
          DECLARE_METHOD(t_RegulaFalsiSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegulaFalsiSolver)[] = {
          { Py_tp_methods, t_RegulaFalsiSolver__methods_ },
          { Py_tp_init, (void *) t_RegulaFalsiSolver_init_ },
          { Py_tp_getset, t_RegulaFalsiSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegulaFalsiSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(RegulaFalsiSolver, t_RegulaFalsiSolver, RegulaFalsiSolver);
        PyObject *t_RegulaFalsiSolver::wrap_Object(const RegulaFalsiSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegulaFalsiSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegulaFalsiSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RegulaFalsiSolver), &PY_TYPE_DEF(RegulaFalsiSolver), module, "RegulaFalsiSolver", 0);
        }

        void t_RegulaFalsiSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "class_", make_descriptor(RegulaFalsiSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "wrapfn_", make_descriptor(t_RegulaFalsiSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegulaFalsiSolver::initializeClass, 1)))
            return NULL;
          return t_RegulaFalsiSolver::wrap_Object(RegulaFalsiSolver(((t_RegulaFalsiSolver *) arg)->object.this$));
        }
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegulaFalsiSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RegulaFalsiSolver object((jobject) NULL);

              INT_CALL(object = RegulaFalsiSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RegulaFalsiSolver(a0));
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
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1));
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
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1, a2));
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
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Min::class$ = NULL;
          jmethodID *Min::mids$ = NULL;
          bool Min::live$ = false;

          jclass Min::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Min");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_11c6bf2c32416047] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Min;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_f2aeeade3fab31c1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Min;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Min::Min() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void Min::aggregate(const Min & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_11c6bf2c32416047], a0.this$);
          }

          void Min::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Min Min::copy() const
          {
            return Min(env->callObjectMethod(this$, mids$[mid_copy_f2aeeade3fab31c1]));
          }

          jdouble Min::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jlong Min::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Min::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Min::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg);
          static PyObject *t_Min_clear(t_Min *self, PyObject *args);
          static PyObject *t_Min_copy(t_Min *self, PyObject *args);
          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args);
          static PyObject *t_Min_getN(t_Min *self, PyObject *args);
          static PyObject *t_Min_getResult(t_Min *self, PyObject *args);
          static PyObject *t_Min_increment(t_Min *self, PyObject *args);
          static PyObject *t_Min_get__n(t_Min *self, void *data);
          static PyObject *t_Min_get__result(t_Min *self, void *data);
          static PyGetSetDef t_Min__fields_[] = {
            DECLARE_GET_FIELD(t_Min, n),
            DECLARE_GET_FIELD(t_Min, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Min__methods_[] = {
            DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, aggregate, METH_O),
            DECLARE_METHOD(t_Min, clear, METH_VARARGS),
            DECLARE_METHOD(t_Min, copy, METH_VARARGS),
            DECLARE_METHOD(t_Min, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Min, getN, METH_VARARGS),
            DECLARE_METHOD(t_Min, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Min, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
            { Py_tp_methods, t_Min__methods_ },
            { Py_tp_init, (void *) t_Min_init_ },
            { Py_tp_getset, t_Min__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Min)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Min, t_Min, Min);

          void t_Min::install(PyObject *module)
          {
            installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
          }

          void t_Min::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Min::initializeClass, 1)))
              return NULL;
            return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
          }
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Min::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
          {
            Min object((jobject) NULL);

            INT_CALL(object = Min());
            self->object = object;

            return 0;
          }

          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg)
          {
            Min a0((jobject) NULL);

            if (!parseArg(arg, "k", Min::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Min_clear(t_Min *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Min_copy(t_Min *self, PyObject *args)
          {
            Min result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Min::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args)
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

            return callSuper(PY_TYPE(Min), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Min_getN(t_Min *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Min_getResult(t_Min *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Min_increment(t_Min *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Min_get__n(t_Min *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Min_get__result(t_Min *self, void *data)
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
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BoundedAttitudeProvider::class$ = NULL;
      jmethodID *BoundedAttitudeProvider::mids$ = NULL;
      bool BoundedAttitudeProvider::live$ = false;

      jclass BoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
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
      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data);
      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_BoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_BoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_BoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(BoundedAttitudeProvider, t_BoundedAttitudeProvider, BoundedAttitudeProvider);

      void t_BoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedAttitudeProvider), &PY_TYPE_DEF(BoundedAttitudeProvider), module, "BoundedAttitudeProvider", 0);
      }

      void t_BoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "class_", make_descriptor(BoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "wrapfn_", make_descriptor(t_BoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_BoundedAttitudeProvider::wrap_Object(BoundedAttitudeProvider(((t_BoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
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
            mids$[mid_init$_631cad984dc812e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimaryStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getPrimaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondaryStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getSecondaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TurnAroundRange::TurnAroundRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_631cad984dc812e4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getPrimaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimaryStation_2161f2a4a8c885ec]));
        }

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getSecondaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondaryStation_2161f2a4a8c885ec]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldRombergIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldRombergIntegrator::class$ = NULL;
        jmethodID *FieldRombergIntegrator::mids$ = NULL;
        bool FieldRombergIntegrator::live$ = false;
        jint FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldRombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldRombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_54078aff55a90bb9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_613c8f46c659f636] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

        FieldRombergIntegrator::FieldRombergIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_54078aff55a90bb9, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args);
        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data);
        static PyGetSetDef t_FieldRombergIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldRombergIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldRombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldRombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldRombergIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldRombergIntegrator)[] = {
          { Py_tp_methods, t_FieldRombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldRombergIntegrator_init_ },
          { Py_tp_getset, t_FieldRombergIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldRombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldRombergIntegrator, t_FieldRombergIntegrator, FieldRombergIntegrator);
        PyObject *t_FieldRombergIntegrator::wrap_Object(const FieldRombergIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldRombergIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldRombergIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldRombergIntegrator *self = (t_FieldRombergIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldRombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldRombergIntegrator), &PY_TYPE_DEF(FieldRombergIntegrator), module, "FieldRombergIntegrator", 0);
        }

        void t_FieldRombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "class_", make_descriptor(FieldRombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "wrapfn_", make_descriptor(t_FieldRombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldRombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(FieldRombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldRombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldRombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldRombergIntegrator::wrap_Object(FieldRombergIntegrator(((t_FieldRombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldRombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldRombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldRombergIntegrator_of_(t_FieldRombergIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldRombergIntegrator_init_(t_FieldRombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldRombergIntegrator(a0));
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
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2));
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
              FieldRombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldRombergIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldRombergIntegrator_get__parameters_(t_FieldRombergIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TAIUTCDatFilesLoader.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader::mids$ = NULL;
      bool TAIUTCDatFilesLoader::live$ = false;
      ::java::lang::String *TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass TAIUTCDatFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}

      ::java::util::List TAIUTCDatFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_0d9551367f7ecdef]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self);

      static PyMethodDef t_TAIUTCDatFilesLoader__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader, t_TAIUTCDatFilesLoader, TAIUTCDatFilesLoader);

      void t_TAIUTCDatFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader), &PY_TYPE_DEF(TAIUTCDatFilesLoader), module, "TAIUTCDatFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser)));
      }

      void t_TAIUTCDatFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "class_", make_descriptor(TAIUTCDatFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(TAIUTCDatFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*TAIUTCDatFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_TAIUTCDatFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader::wrap_Object(TAIUTCDatFilesLoader(((t_TAIUTCDatFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader_init_(t_TAIUTCDatFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            TAIUTCDatFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TAIUTCDatFilesLoader(a0, a1));
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

      static PyObject *t_TAIUTCDatFilesLoader_loadOffsets(t_TAIUTCDatFilesLoader *self)
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
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *Tide::class$ = NULL;
          jmethodID *Tide::mids$ = NULL;
          bool Tide::live$ = false;
          Tide *Tide::K1 = NULL;
          Tide *Tide::K2 = NULL;
          Tide *Tide::M2 = NULL;
          Tide *Tide::MF = NULL;
          Tide *Tide::MM = NULL;
          Tide *Tide::N2 = NULL;
          Tide *Tide::O1 = NULL;
          Tide *Tide::P1 = NULL;
          Tide *Tide::Q1 = NULL;
          Tide *Tide::S2 = NULL;
          Tide *Tide::SSA = NULL;

          jclass Tide::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/Tide");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_init$_b02282271d2e33e3] = env->getMethodID(cls, "<init>", "(IIIIII)V");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDelaunayMultipliers_1b41cf9ebf653611] = env->getMethodID(cls, "getDelaunayMultipliers", "()[I");
              mids$[mid_getDoodsonMultipliers_1b41cf9ebf653611] = env->getMethodID(cls, "getDoodsonMultipliers", "()[I");
              mids$[mid_getDoodsonNumber_412668abc8d889e9] = env->getMethodID(cls, "getDoodsonNumber", "()I");
              mids$[mid_getPhase_645226ccf45fca25] = env->getMethodID(cls, "getPhase", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getRate_645226ccf45fca25] = env->getMethodID(cls, "getRate", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getTauMultiplier_412668abc8d889e9] = env->getMethodID(cls, "getTauMultiplier", "()I");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              K1 = new Tide(env->getStaticObjectField(cls, "K1", "Lorg/orekit/models/earth/displacement/Tide;"));
              K2 = new Tide(env->getStaticObjectField(cls, "K2", "Lorg/orekit/models/earth/displacement/Tide;"));
              M2 = new Tide(env->getStaticObjectField(cls, "M2", "Lorg/orekit/models/earth/displacement/Tide;"));
              MF = new Tide(env->getStaticObjectField(cls, "MF", "Lorg/orekit/models/earth/displacement/Tide;"));
              MM = new Tide(env->getStaticObjectField(cls, "MM", "Lorg/orekit/models/earth/displacement/Tide;"));
              N2 = new Tide(env->getStaticObjectField(cls, "N2", "Lorg/orekit/models/earth/displacement/Tide;"));
              O1 = new Tide(env->getStaticObjectField(cls, "O1", "Lorg/orekit/models/earth/displacement/Tide;"));
              P1 = new Tide(env->getStaticObjectField(cls, "P1", "Lorg/orekit/models/earth/displacement/Tide;"));
              Q1 = new Tide(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/models/earth/displacement/Tide;"));
              S2 = new Tide(env->getStaticObjectField(cls, "S2", "Lorg/orekit/models/earth/displacement/Tide;"));
              SSA = new Tide(env->getStaticObjectField(cls, "SSA", "Lorg/orekit/models/earth/displacement/Tide;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tide::Tide(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

          Tide::Tide(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b02282271d2e33e3, a0, a1, a2, a3, a4, a5)) {}

          jboolean Tide::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          JArray< jint > Tide::getDelaunayMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDelaunayMultipliers_1b41cf9ebf653611]));
          }

          JArray< jint > Tide::getDoodsonMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDoodsonMultipliers_1b41cf9ebf653611]));
          }

          jint Tide::getDoodsonNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodsonNumber_412668abc8d889e9]);
          }

          jdouble Tide::getPhase(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_645226ccf45fca25], a0.this$);
          }

          jdouble Tide::getRate(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRate_645226ccf45fca25], a0.this$);
          }

          jint Tide::getTauMultiplier() const
          {
            return env->callIntMethod(this$, mids$[mid_getTauMultiplier_412668abc8d889e9]);
          }

          jint Tide::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
        namespace displacement {
          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self);
          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getTauMultiplier(t_Tide *self);
          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data);
          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data);
          static PyGetSetDef t_Tide__fields_[] = {
            DECLARE_GET_FIELD(t_Tide, delaunayMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonNumber),
            DECLARE_GET_FIELD(t_Tide, tauMultiplier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tide__methods_[] = {
            DECLARE_METHOD(t_Tide, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, equals, METH_VARARGS),
            DECLARE_METHOD(t_Tide, getDelaunayMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonNumber, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getPhase, METH_O),
            DECLARE_METHOD(t_Tide, getRate, METH_O),
            DECLARE_METHOD(t_Tide, getTauMultiplier, METH_NOARGS),
            DECLARE_METHOD(t_Tide, hashCode, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tide)[] = {
            { Py_tp_methods, t_Tide__methods_ },
            { Py_tp_init, (void *) t_Tide_init_ },
            { Py_tp_getset, t_Tide__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tide)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tide, t_Tide, Tide);

          void t_Tide::install(PyObject *module)
          {
            installType(&PY_TYPE(Tide), &PY_TYPE_DEF(Tide), module, "Tide", 0);
          }

          void t_Tide::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "class_", make_descriptor(Tide::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "wrapfn_", make_descriptor(t_Tide::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "boxfn_", make_descriptor(boxObject));
            env->getClass(Tide::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K1", make_descriptor(t_Tide::wrap_Object(*Tide::K1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K2", make_descriptor(t_Tide::wrap_Object(*Tide::K2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "M2", make_descriptor(t_Tide::wrap_Object(*Tide::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MF", make_descriptor(t_Tide::wrap_Object(*Tide::MF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MM", make_descriptor(t_Tide::wrap_Object(*Tide::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "N2", make_descriptor(t_Tide::wrap_Object(*Tide::N2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "O1", make_descriptor(t_Tide::wrap_Object(*Tide::O1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "P1", make_descriptor(t_Tide::wrap_Object(*Tide::P1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "Q1", make_descriptor(t_Tide::wrap_Object(*Tide::Q1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "S2", make_descriptor(t_Tide::wrap_Object(*Tide::S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "SSA", make_descriptor(t_Tide::wrap_Object(*Tide::SSA)));
          }

          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tide::initializeClass, 1)))
              return NULL;
            return t_Tide::wrap_Object(Tide(((t_Tide *) arg)->object.this$));
          }
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tide::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = Tide(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                jint a5;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Tide(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelaunayMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoodsonMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRate", arg);
            return NULL;
          }

          static PyObject *t_Tide_getTauMultiplier(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTauMultiplier());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelaunayMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoodsonMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTauMultiplier());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularRadioRefractionModifier::class$ = NULL;
          jmethodID *AngularRadioRefractionModifier::mids$ = NULL;
          bool AngularRadioRefractionModifier::live$ = false;

          jclass AngularRadioRefractionModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6d9d05db5ec5612f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/AtmosphericRefractionModel;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRadioRefractionModifier::AngularRadioRefractionModifier(const ::org::orekit::models::AtmosphericRefractionModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d9d05db5ec5612f, a0.this$)) {}

          ::java::util::List AngularRadioRefractionModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void AngularRadioRefractionModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self);
          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data);
          static PyGetSetDef t_AngularRadioRefractionModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRadioRefractionModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRadioRefractionModifier__methods_[] = {
            DECLARE_METHOD(t_AngularRadioRefractionModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRadioRefractionModifier)[] = {
            { Py_tp_methods, t_AngularRadioRefractionModifier__methods_ },
            { Py_tp_init, (void *) t_AngularRadioRefractionModifier_init_ },
            { Py_tp_getset, t_AngularRadioRefractionModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRadioRefractionModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularRadioRefractionModifier, t_AngularRadioRefractionModifier, AngularRadioRefractionModifier);

          void t_AngularRadioRefractionModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRadioRefractionModifier), &PY_TYPE_DEF(AngularRadioRefractionModifier), module, "AngularRadioRefractionModifier", 0);
          }

          void t_AngularRadioRefractionModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "class_", make_descriptor(AngularRadioRefractionModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "wrapfn_", make_descriptor(t_AngularRadioRefractionModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRadioRefractionModifier::initializeClass, 1)))
              return NULL;
            return t_AngularRadioRefractionModifier::wrap_Object(AngularRadioRefractionModifier(((t_AngularRadioRefractionModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRadioRefractionModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
            AngularRadioRefractionModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularRadioRefractionModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg)
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

          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data)
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
#include "org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonFieldAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonFieldAdditionalDerivativesProvider::live$ = false;

        jclass PythonFieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_33912551ee5141fb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_4fda3059ab91dbfe] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdditionalDerivativesProvider::PythonFieldAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldAdditionalDerivativesProvider::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonFieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, self),
          DECLARE_GET_FIELD(t_PythonFieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonFieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonFieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdditionalDerivativesProvider, t_PythonFieldAdditionalDerivativesProvider, PythonFieldAdditionalDerivativesProvider);
        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_Object(const PythonFieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdditionalDerivativesProvider *self = (t_PythonFieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonFieldAdditionalDerivativesProvider), module, "PythonFieldAdditionalDerivativesProvider", 1);
        }

        void t_PythonFieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "class_", make_descriptor(PythonFieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;", (void *) t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonFieldAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdditionalDerivativesProvider::wrap_Object(PythonFieldAdditionalDerivativesProvider(((t_PythonFieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_of_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdditionalDerivativesProvider_init_(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonFieldAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_finalize(t_PythonFieldAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_pythonExtension(t_PythonFieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldCombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldCombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonFieldAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

        static jobject JNICALL t_PythonFieldAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonFieldAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonFieldAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalDerivativesProvider::mids$[PythonFieldAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__self(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
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
        static PyObject *t_PythonFieldAdditionalDerivativesProvider_get__parameters_(t_PythonFieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSNavigationMessage::class$ = NULL;
            jmethodID *IRNSSNavigationMessage::mids$ = NULL;
            bool IRNSSNavigationMessage::live$ = false;

            jclass IRNSSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIODEC_412668abc8d889e9] = env->getMethodID(cls, "getIODEC", "()I");
                mids$[mid_getSvHealth_557b8123390d8d0c] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_getTGD_557b8123390d8d0c] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getURA_557b8123390d8d0c] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setIODEC_10f281d777284cea] = env->getMethodID(cls, "setIODEC", "(D)V");
                mids$[mid_setSvHealth_10f281d777284cea] = env->getMethodID(cls, "setSvHealth", "(D)V");
                mids$[mid_setTGD_10f281d777284cea] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setURA_10f281d777284cea] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSNavigationMessage::IRNSSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jint IRNSSNavigationMessage::getIODEC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODEC_412668abc8d889e9]);
            }

            jdouble IRNSSNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_557b8123390d8d0c]);
            }

            jdouble IRNSSNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_557b8123390d8d0c]);
            }

            jdouble IRNSSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_557b8123390d8d0c]);
            }

            void IRNSSNavigationMessage::setIODEC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODEC_10f281d777284cea], a0);
            }

            void IRNSSNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_10f281d777284cea], a0);
            }

            void IRNSSNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_10f281d777284cea], a0);
            }

            void IRNSSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_10f281d777284cea], a0);
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
            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self);
            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg);
            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data);
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, iODEC),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_IRNSSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_IRNSSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getIODEC, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setIODEC, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_IRNSSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSNavigationMessage)[] = {
              { Py_tp_methods, t_IRNSSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_IRNSSNavigationMessage_init_ },
              { Py_tp_getset, t_IRNSSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(IRNSSNavigationMessage, t_IRNSSNavigationMessage, IRNSSNavigationMessage);

            void t_IRNSSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSNavigationMessage), &PY_TYPE_DEF(IRNSSNavigationMessage), module, "IRNSSNavigationMessage", 0);
            }

            void t_IRNSSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "class_", make_descriptor(IRNSSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "wrapfn_", make_descriptor(t_IRNSSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_IRNSSNavigationMessage::wrap_Object(IRNSSNavigationMessage(((t_IRNSSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_IRNSSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSNavigationMessage_init_(t_IRNSSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              IRNSSNavigationMessage object((jobject) NULL);

              INT_CALL(object = IRNSSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSNavigationMessage_getIODEC(t_IRNSSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODEC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getSvHealth(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getTGD(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_getURA(t_IRNSSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_IRNSSNavigationMessage_setIODEC(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODEC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODEC", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setSvHealth(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setTGD(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_setURA(t_IRNSSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_IRNSSNavigationMessage_get__iODEC(t_IRNSSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODEC());
              return PyLong_FromLong((long) value);
            }
            static int t_IRNSSNavigationMessage_set__iODEC(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODEC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODEC", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__svHealth(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__svHealth(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__tGD(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__tGD(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }

            static PyObject *t_IRNSSNavigationMessage_get__uRA(t_IRNSSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_IRNSSNavigationMessage_set__uRA(t_IRNSSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateModifierUtil::class$ = NULL;
          jmethodID *RangeRateModifierUtil::mids$ = NULL;
          bool RangeRateModifierUtil::live$ = false;

          jclass RangeRateModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil");

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
        namespace modifiers {
          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeRateModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeRateModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateModifierUtil)[] = {
            { Py_tp_methods, t_RangeRateModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeRateModifierUtil, t_RangeRateModifierUtil, RangeRateModifierUtil);

          void t_RangeRateModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateModifierUtil), &PY_TYPE_DEF(RangeRateModifierUtil), module, "RangeRateModifierUtil", 0);
          }

          void t_RangeRateModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "class_", make_descriptor(RangeRateModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "wrapfn_", make_descriptor(t_RangeRateModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeRateModifierUtil::wrap_Object(RangeRateModifierUtil(((t_RangeRateModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeRateModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateModifierUtil::initializeClass, 0))
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesRangeModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesRangeModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_be9548a8a583a03d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesRangeModifier::OnBoardAntennaInterSatellitesRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be9548a8a583a03d, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void OnBoardAntennaInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesRangeModifier, t_OnBoardAntennaInterSatellitesRangeModifier, OnBoardAntennaInterSatellitesRangeModifier);

          void t_OnBoardAntennaInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesRangeModifier), module, "OnBoardAntennaInterSatellitesRangeModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesRangeModifier::wrap_Object(OnBoardAntennaInterSatellitesRangeModifier(((t_OnBoardAntennaInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AlignmentDetector::class$ = NULL;
        jmethodID *AlignmentDetector::mids$ = NULL;
        bool AlignmentDetector::live$ = false;

        jclass AlignmentDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AlignmentDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aed1e5e2c0bb6357] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_17eb6f22d90ddf81] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_4bdbf08a39a739b6] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAlignAngle_557b8123390d8d0c] = env->getMethodID(cls, "getAlignAngle", "()D");
            mids$[mid_getPVCoordinatesProvider_dec199e86bf037eb] = env->getMethodID(cls, "getPVCoordinatesProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_9a047e0db722d0f0] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AlignmentDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlignmentDetector::AlignmentDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_aed1e5e2c0bb6357, a0.this$, a1.this$, a2)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_17eb6f22d90ddf81, a0, a1.this$, a2.this$, a3)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, jdouble a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_4bdbf08a39a739b6, a0, a1, a2.this$, a3)) {}

        jdouble AlignmentDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        jdouble AlignmentDetector::getAlignAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlignAngle_557b8123390d8d0c]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AlignmentDetector::getPVCoordinatesProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVCoordinatesProvider_dec199e86bf037eb]));
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
        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args);
        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args);
        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data);
        static PyGetSetDef t_AlignmentDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AlignmentDetector, alignAngle),
          DECLARE_GET_FIELD(t_AlignmentDetector, pVCoordinatesProvider),
          DECLARE_GET_FIELD(t_AlignmentDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlignmentDetector__methods_[] = {
          DECLARE_METHOD(t_AlignmentDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, getAlignAngle, METH_NOARGS),
          DECLARE_METHOD(t_AlignmentDetector, getPVCoordinatesProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlignmentDetector)[] = {
          { Py_tp_methods, t_AlignmentDetector__methods_ },
          { Py_tp_init, (void *) t_AlignmentDetector_init_ },
          { Py_tp_getset, t_AlignmentDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlignmentDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AlignmentDetector, t_AlignmentDetector, AlignmentDetector);
        PyObject *t_AlignmentDetector::wrap_Object(const AlignmentDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlignmentDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlignmentDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AlignmentDetector), &PY_TYPE_DEF(AlignmentDetector), module, "AlignmentDetector", 0);
        }

        void t_AlignmentDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "class_", make_descriptor(AlignmentDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "wrapfn_", make_descriptor(t_AlignmentDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlignmentDetector::initializeClass, 1)))
            return NULL;
          return t_AlignmentDetector::wrap_Object(AlignmentDetector(((t_AlignmentDetector *) arg)->object.this$));
        }
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlignmentDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
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

        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AlignmentDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeShape::class$ = NULL;
            jmethodID *ScreenVolumeShape::mids$ = NULL;
            bool ScreenVolumeShape::live$ = false;
            ScreenVolumeShape *ScreenVolumeShape::BOX = NULL;
            ScreenVolumeShape *ScreenVolumeShape::ELLIPSOID = NULL;
            ScreenVolumeShape *ScreenVolumeShape::SPHERE = NULL;

            jclass ScreenVolumeShape::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_5f352255c09ab641] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_values_2909ac99bec82e1f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BOX = new ScreenVolumeShape(env->getStaticObjectField(cls, "BOX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                ELLIPSOID = new ScreenVolumeShape(env->getStaticObjectField(cls, "ELLIPSOID", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                SPHERE = new ScreenVolumeShape(env->getStaticObjectField(cls, "SPHERE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeShape ScreenVolumeShape::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeShape(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5f352255c09ab641], a0.this$));
            }

            JArray< ScreenVolumeShape > ScreenVolumeShape::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeShape >(env->callStaticObjectMethod(cls, mids$[mid_values_2909ac99bec82e1f]));
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
            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args);
            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data);
            static PyGetSetDef t_ScreenVolumeShape__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeShape, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeShape__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeShape, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeShape, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeShape)[] = {
              { Py_tp_methods, t_ScreenVolumeShape__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeShape__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeShape)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeShape, t_ScreenVolumeShape, ScreenVolumeShape);
            PyObject *t_ScreenVolumeShape::wrap_Object(const ScreenVolumeShape& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeShape::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeShape::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeShape), &PY_TYPE_DEF(ScreenVolumeShape), module, "ScreenVolumeShape", 0);
            }

            void t_ScreenVolumeShape::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "class_", make_descriptor(ScreenVolumeShape::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "wrapfn_", make_descriptor(t_ScreenVolumeShape::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeShape::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "BOX", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::BOX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "ELLIPSOID", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::ELLIPSOID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "SPHERE", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::SPHERE)));
            }

            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeShape::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeShape::wrap_Object(ScreenVolumeShape(((t_ScreenVolumeShape *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeShape::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeShape result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::valueOf(a0));
                return t_ScreenVolumeShape::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeShape > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeShape::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter::class$ = NULL;
              jmethodID *StreamingOemWriter::mids$ = NULL;
              bool StreamingOemWriter::live$ = false;

              jclass StreamingOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_945023d2895847d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)V");
                  mids$[mid_init$_1fcc7d486e776df4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Z)V");
                  mids$[mid_init$_d3cf3d1523bc52fe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;ZZ)V");
                  mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_878e48bbd4ba0a8e] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_945023d2895847d0, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1fcc7d486e776df4, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3cf3d1523bc52fe, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5)) {}

              void StreamingOemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter StreamingOemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_878e48bbd4ba0a8e]));
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
              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self);
              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self);

              static PyMethodDef t_StreamingOemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter, t_StreamingOemWriter, StreamingOemWriter);

              void t_StreamingOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter), &PY_TYPE_DEF(StreamingOemWriter), module, "StreamingOemWriter", 0);
              }

              void t_StreamingOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "class_", make_descriptor(StreamingOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter::wrap_Object(StreamingOemWriter(((t_StreamingOemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    jboolean a5;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_StreamingOemWriter$SegmentWriter::wrap_Object(result);
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
#include "org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonFieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonFieldManeuverTriggersResetter::mids$ = NULL;
          bool PythonFieldManeuverTriggersResetter::live$ = false;

          jclass PythonFieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_585702d5a402c590] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_4f12774dd382c6f4] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldManeuverTriggersResetter::PythonFieldManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonFieldManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonFieldManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonFieldManeuverTriggersResetter::pythonExtension(jlong a0) const
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
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self);
          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonFieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, self),
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonFieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonFieldManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonFieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldManeuverTriggersResetter, t_PythonFieldManeuverTriggersResetter, PythonFieldManeuverTriggersResetter);
          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_Object(const PythonFieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldManeuverTriggersResetter), &PY_TYPE_DEF(PythonFieldManeuverTriggersResetter), module, "PythonFieldManeuverTriggersResetter", 1);
          }

          void t_PythonFieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "class_", make_descriptor(PythonFieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonFieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldManeuverTriggersResetter_maneuverTriggered0 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldManeuverTriggersResetter_pythonDecRef1 },
              { "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldManeuverTriggersResetter_resetState2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonFieldManeuverTriggersResetter::wrap_Object(PythonFieldManeuverTriggersResetter(((t_PythonFieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonFieldManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "maneuverTriggered", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
#include "org/orekit/data/PythonDataProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataProvider::class$ = NULL;
      jmethodID *PythonDataProvider::mids$ = NULL;
      bool PythonDataProvider::live$ = false;

      jclass PythonDataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataProvider::PythonDataProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonDataProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonDataProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonDataProvider::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self);
      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args);
      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data);
      static PyGetSetDef t_PythonDataProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataProvider__methods_[] = {
        DECLARE_METHOD(t_PythonDataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataProvider)[] = {
        { Py_tp_methods, t_PythonDataProvider__methods_ },
        { Py_tp_init, (void *) t_PythonDataProvider_init_ },
        { Py_tp_getset, t_PythonDataProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataProvider, t_PythonDataProvider, PythonDataProvider);

      void t_PythonDataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataProvider), &PY_TYPE_DEF(PythonDataProvider), module, "PythonDataProvider", 1);
      }

      void t_PythonDataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "class_", make_descriptor(PythonDataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "wrapfn_", make_descriptor(t_PythonDataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDataProvider_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataProvider::initializeClass, 1)))
          return NULL;
        return t_PythonDataProvider::wrap_Object(PythonDataProvider(((t_PythonDataProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonDataProvider object((jobject) NULL);

        INT_CALL(object = PythonDataProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args)
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

      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *FieldVector2D::class$ = NULL;
          jmethodID *FieldVector2D::mids$ = NULL;
          bool FieldVector2D::live$ = false;

          jclass FieldVector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/FieldVector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5d9c9afaca2e497c] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_bcf9f009055fa7cf] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_89c5e29654abd357] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_8381bf74b93207e9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_4dc8c7bdeaed6301] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_b38c15e176684020] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_86b038dc2a3b6951] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_a31bf3c66cdfcc6d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_e70afecea812649d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_5a4f763679ba8e13] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_3d1493cfe84e2173] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_f2c0b506c01822e1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_74e431c9f301b967] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_524a8197793700f9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_5daf53e791529d67] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_453f66131fc0f21f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_5d2579297fa8ffe5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_e6c1bfb19c40c9b2] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_44c6c5fc3911075a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_558b19a8fae74bdd] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_77f323f07b8bd168] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_angle_8bf9ac6d5af9093e] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_81433ab386107ae4] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_d4c11fd1bc877351] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_8bf9ac6d5af9093e] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_446ef994e3ff29c5] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_b9b7f079c8a99b84] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_b397c28438b136a0] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_8bf9ac6d5af9093e] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_d4c11fd1bc877351] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_81433ab386107ae4] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_b9b7f079c8a99b84] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_b397c28438b136a0] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_8bf9ac6d5af9093e] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_d4c11fd1bc877351] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_81433ab386107ae4] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_b9b7f079c8a99b84] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_b397c28438b136a0] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_8bf9ac6d5af9093e] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_d4c11fd1bc877351] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_81433ab386107ae4] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_b9b7f079c8a99b84] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_b397c28438b136a0] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_8bf9ac6d5af9093e] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_d4c11fd1bc877351] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_81433ab386107ae4] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_b9b7f079c8a99b84] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_b397c28438b136a0] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getMinusI_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getMinusJ_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNaN_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNegativeInfinity_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNorm_613c8f46c659f636] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_613c8f46c659f636] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_613c8f46c659f636] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_613c8f46c659f636] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPlusJ_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPositiveInfinity_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getX_613c8f46c659f636] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_613c8f46c659f636] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_a1c9723a4641abb2] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_71d34b83d8e1fc5a] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_normalize_71d34b83d8e1fc5a] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_orientation_6b0a5db023ff2b0f] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_scalarMultiply_fd7065394a41d234] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_scalarMultiply_f4e8712141e606db] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_453f66131fc0f21f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_5d2579297fa8ffe5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_e6c1bfb19c40c9b2] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_558b19a8fae74bdd] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_44c6c5fc3911075a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_77f323f07b8bd168] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_toArray_41762fd4377ff26e] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_8d9667e91d8ffa97] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector2D_f681f2fc9cdfab57] = env->getMethodID(cls, "toVector2D", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector2D::FieldVector2D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d9c9afaca2e497c, a0.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcf9f009055fa7cf, a0, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89c5e29654abd357, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8381bf74b93207e9, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4dc8c7bdeaed6301, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b38c15e176684020, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86b038dc2a3b6951, a0, a1.this$, a2, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a31bf3c66cdfcc6d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e70afecea812649d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5a4f763679ba8e13, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d1493cfe84e2173, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2c0b506c01822e1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5, jdouble a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_74e431c9f301b967, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_524a8197793700f9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5daf53e791529d67, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D FieldVector2D::add(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_453f66131fc0f21f], a0.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_5d2579297fa8ffe5], a0.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_e6c1bfb19c40c9b2], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_44c6c5fc3911075a], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_558b19a8fae74bdd], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_77f323f07b8bd168], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_8bf9ac6d5af9093e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_81433ab386107ae4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_d4c11fd1bc877351], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const FieldVector2D & a0, const FieldVector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_8bf9ac6d5af9093e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_446ef994e3ff29c5], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_b9b7f079c8a99b84], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_b397c28438b136a0], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_8bf9ac6d5af9093e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_d4c11fd1bc877351], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_81433ab386107ae4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_b9b7f079c8a99b84], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_b397c28438b136a0], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_8bf9ac6d5af9093e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_d4c11fd1bc877351], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_81433ab386107ae4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_b9b7f079c8a99b84], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_b397c28438b136a0], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_8bf9ac6d5af9093e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_d4c11fd1bc877351], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_81433ab386107ae4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_b9b7f079c8a99b84], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_b397c28438b136a0], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_8bf9ac6d5af9093e], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_d4c11fd1bc877351], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_81433ab386107ae4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_b9b7f079c8a99b84], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_b397c28438b136a0], a0.this$));
          }

          jboolean FieldVector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          FieldVector2D FieldVector2D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_a1c9723a4641abb2], a0.this$));
          }

          FieldVector2D FieldVector2D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_a1c9723a4641abb2], a0.this$));
          }

          FieldVector2D FieldVector2D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_a1c9723a4641abb2], a0.this$));
          }

          FieldVector2D FieldVector2D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_a1c9723a4641abb2], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_613c8f46c659f636]));
          }

          FieldVector2D FieldVector2D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_a1c9723a4641abb2], a0.this$));
          }

          FieldVector2D FieldVector2D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_a1c9723a4641abb2], a0.this$));
          }

          FieldVector2D FieldVector2D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_a1c9723a4641abb2], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_613c8f46c659f636]));
          }

          FieldVector2D FieldVector2D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getZero_a1c9723a4641abb2], a0.this$));
          }

          jint FieldVector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean FieldVector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
          }

          jboolean FieldVector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
          }

          FieldVector2D FieldVector2D::negate() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_negate_71d34b83d8e1fc5a]));
          }

          FieldVector2D FieldVector2D::normalize() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_normalize_71d34b83d8e1fc5a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::orientation(const FieldVector2D & a0, const FieldVector2D & a1, const FieldVector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_orientation_6b0a5db023ff2b0f], a0.this$, a1.this$, a2.this$));
          }

          FieldVector2D FieldVector2D::scalarMultiply(jdouble a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_fd7065394a41d234], a0));
          }

          FieldVector2D FieldVector2D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f4e8712141e606db], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_453f66131fc0f21f], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_5d2579297fa8ffe5], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_e6c1bfb19c40c9b2], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_558b19a8fae74bdd], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_44c6c5fc3911075a], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_77f323f07b8bd168], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector2D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_41762fd4377ff26e]));
          }

          ::java::lang::String FieldVector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          ::java::lang::String FieldVector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8d9667e91d8ffa97], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D FieldVector2D::toVector2D() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toVector2D_f681f2fc9cdfab57]));
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
          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args);
          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data);
          static PyGetSetDef t_FieldVector2D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector2D, infinite),
            DECLARE_GET_FIELD(t_FieldVector2D, naN),
            DECLARE_GET_FIELD(t_FieldVector2D, norm),
            DECLARE_GET_FIELD(t_FieldVector2D, norm1),
            DECLARE_GET_FIELD(t_FieldVector2D, normInf),
            DECLARE_GET_FIELD(t_FieldVector2D, normSq),
            DECLARE_GET_FIELD(t_FieldVector2D, x),
            DECLARE_GET_FIELD(t_FieldVector2D, y),
            DECLARE_GET_FIELD(t_FieldVector2D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector2D__methods_[] = {
            DECLARE_METHOD(t_FieldVector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toVector2D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector2D)[] = {
            { Py_tp_methods, t_FieldVector2D__methods_ },
            { Py_tp_init, (void *) t_FieldVector2D_init_ },
            { Py_tp_getset, t_FieldVector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector2D, t_FieldVector2D, FieldVector2D);
          PyObject *t_FieldVector2D::wrap_Object(const FieldVector2D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector2D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector2D), &PY_TYPE_DEF(FieldVector2D), module, "FieldVector2D", 0);
          }

          void t_FieldVector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "class_", make_descriptor(FieldVector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "wrapfn_", make_descriptor(t_FieldVector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector2D::initializeClass, 1)))
              return NULL;
            return t_FieldVector2D::wrap_Object(FieldVector2D(((t_FieldVector2D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_, &a6, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a7((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNaN(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNegativeInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPositiveInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getZero(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector2D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::orientation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args)
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
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector2D());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_a4dc06866e3014fd] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics UnnormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_a4dc06866e3014fd], a0.this$));
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider, t_UnnormalizedSphericalHarmonicsProvider, UnnormalizedSphericalHarmonicsProvider);

          void t_UnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider), module, "UnnormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "UnnormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)));
          }

          void t_UnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(UnnormalizedSphericalHarmonicsProvider(((t_UnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonFieldInterpolationGrid::class$ = NULL;
            jmethodID *PythonFieldInterpolationGrid::mids$ = NULL;
            bool PythonFieldInterpolationGrid::live$ = false;

            jclass PythonFieldInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_4a8c729a6fb08a74] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldInterpolationGrid::PythonFieldInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonFieldInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonFieldInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonFieldInterpolationGrid::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self);
            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data);
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonFieldInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, self),
              DECLARE_GET_FIELD(t_PythonFieldInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonFieldInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonFieldInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonFieldInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldInterpolationGrid, t_PythonFieldInterpolationGrid, PythonFieldInterpolationGrid);
            PyObject *t_PythonFieldInterpolationGrid::wrap_Object(const PythonFieldInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldInterpolationGrid *self = (t_PythonFieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldInterpolationGrid), &PY_TYPE_DEF(PythonFieldInterpolationGrid), module, "PythonFieldInterpolationGrid", 1);
            }

            void t_PythonFieldInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "class_", make_descriptor(PythonFieldInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "wrapfn_", make_descriptor(t_PythonFieldInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonFieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonFieldInterpolationGrid::wrap_Object(PythonFieldInterpolationGrid(((t_PythonFieldInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_of_(t_PythonFieldInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldInterpolationGrid_init_(t_PythonFieldInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonFieldInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldInterpolationGrid_finalize(t_PythonFieldInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldInterpolationGrid_pythonExtension(t_PythonFieldInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonFieldInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
              PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonFieldInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonFieldInterpolationGrid_get__self(t_PythonFieldInterpolationGrid *self, void *data)
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
            static PyObject *t_PythonFieldInterpolationGrid_get__parameters_(t_PythonFieldInterpolationGrid *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/util/List.h"
#include "java/lang/Enum.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadata::class$ = NULL;
            jmethodID *CdmRelativeMetadata::mids$ = NULL;
            bool CdmRelativeMetadata::live$ = false;

            jclass CdmRelativeMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addComment_f5ffdf29129ef90a] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
                mids$[mid_checkNotNull_95e2f439e3918f51] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/Enum;)V");
                mids$[mid_checkScreenVolumeConditions_0640e6acf969ed28] = env->getMethodID(cls, "checkScreenVolumeConditions", "()V");
                mids$[mid_getApproachAngle_557b8123390d8d0c] = env->getMethodID(cls, "getApproachAngle", "()D");
                mids$[mid_getCollisionPercentile_1b41cf9ebf653611] = env->getMethodID(cls, "getCollisionPercentile", "()[I");
                mids$[mid_getCollisionProbaMethod_33122f5a676c9ebb] = env->getMethodID(cls, "getCollisionProbaMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getCollisionProbability_557b8123390d8d0c] = env->getMethodID(cls, "getCollisionProbability", "()D");
                mids$[mid_getComment_0d9551367f7ecdef] = env->getMethodID(cls, "getComment", "()Ljava/util/List;");
                mids$[mid_getConjunctionId_3cffd47377eca18a] = env->getMethodID(cls, "getConjunctionId", "()Ljava/lang/String;");
                mids$[mid_getMahalanobisDistance_557b8123390d8d0c] = env->getMethodID(cls, "getMahalanobisDistance", "()D");
                mids$[mid_getMaxCollisionProbability_557b8123390d8d0c] = env->getMethodID(cls, "getMaxCollisionProbability", "()D");
                mids$[mid_getMaxCollisionProbabilityMethod_33122f5a676c9ebb] = env->getMethodID(cls, "getMaxCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getMissDistance_557b8123390d8d0c] = env->getMethodID(cls, "getMissDistance", "()D");
                mids$[mid_getNextMessageEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageId_3cffd47377eca18a] = env->getMethodID(cls, "getPreviousMessageId", "()Ljava/lang/String;");
                mids$[mid_getRelativePosition_f88961cca75a2c0a] = env->getMethodID(cls, "getRelativePosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getRelativeSpeed_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeSpeed", "()D");
                mids$[mid_getRelativeVelocity_f88961cca75a2c0a] = env->getMethodID(cls, "getRelativeVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getScreenEntryTime_7a97f7e149e79afb] = env->getMethodID(cls, "getScreenEntryTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenExitTime_7a97f7e149e79afb] = env->getMethodID(cls, "getScreenExitTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenPcThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getScreenPcThreshold", "()D");
                mids$[mid_getScreenType_5ee5e7f48ab31b92] = env->getMethodID(cls, "getScreenType", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_getScreenVolumeFrame_8ac667bf5c4e7023] = env->getMethodID(cls, "getScreenVolumeFrame", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_getScreenVolumeRadius_557b8123390d8d0c] = env->getMethodID(cls, "getScreenVolumeRadius", "()D");
                mids$[mid_getScreenVolumeShape_c6cf0c4d1af7e9b9] = env->getMethodID(cls, "getScreenVolumeShape", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_getScreenVolumeX_557b8123390d8d0c] = env->getMethodID(cls, "getScreenVolumeX", "()D");
                mids$[mid_getScreenVolumeY_557b8123390d8d0c] = env->getMethodID(cls, "getScreenVolumeY", "()D");
                mids$[mid_getScreenVolumeZ_557b8123390d8d0c] = env->getMethodID(cls, "getScreenVolumeZ", "()D");
                mids$[mid_getSefiCollisionProbability_557b8123390d8d0c] = env->getMethodID(cls, "getSefiCollisionProbability", "()D");
                mids$[mid_getSefiCollisionProbabilityMethod_33122f5a676c9ebb] = env->getMethodID(cls, "getSefiCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getSefiFragmentationModel_3cffd47377eca18a] = env->getMethodID(cls, "getSefiFragmentationModel", "()Ljava/lang/String;");
                mids$[mid_getStartScreenPeriod_7a97f7e149e79afb] = env->getMethodID(cls, "getStartScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopScreenPeriod_7a97f7e149e79afb] = env->getMethodID(cls, "getStopScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTca_7a97f7e149e79afb] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeSystem_d0d0dc777cc1d8f8] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
                mids$[mid_setApproachAngle_10f281d777284cea] = env->getMethodID(cls, "setApproachAngle", "(D)V");
                mids$[mid_setCollisionPercentile_ec63cb8a58ef5a54] = env->getMethodID(cls, "setCollisionPercentile", "([I)V");
                mids$[mid_setCollisionProbaMethod_24f4275bd75d1e11] = env->getMethodID(cls, "setCollisionProbaMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setCollisionProbability_10f281d777284cea] = env->getMethodID(cls, "setCollisionProbability", "(D)V");
                mids$[mid_setConjunctionId_f5ffdf29129ef90a] = env->getMethodID(cls, "setConjunctionId", "(Ljava/lang/String;)V");
                mids$[mid_setMahalanobisDistance_10f281d777284cea] = env->getMethodID(cls, "setMahalanobisDistance", "(D)V");
                mids$[mid_setMaxCollisionProbability_10f281d777284cea] = env->getMethodID(cls, "setMaxCollisionProbability", "(D)V");
                mids$[mid_setMaxCollisionProbabilityMethod_24f4275bd75d1e11] = env->getMethodID(cls, "setMaxCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setMissDistance_10f281d777284cea] = env->getMethodID(cls, "setMissDistance", "(D)V");
                mids$[mid_setNextMessageEpoch_20affcbd28542333] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageEpoch_20affcbd28542333] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageId_f5ffdf29129ef90a] = env->getMethodID(cls, "setPreviousMessageId", "(Ljava/lang/String;)V");
                mids$[mid_setRelativePositionN_10f281d777284cea] = env->getMethodID(cls, "setRelativePositionN", "(D)V");
                mids$[mid_setRelativePositionR_10f281d777284cea] = env->getMethodID(cls, "setRelativePositionR", "(D)V");
                mids$[mid_setRelativePositionT_10f281d777284cea] = env->getMethodID(cls, "setRelativePositionT", "(D)V");
                mids$[mid_setRelativeSpeed_10f281d777284cea] = env->getMethodID(cls, "setRelativeSpeed", "(D)V");
                mids$[mid_setRelativeVelocityN_10f281d777284cea] = env->getMethodID(cls, "setRelativeVelocityN", "(D)V");
                mids$[mid_setRelativeVelocityR_10f281d777284cea] = env->getMethodID(cls, "setRelativeVelocityR", "(D)V");
                mids$[mid_setRelativeVelocityT_10f281d777284cea] = env->getMethodID(cls, "setRelativeVelocityT", "(D)V");
                mids$[mid_setScreenEntryTime_20affcbd28542333] = env->getMethodID(cls, "setScreenEntryTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenExitTime_20affcbd28542333] = env->getMethodID(cls, "setScreenExitTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenPcThreshold_10f281d777284cea] = env->getMethodID(cls, "setScreenPcThreshold", "(D)V");
                mids$[mid_setScreenType_5f8f3fff9ebb0d5f] = env->getMethodID(cls, "setScreenType", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;)V");
                mids$[mid_setScreenVolumeFrame_91aabd8787541b18] = env->getMethodID(cls, "setScreenVolumeFrame", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;)V");
                mids$[mid_setScreenVolumeRadius_10f281d777284cea] = env->getMethodID(cls, "setScreenVolumeRadius", "(D)V");
                mids$[mid_setScreenVolumeShape_c79d3dc23a8b505b] = env->getMethodID(cls, "setScreenVolumeShape", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;)V");
                mids$[mid_setScreenVolumeX_10f281d777284cea] = env->getMethodID(cls, "setScreenVolumeX", "(D)V");
                mids$[mid_setScreenVolumeY_10f281d777284cea] = env->getMethodID(cls, "setScreenVolumeY", "(D)V");
                mids$[mid_setScreenVolumeZ_10f281d777284cea] = env->getMethodID(cls, "setScreenVolumeZ", "(D)V");
                mids$[mid_setSefiCollisionProbability_10f281d777284cea] = env->getMethodID(cls, "setSefiCollisionProbability", "(D)V");
                mids$[mid_setSefiCollisionProbabilityMethod_24f4275bd75d1e11] = env->getMethodID(cls, "setSefiCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setSefiFragmentationModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setSefiFragmentationModel", "(Ljava/lang/String;)V");
                mids$[mid_setStartScreenPeriod_20affcbd28542333] = env->getMethodID(cls, "setStartScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopScreenPeriod_20affcbd28542333] = env->getMethodID(cls, "setStopScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTca_20affcbd28542333] = env->getMethodID(cls, "setTca", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeSystem_dcfc8f760c17d3b6] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
                mids$[mid_validate_0640e6acf969ed28] = env->getMethodID(cls, "validate", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmRelativeMetadata::CdmRelativeMetadata() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void CdmRelativeMetadata::addComment(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addComment_f5ffdf29129ef90a], a0.this$);
            }

            void CdmRelativeMetadata::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkNotNull_95e2f439e3918f51], a0.this$, a1.this$);
            }

            void CdmRelativeMetadata::checkScreenVolumeConditions() const
            {
              env->callVoidMethod(this$, mids$[mid_checkScreenVolumeConditions_0640e6acf969ed28]);
            }

            jdouble CdmRelativeMetadata::getApproachAngle() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApproachAngle_557b8123390d8d0c]);
            }

            JArray< jint > CdmRelativeMetadata::getCollisionPercentile() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCollisionPercentile_1b41cf9ebf653611]));
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getCollisionProbaMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getCollisionProbaMethod_33122f5a676c9ebb]));
            }

            jdouble CdmRelativeMetadata::getCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCollisionProbability_557b8123390d8d0c]);
            }

            ::java::util::List CdmRelativeMetadata::getComment() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComment_0d9551367f7ecdef]));
            }

            ::java::lang::String CdmRelativeMetadata::getConjunctionId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConjunctionId_3cffd47377eca18a]));
            }

            jdouble CdmRelativeMetadata::getMahalanobisDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMahalanobisDistance_557b8123390d8d0c]);
            }

            jdouble CdmRelativeMetadata::getMaxCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMaxCollisionProbability_557b8123390d8d0c]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getMaxCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getMaxCollisionProbabilityMethod_33122f5a676c9ebb]));
            }

            jdouble CdmRelativeMetadata::getMissDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMissDistance_557b8123390d8d0c]);
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getNextMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getPreviousMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_7a97f7e149e79afb]));
            }

            ::java::lang::String CdmRelativeMetadata::getPreviousMessageId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageId_3cffd47377eca18a]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativePosition() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativePosition_f88961cca75a2c0a]));
            }

            jdouble CdmRelativeMetadata::getRelativeSpeed() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRelativeSpeed_557b8123390d8d0c]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativeVelocity() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativeVelocity_f88961cca75a2c0a]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenEntryTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenEntryTime_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenExitTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenExitTime_7a97f7e149e79afb]));
            }

            jdouble CdmRelativeMetadata::getScreenPcThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenPcThreshold_557b8123390d8d0c]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenType CdmRelativeMetadata::getScreenType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenType(env->callObjectMethod(this$, mids$[mid_getScreenType_5ee5e7f48ab31b92]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame CdmRelativeMetadata::getScreenVolumeFrame() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame(env->callObjectMethod(this$, mids$[mid_getScreenVolumeFrame_8ac667bf5c4e7023]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeRadius_557b8123390d8d0c]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape CdmRelativeMetadata::getScreenVolumeShape() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape(env->callObjectMethod(this$, mids$[mid_getScreenVolumeShape_c6cf0c4d1af7e9b9]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeX_557b8123390d8d0c]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeY_557b8123390d8d0c]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeZ_557b8123390d8d0c]);
            }

            jdouble CdmRelativeMetadata::getSefiCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSefiCollisionProbability_557b8123390d8d0c]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getSefiCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getSefiCollisionProbabilityMethod_33122f5a676c9ebb]));
            }

            ::java::lang::String CdmRelativeMetadata::getSefiFragmentationModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSefiFragmentationModel_3cffd47377eca18a]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStartScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartScreenPeriod_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStopScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopScreenPeriod_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getTca() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_7a97f7e149e79afb]));
            }

            ::org::orekit::files::ccsds::definitions::TimeSystem CdmRelativeMetadata::getTimeSystem() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_d0d0dc777cc1d8f8]));
            }

            void CdmRelativeMetadata::setApproachAngle(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApproachAngle_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setCollisionPercentile(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionPercentile_ec63cb8a58ef5a54], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbaMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbaMethod_24f4275bd75d1e11], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbability_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setConjunctionId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setConjunctionId_f5ffdf29129ef90a], a0.this$);
            }

            void CdmRelativeMetadata::setMahalanobisDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMahalanobisDistance_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbability_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbabilityMethod_24f4275bd75d1e11], a0.this$);
            }

            void CdmRelativeMetadata::setMissDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMissDistance_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_20affcbd28542333], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_20affcbd28542333], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageId_f5ffdf29129ef90a], a0.this$);
            }

            void CdmRelativeMetadata::setRelativePositionN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionN_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setRelativePositionR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionR_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setRelativePositionT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionT_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setRelativeSpeed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeSpeed_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityN_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityR_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityT_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setScreenEntryTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenEntryTime_20affcbd28542333], a0.this$);
            }

            void CdmRelativeMetadata::setScreenExitTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenExitTime_20affcbd28542333], a0.this$);
            }

            void CdmRelativeMetadata::setScreenPcThreshold(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenPcThreshold_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setScreenType(const ::org::orekit::files::ccsds::ndm::cdm::ScreenType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenType_5f8f3fff9ebb0d5f], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeFrame(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeFrame_91aabd8787541b18], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeRadius(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeRadius_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeShape(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeShape_c79d3dc23a8b505b], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeX_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeY_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeZ_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbability_10f281d777284cea], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbabilityMethod_24f4275bd75d1e11], a0.this$);
            }

            void CdmRelativeMetadata::setSefiFragmentationModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiFragmentationModel_f5ffdf29129ef90a], a0.this$);
            }

            void CdmRelativeMetadata::setStartScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartScreenPeriod_20affcbd28542333], a0.this$);
            }

            void CdmRelativeMetadata::setStopScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopScreenPeriod_20affcbd28542333], a0.this$);
            }

            void CdmRelativeMetadata::setTca(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTca_20affcbd28542333], a0.this$);
            }

            void CdmRelativeMetadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeSystem_dcfc8f760c17d3b6], a0.this$);
            }

            void CdmRelativeMetadata::validate() const
            {
              env->callVoidMethod(this$, mids$[mid_validate_0640e6acf969ed28]);
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
            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data);
            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmRelativeMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, approachAngle),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionPercentile),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbaMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbability),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, comment),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, conjunctionId),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, mahalanobisDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, missDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, nextMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageId),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativePosition),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, relativeSpeed),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativeVelocity),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenEntryTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenExitTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenPcThreshold),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenType),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeFrame),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeRadius),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeShape),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeX),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeY),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeZ),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiFragmentationModel),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, startScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, stopScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, tca),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, timeSystem),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, addComment, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkNotNull, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkScreenVolumeConditions, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getApproachAngle, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionPercentile, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbaMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getComment, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getConjunctionId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMahalanobisDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMissDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getNextMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativePosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeSpeed, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenEntryTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenExitTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenPcThreshold, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenType, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeRadius, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeShape, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeX, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeY, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeZ, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiFragmentationModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStartScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStopScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTca, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTimeSystem, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, setApproachAngle, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionPercentile, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbaMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setConjunctionId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMahalanobisDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMissDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setNextMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeSpeed, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenEntryTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenExitTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenPcThreshold, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenType, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeFrame, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeRadius, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeShape, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeX, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeY, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeZ, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiFragmentationModel, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStartScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStopScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTca, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTimeSystem, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, validate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadata)[] = {
              { Py_tp_methods, t_CdmRelativeMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmRelativeMetadata_init_ },
              { Py_tp_getset, t_CdmRelativeMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadata)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadata, t_CdmRelativeMetadata, CdmRelativeMetadata);

            void t_CdmRelativeMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadata), &PY_TYPE_DEF(CdmRelativeMetadata), module, "CdmRelativeMetadata", 0);
            }

            void t_CdmRelativeMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "class_", make_descriptor(CdmRelativeMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "wrapfn_", make_descriptor(t_CdmRelativeMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadata::wrap_Object(CdmRelativeMetadata(((t_CdmRelativeMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds)
            {
              CdmRelativeMetadata object((jobject) NULL);

              INT_CALL(object = CdmRelativeMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.addComment(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addComment", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "oK", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkNotNull(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.checkScreenVolumeConditions());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionPercentile());
              return result.wrap();
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComment());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getConjunctionId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMissDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiFragmentationModel());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApproachAngle(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApproachAngle", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setCollisionPercentile(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionPercentile", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCollisionProbaMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbaMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setConjunctionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setConjunctionId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMahalanobisDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMahalanobisDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMissDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMissDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setNextMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeSpeed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeSpeed", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenEntryTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenEntryTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenExitTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenExitTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenPcThreshold(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenPcThreshold", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::parameters_))
              {
                OBJ_CALL(self->object.setScreenType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenType", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeRadius(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeRadius", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeShape(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeShape", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeX", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeY", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeZ", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSefiFragmentationModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiFragmentationModel", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTca(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTca", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
              {
                OBJ_CALL(self->object.setTimeSystem(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApproachAngle(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "approachAngle", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionPercentile());
              return value.wrap();
            }
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setCollisionPercentile(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionPercentile", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCollisionProbaMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbaMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComment());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getConjunctionId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setConjunctionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "conjunctionId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMahalanobisDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mahalanobisDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMissDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMissDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "missDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setNextMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setPreviousMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setPreviousMessageId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeSpeed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeSpeed", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenEntryTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenEntryTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenExitTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenExitTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenPcThreshold(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenPcThreshold", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenType", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeFrame", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeRadius(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeRadius", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeShape(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeShape", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeX", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeY", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeZ", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiFragmentationModel());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSefiFragmentationModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiFragmentationModel", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTca(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tca", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/AbstractWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *AbstractWriter::class$ = NULL;
          jmethodID *AbstractWriter::mids$ = NULL;
          bool AbstractWriter::live$ = false;

          jclass AbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/AbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_enterSection_0503da09b1f1eb3c] = env->getMethodID(cls, "enterSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_exitSection_0503da09b1f1eb3c] = env->getMethodID(cls, "exitSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_write_0503da09b1f1eb3c] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_intArrayToString_ae74174caf679503] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractWriter::enterSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_enterSection_0503da09b1f1eb3c], a0.this$);
          }

          void AbstractWriter::exitSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_exitSection_0503da09b1f1eb3c], a0.this$);
          }

          void AbstractWriter::write(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_write_0503da09b1f1eb3c], a0.this$);
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
        namespace section {
          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg);

          static PyMethodDef t_AbstractWriter__methods_[] = {
            DECLARE_METHOD(t_AbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, enterSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, exitSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, write, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWriter)[] = {
            { Py_tp_methods, t_AbstractWriter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWriter, t_AbstractWriter, AbstractWriter);

          void t_AbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWriter), &PY_TYPE_DEF(AbstractWriter), module, "AbstractWriter", 0);
          }

          void t_AbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "class_", make_descriptor(AbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "wrapfn_", make_descriptor(t_AbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWriter::initializeClass, 1)))
              return NULL;
            return t_AbstractWriter::wrap_Object(AbstractWriter(((t_AbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.enterSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.exitSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "exitSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.write(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "write", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$VanishingCutHandler::class$ = NULL;
        jmethodID *BSPTree$VanishingCutHandler::mids$ = NULL;
        bool BSPTree$VanishingCutHandler::live$ = false;

        jclass BSPTree$VanishingCutHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_fixNode_bf59e8c45d4e589e] = env->getMethodID(cls, "fixNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$VanishingCutHandler::fixNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_fixNode_bf59e8c45d4e589e], a0.this$));
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
      namespace partitioning {
        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args);
        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data);
        static PyGetSetDef t_BSPTree$VanishingCutHandler__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$VanishingCutHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$VanishingCutHandler__methods_[] = {
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, fixNode, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$VanishingCutHandler)[] = {
          { Py_tp_methods, t_BSPTree$VanishingCutHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$VanishingCutHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$VanishingCutHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$VanishingCutHandler, t_BSPTree$VanishingCutHandler, BSPTree$VanishingCutHandler);
        PyObject *t_BSPTree$VanishingCutHandler::wrap_Object(const BSPTree$VanishingCutHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$VanishingCutHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$VanishingCutHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$VanishingCutHandler), &PY_TYPE_DEF(BSPTree$VanishingCutHandler), module, "BSPTree$VanishingCutHandler", 0);
        }

        void t_BSPTree$VanishingCutHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "class_", make_descriptor(BSPTree$VanishingCutHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "wrapfn_", make_descriptor(t_BSPTree$VanishingCutHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 1)))
            return NULL;
          return t_BSPTree$VanishingCutHandler::wrap_Object(BSPTree$VanishingCutHandler(((t_BSPTree$VanishingCutHandler *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.fixNode(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "fixNode", arg);
          return NULL;
        }
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPFactory.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPFactory::class$ = NULL;
      jmethodID *CR3BPFactory::mids$ = NULL;
      bool CR3BPFactory::live$ = false;

      jclass CR3BPFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarthMoonCR3BP_846281b3daba3578] = env->getStaticMethodID(cls, "getEarthMoonCR3BP", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunEarthCR3BP_d5bdda3719e09bbc] = env->getStaticMethodID(cls, "getSunEarthCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunJupiterCR3BP_d5bdda3719e09bbc] = env->getStaticMethodID(cls, "getSunJupiterCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSystem_5db8a3ac27876e90] = env->getStaticMethodID(cls, "getSystem", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)Lorg/orekit/bodies/CR3BPSystem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getEarthMoonCR3BP()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonCR3BP_846281b3daba3578]));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunEarthCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunEarthCR3BP_d5bdda3719e09bbc], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunJupiterCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunJupiterCR3BP_d5bdda3719e09bbc], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSystem_5db8a3ac27876e90], a0.this$, a1.this$, a2));
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
      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type);
      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data);
      static PyGetSetDef t_CR3BPFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPFactory, earthMoonCR3BP),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPFactory__methods_[] = {
        DECLARE_METHOD(t_CR3BPFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getEarthMoonCR3BP, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunEarthCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunJupiterCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPFactory)[] = {
        { Py_tp_methods, t_CR3BPFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CR3BPFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPFactory, t_CR3BPFactory, CR3BPFactory);

      void t_CR3BPFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPFactory), &PY_TYPE_DEF(CR3BPFactory), module, "CR3BPFactory", 0);
      }

      void t_CR3BPFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "class_", make_descriptor(CR3BPFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "wrapfn_", make_descriptor(t_CR3BPFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPFactory::initializeClass, 1)))
          return NULL;
        return t_CR3BPFactory::wrap_Object(CR3BPFactory(((t_CR3BPFactory *) arg)->object.this$));
      }
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunEarthCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunEarthCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunJupiterCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunJupiterCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        jdouble a2;
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSystem(a0, a1, a2));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSystem", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistory::class$ = NULL;
              jmethodID *OrbitCovarianceHistory::mids$ = NULL;
              bool OrbitCovarianceHistory::live$ = false;

              jclass OrbitCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7be1d7d3a68a3c81] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_0d9551367f7ecdef] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_66528e0f04bc6eab] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistory::OrbitCovarianceHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7be1d7d3a68a3c81, a0.this$, a1.this$)) {}

              ::java::util::List OrbitCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata OrbitCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_66528e0f04bc6eab]));
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
              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data);
              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistory)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistory_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistory, t_OrbitCovarianceHistory, OrbitCovarianceHistory);

              void t_OrbitCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistory), &PY_TYPE_DEF(OrbitCovarianceHistory), module, "OrbitCovarianceHistory", 0);
              }

              void t_OrbitCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "class_", make_descriptor(OrbitCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "wrapfn_", make_descriptor(t_OrbitCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistory::wrap_Object(OrbitCovarianceHistory(((t_OrbitCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovariance));
              }

              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(value);
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
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalArgumentException::class$ = NULL;
    jmethodID *IllegalArgumentException::mids$ = NULL;
    bool IllegalArgumentException::live$ = false;

    jclass IllegalArgumentException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalArgumentException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalArgumentException::IllegalArgumentException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalArgumentException__methods_[] = {
      DECLARE_METHOD(t_IllegalArgumentException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalArgumentException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalArgumentException)[] = {
      { Py_tp_methods, t_IllegalArgumentException__methods_ },
      { Py_tp_init, (void *) t_IllegalArgumentException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalArgumentException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalArgumentException, t_IllegalArgumentException, IllegalArgumentException);

    void t_IllegalArgumentException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalArgumentException), &PY_TYPE_DEF(IllegalArgumentException), module, "IllegalArgumentException", 0);
    }

    void t_IllegalArgumentException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "class_", make_descriptor(IllegalArgumentException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "wrapfn_", make_descriptor(t_IllegalArgumentException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalArgumentException::initializeClass, 1)))
        return NULL;
      return t_IllegalArgumentException::wrap_Object(IllegalArgumentException(((t_IllegalArgumentException *) arg)->object.this$));
    }
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalArgumentException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalArgumentException object((jobject) NULL);

          INT_CALL(object = IllegalArgumentException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalArgumentException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFields::class$ = NULL;
        jmethodID *GeoMagneticFields::mids$ = NULL;
        bool GeoMagneticFields::live$ = false;

        jclass GeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_a3e70fb66ee864fe] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_7100d3672aa999e4] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_7100d3672aa999e4] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_a3e70fb66ee864fe], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_7100d3672aa999e4], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_7100d3672aa999e4], a0));
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
        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args);
        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_GeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_GeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFields)[] = {
          { Py_tp_methods, t_GeoMagneticFields__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFields, t_GeoMagneticFields, GeoMagneticFields);

        void t_GeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFields), &PY_TYPE_DEF(GeoMagneticFields), module, "GeoMagneticFields", 0);
        }

        void t_GeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "class_", make_descriptor(GeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "wrapfn_", make_descriptor(t_GeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFields::wrap_Object(GeoMagneticFields(((t_GeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/RootsOfUnity.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *RootsOfUnity::class$ = NULL;
      jmethodID *RootsOfUnity::mids$ = NULL;
      bool RootsOfUnity::live$ = false;

      jclass RootsOfUnity::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/RootsOfUnity");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_computeRoots_a3da1a935cb37f7b] = env->getMethodID(cls, "computeRoots", "(I)V");
          mids$[mid_getImaginary_69cfb132c661aca4] = env->getMethodID(cls, "getImaginary", "(I)D");
          mids$[mid_getNumberOfRoots_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfRoots", "()I");
          mids$[mid_getReal_69cfb132c661aca4] = env->getMethodID(cls, "getReal", "(I)D");
          mids$[mid_isCounterClockWise_89b302893bdbe1f1] = env->getMethodID(cls, "isCounterClockWise", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RootsOfUnity::RootsOfUnity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void RootsOfUnity::computeRoots(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_computeRoots_a3da1a935cb37f7b], a0);
      }

      jdouble RootsOfUnity::getImaginary(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_69cfb132c661aca4], a0);
      }

      jint RootsOfUnity::getNumberOfRoots() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfRoots_412668abc8d889e9]);
      }

      jdouble RootsOfUnity::getReal(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_69cfb132c661aca4], a0);
      }

      jboolean RootsOfUnity::isCounterClockWise() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCounterClockWise_89b302893bdbe1f1]);
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
      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg);
      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self);
      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data);
      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data);
      static PyGetSetDef t_RootsOfUnity__fields_[] = {
        DECLARE_GET_FIELD(t_RootsOfUnity, counterClockWise),
        DECLARE_GET_FIELD(t_RootsOfUnity, numberOfRoots),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RootsOfUnity__methods_[] = {
        DECLARE_METHOD(t_RootsOfUnity, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RootsOfUnity, computeRoots, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getImaginary, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, getNumberOfRoots, METH_NOARGS),
        DECLARE_METHOD(t_RootsOfUnity, getReal, METH_O),
        DECLARE_METHOD(t_RootsOfUnity, isCounterClockWise, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RootsOfUnity)[] = {
        { Py_tp_methods, t_RootsOfUnity__methods_ },
        { Py_tp_init, (void *) t_RootsOfUnity_init_ },
        { Py_tp_getset, t_RootsOfUnity__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RootsOfUnity)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RootsOfUnity, t_RootsOfUnity, RootsOfUnity);

      void t_RootsOfUnity::install(PyObject *module)
      {
        installType(&PY_TYPE(RootsOfUnity), &PY_TYPE_DEF(RootsOfUnity), module, "RootsOfUnity", 0);
      }

      void t_RootsOfUnity::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "class_", make_descriptor(RootsOfUnity::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "wrapfn_", make_descriptor(t_RootsOfUnity::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RootsOfUnity), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RootsOfUnity_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RootsOfUnity::initializeClass, 1)))
          return NULL;
        return t_RootsOfUnity::wrap_Object(RootsOfUnity(((t_RootsOfUnity *) arg)->object.this$));
      }
      static PyObject *t_RootsOfUnity_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RootsOfUnity::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RootsOfUnity_init_(t_RootsOfUnity *self, PyObject *args, PyObject *kwds)
      {
        RootsOfUnity object((jobject) NULL);

        INT_CALL(object = RootsOfUnity());
        self->object = object;

        return 0;
      }

      static PyObject *t_RootsOfUnity_computeRoots(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.computeRoots(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "computeRoots", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getImaginary(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getImaginary(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_getNumberOfRoots(t_RootsOfUnity *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RootsOfUnity_getReal(t_RootsOfUnity *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getReal(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", arg);
        return NULL;
      }

      static PyObject *t_RootsOfUnity_isCounterClockWise(t_RootsOfUnity *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isCounterClockWise());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RootsOfUnity_get__counterClockWise(t_RootsOfUnity *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isCounterClockWise());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RootsOfUnity_get__numberOfRoots(t_RootsOfUnity *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfRoots());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *Preconditioner::class$ = NULL;
            jmethodID *Preconditioner::mids$ = NULL;
            bool Preconditioner::live$ = false;

            jclass Preconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_precondition_d2593442847fe350] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > Preconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_d2593442847fe350], a0.this$, a1.this$));
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
          namespace gradient {
            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args);

            static PyMethodDef t_Preconditioner__methods_[] = {
              DECLARE_METHOD(t_Preconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Preconditioner)[] = {
              { Py_tp_methods, t_Preconditioner__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Preconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Preconditioner, t_Preconditioner, Preconditioner);

            void t_Preconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(Preconditioner), &PY_TYPE_DEF(Preconditioner), module, "Preconditioner", 0);
            }

            void t_Preconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "class_", make_descriptor(Preconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "wrapfn_", make_descriptor(t_Preconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Preconditioner::initializeClass, 1)))
                return NULL;
              return t_Preconditioner::wrap_Object(Preconditioner(((t_Preconditioner *) arg)->object.this$));
            }
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Preconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
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
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateMatrixFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateMatrixFunctionDifferentiator::mids$ = NULL;
        bool UnivariateMatrixFunctionDifferentiator::live$ = false;

        jclass UnivariateMatrixFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_6ca090d927b88e04] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction UnivariateMatrixFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_6ca090d927b88e04], a0.this$));
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
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateMatrixFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateMatrixFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateMatrixFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateMatrixFunctionDifferentiator, t_UnivariateMatrixFunctionDifferentiator, UnivariateMatrixFunctionDifferentiator);

        void t_UnivariateMatrixFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateMatrixFunctionDifferentiator), &PY_TYPE_DEF(UnivariateMatrixFunctionDifferentiator), module, "UnivariateMatrixFunctionDifferentiator", 0);
        }

        void t_UnivariateMatrixFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "class_", make_descriptor(UnivariateMatrixFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateMatrixFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateMatrixFunctionDifferentiator::wrap_Object(UnivariateMatrixFunctionDifferentiator(((t_UnivariateMatrixFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateMatrixFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateMatrixFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateMatrixFunctionDifferentiator_differentiate(t_UnivariateMatrixFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer::live$ = false;

            jclass NonLinearConjugateGradientOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_db7daf12c9f3aa8b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_70efae1c09fd2be9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDD)V");
                mids$[mid_init$_c34e09f6066821bc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;Lorg/hipparchus/optim/ConvergenceChecker;DDDLorg/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner;)V");
                mids$[mid_optimize_428d2547a0c45016] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_doOptimize_adf293b2643f22b0] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_db7daf12c9f3aa8b, a0.this$, a1.this$)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_70efae1c09fd2be9, a0.this$, a1.this$, a2, a3, a4)) {}

            NonLinearConjugateGradientOptimizer::NonLinearConjugateGradientOptimizer(const ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula & a0, const ::org::hipparchus::optim::ConvergenceChecker & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner & a5) : ::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_c34e09f6066821bc, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

            ::org::hipparchus::optim::PointValuePair NonLinearConjugateGradientOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_428d2547a0c45016], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::GradientMultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer, t_NonLinearConjugateGradientOptimizer, NonLinearConjugateGradientOptimizer);
            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_Object(const NonLinearConjugateGradientOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer *self = (t_NonLinearConjugateGradientOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer), module, "NonLinearConjugateGradientOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "IdentityPreconditioner", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "Formula", make_descriptor(&PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula)));
            }

            void t_NonLinearConjugateGradientOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "class_", make_descriptor(NonLinearConjugateGradientOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer::wrap_Object(NonLinearConjugateGradientOptimizer(((t_NonLinearConjugateGradientOptimizer *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer_of_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer_init_(t_NonLinearConjugateGradientOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDD", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::optim::ConvergenceChecker a1((jobject) NULL);
                  PyTypeObject **p1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner a5((jobject) NULL);
                  NonLinearConjugateGradientOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "KKDDDk", ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::gradient::Preconditioner::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::gradient::t_NonLinearConjugateGradientOptimizer$Formula::parameters_, &a1, &p1, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NonLinearConjugateGradientOptimizer(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

            static PyObject *t_NonLinearConjugateGradientOptimizer_optimize(t_NonLinearConjugateGradientOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(NonLinearConjugateGradientOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer_get__parameters_(t_NonLinearConjugateGradientOptimizer *self, void *data)
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
#include "org/orekit/propagation/conversion/EulerFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerFieldIntegratorBuilder::class$ = NULL;
        jmethodID *EulerFieldIntegratorBuilder::mids$ = NULL;
        bool EulerFieldIntegratorBuilder::live$ = false;

        jclass EulerFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator EulerFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_EulerFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_EulerFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegratorBuilder, t_EulerFieldIntegratorBuilder, EulerFieldIntegratorBuilder);
        PyObject *t_EulerFieldIntegratorBuilder::wrap_Object(const EulerFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegratorBuilder), &PY_TYPE_DEF(EulerFieldIntegratorBuilder), module, "EulerFieldIntegratorBuilder", 0);
        }

        void t_EulerFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "class_", make_descriptor(EulerFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegratorBuilder::wrap_Object(EulerFieldIntegratorBuilder(((t_EulerFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
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

        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(EulerFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}

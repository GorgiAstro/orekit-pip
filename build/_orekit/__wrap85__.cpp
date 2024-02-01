#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DecompositionSolver::class$ = NULL;
      jmethodID *DecompositionSolver::mids$ = NULL;
      bool DecompositionSolver::live$ = false;

      jclass DecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_b2eebabce70526d8] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_eee3de00fe971136] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_bf8d75e459632544] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_5a8a8185eb309db7] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_b2eebabce70526d8]));
      }

      jint DecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      jboolean DecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_eee3de00fe971136]);
      }

      ::org::hipparchus::linear::RealVector DecompositionSolver::solve(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_bf8d75e459632544], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::solve(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_solve_5a8a8185eb309db7], a0.this$));
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
      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args);
      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data);
      static PyGetSetDef t_DecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_DecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_DecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_DecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_DecompositionSolver, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_DecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DecompositionSolver)[] = {
        { Py_tp_methods, t_DecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DecompositionSolver, t_DecompositionSolver, DecompositionSolver);

      void t_DecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(DecompositionSolver), &PY_TYPE_DEF(DecompositionSolver), module, "DecompositionSolver", 0);
      }

      void t_DecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "class_", make_descriptor(DecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "wrapfn_", make_descriptor(t_DecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_DecompositionSolver::wrap_Object(DecompositionSolver(((t_DecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data)
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
#include "org/hipparchus/ode/ParametersController.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ParametersController::class$ = NULL;
      jmethodID *ParametersController::mids$ = NULL;
      bool ParametersController::live$ = false;

      jclass ParametersController::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ParametersController");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParameter_f2fc085ab82846a3] = env->getMethodID(cls, "getParameter", "(Ljava/lang/String;)D");
          mids$[mid_setParameter_4a1c1c41794e71b1] = env->getMethodID(cls, "setParameter", "(Ljava/lang/String;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParametersController::getParameter(const ::java::lang::String & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getParameter_f2fc085ab82846a3], a0.this$);
      }

      void ParametersController::setParameter(const ::java::lang::String & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setParameter_4a1c1c41794e71b1], a0.this$, a1);
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
      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg);
      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args);

      static PyMethodDef t_ParametersController__methods_[] = {
        DECLARE_METHOD(t_ParametersController, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametersController, getParameter, METH_O),
        DECLARE_METHOD(t_ParametersController, setParameter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametersController)[] = {
        { Py_tp_methods, t_ParametersController__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametersController)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(ParametersController, t_ParametersController, ParametersController);

      void t_ParametersController::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametersController), &PY_TYPE_DEF(ParametersController), module, "ParametersController", 0);
      }

      void t_ParametersController::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "class_", make_descriptor(ParametersController::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "wrapfn_", make_descriptor(t_ParametersController::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametersController), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametersController_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametersController::initializeClass, 1)))
          return NULL;
        return t_ParametersController::wrap_Object(ParametersController(((t_ParametersController *) arg)->object.this$));
      }
      static PyObject *t_ParametersController_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametersController::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametersController_getParameter(t_ParametersController *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameter(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameter", arg);
        return NULL;
      }

      static PyObject *t_ParametersController_setParameter(t_ParametersController *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "sD", &a0, &a1))
        {
          OBJ_CALL(self->object.setParameter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setParameter", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedKalmanFilter::class$ = NULL;
          jmethodID *UnscentedKalmanFilter::mids$ = NULL;
          bool UnscentedKalmanFilter::live$ = false;

          jclass UnscentedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3cdb3ad634da4995] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/unscented/UnscentedProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;Lorg/hipparchus/util/UnscentedTransformProvider;)V");
              mids$[mid_estimationStep_d720d2299c73357d] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getCorrected_270f067ba2ecffc6] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getPredicted_270f067ba2ecffc6] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getUnscentedTransformProvider_2ab7c4c88c500aa4] = env->getMethodID(cls, "getUnscentedTransformProvider", "()Lorg/hipparchus/util/UnscentedTransformProvider;");
              mids$[mid_predictionAndCorrectionSteps_bb8cf3ec415626ff] = env->getMethodID(cls, "predictionAndCorrectionSteps", "(Lorg/hipparchus/filtering/kalman/Measurement;[Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedKalmanFilter::UnscentedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2, const ::org::hipparchus::util::UnscentedTransformProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cdb3ad634da4995, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_d720d2299c73357d], a0.this$));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getCorrected() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_270f067ba2ecffc6]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getPredicted() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_270f067ba2ecffc6]));
          }

          ::org::hipparchus::util::UnscentedTransformProvider UnscentedKalmanFilter::getUnscentedTransformProvider() const
          {
            return ::org::hipparchus::util::UnscentedTransformProvider(env->callObjectMethod(this$, mids$[mid_getUnscentedTransformProvider_2ab7c4c88c500aa4]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::predictionAndCorrectionSteps(const ::org::hipparchus::filtering::kalman::Measurement & a0, const JArray< ::org::hipparchus::linear::RealVector > & a1) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_predictionAndCorrectionSteps_bb8cf3ec415626ff], a0.this$, a1.this$));
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
          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args);
          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args);
          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data);
          static PyGetSetDef t_UnscentedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, corrected),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, predicted),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, unscentedTransformProvider),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_UnscentedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, estimationStep, METH_O),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getCorrected, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getPredicted, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getUnscentedTransformProvider, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, predictionAndCorrectionSteps, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanFilter)[] = {
            { Py_tp_methods, t_UnscentedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_UnscentedKalmanFilter_init_ },
            { Py_tp_getset, t_UnscentedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedKalmanFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedKalmanFilter, t_UnscentedKalmanFilter, UnscentedKalmanFilter);
          PyObject *t_UnscentedKalmanFilter::wrap_Object(const UnscentedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedKalmanFilter), &PY_TYPE_DEF(UnscentedKalmanFilter), module, "UnscentedKalmanFilter", 0);
          }

          void t_UnscentedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "class_", make_descriptor(UnscentedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "wrapfn_", make_descriptor(t_UnscentedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_UnscentedKalmanFilter::wrap_Object(UnscentedKalmanFilter(((t_UnscentedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ::org::hipparchus::util::UnscentedTransformProvider a3((jobject) NULL);
            UnscentedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedProcess::parameters_, &a2, &a3))
            {
              INT_CALL(object = UnscentedKalmanFilter(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
            return NULL;
          }

          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::util::UnscentedTransformProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.predictionAndCorrectionSteps(a0, a1));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "predictionAndCorrectionSteps", args);
            return NULL;
          }
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::util::UnscentedTransformProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1f42633debde232b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeTroposphericDelayModifier::BistaticRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_1f42633debde232b, a0.this$)) {}

          void BistaticRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void BistaticRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeTroposphericDelayModifier, t_BistaticRangeTroposphericDelayModifier, BistaticRangeTroposphericDelayModifier);

          void t_BistaticRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeTroposphericDelayModifier), module, "BistaticRangeTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeTroposphericDelayModifier::wrap_Object(BistaticRangeTroposphericDelayModifier(((t_BistaticRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeTroposphericDelayModifier_init_(t_BistaticRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modify(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeTroposphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/FieldHermiteInterpolator.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldHermiteInterpolator::class$ = NULL;
        jmethodID *FieldHermiteInterpolator::mids$ = NULL;
        bool FieldHermiteInterpolator::live$ = false;

        jclass FieldHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_1f979b4691836ff5] = env->getMethodID(cls, "addSamplePoint", "(Lorg/hipparchus/FieldElement;[[Lorg/hipparchus/FieldElement;)V");
            mids$[mid_derivatives_0199092f8b525482] = env->getMethodID(cls, "derivatives", "(Lorg/hipparchus/FieldElement;I)[[Lorg/hipparchus/FieldElement;");
            mids$[mid_value_6f69085479c1d880] = env->getMethodID(cls, "value", "(Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldHermiteInterpolator::FieldHermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void FieldHermiteInterpolator::addSamplePoint(const ::org::hipparchus::FieldElement & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_1f979b4691836ff5], a0.this$, a1.this$);
        }

        JArray< JArray< ::org::hipparchus::FieldElement > > FieldHermiteInterpolator::derivatives(const ::org::hipparchus::FieldElement & a0, jint a1) const
        {
          return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_derivatives_0199092f8b525482], a0.this$, a1));
        }

        JArray< ::org::hipparchus::FieldElement > FieldHermiteInterpolator::value(const ::org::hipparchus::FieldElement & a0) const
        {
          return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_value_6f69085479c1d880], a0.this$));
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
        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args);
        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data);
        static PyGetSetDef t_FieldHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldHermiteInterpolator)[] = {
          { Py_tp_methods, t_FieldHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_FieldHermiteInterpolator_init_ },
          { Py_tp_getset, t_FieldHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldHermiteInterpolator, t_FieldHermiteInterpolator, FieldHermiteInterpolator);
        PyObject *t_FieldHermiteInterpolator::wrap_Object(const FieldHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldHermiteInterpolator), &PY_TYPE_DEF(FieldHermiteInterpolator), module, "FieldHermiteInterpolator", 0);
        }

        void t_FieldHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "class_", make_descriptor(FieldHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldHermiteInterpolator::wrap_Object(FieldHermiteInterpolator(((t_FieldHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          FieldHermiteInterpolator object((jobject) NULL);

          INT_CALL(object = FieldHermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "K[[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSLegacyNavigationMessage::class$ = NULL;
            jmethodID *GPSLegacyNavigationMessage::mids$ = NULL;
            bool GPSLegacyNavigationMessage::live$ = false;

            jclass GPSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSLegacyNavigationMessage::GPSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_GPSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSLegacyNavigationMessage, t_GPSLegacyNavigationMessage, GPSLegacyNavigationMessage);

            void t_GPSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSLegacyNavigationMessage), &PY_TYPE_DEF(GPSLegacyNavigationMessage), module, "GPSLegacyNavigationMessage", 0);
            }

            void t_GPSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "class_", make_descriptor(GPSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_GPSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSLegacyNavigationMessage::wrap_Object(GPSLegacyNavigationMessage(((t_GPSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GPSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = GPSLegacyNavigationMessage());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PegasusSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PegasusSolver::class$ = NULL;
        jmethodID *PegasusSolver::mids$ = NULL;
        bool PegasusSolver::live$ = false;

        jclass PegasusSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PegasusSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PegasusSolver::PegasusSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        PegasusSolver::PegasusSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        PegasusSolver::PegasusSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}
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
        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args);
        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data);
        static PyGetSetDef t_PegasusSolver__fields_[] = {
          DECLARE_GET_FIELD(t_PegasusSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PegasusSolver__methods_[] = {
          DECLARE_METHOD(t_PegasusSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PegasusSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PegasusSolver)[] = {
          { Py_tp_methods, t_PegasusSolver__methods_ },
          { Py_tp_init, (void *) t_PegasusSolver_init_ },
          { Py_tp_getset, t_PegasusSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PegasusSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(PegasusSolver, t_PegasusSolver, PegasusSolver);
        PyObject *t_PegasusSolver::wrap_Object(const PegasusSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PegasusSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PegasusSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PegasusSolver *self = (t_PegasusSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PegasusSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PegasusSolver), &PY_TYPE_DEF(PegasusSolver), module, "PegasusSolver", 0);
        }

        void t_PegasusSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "class_", make_descriptor(PegasusSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "wrapfn_", make_descriptor(t_PegasusSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PegasusSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PegasusSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PegasusSolver::initializeClass, 1)))
            return NULL;
          return t_PegasusSolver::wrap_Object(PegasusSolver(((t_PegasusSolver *) arg)->object.this$));
        }
        static PyObject *t_PegasusSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PegasusSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PegasusSolver_of_(t_PegasusSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PegasusSolver_init_(t_PegasusSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PegasusSolver object((jobject) NULL);

              INT_CALL(object = PegasusSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PegasusSolver(a0));
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
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PegasusSolver(a0, a1));
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
              PegasusSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = PegasusSolver(a0, a1, a2));
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
        static PyObject *t_PegasusSolver_get__parameters_(t_PegasusSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier.h"
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

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSRangeModifier::RelativisticJ2ClockOneWayGNSSRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticJ2ClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier, t_RelativisticJ2ClockOneWayGNSSRangeModifier, RelativisticJ2ClockOneWayGNSSRangeModifier);

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSRangeModifier), module, "RelativisticJ2ClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSRangeModifier(((t_RelativisticJ2ClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/TLEConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEConstants::class$ = NULL;
          jmethodID *TLEConstants::mids$ = NULL;
          bool TLEConstants::live$ = false;
          jdouble TLEConstants::A3OVK2 = (jdouble) 0;
          jdouble TLEConstants::C1L = (jdouble) 0;
          jdouble TLEConstants::C1SS = (jdouble) 0;
          jdouble TLEConstants::CK2 = (jdouble) 0;
          jdouble TLEConstants::CK4 = (jdouble) 0;
          jdouble TLEConstants::C_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::C_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::C_FASX2 = (jdouble) 0;
          jdouble TLEConstants::C_G22 = (jdouble) 0;
          jdouble TLEConstants::C_G32 = (jdouble) 0;
          jdouble TLEConstants::C_G44 = (jdouble) 0;
          jdouble TLEConstants::C_G52 = (jdouble) 0;
          jdouble TLEConstants::C_G54 = (jdouble) 0;
          jdouble TLEConstants::EARTH_RADIUS = (jdouble) 0;
          jdouble TLEConstants::MINUTES_PER_DAY = (jdouble) 0;
          jdouble TLEConstants::MU = (jdouble) 0;
          jdouble TLEConstants::NORMALIZED_EQUATORIAL_RADIUS = (jdouble) 0;
          jdouble TLEConstants::ONE_THIRD = (jdouble) 0;
          jdouble TLEConstants::Q22 = (jdouble) 0;
          jdouble TLEConstants::Q31 = (jdouble) 0;
          jdouble TLEConstants::Q33 = (jdouble) 0;
          jdouble TLEConstants::QOMS2T = (jdouble) 0;
          jdouble TLEConstants::ROOT22 = (jdouble) 0;
          jdouble TLEConstants::ROOT32 = (jdouble) 0;
          jdouble TLEConstants::ROOT44 = (jdouble) 0;
          jdouble TLEConstants::ROOT52 = (jdouble) 0;
          jdouble TLEConstants::ROOT54 = (jdouble) 0;
          jdouble TLEConstants::S = (jdouble) 0;
          jdouble TLEConstants::S_2FASX4 = (jdouble) 0;
          jdouble TLEConstants::S_3FASX6 = (jdouble) 0;
          jdouble TLEConstants::S_FASX2 = (jdouble) 0;
          jdouble TLEConstants::S_G22 = (jdouble) 0;
          jdouble TLEConstants::S_G32 = (jdouble) 0;
          jdouble TLEConstants::S_G44 = (jdouble) 0;
          jdouble TLEConstants::S_G52 = (jdouble) 0;
          jdouble TLEConstants::S_G54 = (jdouble) 0;
          jdouble TLEConstants::THDT = (jdouble) 0;
          jdouble TLEConstants::TWO_THIRD = (jdouble) 0;
          jdouble TLEConstants::XJ2 = (jdouble) 0;
          jdouble TLEConstants::XJ3 = (jdouble) 0;
          jdouble TLEConstants::XJ4 = (jdouble) 0;
          jdouble TLEConstants::XKE = (jdouble) 0;
          jdouble TLEConstants::ZEL = (jdouble) 0;
          jdouble TLEConstants::ZES = (jdouble) 0;
          jdouble TLEConstants::ZNL = (jdouble) 0;
          jdouble TLEConstants::ZNS = (jdouble) 0;

          jclass TLEConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEConstants");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A3OVK2 = env->getStaticDoubleField(cls, "A3OVK2");
              C1L = env->getStaticDoubleField(cls, "C1L");
              C1SS = env->getStaticDoubleField(cls, "C1SS");
              CK2 = env->getStaticDoubleField(cls, "CK2");
              CK4 = env->getStaticDoubleField(cls, "CK4");
              C_2FASX4 = env->getStaticDoubleField(cls, "C_2FASX4");
              C_3FASX6 = env->getStaticDoubleField(cls, "C_3FASX6");
              C_FASX2 = env->getStaticDoubleField(cls, "C_FASX2");
              C_G22 = env->getStaticDoubleField(cls, "C_G22");
              C_G32 = env->getStaticDoubleField(cls, "C_G32");
              C_G44 = env->getStaticDoubleField(cls, "C_G44");
              C_G52 = env->getStaticDoubleField(cls, "C_G52");
              C_G54 = env->getStaticDoubleField(cls, "C_G54");
              EARTH_RADIUS = env->getStaticDoubleField(cls, "EARTH_RADIUS");
              MINUTES_PER_DAY = env->getStaticDoubleField(cls, "MINUTES_PER_DAY");
              MU = env->getStaticDoubleField(cls, "MU");
              NORMALIZED_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "NORMALIZED_EQUATORIAL_RADIUS");
              ONE_THIRD = env->getStaticDoubleField(cls, "ONE_THIRD");
              Q22 = env->getStaticDoubleField(cls, "Q22");
              Q31 = env->getStaticDoubleField(cls, "Q31");
              Q33 = env->getStaticDoubleField(cls, "Q33");
              QOMS2T = env->getStaticDoubleField(cls, "QOMS2T");
              ROOT22 = env->getStaticDoubleField(cls, "ROOT22");
              ROOT32 = env->getStaticDoubleField(cls, "ROOT32");
              ROOT44 = env->getStaticDoubleField(cls, "ROOT44");
              ROOT52 = env->getStaticDoubleField(cls, "ROOT52");
              ROOT54 = env->getStaticDoubleField(cls, "ROOT54");
              S = env->getStaticDoubleField(cls, "S");
              S_2FASX4 = env->getStaticDoubleField(cls, "S_2FASX4");
              S_3FASX6 = env->getStaticDoubleField(cls, "S_3FASX6");
              S_FASX2 = env->getStaticDoubleField(cls, "S_FASX2");
              S_G22 = env->getStaticDoubleField(cls, "S_G22");
              S_G32 = env->getStaticDoubleField(cls, "S_G32");
              S_G44 = env->getStaticDoubleField(cls, "S_G44");
              S_G52 = env->getStaticDoubleField(cls, "S_G52");
              S_G54 = env->getStaticDoubleField(cls, "S_G54");
              THDT = env->getStaticDoubleField(cls, "THDT");
              TWO_THIRD = env->getStaticDoubleField(cls, "TWO_THIRD");
              XJ2 = env->getStaticDoubleField(cls, "XJ2");
              XJ3 = env->getStaticDoubleField(cls, "XJ3");
              XJ4 = env->getStaticDoubleField(cls, "XJ4");
              XKE = env->getStaticDoubleField(cls, "XKE");
              ZEL = env->getStaticDoubleField(cls, "ZEL");
              ZES = env->getStaticDoubleField(cls, "ZES");
              ZNL = env->getStaticDoubleField(cls, "ZNL");
              ZNS = env->getStaticDoubleField(cls, "ZNS");
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_TLEConstants__methods_[] = {
            DECLARE_METHOD(t_TLEConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEConstants, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEConstants)[] = {
            { Py_tp_methods, t_TLEConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLEConstants, t_TLEConstants, TLEConstants);

          void t_TLEConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEConstants), &PY_TYPE_DEF(TLEConstants), module, "TLEConstants", 0);
          }

          void t_TLEConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "class_", make_descriptor(TLEConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "wrapfn_", make_descriptor(t_TLEConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLEConstants::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "A3OVK2", make_descriptor(TLEConstants::A3OVK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1L", make_descriptor(TLEConstants::C1L));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C1SS", make_descriptor(TLEConstants::C1SS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK2", make_descriptor(TLEConstants::CK2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "CK4", make_descriptor(TLEConstants::CK4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_2FASX4", make_descriptor(TLEConstants::C_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_3FASX6", make_descriptor(TLEConstants::C_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_FASX2", make_descriptor(TLEConstants::C_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G22", make_descriptor(TLEConstants::C_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G32", make_descriptor(TLEConstants::C_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G44", make_descriptor(TLEConstants::C_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G52", make_descriptor(TLEConstants::C_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "C_G54", make_descriptor(TLEConstants::C_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "EARTH_RADIUS", make_descriptor(TLEConstants::EARTH_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MINUTES_PER_DAY", make_descriptor(TLEConstants::MINUTES_PER_DAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "MU", make_descriptor(TLEConstants::MU));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "NORMALIZED_EQUATORIAL_RADIUS", make_descriptor(TLEConstants::NORMALIZED_EQUATORIAL_RADIUS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ONE_THIRD", make_descriptor(TLEConstants::ONE_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q22", make_descriptor(TLEConstants::Q22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q31", make_descriptor(TLEConstants::Q31));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "Q33", make_descriptor(TLEConstants::Q33));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "QOMS2T", make_descriptor(TLEConstants::QOMS2T));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT22", make_descriptor(TLEConstants::ROOT22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT32", make_descriptor(TLEConstants::ROOT32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT44", make_descriptor(TLEConstants::ROOT44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT52", make_descriptor(TLEConstants::ROOT52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ROOT54", make_descriptor(TLEConstants::ROOT54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S", make_descriptor(TLEConstants::S));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_2FASX4", make_descriptor(TLEConstants::S_2FASX4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_3FASX6", make_descriptor(TLEConstants::S_3FASX6));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_FASX2", make_descriptor(TLEConstants::S_FASX2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G22", make_descriptor(TLEConstants::S_G22));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G32", make_descriptor(TLEConstants::S_G32));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G44", make_descriptor(TLEConstants::S_G44));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G52", make_descriptor(TLEConstants::S_G52));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "S_G54", make_descriptor(TLEConstants::S_G54));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "THDT", make_descriptor(TLEConstants::THDT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "TWO_THIRD", make_descriptor(TLEConstants::TWO_THIRD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ2", make_descriptor(TLEConstants::XJ2));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ3", make_descriptor(TLEConstants::XJ3));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XJ4", make_descriptor(TLEConstants::XJ4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "XKE", make_descriptor(TLEConstants::XKE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZEL", make_descriptor(TLEConstants::ZEL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZES", make_descriptor(TLEConstants::ZES));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNL", make_descriptor(TLEConstants::ZNL));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEConstants), "ZNS", make_descriptor(TLEConstants::ZNS));
          }

          static PyObject *t_TLEConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEConstants::initializeClass, 1)))
              return NULL;
            return t_TLEConstants::wrap_Object(TLEConstants(((t_TLEConstants *) arg)->object.this$));
          }
          static PyObject *t_TLEConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEConstants::initializeClass, 0))
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
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils$FactorialLog::class$ = NULL;
      jmethodID *CombinatoricsUtils$FactorialLog::mids$ = NULL;
      bool CombinatoricsUtils$FactorialLog::live$ = false;

      jclass CombinatoricsUtils$FactorialLog::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils$FactorialLog");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_92d23f713ea06295] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");
          mids$[mid_value_ce4c02d583456bc9] = env->getMethodID(cls, "value", "(I)D");
          mids$[mid_withCache_bc8148e08276107e] = env->getMethodID(cls, "withCache", "(I)Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::create()
      {
        jclass cls = env->getClass(initializeClass);
        return CombinatoricsUtils$FactorialLog(env->callStaticObjectMethod(cls, mids$[mid_create_92d23f713ea06295]));
      }

      jdouble CombinatoricsUtils$FactorialLog::value(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_ce4c02d583456bc9], a0);
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::withCache(jint a0) const
      {
        return CombinatoricsUtils$FactorialLog(env->callObjectMethod(this$, mids$[mid_withCache_bc8148e08276107e], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type);
      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);

      static PyMethodDef t_CombinatoricsUtils$FactorialLog__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, value, METH_O),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, withCache, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils$FactorialLog)[] = {
        { Py_tp_methods, t_CombinatoricsUtils$FactorialLog__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils$FactorialLog)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils$FactorialLog, t_CombinatoricsUtils$FactorialLog, CombinatoricsUtils$FactorialLog);

      void t_CombinatoricsUtils$FactorialLog::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils$FactorialLog), &PY_TYPE_DEF(CombinatoricsUtils$FactorialLog), module, "CombinatoricsUtils$FactorialLog", 0);
      }

      void t_CombinatoricsUtils$FactorialLog::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "class_", make_descriptor(CombinatoricsUtils$FactorialLog::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "wrapfn_", make_descriptor(t_CombinatoricsUtils$FactorialLog::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(CombinatoricsUtils$FactorialLog(((t_CombinatoricsUtils$FactorialLog *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type)
      {
        CombinatoricsUtils$FactorialLog result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils$FactorialLog::create());
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        CombinatoricsUtils$FactorialLog result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCache(a0));
          return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCache", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatStepHandler::class$ = NULL;
        jmethodID *MultiSatStepHandler::mids$ = NULL;
        bool MultiSatStepHandler::live$ = false;

        jclass MultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_aa335fea495d60e0] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_aa335fea495d60e0] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_0b0c18b32ea71a29] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_aa335fea495d60e0], a0.this$);
        }

        void MultiSatStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_aa335fea495d60e0], a0.this$);
        }

        void MultiSatStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0b0c18b32ea71a29], a0.this$, a1.this$);
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
        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatStepHandler)[] = {
          { Py_tp_methods, t_MultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatStepHandler, t_MultiSatStepHandler, MultiSatStepHandler);

        void t_MultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatStepHandler), &PY_TYPE_DEF(MultiSatStepHandler), module, "MultiSatStepHandler", 0);
        }

        void t_MultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "class_", make_descriptor(MultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "wrapfn_", make_descriptor(t_MultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatStepHandler::wrap_Object(MultiSatStepHandler(((t_MultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg)
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

        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg)
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

        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
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
          mids$[mid_value_b4881e07b2de3818] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterFunction::value(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_b4881e07b2de3818], a0.this$, a1.this$);
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
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *QZSSScale::class$ = NULL;
      jmethodID *QZSSScale::mids$ = NULL;
      bool QZSSScale::live$ = false;

      jclass QZSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/QZSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String QZSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble QZSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement QZSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble QZSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String QZSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_getName(t_QZSSScale *self);
      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data);
      static PyGetSetDef t_QZSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_QZSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QZSSScale__methods_[] = {
        DECLARE_METHOD(t_QZSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_QZSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QZSSScale)[] = {
        { Py_tp_methods, t_QZSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_QZSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QZSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QZSSScale, t_QZSSScale, QZSSScale);

      void t_QZSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(QZSSScale), &PY_TYPE_DEF(QZSSScale), module, "QZSSScale", 0);
      }

      void t_QZSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "class_", make_descriptor(QZSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "wrapfn_", make_descriptor(t_QZSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QZSSScale::initializeClass, 1)))
          return NULL;
        return t_QZSSScale::wrap_Object(QZSSScale(((t_QZSSScale *) arg)->object.this$));
      }
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QZSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_QZSSScale_getName(t_QZSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(QZSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data)
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
#include "org/hipparchus/optim/SimpleBounds.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleBounds::class$ = NULL;
      jmethodID *SimpleBounds::mids$ = NULL;
      bool SimpleBounds::live$ = false;

      jclass SimpleBounds::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleBounds");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_getLower_be783177b060994b] = env->getMethodID(cls, "getLower", "()[D");
          mids$[mid_getUpper_be783177b060994b] = env->getMethodID(cls, "getUpper", "()[D");
          mids$[mid_unbounded_f7ad4fdd53ead2c3] = env->getStaticMethodID(cls, "unbounded", "(I)Lorg/hipparchus/optim/SimpleBounds;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleBounds::SimpleBounds(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

      JArray< jdouble > SimpleBounds::getLower() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getLower_be783177b060994b]));
      }

      JArray< jdouble > SimpleBounds::getUpper() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpper_be783177b060994b]));
      }

      SimpleBounds SimpleBounds::unbounded(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleBounds(env->callStaticObjectMethod(cls, mids$[mid_unbounded_f7ad4fdd53ead2c3], a0));
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
      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self);
      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data);
      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data);
      static PyGetSetDef t_SimpleBounds__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleBounds, lower),
        DECLARE_GET_FIELD(t_SimpleBounds, upper),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleBounds__methods_[] = {
        DECLARE_METHOD(t_SimpleBounds, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleBounds, getLower, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, getUpper, METH_NOARGS),
        DECLARE_METHOD(t_SimpleBounds, unbounded, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleBounds)[] = {
        { Py_tp_methods, t_SimpleBounds__methods_ },
        { Py_tp_init, (void *) t_SimpleBounds_init_ },
        { Py_tp_getset, t_SimpleBounds__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleBounds)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleBounds, t_SimpleBounds, SimpleBounds);

      void t_SimpleBounds::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleBounds), &PY_TYPE_DEF(SimpleBounds), module, "SimpleBounds", 0);
      }

      void t_SimpleBounds::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "class_", make_descriptor(SimpleBounds::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "wrapfn_", make_descriptor(t_SimpleBounds::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleBounds), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleBounds_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleBounds::initializeClass, 1)))
          return NULL;
        return t_SimpleBounds::wrap_Object(SimpleBounds(((t_SimpleBounds *) arg)->object.this$));
      }
      static PyObject *t_SimpleBounds_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleBounds::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SimpleBounds_init_(t_SimpleBounds *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleBounds object((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          INT_CALL(object = SimpleBounds(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SimpleBounds_getLower(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLower());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_getUpper(t_SimpleBounds *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpper());
        return result.wrap();
      }

      static PyObject *t_SimpleBounds_unbounded(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        SimpleBounds result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::SimpleBounds::unbounded(a0));
          return t_SimpleBounds::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unbounded", arg);
        return NULL;
      }

      static PyObject *t_SimpleBounds_get__lower(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLower());
        return value.wrap();
      }

      static PyObject *t_SimpleBounds_get__upper(t_SimpleBounds *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpper());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenUtilities::class$ = NULL;
              jmethodID *HansenUtilities::mids$ = NULL;
              bool HansenUtilities::live$ = false;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ONE = NULL;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ZERO = NULL;

              jclass HansenUtilities::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_buildIdentityMatrix2_5c272d1ba9bc3131] = env->getStaticMethodID(cls, "buildIdentityMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildIdentityMatrix4_5c272d1ba9bc3131] = env->getStaticMethodID(cls, "buildIdentityMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix2_5c272d1ba9bc3131] = env->getStaticMethodID(cls, "buildZeroMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix4_5c272d1ba9bc3131] = env->getStaticMethodID(cls, "buildZeroMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ONE = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  ZERO = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix2_5c272d1ba9bc3131]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix4_5c272d1ba9bc3131]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix2_5c272d1ba9bc3131]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix4_5c272d1ba9bc3131]));
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
              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type);

              static PyMethodDef t_HansenUtilities__methods_[] = {
                DECLARE_METHOD(t_HansenUtilities, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix4, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix4, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenUtilities)[] = {
                { Py_tp_methods, t_HansenUtilities__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenUtilities)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenUtilities, t_HansenUtilities, HansenUtilities);

              void t_HansenUtilities::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenUtilities), &PY_TYPE_DEF(HansenUtilities), module, "HansenUtilities", 0);
              }

              void t_HansenUtilities::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "class_", make_descriptor(HansenUtilities::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "wrapfn_", make_descriptor(t_HansenUtilities::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "boxfn_", make_descriptor(boxObject));
                env->getClass(HansenUtilities::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ONE", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ZERO", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ZERO)));
              }

              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenUtilities::initializeClass, 1)))
                  return NULL;
                return t_HansenUtilities::wrap_Object(HansenUtilities(((t_HansenUtilities *) arg)->object.this$));
              }
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenUtilities::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
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
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station::class$ = NULL;
        jmethodID *Station::mids$ = NULL;
        bool Station::live$ = false;

        jclass Station::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAntennaTypeValidAfter_4bcfb64f3a1ec56d] = env->getMethodID(cls, "addAntennaTypeValidAfter", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAntennaTypeValidBefore_4bcfb64f3a1ec56d] = env->getMethodID(cls, "addAntennaTypeValidBefore", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidAfter_35db6c8a69ba108a] = env->getMethodID(cls, "addStationEccentricitiesValidAfter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidBefore_35db6c8a69ba108a] = env->getMethodID(cls, "addStationEccentricitiesValidBefore", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getAntennaType_6989a51b7b3249aa] = env->getMethodID(cls, "getAntennaType", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
            mids$[mid_getAntennaTypeTimeSpanMap_d11c7ec0e313e33d] = env->getMethodID(cls, "getAntennaTypeTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getDomes_d2c8eb4129821f0e] = env->getMethodID(cls, "getDomes", "()Ljava/lang/String;");
            mids$[mid_getEccRefSystem_e94be7bb1cd54d88] = env->getMethodID(cls, "getEccRefSystem", "()Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getEccentricities_8b37cafaaf55a3a5] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getEccentricitiesTimeSpanMap_d11c7ec0e313e33d] = env->getMethodID(cls, "getEccentricitiesTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPosition_032312bdeb3f2f93] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getSiteCode_d2c8eb4129821f0e] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_getValidFrom_80e11148db499dda] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_80e11148db499dda] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getVelocity_032312bdeb3f2f93] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_setDomes_105e1eadb709d9ac] = env->getMethodID(cls, "setDomes", "(Ljava/lang/String;)V");
            mids$[mid_setEccRefSystem_a2d3c26dd0bc26e3] = env->getMethodID(cls, "setEccRefSystem", "(Lorg/orekit/files/sinex/Station$ReferenceSystem;)V");
            mids$[mid_setEpoch_8497861b879c83f7] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setPosition_30f8886dfb88a63c] = env->getMethodID(cls, "setPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_setSiteCode_105e1eadb709d9ac] = env->getMethodID(cls, "setSiteCode", "(Ljava/lang/String;)V");
            mids$[mid_setValidFrom_8497861b879c83f7] = env->getMethodID(cls, "setValidFrom", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setValidUntil_8497861b879c83f7] = env->getMethodID(cls, "setValidUntil", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setVelocity_30f8886dfb88a63c] = env->getMethodID(cls, "setVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station::Station() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void Station::addAntennaTypeValidAfter(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidAfter_4bcfb64f3a1ec56d], a0.this$, a1.this$);
        }

        void Station::addAntennaTypeValidBefore(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidBefore_4bcfb64f3a1ec56d], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidAfter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidAfter_35db6c8a69ba108a], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidBefore(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidBefore_35db6c8a69ba108a], a0.this$, a1.this$);
        }

        ::java::lang::String Station::getAntennaType(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_6989a51b7b3249aa], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getAntennaTypeTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getAntennaTypeTimeSpanMap_d11c7ec0e313e33d]));
        }

        ::java::lang::String Station::getDomes() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDomes_d2c8eb4129821f0e]));
        }

        ::org::orekit::files::sinex::Station$ReferenceSystem Station::getEccRefSystem() const
        {
          return ::org::orekit::files::sinex::Station$ReferenceSystem(env->callObjectMethod(this$, mids$[mid_getEccRefSystem_e94be7bb1cd54d88]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getEccentricities(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_8b37cafaaf55a3a5], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getEccentricitiesTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getEccentricitiesTimeSpanMap_d11c7ec0e313e33d]));
        }

        ::org::orekit::time::AbsoluteDate Station::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_032312bdeb3f2f93]));
        }

        ::java::lang::String Station::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_d2c8eb4129821f0e]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_80e11148db499dda]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_032312bdeb3f2f93]));
        }

        void Station::setDomes(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDomes_105e1eadb709d9ac], a0.this$);
        }

        void Station::setEccRefSystem(const ::org::orekit::files::sinex::Station$ReferenceSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEccRefSystem_a2d3c26dd0bc26e3], a0.this$);
        }

        void Station::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_8497861b879c83f7], a0.this$);
        }

        void Station::setPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosition_30f8886dfb88a63c], a0.this$);
        }

        void Station::setSiteCode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSiteCode_105e1eadb709d9ac], a0.this$);
        }

        void Station::setValidFrom(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidFrom_8497861b879c83f7], a0.this$);
        }

        void Station::setValidUntil(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidUntil_8497861b879c83f7], a0.this$);
        }

        void Station::setVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVelocity_30f8886dfb88a63c], a0.this$);
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
        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getDomes(t_Station *self);
        static PyObject *t_Station_getEccRefSystem(t_Station *self);
        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getEpoch(t_Station *self);
        static PyObject *t_Station_getPosition(t_Station *self);
        static PyObject *t_Station_getSiteCode(t_Station *self);
        static PyObject *t_Station_getValidFrom(t_Station *self);
        static PyObject *t_Station_getValidUntil(t_Station *self);
        static PyObject *t_Station_getVelocity(t_Station *self);
        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg);
        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__domes(t_Station *self, void *data);
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data);
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__epoch(t_Station *self, void *data);
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__position(t_Station *self, void *data);
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__siteCode(t_Station *self, void *data);
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validFrom(t_Station *self, void *data);
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validUntil(t_Station *self, void *data);
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__velocity(t_Station *self, void *data);
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data);
        static PyGetSetDef t_Station__fields_[] = {
          DECLARE_GET_FIELD(t_Station, antennaTypeTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, domes),
          DECLARE_GETSET_FIELD(t_Station, eccRefSystem),
          DECLARE_GET_FIELD(t_Station, eccentricitiesTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, epoch),
          DECLARE_GETSET_FIELD(t_Station, position),
          DECLARE_GETSET_FIELD(t_Station, siteCode),
          DECLARE_GETSET_FIELD(t_Station, validFrom),
          DECLARE_GETSET_FIELD(t_Station, validUntil),
          DECLARE_GETSET_FIELD(t_Station, velocity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station__methods_[] = {
          DECLARE_METHOD(t_Station, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, getAntennaType, METH_O),
          DECLARE_METHOD(t_Station, getAntennaTypeTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getDomes, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccRefSystem, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccentricities, METH_O),
          DECLARE_METHOD(t_Station, getEccentricitiesTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_Station, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_Station, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidUntil, METH_NOARGS),
          DECLARE_METHOD(t_Station, getVelocity, METH_NOARGS),
          DECLARE_METHOD(t_Station, setDomes, METH_O),
          DECLARE_METHOD(t_Station, setEccRefSystem, METH_O),
          DECLARE_METHOD(t_Station, setEpoch, METH_O),
          DECLARE_METHOD(t_Station, setPosition, METH_O),
          DECLARE_METHOD(t_Station, setSiteCode, METH_O),
          DECLARE_METHOD(t_Station, setValidFrom, METH_O),
          DECLARE_METHOD(t_Station, setValidUntil, METH_O),
          DECLARE_METHOD(t_Station, setVelocity, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station)[] = {
          { Py_tp_methods, t_Station__methods_ },
          { Py_tp_init, (void *) t_Station_init_ },
          { Py_tp_getset, t_Station__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Station, t_Station, Station);

        void t_Station::install(PyObject *module)
        {
          installType(&PY_TYPE(Station), &PY_TYPE_DEF(Station), module, "Station", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "ReferenceSystem", make_descriptor(&PY_TYPE_DEF(Station$ReferenceSystem)));
        }

        void t_Station::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "class_", make_descriptor(Station::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "wrapfn_", make_descriptor(t_Station::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station::initializeClass, 1)))
            return NULL;
          return t_Station::wrap_Object(Station(((t_Station *) arg)->object.this$));
        }
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds)
        {
          Station object((jobject) NULL);

          INT_CALL(object = Station());
          self->object = object;

          return 0;
        }

        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAntennaType(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAntennaType", arg);
          return NULL;
        }

        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_Station_getDomes(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDomes());
          return j2p(result);
        }

        static PyObject *t_Station_getEccRefSystem(t_Station *self)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(result);
        }

        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
        }

        static PyObject *t_Station_getEpoch(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getPosition(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_getSiteCode(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_Station_getValidFrom(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getValidUntil(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getVelocity(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDomes(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDomes", arg);
          return NULL;
        }

        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &a0, &p0, ::org::orekit::files::sinex::t_Station$ReferenceSystem::parameters_))
          {
            OBJ_CALL(self->object.setEccRefSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
          return NULL;
        }

        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setPosition(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosition", arg);
          return NULL;
        }

        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSiteCode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSiteCode", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidFrom(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidFrom", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidUntil(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidUntil", arg);
          return NULL;
        }

        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setVelocity(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVelocity", arg);
          return NULL;
        }

        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__domes(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDomes());
          return j2p(value);
        }
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDomes(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "domes", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(value);
        }
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setEccRefSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "eccRefSystem", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__epoch(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epoch", arg);
          return -1;
        }

        static PyObject *t_Station_get__position(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setPosition(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "position", arg);
          return -1;
        }

        static PyObject *t_Station_get__siteCode(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSiteCode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "siteCode", arg);
          return -1;
        }

        static PyObject *t_Station_get__validFrom(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidFrom(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validFrom", arg);
          return -1;
        }

        static PyObject *t_Station_get__validUntil(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidUntil(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validUntil", arg);
          return -1;
        }

        static PyObject *t_Station_get__velocity(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setVelocity(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "velocity", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *AlgorithmId::class$ = NULL;
        jmethodID *AlgorithmId::mids$ = NULL;
        bool AlgorithmId::live$ = false;
        AlgorithmId *AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = NULL;
        AlgorithmId *AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE = NULL;
        AlgorithmId *AlgorithmId::DUVENHAGE_FLAT_BODY = NULL;
        AlgorithmId *AlgorithmId::IGNORE_DEM_USE_ELLIPSOID = NULL;

        jclass AlgorithmId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/AlgorithmId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_1b84a14c8d77048a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_values_dad80ce6b42e1e97] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/AlgorithmId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY = new AlgorithmId(env->getStaticObjectField(cls, "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            CONSTANT_ELEVATION_OVER_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "CONSTANT_ELEVATION_OVER_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE", "Lorg/orekit/rugged/api/AlgorithmId;"));
            DUVENHAGE_FLAT_BODY = new AlgorithmId(env->getStaticObjectField(cls, "DUVENHAGE_FLAT_BODY", "Lorg/orekit/rugged/api/AlgorithmId;"));
            IGNORE_DEM_USE_ELLIPSOID = new AlgorithmId(env->getStaticObjectField(cls, "IGNORE_DEM_USE_ELLIPSOID", "Lorg/orekit/rugged/api/AlgorithmId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlgorithmId AlgorithmId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlgorithmId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1b84a14c8d77048a], a0.this$));
        }

        JArray< AlgorithmId > AlgorithmId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlgorithmId >(env->callStaticObjectMethod(cls, mids$[mid_values_dad80ce6b42e1e97]));
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
        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args);
        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlgorithmId_values(PyTypeObject *type);
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data);
        static PyGetSetDef t_AlgorithmId__fields_[] = {
          DECLARE_GET_FIELD(t_AlgorithmId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlgorithmId__methods_[] = {
          DECLARE_METHOD(t_AlgorithmId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlgorithmId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlgorithmId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlgorithmId)[] = {
          { Py_tp_methods, t_AlgorithmId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlgorithmId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlgorithmId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlgorithmId, t_AlgorithmId, AlgorithmId);
        PyObject *t_AlgorithmId::wrap_Object(const AlgorithmId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlgorithmId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlgorithmId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlgorithmId *self = (t_AlgorithmId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlgorithmId::install(PyObject *module)
        {
          installType(&PY_TYPE(AlgorithmId), &PY_TYPE_DEF(AlgorithmId), module, "AlgorithmId", 0);
        }

        void t_AlgorithmId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "class_", make_descriptor(AlgorithmId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "wrapfn_", make_descriptor(t_AlgorithmId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlgorithmId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::BASIC_SLOW_EXHAUSTIVE_SCAN_FOR_TESTS_ONLY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "CONSTANT_ELEVATION_OVER_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::CONSTANT_ELEVATION_OVER_ELLIPSOID)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "DUVENHAGE_FLAT_BODY", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::DUVENHAGE_FLAT_BODY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlgorithmId), "IGNORE_DEM_USE_ELLIPSOID", make_descriptor(t_AlgorithmId::wrap_Object(*AlgorithmId::IGNORE_DEM_USE_ELLIPSOID)));
        }

        static PyObject *t_AlgorithmId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlgorithmId::initializeClass, 1)))
            return NULL;
          return t_AlgorithmId::wrap_Object(AlgorithmId(((t_AlgorithmId *) arg)->object.this$));
        }
        static PyObject *t_AlgorithmId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlgorithmId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlgorithmId_of_(t_AlgorithmId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlgorithmId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlgorithmId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::valueOf(a0));
            return t_AlgorithmId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlgorithmId_values(PyTypeObject *type)
        {
          JArray< AlgorithmId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::AlgorithmId::values());
          return JArray<jobject>(result.this$).wrap(t_AlgorithmId::wrap_jobject);
        }
        static PyObject *t_AlgorithmId_get__parameters_(t_AlgorithmId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AccurateFormatter.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AccurateFormatter::class$ = NULL;
      jmethodID *AccurateFormatter::mids$ = NULL;
      bool AccurateFormatter::live$ = false;
      ::java::util::Locale *AccurateFormatter::STANDARDIZED_LOCALE = NULL;

      jclass AccurateFormatter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AccurateFormatter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_e3ac8af686594d08] = env->getStaticMethodID(cls, "format", "(D)Ljava/lang/String;");
          mids$[mid_format_4b7bd88ca2c9af4f] = env->getStaticMethodID(cls, "format", "(IIIIID)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STANDARDIZED_LOCALE = new ::java::util::Locale(env->getStaticObjectField(cls, "STANDARDIZED_LOCALE", "Ljava/util/Locale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String AccurateFormatter::format(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_e3ac8af686594d08], a0));
      }

      ::java::lang::String AccurateFormatter::format(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_4b7bd88ca2c9af4f], a0, a1, a2, a3, a4, a5));
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
      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_AccurateFormatter__methods_[] = {
        DECLARE_METHOD(t_AccurateFormatter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, format, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AccurateFormatter)[] = {
        { Py_tp_methods, t_AccurateFormatter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AccurateFormatter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AccurateFormatter, t_AccurateFormatter, AccurateFormatter);

      void t_AccurateFormatter::install(PyObject *module)
      {
        installType(&PY_TYPE(AccurateFormatter), &PY_TYPE_DEF(AccurateFormatter), module, "AccurateFormatter", 0);
      }

      void t_AccurateFormatter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "class_", make_descriptor(AccurateFormatter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "wrapfn_", make_descriptor(t_AccurateFormatter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AccurateFormatter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "STANDARDIZED_LOCALE", make_descriptor(::java::util::t_Locale::wrap_Object(*AccurateFormatter::STANDARDIZED_LOCALE)));
      }

      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AccurateFormatter::initializeClass, 1)))
          return NULL;
        return t_AccurateFormatter::wrap_Object(AccurateFormatter(((t_AccurateFormatter *) arg)->object.this$));
      }
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AccurateFormatter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0));
              return j2p(result);
            }
          }
          break;
         case 6:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0, a1, a2, a3, a4, a5));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "format", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame5B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame5B::class$ = NULL;
          jmethodID *SubFrame5B::mids$ = NULL;
          bool SubFrame5B::live$ = false;

          jclass SubFrame5B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame5B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReservedA10_d6ab429752e7c267] = env->getMethodID(cls, "getReservedA10", "()I");
              mids$[mid_getReservedB10_d6ab429752e7c267] = env->getMethodID(cls, "getReservedB10", "()I");
              mids$[mid_getSvHealth_d938fc64e8c6df2d] = env->getMethodID(cls, "getSvHealth", "(I)I");
              mids$[mid_getTOA_d6ab429752e7c267] = env->getMethodID(cls, "getTOA", "()I");
              mids$[mid_getWeekNumber_d6ab429752e7c267] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame5B::getReservedA10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA10_d6ab429752e7c267]);
          }

          jint SubFrame5B::getReservedB10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB10_d6ab429752e7c267]);
          }

          jint SubFrame5B::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_d938fc64e8c6df2d], a0);
          }

          jint SubFrame5B::getTOA() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOA_d6ab429752e7c267]);
          }

          jint SubFrame5B::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_d6ab429752e7c267]);
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
          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg);
          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data);
          static PyGetSetDef t_SubFrame5B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame5B, reservedA10),
            DECLARE_GET_FIELD(t_SubFrame5B, reservedB10),
            DECLARE_GET_FIELD(t_SubFrame5B, tOA),
            DECLARE_GET_FIELD(t_SubFrame5B, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame5B__methods_[] = {
            DECLARE_METHOD(t_SubFrame5B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, getReservedA10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getReservedB10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getSvHealth, METH_O),
            DECLARE_METHOD(t_SubFrame5B, getTOA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame5B)[] = {
            { Py_tp_methods, t_SubFrame5B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame5B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame5B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame5B, t_SubFrame5B, SubFrame5B);

          void t_SubFrame5B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame5B), &PY_TYPE_DEF(SubFrame5B), module, "SubFrame5B", 0);
          }

          void t_SubFrame5B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "class_", make_descriptor(SubFrame5B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "wrapfn_", make_descriptor(t_SubFrame5B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame5B::initializeClass, 1)))
              return NULL;
            return t_SubFrame5B::wrap_Object(SubFrame5B(((t_SubFrame5B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame5B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegrator::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_88bffd71fb0313dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_61c6feaa42dd1d3e] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegrator::ClassicalRungeKuttaFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_88bffd71fb0313dc, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ClassicalRungeKuttaFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ClassicalRungeKuttaFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
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
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegrator, t_ClassicalRungeKuttaFieldIntegrator, ClassicalRungeKuttaFieldIntegrator);
        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(const ClassicalRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegrator *self = (t_ClassicalRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegrator), module, "ClassicalRungeKuttaFieldIntegrator", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegrator::wrap_Object(ClassicalRungeKuttaFieldIntegrator(((t_ClassicalRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_of_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegrator_init_(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ClassicalRungeKuttaFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ClassicalRungeKuttaFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getA(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getB(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_getC(t_ClassicalRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__parameters_(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__a(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__b(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegrator_get__c(t_ClassicalRungeKuttaFieldIntegrator *self, void *data)
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
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/stat/correlation/Covariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *PearsonsCorrelation::class$ = NULL;
        jmethodID *PearsonsCorrelation::mids$ = NULL;
        bool PearsonsCorrelation::live$ = false;

        jclass PearsonsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/PearsonsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_4f6cba88847b2fef] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/correlation/Covariance;)V");
            mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_56802cbfc5b9e059] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;I)V");
            mids$[mid_computeCorrelationMatrix_a50478fa84afaa43] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_5a8a8185eb309db7] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_b01af8a77d4df96f] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_covarianceToCorrelation_5a8a8185eb309db7] = env->getMethodID(cls, "covarianceToCorrelation", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationPValues_b2eebabce70526d8] = env->getMethodID(cls, "getCorrelationPValues", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getCorrelationStandardErrors_b2eebabce70526d8] = env->getMethodID(cls, "getCorrelationStandardErrors", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PearsonsCorrelation::PearsonsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        PearsonsCorrelation::PearsonsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::stat::correlation::Covariance & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f6cba88847b2fef, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

        PearsonsCorrelation::PearsonsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56802cbfc5b9e059, a0.this$, a1)) {}

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_a50478fa84afaa43], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_5a8a8185eb309db7], a0.this$));
        }

        jdouble PearsonsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::covarianceToCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_covarianceToCorrelation_5a8a8185eb309db7], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationPValues() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationPValues_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix PearsonsCorrelation::getCorrelationStandardErrors() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationStandardErrors_b2eebabce70526d8]));
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
      namespace correlation {
        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args);
        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg);
        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self);
        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data);
        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data);
        static PyGetSetDef t_PearsonsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationPValues),
          DECLARE_GET_FIELD(t_PearsonsCorrelation, correlationStandardErrors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PearsonsCorrelation__methods_[] = {
          DECLARE_METHOD(t_PearsonsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PearsonsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, covarianceToCorrelation, METH_O),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationPValues, METH_NOARGS),
          DECLARE_METHOD(t_PearsonsCorrelation, getCorrelationStandardErrors, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PearsonsCorrelation)[] = {
          { Py_tp_methods, t_PearsonsCorrelation__methods_ },
          { Py_tp_init, (void *) t_PearsonsCorrelation_init_ },
          { Py_tp_getset, t_PearsonsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PearsonsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PearsonsCorrelation, t_PearsonsCorrelation, PearsonsCorrelation);

        void t_PearsonsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(PearsonsCorrelation), &PY_TYPE_DEF(PearsonsCorrelation), module, "PearsonsCorrelation", 0);
        }

        void t_PearsonsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "class_", make_descriptor(PearsonsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "wrapfn_", make_descriptor(t_PearsonsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PearsonsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PearsonsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PearsonsCorrelation::initializeClass, 1)))
            return NULL;
          return t_PearsonsCorrelation::wrap_Object(PearsonsCorrelation(((t_PearsonsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_PearsonsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PearsonsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PearsonsCorrelation_init_(t_PearsonsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              PearsonsCorrelation object((jobject) NULL);

              INT_CALL(object = PearsonsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::correlation::Covariance a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::correlation::Covariance::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = PearsonsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              jint a1;
              PearsonsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                INT_CALL(object = PearsonsCorrelation(a0, a1));
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

        static PyObject *t_PearsonsCorrelation_computeCorrelationMatrix(t_PearsonsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_correlation(t_PearsonsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_covarianceToCorrelation(t_PearsonsCorrelation *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.covarianceToCorrelation(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "covarianceToCorrelation", arg);
          return NULL;
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationMatrix(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationPValues(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_getCorrelationStandardErrors(t_PearsonsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationMatrix(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationPValues(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationPValues());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_PearsonsCorrelation_get__correlationStandardErrors(t_PearsonsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationStandardErrors());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractIntegrator::class$ = NULL;
      jmethodID *AbstractIntegrator::mids$ = NULL;
      bool AbstractIntegrator::live$ = false;

      jclass AbstractIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_4cad2771a2849140] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_3dff193c3948a094] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_e6ea3ae127d5bfec] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_bfc955188bf36f2c] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getCurrentSignedStepsize_9981f74b2d109da6] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_d751c1a57012b438] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_abe7a2bda3ab9237] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_sanityChecks_e6ba2f1f75657f6f] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
          mids$[mid_initIntegration_3b00c059d3ccb86d] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setStepStart_6bfc236263cc281c] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_setIsLastStep_b35db77cae58639e] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_setStepSize_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setStepSize", "(D)V");
          mids$[mid_getStepSize_9981f74b2d109da6] = env->getMethodID(cls, "getStepSize", "()D");
          mids$[mid_acceptStep_bcb8bb0d467166bb] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_isLastStep_eee3de00fe971136] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_eee3de00fe971136] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_getEquations_cfdcf52f10836739] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/ExpandableODE;");
          mids$[mid_getEvaluationsCounter_286bd168b7e14166] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_setStateInitialized_b35db77cae58639e] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_4cad2771a2849140], a0.this$);
      }

      void AbstractIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_3dff193c3948a094], a0.this$);
      }

      void AbstractIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_e6ea3ae127d5bfec], a0.this$);
      }

      void AbstractIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_ff7cb6c242604316]);
      }

      void AbstractIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_ff7cb6c242604316]);
      }

      void AbstractIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_ff7cb6c242604316]);
      }

      JArray< jdouble > AbstractIntegrator::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_bfc955188bf36f2c], a0, a1.this$));
      }

      jdouble AbstractIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_9981f74b2d109da6]);
      }

      jint AbstractIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
      }

      ::java::util::List AbstractIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d751c1a57012b438]));
      }

      jint AbstractIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
      }

      ::java::lang::String AbstractIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::java::util::List AbstractIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_d751c1a57012b438]));
      }

      ::java::util::List AbstractIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_d751c1a57012b438]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative AbstractIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_abe7a2bda3ab9237]));
      }

      void AbstractIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_8fd427ab23829bf5], a0);
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
      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args);
      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data);
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data);
      static PyGetSetDef t_AbstractIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_AbstractIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractIntegrator)[] = {
        { Py_tp_methods, t_AbstractIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractIntegrator, t_AbstractIntegrator, AbstractIntegrator);

      void t_AbstractIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractIntegrator), &PY_TYPE_DEF(AbstractIntegrator), module, "AbstractIntegrator", 0);
      }

      void t_AbstractIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "class_", make_descriptor(AbstractIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "wrapfn_", make_descriptor(t_AbstractIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractIntegrator::wrap_Object(AbstractIntegrator(((t_AbstractIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg)
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

      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Writer.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Appendable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Writer::class$ = NULL;
    jmethodID *Writer::mids$ = NULL;
    bool Writer::live$ = false;

    jclass Writer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Writer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_append_b9bb9c1cf9ac79f5] = env->getMethodID(cls, "append", "(C)Ljava/io/Writer;");
        mids$[mid_append_28ef4a32b3361ee5] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/Writer;");
        mids$[mid_append_e12a3710561f822f] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/Writer;");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_ff7cb6c242604316] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullWriter_0fa081fa24ab266a] = env->getStaticMethodID(cls, "nullWriter", "()Ljava/io/Writer;");
        mids$[mid_write_e22e96b35f4145e4] = env->getMethodID(cls, "write", "([C)V");
        mids$[mid_write_105e1eadb709d9ac] = env->getMethodID(cls, "write", "(Ljava/lang/String;)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_6f10578448832e2a] = env->getMethodID(cls, "write", "([CII)V");
        mids$[mid_write_c9a77c84756b106b] = env->getMethodID(cls, "write", "(Ljava/lang/String;II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Writer Writer::append(jchar a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_b9bb9c1cf9ac79f5], a0));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_28ef4a32b3361ee5], a0.this$));
    }

    Writer Writer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return Writer(env->callObjectMethod(this$, mids$[mid_append_e12a3710561f822f], a0.this$, a1, a2));
    }

    void Writer::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void Writer::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_ff7cb6c242604316]);
    }

    Writer Writer::nullWriter()
    {
      jclass cls = env->getClass(initializeClass);
      return Writer(env->callStaticObjectMethod(cls, mids$[mid_nullWriter_0fa081fa24ab266a]));
    }

    void Writer::write(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e22e96b35f4145e4], a0.this$);
    }

    void Writer::write(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_105e1eadb709d9ac], a0.this$);
    }

    void Writer::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void Writer::write(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_6f10578448832e2a], a0.this$, a1, a2);
    }

    void Writer::write(const ::java::lang::String & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_c9a77c84756b106b], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Writer_append(t_Writer *self, PyObject *args);
    static PyObject *t_Writer_close(t_Writer *self);
    static PyObject *t_Writer_flush(t_Writer *self);
    static PyObject *t_Writer_nullWriter(PyTypeObject *type);
    static PyObject *t_Writer_write(t_Writer *self, PyObject *args);

    static PyMethodDef t_Writer__methods_[] = {
      DECLARE_METHOD(t_Writer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Writer, append, METH_VARARGS),
      DECLARE_METHOD(t_Writer, close, METH_NOARGS),
      DECLARE_METHOD(t_Writer, flush, METH_NOARGS),
      DECLARE_METHOD(t_Writer, nullWriter, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Writer, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Writer)[] = {
      { Py_tp_methods, t_Writer__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Writer)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Writer, t_Writer, Writer);

    void t_Writer::install(PyObject *module)
    {
      installType(&PY_TYPE(Writer), &PY_TYPE_DEF(Writer), module, "Writer", 0);
    }

    void t_Writer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "class_", make_descriptor(Writer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "wrapfn_", make_descriptor(t_Writer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Writer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Writer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Writer::initializeClass, 1)))
        return NULL;
      return t_Writer::wrap_Object(Writer(((t_Writer *) arg)->object.this$));
    }
    static PyObject *t_Writer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Writer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Writer_append(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          Writer result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_Writer::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          Writer result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_Writer::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_Writer_close(t_Writer *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_flush(t_Writer *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Writer_nullWriter(PyTypeObject *type)
    {
      Writer result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Writer::nullWriter());
      return t_Writer::wrap_Object(result);
    }

    static PyObject *t_Writer_write(t_Writer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractCycleSlipDetector::class$ = NULL;
          jmethodID *AbstractCycleSlipDetector::mids$ = NULL;
          bool AbstractCycleSlipDetector::live$ = false;

          jclass AbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_a27502c31bd75a45] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_manageData_d75e9b743ecf20cb] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getMinMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getMaxTimeBeetween2Measurement_9981f74b2d109da6] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getResults_d751c1a57012b438] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_getStuffReference_d751c1a57012b438] = env->getMethodID(cls, "getStuffReference", "()Ljava/util/List;");
              mids$[mid_cycleSlipDataSet_417cb06bfd27f642] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_setName_69ce224351e794e7] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractCycleSlipDetector::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_a27502c31bd75a45], a0.this$));
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
          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg);

          static PyMethodDef t_AbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_AbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_AbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractCycleSlipDetector, t_AbstractCycleSlipDetector, AbstractCycleSlipDetector);

          void t_AbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractCycleSlipDetector), &PY_TYPE_DEF(AbstractCycleSlipDetector), module, "AbstractCycleSlipDetector", 0);
          }

          void t_AbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "class_", make_descriptor(AbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_AbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_AbstractCycleSlipDetector::wrap_Object(AbstractCycleSlipDetector(((t_AbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Min.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Min::class$ = NULL;
        jmethodID *Min::mids$ = NULL;
        bool Min::live$ = false;

        jclass Min::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Min");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Min::Min() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Min::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Min_value(t_Min *self, PyObject *args);

        static PyMethodDef t_Min__methods_[] = {
          DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
          { Py_tp_methods, t_Min__methods_ },
          { Py_tp_init, (void *) t_Min_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Min)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
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

        static PyObject *t_Min_value(t_Min *self, PyObject *args)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Double.h"
#include "org/hipparchus/Field.h"
#include "java/util/SortedMap.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory::class$ = NULL;
            jmethodID *CoefficientsFactory::mids$ = NULL;
            bool CoefficientsFactory::live$ = false;

            jclass CoefficientsFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeGsHs_073b9339e81ee0aa] = env->getStaticMethodID(cls, "computeGsHs", "(DDDDI)[[D");
                mids$[mid_computeGsHs_450199253e5577f8] = env->getStaticMethodID(cls, "computeGsHs", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeQns_572737d7fc5c7215] = env->getStaticMethodID(cls, "computeQns", "(DII)[[D");
                mids$[mid_computeQns_40bf9ad6b34cfa6d] = env->getStaticMethodID(cls, "computeQns", "(Lorg/hipparchus/CalculusFieldElement;II)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeVns_860bad699123b13b] = env->getStaticMethodID(cls, "computeVns", "(I)Ljava/util/SortedMap;");
                mids$[mid_getVmns_d692aeb156453fed] = env->getStaticMethodID(cls, "getVmns", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeGsHs(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_073b9339e81ee0aa], a0, a1, a2, a3, a4));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeGsHs(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_450199253e5577f8], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeQns(jdouble a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_572737d7fc5c7215], a0, a1, a2));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeQns(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_40bf9ad6b34cfa6d], a0.this$, a1, a2));
            }

            ::java::util::SortedMap CoefficientsFactory::computeVns(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_computeVns_860bad699123b13b], a0));
            }

            jdouble CoefficientsFactory::getVmns(jint a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getVmns_d692aeb156453fed], a0, a1, a2);
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
            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_CoefficientsFactory__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeGsHs, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeQns, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeVns, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, getVmns, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory)[] = {
              { Py_tp_methods, t_CoefficientsFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory, t_CoefficientsFactory, CoefficientsFactory);

            void t_CoefficientsFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory), &PY_TYPE_DEF(CoefficientsFactory), module, "CoefficientsFactory", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "NSKey", make_descriptor(&PY_TYPE_DEF(CoefficientsFactory$NSKey)));
            }

            void t_CoefficientsFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "class_", make_descriptor(CoefficientsFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "wrapfn_", make_descriptor(t_CoefficientsFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory::wrap_Object(CoefficientsFactory(((t_CoefficientsFactory *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jint a4;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                break;
               case 6:
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  ::org::hipparchus::Field a5((jobject) NULL);
                  PyTypeObject **p5;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4, a5));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeGsHs", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DII", &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeQns", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              ::java::util::SortedMap result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeVns(a0));
                return ::java::util::t_SortedMap::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::utilities::PY_TYPE(CoefficientsFactory$NSKey), ::java::lang::PY_TYPE(Double));
              }

              PyErr_SetArgsError(type, "computeVns", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::getVmns(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getVmns", args);
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
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *RankingAlgorithm::class$ = NULL;
        jmethodID *RankingAlgorithm::mids$ = NULL;
        bool RankingAlgorithm::live$ = false;

        jclass RankingAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/RankingAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_rank_51f624c89851da7e] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > RankingAlgorithm::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_51f624c89851da7e], a0.this$));
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
      namespace ranking {
        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg);

        static PyMethodDef t_RankingAlgorithm__methods_[] = {
          DECLARE_METHOD(t_RankingAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RankingAlgorithm)[] = {
          { Py_tp_methods, t_RankingAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RankingAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RankingAlgorithm, t_RankingAlgorithm, RankingAlgorithm);

        void t_RankingAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(RankingAlgorithm), &PY_TYPE_DEF(RankingAlgorithm), module, "RankingAlgorithm", 0);
        }

        void t_RankingAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "class_", make_descriptor(RankingAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "wrapfn_", make_descriptor(t_RankingAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RankingAlgorithm::initializeClass, 1)))
            return NULL;
          return t_RankingAlgorithm::wrap_Object(RankingAlgorithm(((t_RankingAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RankingAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *FrameFacade::class$ = NULL;
          jmethodID *FrameFacade::mids$ = NULL;
          bool FrameFacade::live$ = false;

          jclass FrameFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/FrameFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_974e42dec5c8c61f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;Ljava/lang/String;)V");
              mids$[mid_asCelestialBodyFrame_f7bff9eee7210db3] = env->getMethodID(cls, "asCelestialBodyFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_asFrame_cb151471db4570f0] = env->getMethodID(cls, "asFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_asOrbitRelativeFrame_0b1c57b4ded01423] = env->getMethodID(cls, "asOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_asSpacecraftBodyFrame_e9bc4980320b8143] = env->getMethodID(cls, "asSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTransform_f0f79dd476f7dc19] = env->getStaticMethodID(cls, "getTransform", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/frames/Transform;");
              mids$[mid_map_df56c09046b263c6] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_parse_30a55f049e86b82f] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;ZZZ)Lorg/orekit/files/ccsds/definitions/FrameFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FrameFacade::FrameFacade(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame & a2, const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_974e42dec5c8c61f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame FrameFacade::asCelestialBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_asCelestialBodyFrame_f7bff9eee7210db3]));
          }

          ::org::orekit::frames::Frame FrameFacade::asFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_asFrame_cb151471db4570f0]));
          }

          ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame FrameFacade::asOrbitRelativeFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_asOrbitRelativeFrame_0b1c57b4ded01423]));
          }

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame FrameFacade::asSpacecraftBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_asSpacecraftBodyFrame_e9bc4980320b8143]));
          }

          ::java::lang::String FrameFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          ::org::orekit::frames::Transform FrameFacade::getTransform(const FrameFacade & a0, const FrameFacade & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_f0f79dd476f7dc19], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          FrameFacade FrameFacade::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_map_df56c09046b263c6], a0.this$));
          }

          FrameFacade FrameFacade::parse(const ::java::lang::String & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2, const ::org::orekit::data::DataContext & a3, jboolean a4, jboolean a5, jboolean a6)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_30a55f049e86b82f], a0.this$, a1.this$, a2, a3.this$, a4, a5, a6));
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
          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getName(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data);
          static PyGetSetDef t_FrameFacade__fields_[] = {
            DECLARE_GET_FIELD(t_FrameFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FrameFacade__methods_[] = {
            DECLARE_METHOD(t_FrameFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, asCelestialBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asOrbitRelativeFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asSpacecraftBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, parse, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FrameFacade)[] = {
            { Py_tp_methods, t_FrameFacade__methods_ },
            { Py_tp_init, (void *) t_FrameFacade_init_ },
            { Py_tp_getset, t_FrameFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FrameFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FrameFacade, t_FrameFacade, FrameFacade);

          void t_FrameFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(FrameFacade), &PY_TYPE_DEF(FrameFacade), module, "FrameFacade", 0);
          }

          void t_FrameFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "class_", make_descriptor(FrameFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "wrapfn_", make_descriptor(t_FrameFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FrameFacade::initializeClass, 1)))
              return NULL;
            return t_FrameFacade::wrap_Object(FrameFacade(((t_FrameFacade *) arg)->object.this$));
          }
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FrameFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            FrameFacade object((jobject) NULL);

            if (!parseArgs(args, "kKKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::initializeClass, ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &p2, ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::parameters_, &a3, &a4))
            {
              INT_CALL(object = FrameFacade(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asCelestialBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.asFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asOrbitRelativeFrame());
            return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asSpacecraftBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_getName(t_FrameFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args)
          {
            FrameFacade a0((jobject) NULL);
            FrameFacade a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkkk", FrameFacade::initializeClass, FrameFacade::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::getTransform(a0, a1, a2, a3, a4));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameFacade result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::map(a0));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            jboolean a4;
            jboolean a5;
            jboolean a6;
            FrameFacade result((jobject) NULL);

            if (!parseArgs(args, "sKZkZZZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::parse(a0, a1, a2, a3, a4, a5, a6));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07::class$ = NULL;
              jmethodID *SsrIgm07::mids$ = NULL;
              bool SsrIgm07::live$ = false;

              jclass SsrIgm07::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_1ad096180561130b] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm07Data_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSsrIgm07Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07::SsrIgm07(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_1ad096180561130b, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm07::getSsrIgm07Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm07Data_dbcb8bbac6b35e0d]));
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
              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args);
              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self);
              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data);
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data);
              static PyGetSetDef t_SsrIgm07__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm07, ssrIgm07Data),
                DECLARE_GET_FIELD(t_SsrIgm07, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm07, getSsrIgm07Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07)[] = {
                { Py_tp_methods, t_SsrIgm07__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07_init_ },
                { Py_tp_getset, t_SsrIgm07__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm07, t_SsrIgm07, SsrIgm07);
              PyObject *t_SsrIgm07::wrap_Object(const SsrIgm07& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm07::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm07::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07), &PY_TYPE_DEF(SsrIgm07), module, "SsrIgm07", 0);
              }

              void t_SsrIgm07::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "class_", make_descriptor(SsrIgm07::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "wrapfn_", make_descriptor(t_SsrIgm07::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07::wrap_Object(SsrIgm07(((t_SsrIgm07 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm07 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm07(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm07Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm07Data());
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
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedPair::class$ = NULL;
      jmethodID *TimeStampedPair::mids$ = NULL;
      bool TimeStampedPair::live$ = false;
      jdouble TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass TimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c0c06400cd34907c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)V");
          mids$[mid_init$_56387dfe5596786c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;D)V");
          mids$[mid_checkDatesConsistency_05fe71f75ead48fc] = env->getStaticMethodID(cls, "checkDatesConsistency", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFirst_80bbab87cd34ef1a] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getSecond_80bbab87cd34ef1a] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0c06400cd34907c, a0.this$, a1.this$)) {}

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_56387dfe5596786c, a0.this$, a1.this$, a2)) {}

      void TimeStampedPair::checkDatesConsistency(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDatesConsistency_05fe71f75ead48fc], a0.this$, a1.this$, a2);
      }

      ::org::orekit::time::AbsoluteDate TimeStampedPair::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_80bbab87cd34ef1a]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_80bbab87cd34ef1a]));
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
      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args);
      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data);
      static PyGetSetDef t_TimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPair, date),
        DECLARE_GET_FIELD(t_TimeStampedPair, first),
        DECLARE_GET_FIELD(t_TimeStampedPair, second),
        DECLARE_GET_FIELD(t_TimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPair, checkDatesConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPair)[] = {
        { Py_tp_methods, t_TimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPair_init_ },
        { Py_tp_getset, t_TimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedPair, t_TimeStampedPair, TimeStampedPair);
      PyObject *t_TimeStampedPair::wrap_Object(const TimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_TimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_TimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPair), &PY_TYPE_DEF(TimeStampedPair), module, "TimeStampedPair", 0);
      }

      void t_TimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "class_", make_descriptor(TimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "wrapfn_", make_descriptor(t_TimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPair::wrap_Object(TimeStampedPair(((t_TimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            jdouble a2;
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPair(a0, a1, a2));
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

      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::time::TimeStampedPair::checkDatesConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDatesConsistency", args);
        return NULL;
      }

      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Vector::class$ = NULL;
      jmethodID *Vector::mids$ = NULL;
      bool Vector::live$ = false;

      jclass Vector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Vector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_915b156072ff5abe] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_add_af8073295450304e] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_blendArithmeticallyWith_b75e0be2b07534de] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/Vector;D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_distance1_54eca2a6b3ac81a2] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceInf_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceSq_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_dotProduct_54eca2a6b3ac81a2] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getNorm1_9981f74b2d109da6] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInf_9981f74b2d109da6] = env->getMethodID(cls, "getNormInf", "()D");
          mids$[mid_getNormSq_9981f74b2d109da6] = env->getMethodID(cls, "getNormSq", "()D");
          mids$[mid_getZero_98aa02e65b0cf19e] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_negate_98aa02e65b0cf19e] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_normalize_98aa02e65b0cf19e] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_scalarMultiply_5d9eb024afba2a13] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_915b156072ff5abe] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_af8073295450304e] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_toString_aeac32100fe35ffe] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Vector Vector::add(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_915b156072ff5abe], a0.this$));
      }

      Vector Vector::add(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_af8073295450304e], a0, a1.this$));
      }

      Vector Vector::blendArithmeticallyWith(const Vector & a0, jdouble a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_b75e0be2b07534de], a0.this$, a1));
      }

      jdouble Vector::distance1(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance1_54eca2a6b3ac81a2], a0.this$);
      }

      jdouble Vector::distanceInf(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceInf_54eca2a6b3ac81a2], a0.this$);
      }

      jdouble Vector::distanceSq(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceSq_54eca2a6b3ac81a2], a0.this$);
      }

      jdouble Vector::dotProduct(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_54eca2a6b3ac81a2], a0.this$);
      }

      jdouble Vector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
      }

      jdouble Vector::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_9981f74b2d109da6]);
      }

      jdouble Vector::getNormInf() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInf_9981f74b2d109da6]);
      }

      jdouble Vector::getNormSq() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormSq_9981f74b2d109da6]);
      }

      Vector Vector::getZero() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_getZero_98aa02e65b0cf19e]));
      }

      jboolean Vector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
      }

      Vector Vector::negate() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_negate_98aa02e65b0cf19e]));
      }

      Vector Vector::normalize() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_normalize_98aa02e65b0cf19e]));
      }

      Vector Vector::scalarMultiply(jdouble a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_scalarMultiply_5d9eb024afba2a13], a0));
      }

      Vector Vector::subtract(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_915b156072ff5abe], a0.this$));
      }

      Vector Vector::subtract(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_af8073295450304e], a0, a1.this$));
      }

      ::java::lang::String Vector::toString(const ::java::text::NumberFormat & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aeac32100fe35ffe], a0.this$));
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
      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_add(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_getNorm(t_Vector *self);
      static PyObject *t_Vector_getNorm1(t_Vector *self);
      static PyObject *t_Vector_getNormInf(t_Vector *self);
      static PyObject *t_Vector_getNormSq(t_Vector *self);
      static PyObject *t_Vector_getZero(t_Vector *self);
      static PyObject *t_Vector_isInfinite(t_Vector *self);
      static PyObject *t_Vector_negate(t_Vector *self);
      static PyObject *t_Vector_normalize(t_Vector *self);
      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data);
      static PyObject *t_Vector_get__zero(t_Vector *self, void *data);
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data);
      static PyGetSetDef t_Vector__fields_[] = {
        DECLARE_GET_FIELD(t_Vector, infinite),
        DECLARE_GET_FIELD(t_Vector, norm),
        DECLARE_GET_FIELD(t_Vector, norm1),
        DECLARE_GET_FIELD(t_Vector, normInf),
        DECLARE_GET_FIELD(t_Vector, normSq),
        DECLARE_GET_FIELD(t_Vector, zero),
        DECLARE_GET_FIELD(t_Vector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Vector__methods_[] = {
        DECLARE_METHOD(t_Vector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, of_, METH_VARARGS),
        DECLARE_METHOD(t_Vector, add, METH_VARARGS),
        DECLARE_METHOD(t_Vector, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_Vector, distance1, METH_O),
        DECLARE_METHOD(t_Vector, distanceInf, METH_O),
        DECLARE_METHOD(t_Vector, distanceSq, METH_O),
        DECLARE_METHOD(t_Vector, dotProduct, METH_O),
        DECLARE_METHOD(t_Vector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormInf, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormSq, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Vector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Vector, negate, METH_NOARGS),
        DECLARE_METHOD(t_Vector, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Vector, scalarMultiply, METH_O),
        DECLARE_METHOD(t_Vector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Vector, toString, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Vector)[] = {
        { Py_tp_methods, t_Vector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Vector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Vector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::geometry::Point),
        NULL
      };

      DEFINE_TYPE(Vector, t_Vector, Vector);
      PyObject *t_Vector::wrap_Object(const Vector& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Vector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Vector::install(PyObject *module)
      {
        installType(&PY_TYPE(Vector), &PY_TYPE_DEF(Vector), module, "Vector", 0);
      }

      void t_Vector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "class_", make_descriptor(Vector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "wrapfn_", make_descriptor(t_Vector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Vector::initializeClass, 1)))
          return NULL;
        return t_Vector::wrap_Object(Vector(((t_Vector *) arg)->object.this$));
      }
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Vector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Vector_add(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        Vector result((jobject) NULL);

        if (!parseArgs(args, "KD", Vector::initializeClass, &a0, &p0, t_Vector::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distance1(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance1", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceInf(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceSq(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
        return NULL;
      }

      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Vector_getNorm(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNorm1(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormInf(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInf());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormSq(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormSq());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getZero(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_isInfinite(t_Vector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Vector_negate(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_normalize(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg)
      {
        jdouble a0;
        Vector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg)
      {
        ::java::text::NumberFormat a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::text::NumberFormat::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toString", arg);
        return NULL;
      }
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Vector_get__norm(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInf());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormSq());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__zero(t_Vector *self, void *data)
      {
        Vector value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Vector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/LoessInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LoessInterpolator::class$ = NULL;
        jmethodID *LoessInterpolator::mids$ = NULL;
        bool LoessInterpolator::live$ = false;
        jdouble LoessInterpolator::DEFAULT_ACCURACY = (jdouble) 0;
        jdouble LoessInterpolator::DEFAULT_BANDWIDTH = (jdouble) 0;
        jint LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS = (jint) 0;

        jclass LoessInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LoessInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_9a2a15644952076c] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_interpolate_d112b93e44ec98b7] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_smooth_8238c1ebef563b00] = env->getMethodID(cls, "smooth", "([D[D)[D");
            mids$[mid_smooth_d94a4dc4cef016b3] = env->getMethodID(cls, "smooth", "([D[D[D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ACCURACY");
            DEFAULT_BANDWIDTH = env->getStaticDoubleField(cls, "DEFAULT_BANDWIDTH");
            DEFAULT_ROBUSTNESS_ITERS = env->getStaticIntField(cls, "DEFAULT_ROBUSTNESS_ITERS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LoessInterpolator::LoessInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a2a15644952076c, a0, a1, a2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LoessInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d112b93e44ec98b7], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_8238c1ebef563b00], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_d94a4dc4cef016b3], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args);
        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args);

        static PyMethodDef t_LoessInterpolator__methods_[] = {
          DECLARE_METHOD(t_LoessInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, interpolate, METH_VARARGS),
          DECLARE_METHOD(t_LoessInterpolator, smooth, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LoessInterpolator)[] = {
          { Py_tp_methods, t_LoessInterpolator__methods_ },
          { Py_tp_init, (void *) t_LoessInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LoessInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LoessInterpolator, t_LoessInterpolator, LoessInterpolator);

        void t_LoessInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LoessInterpolator), &PY_TYPE_DEF(LoessInterpolator), module, "LoessInterpolator", 0);
        }

        void t_LoessInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "class_", make_descriptor(LoessInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "wrapfn_", make_descriptor(t_LoessInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(LoessInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ACCURACY", make_descriptor(LoessInterpolator::DEFAULT_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_BANDWIDTH", make_descriptor(LoessInterpolator::DEFAULT_BANDWIDTH));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ROBUSTNESS_ITERS", make_descriptor(LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS));
        }

        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LoessInterpolator::initializeClass, 1)))
            return NULL;
          return t_LoessInterpolator::wrap_Object(LoessInterpolator(((t_LoessInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LoessInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LoessInterpolator object((jobject) NULL);

              INT_CALL(object = LoessInterpolator());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = LoessInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = LoessInterpolator(a0, a1, a2));
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

        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }

        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1));
                return result.wrap();
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "smooth", args);
          return NULL;
        }
      }
    }
  }
}

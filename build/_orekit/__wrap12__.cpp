#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbit.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbit::class$ = NULL;
      jmethodID *LibrationOrbit::mids$ = NULL;
      bool LibrationOrbit::live$ = false;

      jclass LibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_applyDifferentialCorrection_ff7cb6c242604316] = env->getMethodID(cls, "applyDifferentialCorrection", "()V");
          mids$[mid_getInitialPV_78e01095d7eced90] = env->getMethodID(cls, "getInitialPV", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getManifolds_62ff0c391fc6edb9] = env->getMethodID(cls, "getManifolds", "(Lorg/orekit/propagation/SpacecraftState;Z)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_9981f74b2d109da6] = env->getMethodID(cls, "getOrbitalPeriod", "()D");
          mids$[mid_applyCorrectionOnPV_6705c201ee6823b5] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LibrationOrbit::applyDifferentialCorrection() const
      {
        env->callVoidMethod(this$, mids$[mid_applyDifferentialCorrection_ff7cb6c242604316]);
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getInitialPV() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getInitialPV_78e01095d7eced90]));
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getManifolds(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getManifolds_62ff0c391fc6edb9], a0.this$, a1));
      }

      jdouble LibrationOrbit::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_9981f74b2d109da6]);
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
      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args);
      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data);
      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data);
      static PyGetSetDef t_LibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbit, initialPV),
        DECLARE_GET_FIELD(t_LibrationOrbit, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, applyDifferentialCorrection, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getInitialPV, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getManifolds, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbit, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbit)[] = {
        { Py_tp_methods, t_LibrationOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LibrationOrbit, t_LibrationOrbit, LibrationOrbit);

      void t_LibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbit), &PY_TYPE_DEF(LibrationOrbit), module, "LibrationOrbit", 0);
      }

      void t_LibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "class_", make_descriptor(LibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "wrapfn_", make_descriptor(t_LibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbit::wrap_Object(LibrationOrbit(((t_LibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self)
      {
        OBJ_CALL(self->object.applyDifferentialCorrection());
        Py_RETURN_NONE;
      }

      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean a1;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getManifolds(a0, a1));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getManifolds", args);
        return NULL;
      }

      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Derivative::class$ = NULL;
        jmethodID *Derivative::mids$ = NULL;
        bool Derivative::live$ = false;

        jclass Derivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Derivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compose_882fb3b536492986] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_7f744e43a2f098aa] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Derivative::compose(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_compose_882fb3b536492986], a0.this$));
        }

        jint Derivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        jint Derivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
        }

        jdouble Derivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_7f744e43a2f098aa], a0.this$);
        }

        jdouble Derivative::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
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
        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args);
        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self);
        static PyObject *t_Derivative_getOrder(t_Derivative *self);
        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getValue(t_Derivative *self);
        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data);
        static PyGetSetDef t_Derivative__fields_[] = {
          DECLARE_GET_FIELD(t_Derivative, freeParameters),
          DECLARE_GET_FIELD(t_Derivative, order),
          DECLARE_GET_FIELD(t_Derivative, value),
          DECLARE_GET_FIELD(t_Derivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Derivative__methods_[] = {
          DECLARE_METHOD(t_Derivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_Derivative, compose, METH_O),
          DECLARE_METHOD(t_Derivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_Derivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Derivative)[] = {
          { Py_tp_methods, t_Derivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Derivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Derivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(Derivative, t_Derivative, Derivative);
        PyObject *t_Derivative::wrap_Object(const Derivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Derivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Derivative::install(PyObject *module)
        {
          installType(&PY_TYPE(Derivative), &PY_TYPE_DEF(Derivative), module, "Derivative", 0);
        }

        void t_Derivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "class_", make_descriptor(Derivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "wrapfn_", make_descriptor(t_Derivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Derivative::initializeClass, 1)))
            return NULL;
          return t_Derivative::wrap_Object(Derivative(((t_Derivative *) arg)->object.this$));
        }
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Derivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getOrder(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getValue(t_Derivative *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/util/Incrementor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresAdapter::class$ = NULL;
            jmethodID *LeastSquaresAdapter::mids$ = NULL;
            bool LeastSquaresAdapter::live$ = false;

            jclass LeastSquaresAdapter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_677b000fe7e9460b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)V");
                mids$[mid_evaluate_854ba28c9e2137e8] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getConvergenceChecker_ecb318336ebe4cc7] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_getEvaluationCounter_286bd168b7e14166] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getIterationCounter_286bd168b7e14166] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getObservationSize_d6ab429752e7c267] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_d6ab429752e7c267] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresAdapter::LeastSquaresAdapter(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_677b000fe7e9460b, a0.this$)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresAdapter::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_854ba28c9e2137e8], a0.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresAdapter::getConvergenceChecker() const
            {
              return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_ecb318336ebe4cc7]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getEvaluationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_286bd168b7e14166]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getIterationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_286bd168b7e14166]));
            }

            jint LeastSquaresAdapter::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_d6ab429752e7c267]);
            }

            jint LeastSquaresAdapter::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_d6ab429752e7c267]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresAdapter::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_92d7e8d8d3f1dfcf]));
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
            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data);
            static PyGetSetDef t_LeastSquaresAdapter__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, convergenceChecker),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, evaluationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, iterationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresAdapter__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresAdapter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresAdapter, getConvergenceChecker, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getEvaluationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getIterationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresAdapter)[] = {
              { Py_tp_methods, t_LeastSquaresAdapter__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresAdapter_init_ },
              { Py_tp_getset, t_LeastSquaresAdapter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresAdapter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresAdapter, t_LeastSquaresAdapter, LeastSquaresAdapter);

            void t_LeastSquaresAdapter::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresAdapter), &PY_TYPE_DEF(LeastSquaresAdapter), module, "LeastSquaresAdapter", 0);
            }

            void t_LeastSquaresAdapter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "class_", make_descriptor(LeastSquaresAdapter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "wrapfn_", make_descriptor(t_LeastSquaresAdapter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresAdapter::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresAdapter::wrap_Object(LeastSquaresAdapter(((t_LeastSquaresAdapter *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresAdapter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              LeastSquaresAdapter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                INT_CALL(object = LeastSquaresAdapter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
              OBJ_CALL(result = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
            }

            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
              OBJ_CALL(value = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
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
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_2e5dcdcd5b8a5903] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getFrames_6b4dd5dc4c932983] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_dc04cadaa56dfc28] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_0b533a519307756d] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_0dcddb8d5df4bba7] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExceptionalDataContext::ExceptionalDataContext() : ::org::orekit::data::LazyLoadedDataContext(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies ExceptionalDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_2e5dcdcd5b8a5903]));
      }

      ::org::orekit::frames::LazyLoadedFrames ExceptionalDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_6b4dd5dc4c932983]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields ExceptionalDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_dc04cadaa56dfc28]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields ExceptionalDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_0b533a519307756d]));
      }

      ::org::orekit::time::LazyLoadedTimeScales ExceptionalDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_0dcddb8d5df4bba7]));
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
#include "org/orekit/propagation/AbstractPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractPropagator::class$ = NULL;
      jmethodID *AbstractPropagator::mids$ = NULL;
      bool AbstractPropagator::live$ = false;

      jclass AbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_b928bf8cc239d256] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_ddcdca7ad3c7f5e9] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_1e982279849c3b65] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setupMatricesComputation_0a26c8b4f543ed52] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");
          mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_setStartDate_8497861b879c83f7] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getHarvester_f86b7e72bfd6b6e9] = env->getMethodID(cls, "getHarvester", "()Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_getStartDate_80e11148db499dda] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_stateChanged_72b846eb87f3af9a] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_updateAdditionalStates_ed3fe207e6fde26f] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_initializeAdditionalStates_8497861b879c83f7] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_initializePropagation_ff7cb6c242604316] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_updateUnmanagedStates_ed3fe207e6fde26f] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_b928bf8cc239d256], a0.this$);
      }

      ::java::util::List AbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_d751c1a57012b438]));
      }

      ::org::orekit::attitudes::AttitudeProvider AbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c]));
      }

      ::org::orekit::frames::Frame AbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_8fbfa58855031235]));
      }

      JArray< ::java::lang::String > AbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_f81c0644d57ae495]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer AbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_ddcdca7ad3c7f5e9]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbstractPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      jboolean AbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_1e982279849c3b65], a0.this$));
      }

      void AbstractPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
      }

      void AbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
      }

      ::org::orekit::propagation::MatricesHarvester AbstractPropagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_0a26c8b4f543ed52], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data);
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data);
      static PyGetSetDef t_AbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_AbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_AbstractPropagator, frame),
        DECLARE_GET_FIELD(t_AbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_AbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_AbstractPropagator, multiplexer),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_AbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractPropagator)[] = {
        { Py_tp_methods, t_AbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractPropagator, t_AbstractPropagator, AbstractPropagator);

      void t_AbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractPropagator), &PY_TYPE_DEF(AbstractPropagator), module, "AbstractPropagator", 0);
      }

      void t_AbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "class_", make_descriptor(AbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "wrapfn_", make_descriptor(t_AbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_AbstractPropagator::wrap_Object(AbstractPropagator(((t_AbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ExponentialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ExponentialDistribution::class$ = NULL;
        jmethodID *ExponentialDistribution::mids$ = NULL;
        bool ExponentialDistribution::live$ = false;

        jclass ExponentialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ExponentialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_9981f74b2d109da6] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExponentialDistribution::ExponentialDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble ExponentialDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble ExponentialDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble ExponentialDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_9981f74b2d109da6]);
        }

        jdouble ExponentialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble ExponentialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble ExponentialDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble ExponentialDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble ExponentialDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean ExponentialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble ExponentialDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self);
        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data);
        static PyGetSetDef t_ExponentialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ExponentialDistribution, mean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExponentialDistribution__methods_[] = {
          DECLARE_METHOD(t_ExponentialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExponentialDistribution)[] = {
          { Py_tp_methods, t_ExponentialDistribution__methods_ },
          { Py_tp_init, (void *) t_ExponentialDistribution_init_ },
          { Py_tp_getset, t_ExponentialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExponentialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ExponentialDistribution, t_ExponentialDistribution, ExponentialDistribution);

        void t_ExponentialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ExponentialDistribution), &PY_TYPE_DEF(ExponentialDistribution), module, "ExponentialDistribution", 0);
        }

        void t_ExponentialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "class_", make_descriptor(ExponentialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "wrapfn_", make_descriptor(t_ExponentialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExponentialDistribution::initializeClass, 1)))
            return NULL;
          return t_ExponentialDistribution::wrap_Object(ExponentialDistribution(((t_ExponentialDistribution *) arg)->object.this$));
        }
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExponentialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ExponentialDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ExponentialDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54FieldIntegrator::class$ = NULL;
        jmethodID *HighamHall54FieldIntegrator::mids$ = NULL;
        bool HighamHall54FieldIntegrator::live$ = false;

        jclass HighamHall54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_00877c251fc4db11] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_5843d38540497bc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_4d010bb8d4780d51] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_94ed2e0620f8833d] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_94ed2e0620f8833d] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_2cdfca06aa7946a1] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54FieldStateInterpolator;");
            mids$[mid_estimateError_2bb116b8560eb7ee] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_00877c251fc4db11, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_5843d38540497bc2, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > HighamHall54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_4d010bb8d4780d51]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_94ed2e0620f8833d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_94ed2e0620f8833d]));
        }

        jint HighamHall54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
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
        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegrator)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegrator_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegrator, t_HighamHall54FieldIntegrator, HighamHall54FieldIntegrator);
        PyObject *t_HighamHall54FieldIntegrator::wrap_Object(const HighamHall54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegrator), &PY_TYPE_DEF(HighamHall54FieldIntegrator), module, "HighamHall54FieldIntegrator", 0);
        }

        void t_HighamHall54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "class_", make_descriptor(HighamHall54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegrator::wrap_Object(HighamHall54FieldIntegrator(((t_HighamHall54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *ReferenceEllipsoid::class$ = NULL;
        jmethodID *ReferenceEllipsoid::mids$ = NULL;
        bool ReferenceEllipsoid::live$ = false;

        jclass ReferenceEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/ReferenceEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a99091eff2387adb] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;DD)V");
            mids$[mid_getC2n0_ce4c02d583456bc9] = env->getMethodID(cls, "getC2n0", "(I)D");
            mids$[mid_getEllipsoid_cff2eba11ebd2420] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getGM_9981f74b2d109da6] = env->getMethodID(cls, "getGM", "()D");
            mids$[mid_getGrs80_dda366f84678721b] = env->getStaticMethodID(cls, "getGrs80", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2003_dda366f84678721b] = env->getStaticMethodID(cls, "getIers2003", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2010_dda366f84678721b] = env->getStaticMethodID(cls, "getIers2010", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers96_dda366f84678721b] = env->getStaticMethodID(cls, "getIers96", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getNormalGravity_bf28ed64d6e8576b] = env->getMethodID(cls, "getNormalGravity", "(D)D");
            mids$[mid_getPolarRadius_9981f74b2d109da6] = env->getMethodID(cls, "getPolarRadius", "()D");
            mids$[mid_getSpin_9981f74b2d109da6] = env->getMethodID(cls, "getSpin", "()D");
            mids$[mid_getWgs84_dda366f84678721b] = env->getStaticMethodID(cls, "getWgs84", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReferenceEllipsoid::ReferenceEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jdouble a3, jdouble a4) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_a99091eff2387adb, a0, a1, a2.this$, a3, a4)) {}

        jdouble ReferenceEllipsoid::getC2n0(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getC2n0_ce4c02d583456bc9], a0);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getEllipsoid() const
        {
          return ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_cff2eba11ebd2420]));
        }

        jdouble ReferenceEllipsoid::getGM() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGM_9981f74b2d109da6]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getGrs80(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getGrs80_dda366f84678721b], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2003(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2003_dda366f84678721b], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2010(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2010_dda366f84678721b], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers96(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers96_dda366f84678721b], a0.this$));
        }

        jdouble ReferenceEllipsoid::getNormalGravity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNormalGravity_bf28ed64d6e8576b], a0);
        }

        jdouble ReferenceEllipsoid::getPolarRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPolarRadius_9981f74b2d109da6]);
        }

        jdouble ReferenceEllipsoid::getSpin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpin_9981f74b2d109da6]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getWgs84(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getWgs84_dda366f84678721b], a0.this$));
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
        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data);
        static PyGetSetDef t_ReferenceEllipsoid__fields_[] = {
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, ellipsoid),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, gM),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, polarRadius),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, spin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReferenceEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ReferenceEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getC2n0, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGM, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGrs80, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2003, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2010, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers96, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getNormalGravity, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getPolarRadius, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getSpin, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getWgs84, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReferenceEllipsoid)[] = {
          { Py_tp_methods, t_ReferenceEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ReferenceEllipsoid_init_ },
          { Py_tp_getset, t_ReferenceEllipsoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReferenceEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ReferenceEllipsoid, t_ReferenceEllipsoid, ReferenceEllipsoid);

        void t_ReferenceEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ReferenceEllipsoid), &PY_TYPE_DEF(ReferenceEllipsoid), module, "ReferenceEllipsoid", 0);
        }

        void t_ReferenceEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "class_", make_descriptor(ReferenceEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "wrapfn_", make_descriptor(t_ReferenceEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReferenceEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ReferenceEllipsoid::wrap_Object(ReferenceEllipsoid(((t_ReferenceEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReferenceEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          ReferenceEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDkDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ReferenceEllipsoid(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getC2n0(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getC2n0", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self)
        {
          ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGM());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getGrs80(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGrs80", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2003(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2003", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2010(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2010", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers96(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers96", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getNormalGravity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getNormalGravity", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getWgs84(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWgs84", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data)
        {
          ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(value);
        }

        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGM());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyLoader::class$ = NULL;
      jmethodID *CelestialBodyLoader::mids$ = NULL;
      bool CelestialBodyLoader::live$ = false;

      jclass CelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadCelestialBody_0ed99bba3e5bd60c] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_0ed99bba3e5bd60c], a0.this$));
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
      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg);

      static PyMethodDef t_CelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyLoader)[] = {
        { Py_tp_methods, t_CelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyLoader, t_CelestialBodyLoader, CelestialBodyLoader);

      void t_CelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyLoader), &PY_TYPE_DEF(CelestialBodyLoader), module, "CelestialBodyLoader", 0);
      }

      void t_CelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "class_", make_descriptor(CelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "wrapfn_", make_descriptor(t_CelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyLoader::wrap_Object(CelestialBodyLoader(((t_CelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TransponderConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TransponderConfiguration::mids$ = NULL;
        bool CRDConfiguration$TransponderConfiguration::live$ = false;

        jclass CRDConfiguration$TransponderConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSpacecraftClockAndDriftApplied_d6ab429752e7c267] = env->getMethodID(cls, "getSpacecraftClockAndDriftApplied", "()I");
            mids$[mid_getStationClockAndDriftApplied_d6ab429752e7c267] = env->getMethodID(cls, "getStationClockAndDriftApplied", "()I");
            mids$[mid_getStationOscDrift_9981f74b2d109da6] = env->getMethodID(cls, "getStationOscDrift", "()D");
            mids$[mid_getStationUTCOffset_9981f74b2d109da6] = env->getMethodID(cls, "getStationUTCOffset", "()D");
            mids$[mid_getTranspClkRefTime_9981f74b2d109da6] = env->getMethodID(cls, "getTranspClkRefTime", "()D");
            mids$[mid_getTranspOscDrift_9981f74b2d109da6] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspUTCOffset_9981f74b2d109da6] = env->getMethodID(cls, "getTranspUTCOffset", "()D");
            mids$[mid_getTransponderId_d2c8eb4129821f0e] = env->getMethodID(cls, "getTransponderId", "()Ljava/lang/String;");
            mids$[mid_isSpacecraftTimeSimplified_eee3de00fe971136] = env->getMethodID(cls, "isSpacecraftTimeSimplified", "()Z");
            mids$[mid_setIsSpacecraftTimeSimplified_b35db77cae58639e] = env->getMethodID(cls, "setIsSpacecraftTimeSimplified", "(Z)V");
            mids$[mid_setSpacecraftClockAndDriftApplied_8fd427ab23829bf5] = env->getMethodID(cls, "setSpacecraftClockAndDriftApplied", "(I)V");
            mids$[mid_setStationClockAndDriftApplied_8fd427ab23829bf5] = env->getMethodID(cls, "setStationClockAndDriftApplied", "(I)V");
            mids$[mid_setStationOscDrift_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setStationOscDrift", "(D)V");
            mids$[mid_setStationUTCOffset_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setStationUTCOffset", "(D)V");
            mids$[mid_setTranspClkRefTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTranspClkRefTime", "(D)V");
            mids$[mid_setTranspOscDrift_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspUTCOffset_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTranspUTCOffset", "(D)V");
            mids$[mid_setTransponderId_105e1eadb709d9ac] = env->getMethodID(cls, "setTransponderId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TransponderConfiguration::CRDConfiguration$TransponderConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jint CRDConfiguration$TransponderConfiguration::getSpacecraftClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftClockAndDriftApplied_d6ab429752e7c267]);
        }

        jint CRDConfiguration$TransponderConfiguration::getStationClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getStationClockAndDriftApplied_d6ab429752e7c267]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationOscDrift_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationUTCOffset_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspClkRefTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRefTime_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUTCOffset_9981f74b2d109da6]);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::getTransponderId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransponderId_d2c8eb4129821f0e]));
        }

        jboolean CRDConfiguration$TransponderConfiguration::isSpacecraftTimeSimplified() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSpacecraftTimeSimplified_eee3de00fe971136]);
        }

        void CRDConfiguration$TransponderConfiguration::setIsSpacecraftTimeSimplified(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsSpacecraftTimeSimplified_b35db77cae58639e], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setSpacecraftClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftClockAndDriftApplied_8fd427ab23829bf5], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationClockAndDriftApplied_8fd427ab23829bf5], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationOscDrift_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationUTCOffset_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspClkRefTime(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRefTime_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUTCOffset_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTransponderId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransponderId_105e1eadb709d9ac], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toString() const
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
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TransponderConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftClockAndDriftApplied),
          DECLARE_GET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftTimeSimplified),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationClockAndDriftApplied),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpClkRefTime),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transponderId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TransponderConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getSpacecraftClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspClkRefTime, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTransponderId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, isSpacecraftTimeSimplified, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setIsSpacecraftTimeSimplified, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setSpacecraftClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspClkRefTime, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTransponderId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TransponderConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TransponderConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TransponderConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TransponderConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TransponderConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TransponderConfiguration, t_CRDConfiguration$TransponderConfiguration, CRDConfiguration$TransponderConfiguration);

        void t_CRDConfiguration$TransponderConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TransponderConfiguration), &PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration), module, "CRDConfiguration$TransponderConfiguration", 0);
        }

        void t_CRDConfiguration$TransponderConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "class_", make_descriptor(CRDConfiguration$TransponderConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TransponderConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TransponderConfiguration::wrap_Object(CRDConfiguration$TransponderConfiguration(((t_CRDConfiguration$TransponderConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TransponderConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TransponderConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransponderId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsSpacecraftTimeSimplified(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsSpacecraftTimeSimplified", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSpacecraftClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpacecraftClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStationClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRefTime(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRefTime", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTransponderId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransponderId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSpacecraftClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spacecraftClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStationClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRefTime(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRefTime", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTransponderId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transponderId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Exception.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
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
                mids$[mid_init$_489a227a5084415f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/lexical/TokenType;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;ILjava/lang/String;)V");
                mids$[mid_generateException_f0b5e3496a959493] = env->getMethodID(cls, "generateException", "(Ljava/lang/Exception;)Lorg/orekit/errors/OrekitException;");
                mids$[mid_getContentAsBoolean_eee3de00fe971136] = env->getMethodID(cls, "getContentAsBoolean", "()Z");
                mids$[mid_getContentAsDouble_9981f74b2d109da6] = env->getMethodID(cls, "getContentAsDouble", "()D");
                mids$[mid_getContentAsEnum_21e011703cf38ef0] = env->getMethodID(cls, "getContentAsEnum", "(Ljava/lang/Class;)Ljava/lang/Enum;");
                mids$[mid_getContentAsEnumList_e1d925775d4adff5] = env->getMethodID(cls, "getContentAsEnumList", "(Ljava/lang/Class;)Ljava/util/List;");
                mids$[mid_getContentAsFreeTextList_d751c1a57012b438] = env->getMethodID(cls, "getContentAsFreeTextList", "()Ljava/util/List;");
                mids$[mid_getContentAsInt_d6ab429752e7c267] = env->getMethodID(cls, "getContentAsInt", "()I");
                mids$[mid_getContentAsNormalizedList_d751c1a57012b438] = env->getMethodID(cls, "getContentAsNormalizedList", "()Ljava/util/List;");
                mids$[mid_getContentAsNormalizedString_d2c8eb4129821f0e] = env->getMethodID(cls, "getContentAsNormalizedString", "()Ljava/lang/String;");
                mids$[mid_getContentAsUppercaseCharacter_153df32fe8b51cb6] = env->getMethodID(cls, "getContentAsUppercaseCharacter", "()C");
                mids$[mid_getContentAsUppercaseList_d751c1a57012b438] = env->getMethodID(cls, "getContentAsUppercaseList", "()Ljava/util/List;");
                mids$[mid_getContentAsUppercaseString_d2c8eb4129821f0e] = env->getMethodID(cls, "getContentAsUppercaseString", "()Ljava/lang/String;");
                mids$[mid_getContentAsVector_032312bdeb3f2f93] = env->getMethodID(cls, "getContentAsVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getFileName_d2c8eb4129821f0e] = env->getMethodID(cls, "getFileName", "()Ljava/lang/String;");
                mids$[mid_getLineNumber_d6ab429752e7c267] = env->getMethodID(cls, "getLineNumber", "()I");
                mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                mids$[mid_getRawContent_d2c8eb4129821f0e] = env->getMethodID(cls, "getRawContent", "()Ljava/lang/String;");
                mids$[mid_getType_f4ebe1b79f29bb69] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_getUnits_b1bb36679ea369c9] = env->getMethodID(cls, "getUnits", "()Lorg/orekit/utils/units/Unit;");
                mids$[mid_processAsBoolean_e3d1693258576011] = env->getMethodID(cls, "processAsBoolean", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer;)Z");
                mids$[mid_processAsCenter_1c1425c11c07235f] = env->getMethodID(cls, "processAsCenter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsCenterList_551d40fbdf9eb23b] = env->getMethodID(cls, "processAsCenterList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer;Lorg/orekit/bodies/CelestialBodies;)Z");
                mids$[mid_processAsDate_4ad44c4d8a6d00aa] = env->getMethodID(cls, "processAsDate", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;)Z");
                mids$[mid_processAsDouble_05d9d8b83725fdfd] = env->getMethodID(cls, "processAsDouble", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer;)Z");
                mids$[mid_processAsDoubleArray_b730ee473c72d83e] = env->getMethodID(cls, "processAsDoubleArray", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer;)Z");
                mids$[mid_processAsDoublyIndexedDouble_18c42f01485b64c7] = env->getMethodID(cls, "processAsDoublyIndexedDouble", "(IILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer;)Z");
                mids$[mid_processAsEnum_18c6048ff424c0ed] = env->getMethodID(cls, "processAsEnum", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer;)Z");
                mids$[mid_processAsEnumsList_d81322bcf2e19849] = env->getMethodID(cls, "processAsEnumsList", "(Ljava/lang/Class;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer;)Z");
                mids$[mid_processAsFrame_f1da7ab449626b9d] = env->getMethodID(cls, "processAsFrame", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer;Lorg/orekit/files/ccsds/utils/ContextBinding;ZZZ)Z");
                mids$[mid_processAsFreeTextList_2ab8bff756227e9f] = env->getMethodID(cls, "processAsFreeTextList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsFreeTextString_656b45dac5b3bbf9] = env->getMethodID(cls, "processAsFreeTextString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsIndexedDouble_ac031c97704b9d0f] = env->getMethodID(cls, "processAsIndexedDouble", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer;)Z");
                mids$[mid_processAsIndexedDoubleArray_2301490f3007b220] = env->getMethodID(cls, "processAsIndexedDoubleArray", "(ILorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer;)Z");
                mids$[mid_processAsIndexedInteger_7afd642ed21c80b1] = env->getMethodID(cls, "processAsIndexedInteger", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer;)Z");
                mids$[mid_processAsIndexedNormalizedString_11904d50b022ff75] = env->getMethodID(cls, "processAsIndexedNormalizedString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsIndexedUppercaseString_11904d50b022ff75] = env->getMethodID(cls, "processAsIndexedUppercaseString", "(ILorg/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer;)Z");
                mids$[mid_processAsInteger_3dd762e73ec3370d] = env->getMethodID(cls, "processAsInteger", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer;)Z");
                mids$[mid_processAsIntegerArray_9cf826d4bd8d05e1] = env->getMethodID(cls, "processAsIntegerArray", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsIntegerArrayNoSpace_9cf826d4bd8d05e1] = env->getMethodID(cls, "processAsIntegerArrayNoSpace", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer;)Z");
                mids$[mid_processAsLabeledDouble_db3f909f232a3c60] = env->getMethodID(cls, "processAsLabeledDouble", "(CLorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer;)Z");
                mids$[mid_processAsManeuvrableEnum_54831767634d65eb] = env->getMethodID(cls, "processAsManeuvrableEnum", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer;)Z");
                mids$[mid_processAsNormalizedCharacter_8b6f39dfba94476f] = env->getMethodID(cls, "processAsNormalizedCharacter", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer;)Z");
                mids$[mid_processAsNormalizedList_2ab8bff756227e9f] = env->getMethodID(cls, "processAsNormalizedList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsNormalizedString_656b45dac5b3bbf9] = env->getMethodID(cls, "processAsNormalizedString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsRotationOrder_fb2b75e40550321a] = env->getMethodID(cls, "processAsRotationOrder", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer;)Z");
                mids$[mid_processAsTimeSystem_80c470b1419956d2] = env->getMethodID(cls, "processAsTimeSystem", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer;)Z");
                mids$[mid_processAsUnitList_bbf33819dea38151] = env->getMethodID(cls, "processAsUnitList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer;)Z");
                mids$[mid_processAsUppercaseList_2ab8bff756227e9f] = env->getMethodID(cls, "processAsUppercaseList", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer;)Z");
                mids$[mid_processAsUppercaseString_656b45dac5b3bbf9] = env->getMethodID(cls, "processAsUppercaseString", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer;)Z");
                mids$[mid_processAsVector_437a26d531f20560] = env->getMethodID(cls, "processAsVector", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ParseToken::ParseToken(const ::org::orekit::files::ccsds::utils::lexical::TokenType & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::utils::units::Unit & a3, jint a4, const ::java::lang::String & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_489a227a5084415f, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::orekit::errors::OrekitException ParseToken::generateException(const ::java::lang::Exception & a0) const
            {
              return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_generateException_f0b5e3496a959493], a0.this$));
            }

            jboolean ParseToken::getContentAsBoolean() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getContentAsBoolean_eee3de00fe971136]);
            }

            jdouble ParseToken::getContentAsDouble() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getContentAsDouble_9981f74b2d109da6]);
            }

            ::java::lang::Enum ParseToken::getContentAsEnum(const ::java::lang::Class & a0) const
            {
              return ::java::lang::Enum(env->callObjectMethod(this$, mids$[mid_getContentAsEnum_21e011703cf38ef0], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsEnumList(const ::java::lang::Class & a0) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsEnumList_e1d925775d4adff5], a0.this$));
            }

            ::java::util::List ParseToken::getContentAsFreeTextList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsFreeTextList_d751c1a57012b438]));
            }

            jint ParseToken::getContentAsInt() const
            {
              return env->callIntMethod(this$, mids$[mid_getContentAsInt_d6ab429752e7c267]);
            }

            ::java::util::List ParseToken::getContentAsNormalizedList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedList_d751c1a57012b438]));
            }

            ::java::lang::String ParseToken::getContentAsNormalizedString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsNormalizedString_d2c8eb4129821f0e]));
            }

            jchar ParseToken::getContentAsUppercaseCharacter() const
            {
              return env->callCharMethod(this$, mids$[mid_getContentAsUppercaseCharacter_153df32fe8b51cb6]);
            }

            ::java::util::List ParseToken::getContentAsUppercaseList() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseList_d751c1a57012b438]));
            }

            ::java::lang::String ParseToken::getContentAsUppercaseString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getContentAsUppercaseString_d2c8eb4129821f0e]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D ParseToken::getContentAsVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getContentAsVector_032312bdeb3f2f93]));
            }

            ::java::lang::String ParseToken::getFileName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFileName_d2c8eb4129821f0e]));
            }

            jint ParseToken::getLineNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLineNumber_d6ab429752e7c267]);
            }

            ::java::lang::String ParseToken::getName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
            }

            ::java::lang::String ParseToken::getRawContent() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRawContent_d2c8eb4129821f0e]));
            }

            ::org::orekit::files::ccsds::utils::lexical::TokenType ParseToken::getType() const
            {
              return ::org::orekit::files::ccsds::utils::lexical::TokenType(env->callObjectMethod(this$, mids$[mid_getType_f4ebe1b79f29bb69]));
            }

            ::org::orekit::utils::units::Unit ParseToken::getUnits() const
            {
              return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_b1bb36679ea369c9]));
            }

            jboolean ParseToken::processAsBoolean(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$BooleanConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsBoolean_e3d1693258576011], a0.this$);
            }

            jboolean ParseToken::processAsCenter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenter_1c1425c11c07235f], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsCenterList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CenterListConsumer & a0, const ::org::orekit::bodies::CelestialBodies & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsCenterList_551d40fbdf9eb23b], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDate(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDate_4ad44c4d8a6d00aa], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsDouble(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDouble_05d9d8b83725fdfd], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoubleArray(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoubleArrayConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoubleArray_b730ee473c72d83e], a0.this$, a1.this$, a2.this$);
            }

            jboolean ParseToken::processAsDoublyIndexedDouble(jint a0, jint a1, const ::org::orekit::utils::units::Unit & a2, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a3, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DoublyIndexedDoubleConsumer & a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsDoublyIndexedDouble_18c42f01485b64c7], a0, a1, a2.this$, a3.this$, a4.this$);
            }

            jboolean ParseToken::processAsEnum(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnum_18c6048ff424c0ed], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsEnumsList(const ::java::lang::Class & a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$EnumListConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsEnumsList_d81322bcf2e19849], a0.this$, a1.this$);
            }

            jboolean ParseToken::processAsFrame(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$FrameConsumer & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, jboolean a2, jboolean a3, jboolean a4) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFrame_f1da7ab449626b9d], a0.this$, a1.this$, a2, a3, a4);
            }

            jboolean ParseToken::processAsFreeTextList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextList_2ab8bff756227e9f], a0.this$);
            }

            jboolean ParseToken::processAsFreeTextString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsFreeTextString_656b45dac5b3bbf9], a0.this$);
            }

            jboolean ParseToken::processAsIndexedDouble(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDouble_ac031c97704b9d0f], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedDoubleArray(jint a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedDoubleArrayConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedDoubleArray_2301490f3007b220], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsIndexedInteger(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedIntConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedInteger_7afd642ed21c80b1], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedNormalizedString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedNormalizedString_11904d50b022ff75], a0, a1.this$);
            }

            jboolean ParseToken::processAsIndexedUppercaseString(jint a0, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IndexedStringConsumer & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIndexedUppercaseString_11904d50b022ff75], a0, a1.this$);
            }

            jboolean ParseToken::processAsInteger(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsInteger_3dd762e73ec3370d], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArray(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArray_9cf826d4bd8d05e1], a0.this$);
            }

            jboolean ParseToken::processAsIntegerArrayNoSpace(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$IntegerArrayConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsIntegerArrayNoSpace_9cf826d4bd8d05e1], a0.this$);
            }

            jboolean ParseToken::processAsLabeledDouble(jchar a0, const ::org::orekit::utils::units::Unit & a1, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$LabeledDoubleConsumer & a3) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsLabeledDouble_db3f909f232a3c60], a0, a1.this$, a2.this$, a3.this$);
            }

            jboolean ParseToken::processAsManeuvrableEnum(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$ManeuvrableConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsManeuvrableEnum_54831767634d65eb], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedCharacter(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$CharConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedCharacter_8b6f39dfba94476f], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedList_2ab8bff756227e9f], a0.this$);
            }

            jboolean ParseToken::processAsNormalizedString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsNormalizedString_656b45dac5b3bbf9], a0.this$);
            }

            jboolean ParseToken::processAsRotationOrder(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$RotationOrderConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsRotationOrder_fb2b75e40550321a], a0.this$);
            }

            jboolean ParseToken::processAsTimeSystem(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$TimeSystemConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsTimeSystem_80c470b1419956d2], a0.this$);
            }

            jboolean ParseToken::processAsUnitList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$UnitListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUnitList_bbf33819dea38151], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseList(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringListConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseList_2ab8bff756227e9f], a0.this$);
            }

            jboolean ParseToken::processAsUppercaseString(const ::org::orekit::files::ccsds::utils::lexical::ParseToken$StringConsumer & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsUppercaseString_656b45dac5b3bbf9], a0.this$);
            }

            jboolean ParseToken::processAsVector(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a1, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$VectorConsumer & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processAsVector_437a26d531f20560], a0.this$, a1.this$, a2.this$);
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
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "ManeuvrableConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$ManeuvrableConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "UnitListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$UnitListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "RotationOrderConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$RotationOrderConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CenterConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CenterConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "FrameConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$FrameConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "TimeSystemConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$TimeSystemConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DateConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DateConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "VectorConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$VectorConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoublyIndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "LabeledDoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "DoubleConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$DoubleConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "CharConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$CharConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntegerArrayConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntegerArrayConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedIntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedIntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IntConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IntConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "BooleanConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$BooleanConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "EnumConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$EnumConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringListConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringListConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "IndexedStringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$IndexedStringConsumer)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken), "StringConsumer", make_descriptor(&PY_TYPE_DEF(ParseToken$StringConsumer)));
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
#include "org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonLexicalAnalyzer::class$ = NULL;
            jmethodID *PythonLexicalAnalyzer::mids$ = NULL;
            bool PythonLexicalAnalyzer::live$ = false;

            jclass PythonLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_accept_b478c9bff3268dbb] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonLexicalAnalyzer::PythonLexicalAnalyzer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonLexicalAnalyzer::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonLexicalAnalyzer::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonLexicalAnalyzer::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self);
            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args);
            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data);
            static PyGetSetDef t_PythonLexicalAnalyzer__fields_[] = {
              DECLARE_GET_FIELD(t_PythonLexicalAnalyzer, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_PythonLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonLexicalAnalyzer)[] = {
              { Py_tp_methods, t_PythonLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_PythonLexicalAnalyzer_init_ },
              { Py_tp_getset, t_PythonLexicalAnalyzer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonLexicalAnalyzer, t_PythonLexicalAnalyzer, PythonLexicalAnalyzer);

            void t_PythonLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonLexicalAnalyzer), &PY_TYPE_DEF(PythonLexicalAnalyzer), module, "PythonLexicalAnalyzer", 1);
            }

            void t_PythonLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "class_", make_descriptor(PythonLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "wrapfn_", make_descriptor(t_PythonLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonLexicalAnalyzer::initializeClass);
              JNINativeMethod methods[] = {
                { "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;", (void *) t_PythonLexicalAnalyzer_accept0 },
                { "pythonDecRef", "()V", (void *) t_PythonLexicalAnalyzer_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_PythonLexicalAnalyzer::wrap_Object(PythonLexicalAnalyzer(((t_PythonLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              PythonLexicalAnalyzer object((jobject) NULL);

              INT_CALL(object = PythonLexicalAnalyzer());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args)
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

            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::wrap_Object(::org::orekit::files::ccsds::utils::lexical::MessageParser(a0));
              PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("accept", result);
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

            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionLagrangeForm::class$ = NULL;
        jmethodID *PolynomialFunctionLagrangeForm::mids$ = NULL;
        bool PolynomialFunctionLagrangeForm::live$ = false;

        jclass PolynomialFunctionLagrangeForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_d6ab429752e7c267] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_65d620e9532c2371] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCoefficients_be783177b060994b] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getInterpolatingPoints_be783177b060994b] = env->getMethodID(cls, "getInterpolatingPoints", "()[D");
            mids$[mid_getInterpolatingValues_be783177b060994b] = env->getMethodID(cls, "getInterpolatingValues", "()[D");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_verifyInterpolationArray_a57658a844146040] = env->getStaticMethodID(cls, "verifyInterpolationArray", "([D[DZ)Z");
            mids$[mid_computeCoefficients_ff7cb6c242604316] = env->getMethodID(cls, "computeCoefficients", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionLagrangeForm::PolynomialFunctionLagrangeForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

        jint PolynomialFunctionLagrangeForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_d6ab429752e7c267]);
        }

        jdouble PolynomialFunctionLagrangeForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_65d620e9532c2371], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_be783177b060994b]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingPoints() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingPoints_be783177b060994b]));
        }

        JArray< jdouble > PolynomialFunctionLagrangeForm::getInterpolatingValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInterpolatingValues_be783177b060994b]));
        }

        jdouble PolynomialFunctionLagrangeForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        jboolean PolynomialFunctionLagrangeForm::verifyInterpolationArray(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_verifyInterpolationArray_a57658a844146040], a0.this$, a1.this$, a2);
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
        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self);
        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg);
        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionLagrangeForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingPoints),
          DECLARE_GET_FIELD(t_PolynomialFunctionLagrangeForm, interpolatingValues),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionLagrangeForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingPoints, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, getInterpolatingValues, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, value, METH_O),
          DECLARE_METHOD(t_PolynomialFunctionLagrangeForm, verifyInterpolationArray, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionLagrangeForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionLagrangeForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionLagrangeForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionLagrangeForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionLagrangeForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionLagrangeForm, t_PolynomialFunctionLagrangeForm, PolynomialFunctionLagrangeForm);

        void t_PolynomialFunctionLagrangeForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionLagrangeForm), &PY_TYPE_DEF(PolynomialFunctionLagrangeForm), module, "PolynomialFunctionLagrangeForm", 0);
        }

        void t_PolynomialFunctionLagrangeForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "class_", make_descriptor(PolynomialFunctionLagrangeForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "wrapfn_", make_descriptor(t_PolynomialFunctionLagrangeForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionLagrangeForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionLagrangeForm::wrap_Object(PolynomialFunctionLagrangeForm(((t_PolynomialFunctionLagrangeForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionLagrangeForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionLagrangeForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionLagrangeForm_init_(t_PolynomialFunctionLagrangeForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionLagrangeForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionLagrangeForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_degree(t_PolynomialFunctionLagrangeForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getCoefficients(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingPoints(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingPoints());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_getInterpolatingValues(t_PolynomialFunctionLagrangeForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolatingValues());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_value(t_PolynomialFunctionLagrangeForm *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_verifyInterpolationArray(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jboolean result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionLagrangeForm::verifyInterpolationArray(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "verifyInterpolationArray", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__coefficients(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingPoints(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingPoints());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionLagrangeForm_get__interpolatingValues(t_PolynomialFunctionLagrangeForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolatingValues());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *JacobiPolynomials::class$ = NULL;
            jmethodID *JacobiPolynomials::mids$ = NULL;
            bool JacobiPolynomials::live$ = false;

            jclass JacobiPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_4ffdc9c645a31f65] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
                mids$[mid_getValue_b7367384cfc04592] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
                mids$[mid_getValueAndDerivative_b928efebcc2dd91b] = env->getStaticMethodID(cls, "getValueAndDerivative", "(IIID)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::analysis::differentiation::FieldGradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::FieldGradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_4ffdc9c645a31f65], a0, a1, a2, a3.this$));
            }

            ::org::hipparchus::analysis::differentiation::Gradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::Gradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::Gradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_b7367384cfc04592], a0, a1, a2, a3.this$));
            }

            JArray< jdouble > JacobiPolynomials::getValueAndDerivative(jint a0, jint a1, jint a2, jdouble a3)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_getValueAndDerivative_b928efebcc2dd91b], a0, a1, a2, a3));
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
            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args);
            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_JacobiPolynomials__methods_[] = {
              DECLARE_METHOD(t_JacobiPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValue, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValueAndDerivative, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JacobiPolynomials)[] = {
              { Py_tp_methods, t_JacobiPolynomials__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JacobiPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JacobiPolynomials, t_JacobiPolynomials, JacobiPolynomials);

            void t_JacobiPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(JacobiPolynomials), &PY_TYPE_DEF(JacobiPolynomials), module, "JacobiPolynomials", 0);
            }

            void t_JacobiPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "class_", make_descriptor(JacobiPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "wrapfn_", make_descriptor(t_JacobiPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JacobiPolynomials::initializeClass, 1)))
                return NULL;
              return t_JacobiPolynomials::wrap_Object(JacobiPolynomials(((t_JacobiPolynomials *) arg)->object.this$));
            }
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JacobiPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::FieldGradient a3((jobject) NULL);
                  PyTypeObject **p3;
                  ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIK", ::org::hipparchus::analysis::differentiation::FieldGradient::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::analysis::differentiation::t_FieldGradient::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result);
                  }
                }
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::Gradient a3((jobject) NULL);
                  ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getValue", args);
              return NULL;
            }

            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "IIID", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValueAndDerivative(a0, a1, a2, a3));
                return result.wrap();
              }

              PyErr_SetArgsError(type, "getValueAndDerivative", args);
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
          mids$[mid_selectDates_0499dac7e83b853d] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List DatesSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_0499dac7e83b853d], a0.this$, a1.this$));
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
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAbstractDetector::class$ = NULL;
        jmethodID *FieldAbstractDetector::mids$ = NULL;
        bool FieldAbstractDetector::live$ = false;
        jdouble FieldAbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint FieldAbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble FieldAbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_ae50020f8bfe1c59] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_0f2b5ee7b716ac92] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_08d37e3f77b7239d] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_a6ca3a2735927243] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_eaf7dcc877e1e0f1] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_10514b3cc2b64aba] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxIter_c24c4034477e75c9] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withThreshold_e517eb0f8982f10f] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_create_6aaef69387f9170d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_ae50020f8bfe1c59]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_0f2b5ee7b716ac92]));
        }

        jint FieldAbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_08d37e3f77b7239d]));
        }

        void FieldAbstractDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
        }

        jboolean FieldAbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        FieldAbstractDetector FieldAbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::FieldEventHandler & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_a6ca3a2735927243], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(jdouble a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_eaf7dcc877e1e0f1], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_10514b3cc2b64aba], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxIter(jint a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_c24c4034477e75c9], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_e517eb0f8982f10f], a0.this$));
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
        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data);
        static PyGetSetDef t_FieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractDetector, forward),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, handler),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractDetector)[] = {
          { Py_tp_methods, t_FieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractDetector, t_FieldAbstractDetector, FieldAbstractDetector);
        PyObject *t_FieldAbstractDetector::wrap_Object(const FieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractDetector), &PY_TYPE_DEF(FieldAbstractDetector), module, "FieldAbstractDetector", 0);
        }

        void t_FieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "class_", make_descriptor(FieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "wrapfn_", make_descriptor(t_FieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldAbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(FieldAbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(FieldAbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldAbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractDetector::wrap_Object(FieldAbstractDetector(((t_FieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args)
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

        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg)
        {
          jint a0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanModel.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanModel::class$ = NULL;
        jmethodID *UnscentedKalmanModel::mids$ = NULL;
        bool UnscentedKalmanModel::live$ = false;

        jclass UnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_32b51ab222e72e59] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_80e11148db499dda] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_270f067ba2ecffc6] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_af093bf37101b796] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_0c7d8b0df374bb31] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_4546a188365eb79d] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_8e02540e91b649aa] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_32b51ab222e72e59], a0.this$, a1.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79]));
        }

        ::org::orekit::time::AbsoluteDate UnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_80e11148db499dda]));
        }

        jint UnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_270f067ba2ecffc6]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList UnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be]));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_af093bf37101b796]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution UnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_0c7d8b0df374bb31], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_4546a188365eb79d], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealVector UnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix UnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement UnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::hipparchus::linear::RealVector > UnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_8e02540e91b649aa], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > UnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79]));
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
        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self);
        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data);
        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_UnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_UnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanModel)[] = {
          { Py_tp_methods, t_UnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanModel, t_UnscentedKalmanModel, UnscentedKalmanModel);

        void t_UnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanModel), &PY_TYPE_DEF(UnscentedKalmanModel), module, "UnscentedKalmanModel", 0);
        }

        void t_UnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "class_", make_descriptor(UnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "wrapfn_", make_descriptor(t_UnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanModel::wrap_Object(UnscentedKalmanModel(((t_UnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanModel_finalizeEstimation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCorrectedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentDate(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getCurrentMeasurementNumber(t_UnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimate(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedMeasurementsParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedOrbitalParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagationParameters(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getEstimatedPropagators(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_getEvolution(t_UnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getInnovation(t_UnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalEstimatedState(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalKalmanGain(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalMeasurementJacobian(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_UnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurement(t_UnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedMeasurements(t_UnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanModel_getPredictedSpacecraftStates(t_UnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__correctedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentDate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__currentMeasurementNumber(t_UnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimate(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedMeasurementsParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedOrbitalParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagationParameters(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__estimatedPropagators(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalEstimatedState(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalKalmanGain(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalMeasurementJacobian(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__physicalStateTransitionMatrix(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedMeasurement(t_UnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_UnscentedKalmanModel_get__predictedSpacecraftStates(t_UnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEJacobiansProvider::class$ = NULL;
      jmethodID *ODEJacobiansProvider::mids$ = NULL;
      bool ODEJacobiansProvider::live$ = false;

      jclass ODEJacobiansProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEJacobiansProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeMainStateJacobian_1548e8a2885a1cd0] = env->getMethodID(cls, "computeMainStateJacobian", "(D[D[D)[[D");
          mids$[mid_computeParameterJacobian_b64c18f49b11902d] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");
          mids$[mid_getParametersNames_d751c1a57012b438] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_df4c65b2aede5c41] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > ODEJacobiansProvider::computeMainStateJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_computeMainStateJacobian_1548e8a2885a1cd0], a0, a1.this$, a2.this$));
      }

      JArray< jdouble > ODEJacobiansProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_b64c18f49b11902d], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::util::List ODEJacobiansProvider::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_d751c1a57012b438]));
      }

      jboolean ODEJacobiansProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_df4c65b2aede5c41], a0.this$);
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
      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self);
      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data);
      static PyGetSetDef t_ODEJacobiansProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ODEJacobiansProvider, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEJacobiansProvider__methods_[] = {
        DECLARE_METHOD(t_ODEJacobiansProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeMainStateJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEJacobiansProvider)[] = {
        { Py_tp_methods, t_ODEJacobiansProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEJacobiansProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEJacobiansProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::OrdinaryDifferentialEquation),
        NULL
      };

      DEFINE_TYPE(ODEJacobiansProvider, t_ODEJacobiansProvider, ODEJacobiansProvider);

      void t_ODEJacobiansProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEJacobiansProvider), &PY_TYPE_DEF(ODEJacobiansProvider), module, "ODEJacobiansProvider", 0);
      }

      void t_ODEJacobiansProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "class_", make_descriptor(ODEJacobiansProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "wrapfn_", make_descriptor(t_ODEJacobiansProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEJacobiansProvider::initializeClass, 1)))
          return NULL;
        return t_ODEJacobiansProvider::wrap_Object(ODEJacobiansProvider(((t_ODEJacobiansProvider *) arg)->object.this$));
      }
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEJacobiansProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeMainStateJacobian(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "computeMainStateJacobian", args);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args)
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

      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteAntenna::class$ = NULL;
        jmethodID *SatelliteAntenna::mids$ = NULL;
        bool SatelliteAntenna::live$ = false;

        jclass SatelliteAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eb7d5b00e00d07e0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/antenna/SatelliteType;ILjava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCosparID_d2c8eb4129821f0e] = env->getMethodID(cls, "getCosparID", "()Ljava/lang/String;");
            mids$[mid_getPrnNumber_d6ab429752e7c267] = env->getMethodID(cls, "getPrnNumber", "()I");
            mids$[mid_getSatelliteCode_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteCode", "()I");
            mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSatelliteType_426eb7147e7b0705] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_getValidFrom_80e11148db499dda] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_80e11148db499dda] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SatelliteAntenna::SatelliteAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::gnss::antenna::SatelliteType & a5, jint a6, const ::java::lang::String & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::orekit::time::AbsoluteDate & a9) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_eb7d5b00e00d07e0, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6, a7.this$, a8.this$, a9.this$)) {}

        ::java::lang::String SatelliteAntenna::getCosparID() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCosparID_d2c8eb4129821f0e]));
        }

        jint SatelliteAntenna::getPrnNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPrnNumber_d6ab429752e7c267]);
        }

        jint SatelliteAntenna::getSatelliteCode() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCode_d6ab429752e7c267]);
        }

        ::org::orekit::gnss::SatelliteSystem SatelliteAntenna::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
        }

        ::org::orekit::gnss::antenna::SatelliteType SatelliteAntenna::getSatelliteType() const
        {
          return ::org::orekit::gnss::antenna::SatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_426eb7147e7b0705]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_80e11148db499dda]));
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
        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data);
        static PyGetSetDef t_SatelliteAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteAntenna, cosparID),
          DECLARE_GET_FIELD(t_SatelliteAntenna, prnNumber),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteCode),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteSystem),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteType),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validFrom),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validUntil),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteAntenna__methods_[] = {
          DECLARE_METHOD(t_SatelliteAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, getCosparID, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getPrnNumber, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteCode, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteType, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidUntil, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteAntenna)[] = {
          { Py_tp_methods, t_SatelliteAntenna__methods_ },
          { Py_tp_init, (void *) t_SatelliteAntenna_init_ },
          { Py_tp_getset, t_SatelliteAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(SatelliteAntenna, t_SatelliteAntenna, SatelliteAntenna);

        void t_SatelliteAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteAntenna), &PY_TYPE_DEF(SatelliteAntenna), module, "SatelliteAntenna", 0);
        }

        void t_SatelliteAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "class_", make_descriptor(SatelliteAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "wrapfn_", make_descriptor(t_SatelliteAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteAntenna::initializeClass, 1)))
            return NULL;
          return t_SatelliteAntenna::wrap_Object(SatelliteAntenna(((t_SatelliteAntenna *) arg)->object.this$));
        }
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          ::org::orekit::gnss::antenna::SatelliteType a5((jobject) NULL);
          PyTypeObject **p5;
          jint a6;
          ::java::lang::String a7((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
          SatelliteAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKKIKIskk", ::java::util::Map::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::antenna::SatelliteType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5, &p5, ::org::orekit::gnss::antenna::t_SatelliteType::parameters_, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = SatelliteAntenna(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCosparID());
          return j2p(result);
        }

        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPrnNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCode());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::antenna::SatelliteType result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCosparID());
          return j2p(value);
        }

        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPrnNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCode());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::antenna::SatelliteType value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XmlSubStructureKey::class$ = NULL;
            jmethodID *XmlSubStructureKey::mids$ = NULL;
            bool XmlSubStructureKey::live$ = false;
            XmlSubStructureKey *XmlSubStructureKey::COMMENT = NULL;
            XmlSubStructureKey *XmlSubStructureKey::additionalParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::covarianceMatrix = NULL;
            XmlSubStructureKey *XmlSubStructureKey::odParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeMetadataData = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeStateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::segment = NULL;
            XmlSubStructureKey *XmlSubStructureKey::stateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::userDefinedParameters = NULL;

            jclass XmlSubStructureKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_eca7b964a4675051] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)Z");
                mids$[mid_valueOf_5370d6bade69311c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");
                mids$[mid_values_0d8e5a273baf0374] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new XmlSubStructureKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                additionalParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "additionalParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                covarianceMatrix = new XmlSubStructureKey(env->getStaticObjectField(cls, "covarianceMatrix", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                odParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "odParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeMetadataData = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeMetadataData", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeStateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeStateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                segment = new XmlSubStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                stateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "stateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                userDefinedParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "userDefinedParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XmlSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_eca7b964a4675051], a0.this$, a1.this$);
            }

            XmlSubStructureKey XmlSubStructureKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XmlSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5370d6bade69311c], a0.this$));
            }

            JArray< XmlSubStructureKey > XmlSubStructureKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XmlSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0d8e5a273baf0374]));
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
            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type);
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data);
            static PyGetSetDef t_XmlSubStructureKey__fields_[] = {
              DECLARE_GET_FIELD(t_XmlSubStructureKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlSubStructureKey__methods_[] = {
              DECLARE_METHOD(t_XmlSubStructureKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlSubStructureKey)[] = {
              { Py_tp_methods, t_XmlSubStructureKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XmlSubStructureKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlSubStructureKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XmlSubStructureKey, t_XmlSubStructureKey, XmlSubStructureKey);
            PyObject *t_XmlSubStructureKey::wrap_Object(const XmlSubStructureKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XmlSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XmlSubStructureKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlSubStructureKey), &PY_TYPE_DEF(XmlSubStructureKey), module, "XmlSubStructureKey", 0);
            }

            void t_XmlSubStructureKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "class_", make_descriptor(XmlSubStructureKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "wrapfn_", make_descriptor(t_XmlSubStructureKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlSubStructureKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "COMMENT", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "additionalParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::additionalParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "covarianceMatrix", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::covarianceMatrix)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "odParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::odParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeMetadataData", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeMetadataData)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeStateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeStateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "segment", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::segment)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "stateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::stateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "userDefinedParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::userDefinedParameters)));
            }

            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlSubStructureKey::initializeClass, 1)))
                return NULL;
              return t_XmlSubStructureKey::wrap_Object(XmlSubStructureKey(((t_XmlSubStructureKey *) arg)->object.this$));
            }
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlSubStructureKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                OBJ_CALL(result = self->object.process(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XmlSubStructureKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::valueOf(a0));
                return t_XmlSubStructureKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type)
            {
              JArray< XmlSubStructureKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::values());
              return JArray<jobject>(result.this$).wrap(t_XmlSubStructureKey::wrap_jobject);
            }
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data)
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
#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/LOFType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractStateCovarianceInterpolator::class$ = NULL;
      jmethodID *AbstractStateCovarianceInterpolator::mids$ = NULL;
      bool AbstractStateCovarianceInterpolator::live$ = false;
      jint AbstractStateCovarianceInterpolator::COLUMN_DIM = (jint) 0;
      ::org::orekit::orbits::PositionAngleType *AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE = NULL;
      jint AbstractStateCovarianceInterpolator::ROW_DIM = (jint) 0;

      jclass AbstractStateCovarianceInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractStateCovarianceInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4db14975e9e3fa0e] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_8ac92aa4416c2912] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getOrbitInterpolator_73c4976bc58cb3ff] = env->getMethodID(cls, "getOrbitInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getOutFrame_cb151471db4570f0] = env->getMethodID(cls, "getOutFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getOutLOF_2ef6889b4bcd6216] = env->getMethodID(cls, "getOutLOF", "()Lorg/orekit/frames/LOFType;");
          mids$[mid_getOutOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOutOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getOutPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getOutPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_interpolate_e9904875752c9f36] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedPair;");
          mids$[mid_interpolateOrbit_a01636d7bf2c86d5] = env->getMethodID(cls, "interpolateOrbit", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_e7868f37b0ca6b84] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");
          mids$[mid_expressCovarianceInDesiredOutput_e8a7e9eaceba4489] = env->getMethodID(cls, "expressCovarianceInDesiredOutput", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/time/TimeStampedPair;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COLUMN_DIM = env->getStaticIntField(cls, "COLUMN_DIM");
          DEFAULT_POSITION_ANGLE = new ::org::orekit::orbits::PositionAngleType(env->getStaticObjectField(cls, "DEFAULT_POSITION_ANGLE", "Lorg/orekit/orbits/PositionAngleType;"));
          ROW_DIM = env->getStaticIntField(cls, "ROW_DIM");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4db14975e9e3fa0e, a0, a1, a2.this$, a3.this$)) {}

      AbstractStateCovarianceInterpolator::AbstractStateCovarianceInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8ac92aa4416c2912, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::TimeInterpolator AbstractStateCovarianceInterpolator::getOrbitInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_73c4976bc58cb3ff]));
      }

      ::org::orekit::frames::Frame AbstractStateCovarianceInterpolator::getOutFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutFrame_cb151471db4570f0]));
      }

      ::org::orekit::frames::LOFType AbstractStateCovarianceInterpolator::getOutLOF() const
      {
        return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getOutLOF_2ef6889b4bcd6216]));
      }

      ::org::orekit::orbits::OrbitType AbstractStateCovarianceInterpolator::getOutOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOutOrbitType_495f818d3570b7f5]));
      }

      ::org::orekit::orbits::PositionAngleType AbstractStateCovarianceInterpolator::getOutPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getOutPositionAngleType_a6db4e6edefda4be]));
      }

      ::org::orekit::time::TimeStampedPair AbstractStateCovarianceInterpolator::interpolate(const ::org::orekit::time::AbstractTimeInterpolator$InterpolationData & a0) const
      {
        return ::org::orekit::time::TimeStampedPair(env->callObjectMethod(this$, mids$[mid_interpolate_e9904875752c9f36], a0.this$));
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
      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self);
      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data);
      static PyGetSetDef t_AbstractStateCovarianceInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outFrame),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outLOF),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outOrbitType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, outPositionAngleType),
        DECLARE_GET_FIELD(t_AbstractStateCovarianceInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractStateCovarianceInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutLOF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, getOutPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_AbstractStateCovarianceInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractStateCovarianceInterpolator)[] = {
        { Py_tp_methods, t_AbstractStateCovarianceInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractStateCovarianceInterpolator_init_ },
        { Py_tp_getset, t_AbstractStateCovarianceInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractStateCovarianceInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractStateCovarianceInterpolator, t_AbstractStateCovarianceInterpolator, AbstractStateCovarianceInterpolator);
      PyObject *t_AbstractStateCovarianceInterpolator::wrap_Object(const AbstractStateCovarianceInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractStateCovarianceInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractStateCovarianceInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractStateCovarianceInterpolator *self = (t_AbstractStateCovarianceInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractStateCovarianceInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractStateCovarianceInterpolator), &PY_TYPE_DEF(AbstractStateCovarianceInterpolator), module, "AbstractStateCovarianceInterpolator", 0);
      }

      void t_AbstractStateCovarianceInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "class_", make_descriptor(AbstractStateCovarianceInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "wrapfn_", make_descriptor(t_AbstractStateCovarianceInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractStateCovarianceInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "COLUMN_DIM", make_descriptor(AbstractStateCovarianceInterpolator::COLUMN_DIM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "DEFAULT_POSITION_ANGLE", make_descriptor(::org::orekit::orbits::t_PositionAngleType::wrap_Object(*AbstractStateCovarianceInterpolator::DEFAULT_POSITION_ANGLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStateCovarianceInterpolator), "ROW_DIM", make_descriptor(AbstractStateCovarianceInterpolator::ROW_DIM));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractStateCovarianceInterpolator::wrap_Object(AbstractStateCovarianceInterpolator(((t_AbstractStateCovarianceInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractStateCovarianceInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_of_(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractStateCovarianceInterpolator_init_(t_AbstractStateCovarianceInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            AbstractStateCovarianceInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = AbstractStateCovarianceInterpolator(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_AbstractStateCovarianceInterpolator_getOrbitInterpolator(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutFrame(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutLOF(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::frames::LOFType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutOrbitType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_getOutPositionAngleType(t_AbstractStateCovarianceInterpolator *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_interpolate(t_AbstractStateCovarianceInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbstractTimeInterpolator$InterpolationData a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeStampedPair result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::time::AbstractTimeInterpolator$InterpolationData::initializeClass, &a0, &p0, ::org::orekit::time::t_AbstractTimeInterpolator$InterpolationData::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0));
          return ::org::orekit::time::t_TimeStampedPair::wrap_Object(result, ::org::orekit::orbits::PY_TYPE(Orbit), ::org::orekit::propagation::PY_TYPE(StateCovariance));
        }

        return callSuper(PY_TYPE(AbstractStateCovarianceInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractStateCovarianceInterpolator_get__parameters_(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__orbitInterpolator(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outFrame(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outLOF(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::frames::LOFType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutLOF());
        return ::org::orekit::frames::t_LOFType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outOrbitType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_AbstractStateCovarianceInterpolator_get__outPositionAngleType(t_AbstractStateCovarianceInterpolator *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentSolver::BrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        BrentSolver::BrentSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}
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
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary$Entry::class$ = NULL;
      jmethodID *FieldArrayDictionary$Entry::mids$ = NULL;
      bool FieldArrayDictionary$Entry::live$ = false;

      jclass FieldArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_94ed2e0620f8833d] = env->getMethodID(cls, "getValue", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_increment_a71c45509eaf92d1] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_increment_77e61a645c496adc] = env->getMethodID(cls, "increment", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_scaledIncrement_5b1eef69d7e1f6c0] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_scaledIncrement_f40f357b9f6cfe84] = env->getMethodID(cls, "scaledIncrement", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_ff7cb6c242604316] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String FieldArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_d2c8eb4129821f0e]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary$Entry::getValue() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getValue_94ed2e0620f8833d]));
      }

      void FieldArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_a71c45509eaf92d1], a0.this$);
      }

      void FieldArrayDictionary$Entry::increment(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_77e61a645c496adc], a0.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(jdouble a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_5b1eef69d7e1f6c0], a0, a1.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(const ::org::hipparchus::CalculusFieldElement & a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_f40f357b9f6cfe84], a0.this$, a1.this$);
      }

      jint FieldArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
      }

      void FieldArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_ff7cb6c242604316]);
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
      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, value),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, increment, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_FieldArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary$Entry, t_FieldArrayDictionary$Entry, FieldArrayDictionary$Entry);
      PyObject *t_FieldArrayDictionary$Entry::wrap_Object(const FieldArrayDictionary$Entry& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary$Entry::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary$Entry), &PY_TYPE_DEF(FieldArrayDictionary$Entry), module, "FieldArrayDictionary$Entry", 0);
      }

      void t_FieldArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "class_", make_descriptor(FieldArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "wrapfn_", make_descriptor(t_FieldArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary$Entry::wrap_Object(FieldArrayDictionary$Entry(((t_FieldArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "DK", FieldArrayDictionary$Entry::initializeClass, &a0, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldArrayDictionary$Entry::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonMessageParser.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonMessageParser::class$ = NULL;
            jmethodID *PythonMessageParser::mids$ = NULL;
            bool PythonMessageParser::live$ = false;

            jclass PythonMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_704a5bee58538972] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFileFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_7927c1c0838e396d] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_db9439a3eec594be] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageParser::PythonMessageParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonMessageParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args);
            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self);
            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data);
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data);
            static PyGetSetDef t_PythonMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageParser, self),
              DECLARE_GET_FIELD(t_PythonMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageParser)[] = {
              { Py_tp_methods, t_PythonMessageParser__methods_ },
              { Py_tp_init, (void *) t_PythonMessageParser_init_ },
              { Py_tp_getset, t_PythonMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageParser, t_PythonMessageParser, PythonMessageParser);
            PyObject *t_PythonMessageParser::wrap_Object(const PythonMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageParser), &PY_TYPE_DEF(PythonMessageParser), module, "PythonMessageParser", 1);
            }

            void t_PythonMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "class_", make_descriptor(PythonMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "wrapfn_", make_descriptor(t_PythonMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonMessageParser_build0 },
                { "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonMessageParser_getFileFormat1 },
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageParser_getFormatVersionKey2 },
                { "getSpecialXmlElementsBuilders", "()Ljava/util/Map;", (void *) t_PythonMessageParser_getSpecialXmlElementsBuilders3 },
                { "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;", (void *) t_PythonMessageParser_parseMessage4 },
                { "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V", (void *) t_PythonMessageParser_process5 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageParser_pythonDecRef6 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonMessageParser_reset7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonMessageParser::wrap_Object(PythonMessageParser(((t_PythonMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageParser object((jobject) NULL);

              INT_CALL(object = PythonMessageParser());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("build", result);
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

            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFileFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFileFormat", result);
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

            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getSpecialXmlElementsBuilders", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getSpecialXmlElementsBuilders", result);
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

            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
              PyObject *result = PyObject_CallMethod(obj, "parseMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("parseMessage", result);
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

            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "process", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data)
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
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/TDOABuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TDOABuilder::class$ = NULL;
          jmethodID *TDOABuilder::mids$ = NULL;
          bool TDOABuilder::live$ = false;

          jclass TDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10af0e412dc0df53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_6f29f18e4bebc1ea] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOABuilder::TDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_10af0e412dc0df53, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TDOA TDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TDOA(env->callObjectMethod(this$, mids$[mid_build_6f29f18e4bebc1ea], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args);
          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args);
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data);
          static PyGetSetDef t_TDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOABuilder__methods_[] = {
            DECLARE_METHOD(t_TDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOABuilder)[] = {
            { Py_tp_methods, t_TDOABuilder__methods_ },
            { Py_tp_init, (void *) t_TDOABuilder_init_ },
            { Py_tp_getset, t_TDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TDOABuilder, t_TDOABuilder, TDOABuilder);
          PyObject *t_TDOABuilder::wrap_Object(const TDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TDOABuilder *self = (t_TDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOABuilder), &PY_TYPE_DEF(TDOABuilder), module, "TDOABuilder", 0);
          }

          void t_TDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "class_", make_descriptor(TDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "wrapfn_", make_descriptor(t_TDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOABuilder::initializeClass, 1)))
              return NULL;
            return t_TDOABuilder::wrap_Object(TDOABuilder(((t_TDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_TDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TDOABuilder_of_(t_TDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TDOABuilder_init_(t_TDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TDOABuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOABuilder_build(t_TDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TDOABuilder_get__parameters_(t_TDOABuilder *self, void *data)
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
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder::class$ = NULL;
      jmethodID *WaypointPVBuilder::mids$ = NULL;
      bool WaypointPVBuilder::live$ = false;

      jclass WaypointPVBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_00e7f44cf802eaa1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/WaypointPVBuilder$InterpolationFactory;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_addWaypoint_b67b047f21c6c1d4] = env->getMethodID(cls, "addWaypoint", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_build_781ab98286dad7d5] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_cartesianBuilder_526e5739b24da72f] = env->getStaticMethodID(cls, "cartesianBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantAfter_cb2804c8e2e69709] = env->getMethodID(cls, "constantAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantBefore_cb2804c8e2e69709] = env->getMethodID(cls, "constantBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_greatCircleBuilder_526e5739b24da72f] = env->getStaticMethodID(cls, "greatCircleBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidAfter_cb2804c8e2e69709] = env->getMethodID(cls, "invalidAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidBefore_cb2804c8e2e69709] = env->getMethodID(cls, "invalidBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_loxodromeBuilder_526e5739b24da72f] = env->getStaticMethodID(cls, "loxodromeBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_createInitial_f3fa2dad6a61f56c] = env->getMethodID(cls, "createInitial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_createFinal_f3fa2dad6a61f56c] = env->getMethodID(cls, "createFinal", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WaypointPVBuilder::WaypointPVBuilder(const ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00e7f44cf802eaa1, a0.this$, a1.this$)) {}

      WaypointPVBuilder WaypointPVBuilder::addWaypoint(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_addWaypoint_b67b047f21c6c1d4], a0.this$, a1.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder::build() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_781ab98286dad7d5]));
      }

      WaypointPVBuilder WaypointPVBuilder::cartesianBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_cartesianBuilder_526e5739b24da72f], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::constantAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantAfter_cb2804c8e2e69709]));
      }

      WaypointPVBuilder WaypointPVBuilder::constantBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantBefore_cb2804c8e2e69709]));
      }

      WaypointPVBuilder WaypointPVBuilder::greatCircleBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_greatCircleBuilder_526e5739b24da72f], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidAfter_cb2804c8e2e69709]));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidBefore_cb2804c8e2e69709]));
      }

      WaypointPVBuilder WaypointPVBuilder::loxodromeBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_loxodromeBuilder_526e5739b24da72f], a0.this$));
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
      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args);
      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_WaypointPVBuilder__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, addWaypoint, METH_VARARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, build, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, cartesianBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, greatCircleBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, loxodromeBuilder, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder)[] = {
        { Py_tp_methods, t_WaypointPVBuilder__methods_ },
        { Py_tp_init, (void *) t_WaypointPVBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder, t_WaypointPVBuilder, WaypointPVBuilder);

      void t_WaypointPVBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder), &PY_TYPE_DEF(WaypointPVBuilder), module, "WaypointPVBuilder", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "InterpolationFactory", make_descriptor(&PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory)));
      }

      void t_WaypointPVBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "class_", make_descriptor(WaypointPVBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "wrapfn_", make_descriptor(t_WaypointPVBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder::wrap_Object(WaypointPVBuilder(((t_WaypointPVBuilder *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory a0((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
        WaypointPVBuilder object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = WaypointPVBuilder(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.addWaypoint(a0, a1));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addWaypoint", args);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::cartesianBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cartesianBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::greatCircleBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "greatCircleBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::loxodromeBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "loxodromeBuilder", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Data::class$ = NULL;
          jmethodID *Data::mids$ = NULL;
          bool Data::live$ = false;

          jclass Data::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Data");

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
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Data__methods_[] = {
            DECLARE_METHOD(t_Data, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Data, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Data)[] = {
            { Py_tp_methods, t_Data__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Data)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Section),
            NULL
          };

          DEFINE_TYPE(Data, t_Data, Data);

          void t_Data::install(PyObject *module)
          {
            installType(&PY_TYPE(Data), &PY_TYPE_DEF(Data), module, "Data", 0);
          }

          void t_Data::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "class_", make_descriptor(Data::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "wrapfn_", make_descriptor(t_Data::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Data::initializeClass, 1)))
              return NULL;
            return t_Data::wrap_Object(Data(((t_Data *) arg)->object.this$));
          }
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Data::initializeClass, 0))
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
#include "java/lang/Short.h"
#include "java/lang/Short.h"
#include "java/lang/Class.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Short::class$ = NULL;
    jmethodID *Short::mids$ = NULL;
    bool Short::live$ = false;
    jint Short::BYTES = (jint) 0;
    jshort Short::MAX_VALUE = (jshort) 0;
    jshort Short::MIN_VALUE = (jshort) 0;
    jint Short::SIZE = (jint) 0;
    ::java::lang::Class *Short::TYPE = NULL;

    jclass Short::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Short");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_82cbebcb79e29516] = env->getMethodID(cls, "<init>", "(S)V");
        mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_87d6c106f955819c] = env->getStaticMethodID(cls, "compare", "(SS)I");
        mids$[mid_compareTo_dbc19978fb9b7a7e] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Short;)I");
        mids$[mid_compareUnsigned_87d6c106f955819c] = env->getStaticMethodID(cls, "compareUnsigned", "(SS)I");
        mids$[mid_decode_ffa4257f92d944cc] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_4c3f0428308d24f5] = env->getStaticMethodID(cls, "hashCode", "(S)I");
        mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseShort_0da62ff94af6a262] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;)S");
        mids$[mid_parseShort_e68db604a715d9c1] = env->getStaticMethodID(cls, "parseShort", "(Ljava/lang/String;I)S");
        mids$[mid_reverseBytes_21fb32c1ab6702d9] = env->getStaticMethodID(cls, "reverseBytes", "(S)S");
        mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_18737a44572c1216] = env->getStaticMethodID(cls, "toString", "(S)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_4c3f0428308d24f5] = env->getStaticMethodID(cls, "toUnsignedInt", "(S)I");
        mids$[mid_toUnsignedLong_91ec698e3904d68f] = env->getStaticMethodID(cls, "toUnsignedLong", "(S)J");
        mids$[mid_valueOf_ffa4257f92d944cc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Short;");
        mids$[mid_valueOf_b2c1a3dc5058d398] = env->getStaticMethodID(cls, "valueOf", "(S)Ljava/lang/Short;");
        mids$[mid_valueOf_3d3fc87d1502acce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Short;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticShortField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticShortField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Short::Short(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Short::Short(jshort a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_82cbebcb79e29516, a0)) {}

    jbyte Short::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
    }

    jint Short::compare(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_87d6c106f955819c], a0, a1);
    }

    jint Short::compareTo(const Short & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_dbc19978fb9b7a7e], a0.this$);
    }

    jint Short::compareUnsigned(jshort a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_87d6c106f955819c], a0, a1);
    }

    Short Short::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_decode_ffa4257f92d944cc], a0.this$));
    }

    jdouble Short::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
    }

    jboolean Short::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jfloat Short::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
    }

    jint Short::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Short::hashCode(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_4c3f0428308d24f5], a0);
    }

    jint Short::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
    }

    jlong Short::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
    }

    jshort Short::parseShort(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_0da62ff94af6a262], a0.this$);
    }

    jshort Short::parseShort(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_parseShort_e68db604a715d9c1], a0.this$, a1);
    }

    jshort Short::reverseBytes(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticShortMethod(cls, mids$[mid_reverseBytes_21fb32c1ab6702d9], a0);
    }

    jshort Short::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
    }

    ::java::lang::String Short::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Short::toString(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_18737a44572c1216], a0));
    }

    jint Short::toUnsignedInt(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_4c3f0428308d24f5], a0);
    }

    jlong Short::toUnsignedLong(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_91ec698e3904d68f], a0);
    }

    Short Short::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ffa4257f92d944cc], a0.this$));
    }

    Short Short::valueOf(jshort a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b2c1a3dc5058d398], a0));
    }

    Short Short::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Short(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3d3fc87d1502acce], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg);
    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_equals(t_Short *self, PyObject *args);
    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args);
    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_intValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_longValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString(t_Short *self, PyObject *args);
    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Short__methods_[] = {
      DECLARE_METHOD(t_Short, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, compareTo, METH_O),
      DECLARE_METHOD(t_Short, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, equals, METH_VARARGS),
      DECLARE_METHOD(t_Short, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Short, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, parseShort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Short, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString, METH_VARARGS),
      DECLARE_METHOD(t_Short, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Short, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Short)[] = {
      { Py_tp_methods, t_Short__methods_ },
      { Py_tp_init, (void *) t_Short_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Short)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Short, t_Short, Short);

    void t_Short::install(PyObject *module)
    {
      installType(&PY_TYPE(Short), &PY_TYPE_DEF(Short), module, "Short", 0);
    }

    void t_Short::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "class_", make_descriptor(Short::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "wrapfn_", make_descriptor(unboxShort));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "boxfn_", make_descriptor(boxShort));
      env->getClass(Short::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "BYTES", make_descriptor(Short::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MAX_VALUE", make_descriptor(Short::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "MIN_VALUE", make_descriptor(Short::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "SIZE", make_descriptor(Short::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Short), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Short::TYPE)));
    }

    static PyObject *t_Short_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Short::initializeClass, 1)))
        return NULL;
      return t_Short::wrap_Object(Short(((t_Short *) arg)->object.this$));
    }
    static PyObject *t_Short_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Short::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Short_init_(t_Short *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Short(a0));
            self->object = object;
            break;
          }
        }
        {
          jshort a0;
          Short object((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            INT_CALL(object = Short(a0));
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

    static PyObject *t_Short_byteValue(t_Short *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Short_compare(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Short_compareTo(t_Short *self, PyObject *arg)
    {
      Short a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Short), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Short_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jshort a1;
      jint result;

      if (!parseArgs(args, "SS", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Short::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Short_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Short result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::decode(a0));
        return t_Short::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Short_doubleValue(t_Short *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Short_equals(t_Short *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Short_floatValue(t_Short *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Short_hashCode(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Short_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      jint result;

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Short_intValue(t_Short *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Short_longValue(t_Short *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Short_parseShort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jshort result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jshort result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::parseShort(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseShort", args);
      return NULL;
    }

    static PyObject *t_Short_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jshort result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::reverseBytes(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Short_shortValue(t_Short *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Short_toString(t_Short *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Short), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Short_toString_(PyTypeObject *type, PyObject *args)
    {
      jshort a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jint result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Short_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jshort a0;
      jlong result;

      if (!parseArg(arg, "S", &a0))
      {
        OBJ_CALL(result = ::java::lang::Short::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Short_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Short result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        {
          jshort a0;
          Short result((jobject) NULL);

          if (!parseArgs(args, "S", &a0))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0));
            return t_Short::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Short result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Short::valueOf(a0, a1));
            return t_Short::wrap_Object(result);
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
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Vertex::class$ = NULL;
          jmethodID *Vertex::mids$ = NULL;
          bool Vertex::live$ = false;

          jclass Vertex::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Vertex");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getIncoming_ad6e5fa6096b3414] = env->getMethodID(cls, "getIncoming", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");
              mids$[mid_getLocation_e080ae8a5cf76560] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getOutgoing_ad6e5fa6096b3414] = env->getMethodID(cls, "getOutgoing", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getIncoming() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getIncoming_ad6e5fa6096b3414]));
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Vertex::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getLocation_e080ae8a5cf76560]));
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getOutgoing() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getOutgoing_ad6e5fa6096b3414]));
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
        namespace twod {
          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_getIncoming(t_Vertex *self);
          static PyObject *t_Vertex_getLocation(t_Vertex *self);
          static PyObject *t_Vertex_getOutgoing(t_Vertex *self);
          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data);
          static PyGetSetDef t_Vertex__fields_[] = {
            DECLARE_GET_FIELD(t_Vertex, incoming),
            DECLARE_GET_FIELD(t_Vertex, location),
            DECLARE_GET_FIELD(t_Vertex, outgoing),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vertex__methods_[] = {
            DECLARE_METHOD(t_Vertex, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, getIncoming, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getOutgoing, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vertex)[] = {
            { Py_tp_methods, t_Vertex__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Vertex__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vertex)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vertex, t_Vertex, Vertex);

          void t_Vertex::install(PyObject *module)
          {
            installType(&PY_TYPE(Vertex), &PY_TYPE_DEF(Vertex), module, "Vertex", 0);
          }

          void t_Vertex::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "class_", make_descriptor(Vertex::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "wrapfn_", make_descriptor(t_Vertex::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vertex::initializeClass, 1)))
              return NULL;
            return t_Vertex::wrap_Object(Vertex(((t_Vertex *) arg)->object.this$));
          }
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vertex::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vertex_getIncoming(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_getLocation(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Vertex_getOutgoing(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *DSSTNewtonianAttractionContext::mids$ = NULL;
            bool DSSTNewtonianAttractionContext::live$ = false;

            jclass DSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_298e39d112c729a1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)V");
                mids$[mid_getGM_9981f74b2d109da6] = env->getMethodID(cls, "getGM", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttractionContext::DSSTNewtonianAttractionContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const JArray< jdouble > & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_298e39d112c729a1, a0.this$, a1.this$)) {}

            jdouble DSSTNewtonianAttractionContext::getGM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGM_9981f74b2d109da6]);
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
            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self);
            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttractionContext, gM),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttractionContext_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttractionContext, t_DSSTNewtonianAttractionContext, DSSTNewtonianAttractionContext);

            void t_DSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttractionContext), &PY_TYPE_DEF(DSSTNewtonianAttractionContext), module, "DSSTNewtonianAttractionContext", 0);
            }

            void t_DSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "class_", make_descriptor(DSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_DSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttractionContext::wrap_Object(DSSTNewtonianAttractionContext(((t_DSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              DSSTNewtonianAttractionContext object((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTNewtonianAttractionContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGM());
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
#include "org/hipparchus/stat/regression/GLSMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *GLSMultipleLinearRegression::class$ = NULL;
        jmethodID *GLSMultipleLinearRegression::mids$ = NULL;
        bool GLSMultipleLinearRegression::live$ = false;

        jclass GLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/GLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newSampleData_52f805717cb5edb7] = env->getMethodID(cls, "newSampleData", "([D[[D[[D)V");
            mids$[mid_newCovarianceData_11ecdbb5af7ed67d] = env->getMethodID(cls, "newCovarianceData", "([[D)V");
            mids$[mid_getOmegaInverse_b2eebabce70526d8] = env->getMethodID(cls, "getOmegaInverse", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateBeta_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_b2eebabce70526d8] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateErrorVariance_9981f74b2d109da6] = env->getMethodID(cls, "calculateErrorVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLSMultipleLinearRegression::GLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void GLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_52f805717cb5edb7], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_GLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_GLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_GLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_GLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(GLSMultipleLinearRegression, t_GLSMultipleLinearRegression, GLSMultipleLinearRegression);

        void t_GLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(GLSMultipleLinearRegression), &PY_TYPE_DEF(GLSMultipleLinearRegression), module, "GLSMultipleLinearRegression", 0);
        }

        void t_GLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "class_", make_descriptor(GLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_GLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_GLSMultipleLinearRegression::wrap_Object(GLSMultipleLinearRegression(((t_GLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          GLSMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = GLSMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "[D[[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(GLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *DynamicOutlierFilter::class$ = NULL;
          jmethodID *DynamicOutlierFilter::mids$ = NULL;
          bool DynamicOutlierFilter::live$ = false;

          jclass DynamicOutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getSigma_be783177b060994b] = env->getMethodID(cls, "getSigma", "()[D");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_setSigma_a71c45509eaf92d1] = env->getMethodID(cls, "setSigma", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DynamicOutlierFilter::DynamicOutlierFilter(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::OutlierFilter(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

          JArray< jdouble > DynamicOutlierFilter::getSigma() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_be783177b060994b]));
          }

          void DynamicOutlierFilter::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void DynamicOutlierFilter::setSigma(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSigma_a71c45509eaf92d1], a0.this$);
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
          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args);
          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self);
          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args);
          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg);
          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data);
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data);
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data);
          static PyGetSetDef t_DynamicOutlierFilter__fields_[] = {
            DECLARE_GETSET_FIELD(t_DynamicOutlierFilter, sigma),
            DECLARE_GET_FIELD(t_DynamicOutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DynamicOutlierFilter__methods_[] = {
            DECLARE_METHOD(t_DynamicOutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DynamicOutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, getSigma, METH_NOARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, modify, METH_VARARGS),
            DECLARE_METHOD(t_DynamicOutlierFilter, setSigma, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DynamicOutlierFilter)[] = {
            { Py_tp_methods, t_DynamicOutlierFilter__methods_ },
            { Py_tp_init, (void *) t_DynamicOutlierFilter_init_ },
            { Py_tp_getset, t_DynamicOutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DynamicOutlierFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::OutlierFilter),
            NULL
          };

          DEFINE_TYPE(DynamicOutlierFilter, t_DynamicOutlierFilter, DynamicOutlierFilter);
          PyObject *t_DynamicOutlierFilter::wrap_Object(const DynamicOutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DynamicOutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DynamicOutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DynamicOutlierFilter *self = (t_DynamicOutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DynamicOutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DynamicOutlierFilter), &PY_TYPE_DEF(DynamicOutlierFilter), module, "DynamicOutlierFilter", 0);
          }

          void t_DynamicOutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "class_", make_descriptor(DynamicOutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "wrapfn_", make_descriptor(t_DynamicOutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DynamicOutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DynamicOutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DynamicOutlierFilter::initializeClass, 1)))
              return NULL;
            return t_DynamicOutlierFilter::wrap_Object(DynamicOutlierFilter(((t_DynamicOutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_DynamicOutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DynamicOutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DynamicOutlierFilter_of_(t_DynamicOutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_DynamicOutlierFilter_init_(t_DynamicOutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            DynamicOutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = DynamicOutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DynamicOutlierFilter_getSigma(t_DynamicOutlierFilter *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSigma());
            return result.wrap();
          }

          static PyObject *t_DynamicOutlierFilter_modify(t_DynamicOutlierFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DynamicOutlierFilter), (PyObject *) self, "modify", args, 2);
          }

          static PyObject *t_DynamicOutlierFilter_setSigma(t_DynamicOutlierFilter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setSigma(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSigma", arg);
            return NULL;
          }
          static PyObject *t_DynamicOutlierFilter_get__parameters_(t_DynamicOutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_DynamicOutlierFilter_get__sigma(t_DynamicOutlierFilter *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSigma());
            return value.wrap();
          }
          static int t_DynamicOutlierFilter_set__sigma(t_DynamicOutlierFilter *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setSigma(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sigma", arg);
            return -1;
          }
        }
      }
    }
  }
}

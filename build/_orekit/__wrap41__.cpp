#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem$Evaluation::class$ = NULL;
            jmethodID *LeastSquaresProblem$Evaluation::mids$ = NULL;
            bool LeastSquaresProblem$Evaluation::live$ = false;

            jclass LeastSquaresProblem$Evaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getChiSquare_dff5885c2c873297] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_dff5885c2c873297] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_f21dcd9464c6e3c5] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getJacobian_688b496048ff947b] = env->getMethodID(cls, "getJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getPoint_aab4fbf77867daa8] = env->getMethodID(cls, "getPoint", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getRMS_dff5885c2c873297] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_46f85b53d9aedd96] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getResiduals_aab4fbf77867daa8] = env->getMethodID(cls, "getResiduals", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getSigma_5df18376713b9c4f] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble LeastSquaresProblem$Evaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_dff5885c2c873297]);
            }

            jdouble LeastSquaresProblem$Evaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_dff5885c2c873297]);
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_f21dcd9464c6e3c5], a0));
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getJacobian() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getJacobian_688b496048ff947b]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getPoint() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPoint_aab4fbf77867daa8]));
            }

            jdouble LeastSquaresProblem$Evaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_dff5885c2c873297]);
            }

            jdouble LeastSquaresProblem$Evaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_46f85b53d9aedd96], a0);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getResiduals() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResiduals_aab4fbf77867daa8]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_5df18376713b9c4f], a0));
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
            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem$Evaluation__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, chiSquare),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, cost),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, jacobian),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, point),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, rMS),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, residuals),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem$Evaluation__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getJacobian, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getPoint, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getResiduals, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem$Evaluation)[] = {
              { Py_tp_methods, t_LeastSquaresProblem$Evaluation__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem$Evaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem$Evaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem$Evaluation, t_LeastSquaresProblem$Evaluation, LeastSquaresProblem$Evaluation);

            void t_LeastSquaresProblem$Evaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem$Evaluation), &PY_TYPE_DEF(LeastSquaresProblem$Evaluation), module, "LeastSquaresProblem$Evaluation", 0);
            }

            void t_LeastSquaresProblem$Evaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "class_", make_descriptor(LeastSquaresProblem$Evaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "wrapfn_", make_descriptor(t_LeastSquaresProblem$Evaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem$Evaluation::wrap_Object(LeastSquaresProblem$Evaluation(((t_LeastSquaresProblem$Evaluation *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getResiduals());
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
#include "org/orekit/propagation/events/handlers/StopOnDecreasing.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnDecreasing::class$ = NULL;
          jmethodID *StopOnDecreasing::mids$ = NULL;
          bool StopOnDecreasing::live$ = false;

          jclass StopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnDecreasing::StopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action StopOnDecreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_abc543fa9701720f], a0.this$, a1.this$, a2));
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
      namespace events {
        namespace handlers {
          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args);

          static PyMethodDef t_StopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnDecreasing)[] = {
            { Py_tp_methods, t_StopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnDecreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnDecreasing, t_StopOnDecreasing, StopOnDecreasing);

          void t_StopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnDecreasing), &PY_TYPE_DEF(StopOnDecreasing), module, "StopOnDecreasing", 0);
          }

          void t_StopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "class_", make_descriptor(StopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "wrapfn_", make_descriptor(t_StopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnDecreasing::wrap_Object(StopOnDecreasing(((t_StopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnDecreasing_init_(t_StopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnDecreasing object((jobject) NULL);

            INT_CALL(object = StopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnDecreasing_eventOccurred(t_StopOnDecreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonDataContext.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataContext::class$ = NULL;
      jmethodID *PythonDataContext::mids$ = NULL;
      bool PythonDataContext::live$ = false;

      jclass PythonDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCelestialBodies_c39e314555ec4f4c] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_e688bb8e310f8431] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_a3d479393ff4185d] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_b0af77e046f460cf] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_f0675560047d99cd] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataContext::PythonDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonDataContext::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonDataContext::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonDataContext::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self);
      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args);
      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data);
      static PyGetSetDef t_PythonDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataContext, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataContext__methods_[] = {
        DECLARE_METHOD(t_PythonDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataContext, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataContext)[] = {
        { Py_tp_methods, t_PythonDataContext__methods_ },
        { Py_tp_init, (void *) t_PythonDataContext_init_ },
        { Py_tp_getset, t_PythonDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataContext, t_PythonDataContext, PythonDataContext);

      void t_PythonDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataContext), &PY_TYPE_DEF(PythonDataContext), module, "PythonDataContext", 1);
      }

      void t_PythonDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "class_", make_descriptor(PythonDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "wrapfn_", make_descriptor(t_PythonDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataContext::initializeClass);
        JNINativeMethod methods[] = {
          { "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;", (void *) t_PythonDataContext_getCelestialBodies0 },
          { "getFrames", "()Lorg/orekit/frames/Frames;", (void *) t_PythonDataContext_getFrames1 },
          { "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;", (void *) t_PythonDataContext_getGeoMagneticFields2 },
          { "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;", (void *) t_PythonDataContext_getGravityFields3 },
          { "getTimeScales", "()Lorg/orekit/time/TimeScales;", (void *) t_PythonDataContext_getTimeScales4 },
          { "pythonDecRef", "()V", (void *) t_PythonDataContext_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataContext::initializeClass, 1)))
          return NULL;
        return t_PythonDataContext::wrap_Object(PythonDataContext(((t_PythonDataContext *) arg)->object.this$));
      }
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds)
      {
        PythonDataContext object((jobject) NULL);

        INT_CALL(object = PythonDataContext());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCelestialBodies", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &value))
        {
          throwTypeError("getCelestialBodies", result);
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

      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frames value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frames::initializeClass, &value))
        {
          throwTypeError("getFrames", result);
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

      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeoMagneticFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &value))
        {
          throwTypeError("getGeoMagneticFields", result);
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

      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGravityFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &value))
        {
          throwTypeError("getGravityFields", result);
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

      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeScales value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTimeScales", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeScales::initializeClass, &value))
        {
          throwTypeError("getTimeScales", result);
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

      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data)
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
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"
#include "java/lang/IllegalAccessException.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/util/Locale.h"
#include "java/lang/InstantiationException.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages$UTF8Control::class$ = NULL;
      jmethodID *OrekitMessages$UTF8Control::mids$ = NULL;
      bool OrekitMessages$UTF8Control::live$ = false;

      jclass OrekitMessages$UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages$UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_b7c54cce3a9709ed] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitMessages$UTF8Control::OrekitMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::java::util::ResourceBundle OrekitMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_b7c54cce3a9709ed], a0.this$, a1.this$, a2.this$, a3.this$, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data);
      static PyGetSetDef t_OrekitMessages$UTF8Control__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages$UTF8Control, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages$UTF8Control__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages$UTF8Control)[] = {
        { Py_tp_methods, t_OrekitMessages$UTF8Control__methods_ },
        { Py_tp_init, (void *) t_OrekitMessages$UTF8Control_init_ },
        { Py_tp_getset, t_OrekitMessages$UTF8Control__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages$UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(OrekitMessages$UTF8Control, t_OrekitMessages$UTF8Control, OrekitMessages$UTF8Control);
      PyObject *t_OrekitMessages$UTF8Control::wrap_Object(const OrekitMessages$UTF8Control& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages$UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages$UTF8Control), &PY_TYPE_DEF(OrekitMessages$UTF8Control), module, "OrekitMessages$UTF8Control", 0);
      }

      void t_OrekitMessages$UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "class_", make_descriptor(OrekitMessages$UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "wrapfn_", make_descriptor(t_OrekitMessages$UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages$UTF8Control::wrap_Object(OrekitMessages$UTF8Control(((t_OrekitMessages$UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        OrekitMessages$UTF8Control object((jobject) NULL);

        INT_CALL(object = OrekitMessages$UTF8Control());
        self->object = object;
        self->parameters[0] = ::org::orekit::errors::PY_TYPE(OrekitMessages);

        return 0;
      }

      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationOrder::class$ = NULL;
          jmethodID *RotationOrder::mids$ = NULL;
          bool RotationOrder::live$ = false;
          RotationOrder *RotationOrder::XYX = NULL;
          RotationOrder *RotationOrder::XYZ = NULL;
          RotationOrder *RotationOrder::XZX = NULL;
          RotationOrder *RotationOrder::XZY = NULL;
          RotationOrder *RotationOrder::YXY = NULL;
          RotationOrder *RotationOrder::YXZ = NULL;
          RotationOrder *RotationOrder::YZX = NULL;
          RotationOrder *RotationOrder::YZY = NULL;
          RotationOrder *RotationOrder::ZXY = NULL;
          RotationOrder *RotationOrder::ZXZ = NULL;
          RotationOrder *RotationOrder::ZYX = NULL;
          RotationOrder *RotationOrder::ZYZ = NULL;

          jclass RotationOrder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationOrder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getA1_d52645e0d4c07563] = env->getMethodID(cls, "getA1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA2_d52645e0d4c07563] = env->getMethodID(cls, "getA2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getA3_d52645e0d4c07563] = env->getMethodID(cls, "getA3", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getRotationOrder_c7309d119bde52fc] = env->getStaticMethodID(cls, "getRotationOrder", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_valueOf_c7309d119bde52fc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
              mids$[mid_values_a138aab2cc2c9608] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              XYX = new RotationOrder(env->getStaticObjectField(cls, "XYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XYZ = new RotationOrder(env->getStaticObjectField(cls, "XYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZX = new RotationOrder(env->getStaticObjectField(cls, "XZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              XZY = new RotationOrder(env->getStaticObjectField(cls, "XZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXY = new RotationOrder(env->getStaticObjectField(cls, "YXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YXZ = new RotationOrder(env->getStaticObjectField(cls, "YXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZX = new RotationOrder(env->getStaticObjectField(cls, "YZX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              YZY = new RotationOrder(env->getStaticObjectField(cls, "YZY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXY = new RotationOrder(env->getStaticObjectField(cls, "ZXY", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZXZ = new RotationOrder(env->getStaticObjectField(cls, "ZXZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYX = new RotationOrder(env->getStaticObjectField(cls, "ZYX", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              ZYZ = new RotationOrder(env->getStaticObjectField(cls, "ZYZ", "Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA1() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA1_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA2() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA2_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RotationOrder::getA3() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA3_d52645e0d4c07563]));
          }

          RotationOrder RotationOrder::getRotationOrder(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_getRotationOrder_c7309d119bde52fc], a0.this$));
          }

          ::java::lang::String RotationOrder::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          RotationOrder RotationOrder::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationOrder(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c7309d119bde52fc], a0.this$));
          }

          JArray< RotationOrder > RotationOrder::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationOrder >(env->callStaticObjectMethod(cls, mids$[mid_values_a138aab2cc2c9608]));
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
          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self);
          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args);
          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationOrder_values(PyTypeObject *type);
          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data);
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data);
          static PyGetSetDef t_RotationOrder__fields_[] = {
            DECLARE_GET_FIELD(t_RotationOrder, a1),
            DECLARE_GET_FIELD(t_RotationOrder, a2),
            DECLARE_GET_FIELD(t_RotationOrder, a3),
            DECLARE_GET_FIELD(t_RotationOrder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationOrder__methods_[] = {
            DECLARE_METHOD(t_RotationOrder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, getA1, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA2, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getA3, METH_NOARGS),
            DECLARE_METHOD(t_RotationOrder, getRotationOrder, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, toString, METH_VARARGS),
            DECLARE_METHOD(t_RotationOrder, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationOrder, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationOrder)[] = {
            { Py_tp_methods, t_RotationOrder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationOrder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationOrder)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationOrder, t_RotationOrder, RotationOrder);
          PyObject *t_RotationOrder::wrap_Object(const RotationOrder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationOrder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationOrder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationOrder *self = (t_RotationOrder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationOrder::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationOrder), &PY_TYPE_DEF(RotationOrder), module, "RotationOrder", 0);
          }

          void t_RotationOrder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "class_", make_descriptor(RotationOrder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "wrapfn_", make_descriptor(t_RotationOrder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationOrder::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XYZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "XZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::XZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "YZY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::YZY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXY", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZXZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZXZ)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYX", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationOrder), "ZYZ", make_descriptor(t_RotationOrder::wrap_Object(*RotationOrder::ZYZ)));
          }

          static PyObject *t_RotationOrder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationOrder::initializeClass, 1)))
              return NULL;
            return t_RotationOrder::wrap_Object(RotationOrder(((t_RotationOrder *) arg)->object.this$));
          }
          static PyObject *t_RotationOrder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationOrder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationOrder_of_(t_RotationOrder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationOrder_getA1(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA2(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getA3(t_RotationOrder *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RotationOrder_getRotationOrder(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::getRotationOrder(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getRotationOrder", arg);
            return NULL;
          }

          static PyObject *t_RotationOrder_toString(t_RotationOrder *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RotationOrder), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RotationOrder_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationOrder result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::valueOf(a0));
              return t_RotationOrder::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationOrder_values(PyTypeObject *type)
          {
            JArray< RotationOrder > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationOrder::values());
            return JArray<jobject>(result.this$).wrap(t_RotationOrder::wrap_jobject);
          }
          static PyObject *t_RotationOrder_get__parameters_(t_RotationOrder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RotationOrder_get__a1(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA1());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a2(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA2());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_RotationOrder_get__a3(t_RotationOrder *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getA3());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *VersionedITRF::class$ = NULL;
      jmethodID *VersionedITRF::mids$ = NULL;
      bool VersionedITRF::live$ = false;

      jclass VersionedITRF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/VersionedITRF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getITRFVersion_8a73c81b6e5084ce] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion VersionedITRF::getITRFVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_8a73c81b6e5084ce]));
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
      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self);
      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data);
      static PyGetSetDef t_VersionedITRF__fields_[] = {
        DECLARE_GET_FIELD(t_VersionedITRF, iTRFVersion),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VersionedITRF__methods_[] = {
        DECLARE_METHOD(t_VersionedITRF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VersionedITRF, getITRFVersion, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VersionedITRF)[] = {
        { Py_tp_methods, t_VersionedITRF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VersionedITRF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VersionedITRF)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(VersionedITRF, t_VersionedITRF, VersionedITRF);

      void t_VersionedITRF::install(PyObject *module)
      {
        installType(&PY_TYPE(VersionedITRF), &PY_TYPE_DEF(VersionedITRF), module, "VersionedITRF", 0);
      }

      void t_VersionedITRF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "class_", make_descriptor(VersionedITRF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "wrapfn_", make_descriptor(t_VersionedITRF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VersionedITRF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VersionedITRF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VersionedITRF::initializeClass, 1)))
          return NULL;
        return t_VersionedITRF::wrap_Object(VersionedITRF(((t_VersionedITRF *) arg)->object.this$));
      }
      static PyObject *t_VersionedITRF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VersionedITRF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VersionedITRF_getITRFVersion(t_VersionedITRF *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_VersionedITRF_get__iTRFVersion(t_VersionedITRF *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
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
              mids$[mid_onDate_017ee055e397b964] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics UnnormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_017ee055e397b964], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresFactory::class$ = NULL;
            jmethodID *LeastSquaresFactory::mids$ = NULL;
            bool LeastSquaresFactory::live$ = false;

            jclass LeastSquaresFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_countEvaluations_1047d1454f109d69] = env->getStaticMethodID(cls, "countEvaluations", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/util/Incrementor;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_58ec63dd85264468] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_4e8eb0c006b16b51] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_6423dab85c480a70] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;[D[DLorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_1d8a4308d6f02389] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;IIZLorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_evaluationChecker_137f067a9f665736] = env->getStaticMethodID(cls, "evaluationChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_model_7996e90bd4c3017a] = env->getStaticMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
                mids$[mid_weightDiagonal_c11efa220350971b] = env->getStaticMethodID(cls, "weightDiagonal", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_weightMatrix_70ce7aeba7854313] = env->getStaticMethodID(cls, "weightMatrix", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::countEvaluations(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::util::Incrementor & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_countEvaluations_1047d1454f109d69], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::optim::ConvergenceChecker & a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_58ec63dd85264468], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_4e8eb0c006b16b51], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::optim::ConvergenceChecker & a5, jint a6, jint a7)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_6423dab85c480a70], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6, jboolean a7, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a8)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_1d8a4308d6f02389], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresFactory::evaluationChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::ConvergenceChecker(env->callStaticObjectMethod(cls, mids$[mid_evaluationChecker_137f067a9f665736], a0.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction LeastSquaresFactory::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction(env->callStaticObjectMethod(cls, mids$[mid_model_7996e90bd4c3017a], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightDiagonal(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealVector & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightDiagonal_c11efa220350971b], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightMatrix(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealMatrix & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightMatrix_70ce7aeba7854313], a0.this$, a1.this$));
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
            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_LeastSquaresFactory__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, countEvaluations, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, create, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, evaluationChecker, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, model, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightDiagonal, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightMatrix, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresFactory)[] = {
              { Py_tp_methods, t_LeastSquaresFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresFactory, t_LeastSquaresFactory, LeastSquaresFactory);

            void t_LeastSquaresFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresFactory), &PY_TYPE_DEF(LeastSquaresFactory), module, "LeastSquaresFactory", 0);
            }

            void t_LeastSquaresFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "class_", make_descriptor(LeastSquaresFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "wrapfn_", make_descriptor(t_LeastSquaresFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresFactory::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresFactory::wrap_Object(LeastSquaresFactory(((t_LeastSquaresFactory *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::util::Incrementor a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::util::Incrementor::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::countEvaluations(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "countEvaluations", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 7:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 8:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > a3((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a5((jobject) NULL);
                  PyTypeObject **p5;
                  jint a6;
                  jint a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kk[D[DkKII", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a6, &a7))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 9:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  jboolean a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a8((jobject) NULL);
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKIIZk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6, &a7, &a8))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "create", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::evaluationChecker(a0));
                return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
              }

              PyErr_SetArgsError(type, "evaluationChecker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::model(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_MultivariateJacobianFunction::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightDiagonal(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightDiagonal", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightMatrix(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightMatrix", args);
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
#include "org/orekit/bodies/Ellipse.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipse::class$ = NULL;
      jmethodID *Ellipse::mids$ = NULL;
      bool Ellipse::live$ = false;

      jclass Ellipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a454bb4a34264e48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/frames/Frame;)V");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_dff5885c2c873297] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getCenter_d52645e0d4c07563] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCenterOfCurvature_943908560e598858] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_d52645e0d4c07563] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getV_d52645e0d4c07563] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAt_9137bba253a33d9c] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_projectToEllipse_fe87e6eba6ef42f9] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToEllipse_943908560e598858] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toPlane_6888ee2da1e4e6ff] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toSpace_de1c0a3cb97333a9] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipse::Ellipse(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a454bb4a34264e48, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

      jdouble Ellipse::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      jdouble Ellipse::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_dff5885c2c873297]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_943908560e598858], a0.this$));
      }

      ::org::orekit::frames::Frame Ellipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::pointAt(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_9137bba253a33d9c], a0));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Ellipse::projectToEllipse(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_fe87e6eba6ef42f9], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_943908560e598858], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toPlane_6888ee2da1e4e6ff], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_de1c0a3cb97333a9], a0.this$));
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
      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipse_getA(t_Ellipse *self);
      static PyObject *t_Ellipse_getB(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenter(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_getFrame(t_Ellipse *self);
      static PyObject *t_Ellipse_getU(t_Ellipse *self);
      static PyObject *t_Ellipse_getV(t_Ellipse *self);
      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args);
      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data);
      static PyGetSetDef t_Ellipse__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipse, a),
        DECLARE_GET_FIELD(t_Ellipse, b),
        DECLARE_GET_FIELD(t_Ellipse, center),
        DECLARE_GET_FIELD(t_Ellipse, frame),
        DECLARE_GET_FIELD(t_Ellipse, u),
        DECLARE_GET_FIELD(t_Ellipse, v),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipse__methods_[] = {
        DECLARE_METHOD(t_Ellipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_Ellipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, pointAt, METH_O),
        DECLARE_METHOD(t_Ellipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_Ellipse, toPlane, METH_O),
        DECLARE_METHOD(t_Ellipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipse)[] = {
        { Py_tp_methods, t_Ellipse__methods_ },
        { Py_tp_init, (void *) t_Ellipse_init_ },
        { Py_tp_getset, t_Ellipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipse, t_Ellipse, Ellipse);

      void t_Ellipse::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipse), &PY_TYPE_DEF(Ellipse), module, "Ellipse", 0);
      }

      void t_Ellipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "class_", make_descriptor(Ellipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "wrapfn_", make_descriptor(t_Ellipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipse::initializeClass, 1)))
          return NULL;
        return t_Ellipse::wrap_Object(Ellipse(((t_Ellipse *) arg)->object.this$));
      }
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        Ellipse object((jobject) NULL);

        if (!parseArgs(args, "kkkDDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = Ellipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipse_getA(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getB(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getCenter(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_getFrame(t_Ellipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getU(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getV(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/EarthShape.h"
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
            mids$[mid_init$_466092543ed377c2] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;DD)V");
            mids$[mid_getC2n0_46f85b53d9aedd96] = env->getMethodID(cls, "getC2n0", "(I)D");
            mids$[mid_getEllipsoid_eead5b864957d48b] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getGM_dff5885c2c873297] = env->getMethodID(cls, "getGM", "()D");
            mids$[mid_getGrs80_04ae7ff6f8a973b9] = env->getStaticMethodID(cls, "getGrs80", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2003_04ae7ff6f8a973b9] = env->getStaticMethodID(cls, "getIers2003", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2010_04ae7ff6f8a973b9] = env->getStaticMethodID(cls, "getIers2010", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers96_04ae7ff6f8a973b9] = env->getStaticMethodID(cls, "getIers96", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getNormalGravity_dcbc7ce2902fa136] = env->getMethodID(cls, "getNormalGravity", "(D)D");
            mids$[mid_getPolarRadius_dff5885c2c873297] = env->getMethodID(cls, "getPolarRadius", "()D");
            mids$[mid_getSpin_dff5885c2c873297] = env->getMethodID(cls, "getSpin", "()D");
            mids$[mid_getWgs84_04ae7ff6f8a973b9] = env->getStaticMethodID(cls, "getWgs84", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReferenceEllipsoid::ReferenceEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jdouble a3, jdouble a4) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_466092543ed377c2, a0, a1, a2.this$, a3, a4)) {}

        jdouble ReferenceEllipsoid::getC2n0(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getC2n0_46f85b53d9aedd96], a0);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getEllipsoid() const
        {
          return ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_eead5b864957d48b]));
        }

        jdouble ReferenceEllipsoid::getGM() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGM_dff5885c2c873297]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getGrs80(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getGrs80_04ae7ff6f8a973b9], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2003(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2003_04ae7ff6f8a973b9], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2010(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2010_04ae7ff6f8a973b9], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers96(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers96_04ae7ff6f8a973b9], a0.this$));
        }

        jdouble ReferenceEllipsoid::getNormalGravity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNormalGravity_dcbc7ce2902fa136], a0);
        }

        jdouble ReferenceEllipsoid::getPolarRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPolarRadius_dff5885c2c873297]);
        }

        jdouble ReferenceEllipsoid::getSpin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpin_dff5885c2c873297]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getWgs84(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getWgs84_04ae7ff6f8a973b9], a0.this$));
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
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *AlternativeHypothesis::class$ = NULL;
        jmethodID *AlternativeHypothesis::mids$ = NULL;
        bool AlternativeHypothesis::live$ = false;
        AlternativeHypothesis *AlternativeHypothesis::GREATER_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::LESS_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::TWO_SIDED = NULL;

        jclass AlternativeHypothesis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/AlternativeHypothesis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_e2d55acad813d3ed] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/inference/AlternativeHypothesis;");
            mids$[mid_values_0912def2ad2ee561] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/inference/AlternativeHypothesis;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GREATER_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "GREATER_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            LESS_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "LESS_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            TWO_SIDED = new AlternativeHypothesis(env->getStaticObjectField(cls, "TWO_SIDED", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlternativeHypothesis AlternativeHypothesis::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlternativeHypothesis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e2d55acad813d3ed], a0.this$));
        }

        JArray< AlternativeHypothesis > AlternativeHypothesis::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlternativeHypothesis >(env->callStaticObjectMethod(cls, mids$[mid_values_0912def2ad2ee561]));
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
        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args);
        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type);
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data);
        static PyGetSetDef t_AlternativeHypothesis__fields_[] = {
          DECLARE_GET_FIELD(t_AlternativeHypothesis, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlternativeHypothesis__methods_[] = {
          DECLARE_METHOD(t_AlternativeHypothesis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlternativeHypothesis, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlternativeHypothesis)[] = {
          { Py_tp_methods, t_AlternativeHypothesis__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlternativeHypothesis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlternativeHypothesis)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlternativeHypothesis, t_AlternativeHypothesis, AlternativeHypothesis);
        PyObject *t_AlternativeHypothesis::wrap_Object(const AlternativeHypothesis& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlternativeHypothesis::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlternativeHypothesis::install(PyObject *module)
        {
          installType(&PY_TYPE(AlternativeHypothesis), &PY_TYPE_DEF(AlternativeHypothesis), module, "AlternativeHypothesis", 0);
        }

        void t_AlternativeHypothesis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "class_", make_descriptor(AlternativeHypothesis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "wrapfn_", make_descriptor(t_AlternativeHypothesis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlternativeHypothesis::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "GREATER_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::GREATER_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "LESS_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::LESS_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "TWO_SIDED", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::TWO_SIDED)));
        }

        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlternativeHypothesis::initializeClass, 1)))
            return NULL;
          return t_AlternativeHypothesis::wrap_Object(AlternativeHypothesis(((t_AlternativeHypothesis *) arg)->object.this$));
        }
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlternativeHypothesis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlternativeHypothesis result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::valueOf(a0));
            return t_AlternativeHypothesis::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type)
        {
          JArray< AlternativeHypothesis > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::values());
          return JArray<jobject>(result.this$).wrap(t_AlternativeHypothesis::wrap_jobject);
        }
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_008618ed8ffeed65] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDD)V");
                mids$[mid_init$_2ab995c573e81c53] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDDLorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getN4_570ce0828f81a2c1] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_570ce0828f81a2c1] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_dff5885c2c873297] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_dff5885c2c873297] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_dff5885c2c873297] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_dff5885c2c873297] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_dff5885c2c873297] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_dff5885c2c873297] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_dff5885c2c873297] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_008618ed8ffeed65, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ab995c573e81c53, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSEphemeris::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
            }

            jint GLONASSEphemeris::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_570ce0828f81a2c1]);
            }

            jint GLONASSEphemeris::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_570ce0828f81a2c1]);
            }

            jdouble GLONASSEphemeris::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_dff5885c2c873297]);
            }

            jdouble GLONASSEphemeris::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_dff5885c2c873297]);
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
#include "org/orekit/utils/LoveNumbers.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LoveNumbers::class$ = NULL;
      jmethodID *LoveNumbers::mids$ = NULL;
      bool LoveNumbers::live$ = false;

      jclass LoveNumbers::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LoveNumbers");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2360647b29ef3c7d] = env->getMethodID(cls, "<init>", "([[D[[D[[D)V");
          mids$[mid_getImaginary_dbbe5f05149dbf73] = env->getMethodID(cls, "getImaginary", "(II)D");
          mids$[mid_getPlus_dbbe5f05149dbf73] = env->getMethodID(cls, "getPlus", "(II)D");
          mids$[mid_getReal_dbbe5f05149dbf73] = env->getMethodID(cls, "getReal", "(II)D");
          mids$[mid_getSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoveNumbers::LoveNumbers(const JArray< JArray< jdouble > > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2360647b29ef3c7d, a0.this$, a1.this$, a2.this$)) {}

      jdouble LoveNumbers::getImaginary(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_dbbe5f05149dbf73], a0, a1);
      }

      jdouble LoveNumbers::getPlus(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPlus_dbbe5f05149dbf73], a0, a1);
      }

      jdouble LoveNumbers::getReal(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dbbe5f05149dbf73], a0, a1);
      }

      jint LoveNumbers::getSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getSize_570ce0828f81a2c1]);
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
      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args);
      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self);
      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data);
      static PyGetSetDef t_LoveNumbers__fields_[] = {
        DECLARE_GET_FIELD(t_LoveNumbers, size),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoveNumbers__methods_[] = {
        DECLARE_METHOD(t_LoveNumbers, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoveNumbers, getImaginary, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getPlus, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getReal, METH_VARARGS),
        DECLARE_METHOD(t_LoveNumbers, getSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoveNumbers)[] = {
        { Py_tp_methods, t_LoveNumbers__methods_ },
        { Py_tp_init, (void *) t_LoveNumbers_init_ },
        { Py_tp_getset, t_LoveNumbers__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoveNumbers)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LoveNumbers, t_LoveNumbers, LoveNumbers);

      void t_LoveNumbers::install(PyObject *module)
      {
        installType(&PY_TYPE(LoveNumbers), &PY_TYPE_DEF(LoveNumbers), module, "LoveNumbers", 0);
      }

      void t_LoveNumbers::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "class_", make_descriptor(LoveNumbers::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "wrapfn_", make_descriptor(t_LoveNumbers::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoveNumbers), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoveNumbers_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoveNumbers::initializeClass, 1)))
          return NULL;
        return t_LoveNumbers::wrap_Object(LoveNumbers(((t_LoveNumbers *) arg)->object.this$));
      }
      static PyObject *t_LoveNumbers_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoveNumbers::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoveNumbers_init_(t_LoveNumbers *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > a1((jobject) NULL);
        JArray< JArray< jdouble > > a2((jobject) NULL);
        LoveNumbers object((jobject) NULL);

        if (!parseArgs(args, "[[D[[D[[D", &a0, &a1, &a2))
        {
          INT_CALL(object = LoveNumbers(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LoveNumbers_getImaginary(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getImaginary(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getImaginary", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getPlus(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPlus(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPlus", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getReal(t_LoveNumbers *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getReal(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getReal", args);
        return NULL;
      }

      static PyObject *t_LoveNumbers_getSize(t_LoveNumbers *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_LoveNumbers_get__size(t_LoveNumbers *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataLine::class$ = NULL;
          jmethodID *RinexClock$ClockDataLine::mids$ = NULL;
          bool RinexClock$ClockDataLine::live$ = false;

          jclass RinexClock$ClockDataLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a6f1810076dcae20] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/clock/RinexClock;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;Ljava/lang/String;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;IDDDDDD)V");
              mids$[mid_getClockAcceleration_dff5885c2c873297] = env->getMethodID(cls, "getClockAcceleration", "()D");
              mids$[mid_getClockAccelerationSigma_dff5885c2c873297] = env->getMethodID(cls, "getClockAccelerationSigma", "()D");
              mids$[mid_getClockBias_dff5885c2c873297] = env->getMethodID(cls, "getClockBias", "()D");
              mids$[mid_getClockBiasSigma_dff5885c2c873297] = env->getMethodID(cls, "getClockBiasSigma", "()D");
              mids$[mid_getClockRate_dff5885c2c873297] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getClockRateSigma_dff5885c2c873297] = env->getMethodID(cls, "getClockRateSigma", "()D");
              mids$[mid_getDataType_0fb623818906aacc] = env->getMethodID(cls, "getDataType", "()Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEpoch_1695de8a22bfc72e] = env->getMethodID(cls, "getEpoch", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getNumberOfValues_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfValues", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ClockDataLine::RinexClock$ClockDataLine(const ::org::orekit::files::rinex::clock::RinexClock & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a1, const ::java::lang::String & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeComponents & a4, jint a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6f1810076dcae20, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11)) {}

          jdouble RinexClock$ClockDataLine::getClockAcceleration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAcceleration_dff5885c2c873297]);
          }

          jdouble RinexClock$ClockDataLine::getClockAccelerationSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAccelerationSigma_dff5885c2c873297]);
          }

          jdouble RinexClock$ClockDataLine::getClockBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBias_dff5885c2c873297]);
          }

          jdouble RinexClock$ClockDataLine::getClockBiasSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBiasSigma_dff5885c2c873297]);
          }

          jdouble RinexClock$ClockDataLine::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_dff5885c2c873297]);
          }

          jdouble RinexClock$ClockDataLine::getClockRateSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRateSigma_dff5885c2c873297]);
          }

          ::org::orekit::files::rinex::clock::RinexClock$ClockDataType RinexClock$ClockDataLine::getDataType() const
          {
            return ::org::orekit::files::rinex::clock::RinexClock$ClockDataType(env->callObjectMethod(this$, mids$[mid_getDataType_0fb623818906aacc]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch(const ::org::orekit::time::TimeScale & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_1695de8a22bfc72e], a0.this$));
          }

          ::java::lang::String RinexClock$ClockDataLine::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          jint RinexClock$ClockDataLine::getNumberOfValues() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfValues_570ce0828f81a2c1]);
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
          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataLine__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAcceleration),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAccelerationSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBias),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBiasSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRate),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRateSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, dataType),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, epoch),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, name),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, numberOfValues),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataLine__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAcceleration, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAccelerationSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBiasSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRateSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getDataType, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getEpoch, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getNumberOfValues, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataLine)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataLine__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ClockDataLine_init_ },
            { Py_tp_getset, t_RinexClock$ClockDataLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataLine, t_RinexClock$ClockDataLine, RinexClock$ClockDataLine);

          void t_RinexClock$ClockDataLine::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataLine), &PY_TYPE_DEF(RinexClock$ClockDataLine), module, "RinexClock$ClockDataLine", 0);
          }

          void t_RinexClock$ClockDataLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "class_", make_descriptor(RinexClock$ClockDataLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "wrapfn_", make_descriptor(t_RinexClock$ClockDataLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataLine::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataLine::wrap_Object(RinexClock$ClockDataLine(((t_RinexClock$ClockDataLine *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::clock::RinexClock a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeComponents a4((jobject) NULL);
            jint a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            RinexClock$ClockDataLine object((jobject) NULL);

            if (!parseArgs(args, "kKskkIDDDDDD", ::org::orekit::files::rinex::clock::RinexClock::initializeClass, ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1, &p1, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
            {
              INT_CALL(object = RinexClock$ClockDataLine(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getEpoch(a0));
                  return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getEpoch", args);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfValues());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBias());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfValues());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventSlopeFilter.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a7d9c21a0b13716] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_021b54f582f9e537] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getDetector_d3000cf67fb1b23b] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_create_957305d388f058d5] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::events::FilterType & a1) : ::org::hipparchus::ode::events::AbstractODEDetector(env->newObject(initializeClass, &mids$, mid_init$_4a7d9c21a0b13716, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_021b54f582f9e537], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_d3000cf67fb1b23b]));
        }

        void EventSlopeFilter::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
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
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractODEDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitFixedStepHandler::mids$ = NULL;
        bool PythonFieldOrekitFixedStepHandler::live$ = false;

        jclass PythonFieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_1463d3d0d52f94dd] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_1463d3d0d52f94dd] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_b32b9cbcae791ea7] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitFixedStepHandler::PythonFieldOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldOrekitFixedStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitFixedStepHandler, t_PythonFieldOrekitFixedStepHandler, PythonFieldOrekitFixedStepHandler);
        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_Object(const PythonFieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitFixedStepHandler *self = (t_PythonFieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitFixedStepHandler), &PY_TYPE_DEF(PythonFieldOrekitFixedStepHandler), module, "PythonFieldOrekitFixedStepHandler", 1);
        }

        void t_PythonFieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "class_", make_descriptor(PythonFieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitFixedStepHandler::wrap_Object(PythonFieldOrekitFixedStepHandler(((t_PythonFieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_of_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitFixedStepHandler_init_(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_finalize(t_PythonFieldOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_pythonExtension(t_PythonFieldOrekitFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitFixedStepHandler::mids$[PythonFieldOrekitFixedStepHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__self(t_PythonFieldOrekitFixedStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitFixedStepHandler_get__parameters_(t_PythonFieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Plane::class$ = NULL;
          jmethodID *Plane::mids$ = NULL;
          bool Plane::live$ = false;

          jclass Plane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Plane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_71a7c3cfed678f9d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_5da06482a46416aa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_ec3112f4a5b73c95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_contains_ab4ed00ccf0defd6] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_copySelf_1e83f05440df3f7f] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_emptyHyperplane_0e32c3e36042d486] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_getNormal_d52645e0d4c07563] = env->getMethodID(cls, "getNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOffset_194a2acf6985d1d7] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)D");
              mids$[mid_getOffset_07bb97c2794cf6b1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_b4822d5266bca26e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOrigin_d52645e0d4c07563] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPointAt_5f7e52137dc6173e] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getU_d52645e0d4c07563] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getV_d52645e0d4c07563] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_cdaae38017a00464] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_daef14cbfc833ae9] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_intersection_98cbff8e29bca0b1] = env->getStaticMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_9b207ef3ceb142b8] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Z");
              mids$[mid_project_c48805c2dda937c6] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_4c8b15479bee9030] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)V");
              mids$[mid_reset_8f7d2a24ef2ff591] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_0fa09c18fee449d5] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_rotate_1bf297956c6bafd3] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_sameOrientationAs_5bc340c02d9ac484] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_25054c2060d7aee4] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_84b1343e67eeaa7b] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_02aa1f4808a162d3] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_8144ab28b67d94ff] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_translate_c6a5f2e7e6d58765] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_wholeHyperplane_0e32c3e36042d486] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_wholeSpace_344a613a0061fc1e] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71a7c3cfed678f9d, a0.this$, a1)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5da06482a46416aa, a0.this$, a1.this$, a2)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec3112f4a5b73c95, a0.this$, a1.this$, a2.this$, a3)) {}

          jboolean Plane::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_ab4ed00ccf0defd6], a0.this$);
          }

          Plane Plane::copySelf() const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_copySelf_1e83f05440df3f7f]));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_0e32c3e36042d486]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getNormal() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_d52645e0d4c07563]));
          }

          jdouble Plane::getOffset(const Plane & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_194a2acf6985d1d7], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_07bb97c2794cf6b1], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_b4822d5266bca26e], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getPointAt(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_5f7e52137dc6173e], a0.this$, a1));
          }

          jdouble Plane::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getU() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_cdaae38017a00464], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Plane::intersection(const Plane & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_intersection_daef14cbfc833ae9], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const Plane & a0, const Plane & a1, const Plane & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_intersection_98cbff8e29bca0b1], a0.this$, a1.this$, a2.this$));
          }

          jboolean Plane::isSimilarTo(const Plane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_9b207ef3ceb142b8], a0.this$);
          }

          ::org::hipparchus::geometry::Point Plane::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_c48805c2dda937c6], a0.this$));
          }

          void Plane::reset(const Plane & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_4c8b15479bee9030], a0.this$);
          }

          void Plane::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_8f7d2a24ef2ff591], a0.this$, a1.this$);
          }

          void Plane::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0fa09c18fee449d5]);
          }

          Plane Plane::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_rotate_1bf297956c6bafd3], a0.this$, a1.this$));
          }

          jboolean Plane::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_5bc340c02d9ac484], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_25054c2060d7aee4], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_84b1343e67eeaa7b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_02aa1f4808a162d3], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_8144ab28b67d94ff], a0.this$));
          }

          Plane Plane::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_translate_c6a5f2e7e6d58765], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_0e32c3e36042d486]));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet Plane::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_344a613a0061fc1e]));
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
          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_copySelf(t_Plane *self);
          static PyObject *t_Plane_emptyHyperplane(t_Plane *self);
          static PyObject *t_Plane_getNormal(t_Plane *self);
          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getOrigin(t_Plane *self);
          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getTolerance(t_Plane *self);
          static PyObject *t_Plane_getU(t_Plane *self);
          static PyObject *t_Plane_getV(t_Plane *self);
          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_revertSelf(t_Plane *self);
          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_wholeHyperplane(t_Plane *self);
          static PyObject *t_Plane_wholeSpace(t_Plane *self);
          static PyObject *t_Plane_get__normal(t_Plane *self, void *data);
          static PyObject *t_Plane_get__origin(t_Plane *self, void *data);
          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data);
          static PyObject *t_Plane_get__u(t_Plane *self, void *data);
          static PyObject *t_Plane_get__v(t_Plane *self, void *data);
          static PyGetSetDef t_Plane__fields_[] = {
            DECLARE_GET_FIELD(t_Plane, normal),
            DECLARE_GET_FIELD(t_Plane, origin),
            DECLARE_GET_FIELD(t_Plane, tolerance),
            DECLARE_GET_FIELD(t_Plane, u),
            DECLARE_GET_FIELD(t_Plane, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Plane__methods_[] = {
            DECLARE_METHOD(t_Plane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, contains, METH_O),
            DECLARE_METHOD(t_Plane, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getNormal, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getU, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getV, METH_NOARGS),
            DECLARE_METHOD(t_Plane, intersection, METH_VARARGS),
            DECLARE_METHOD(t_Plane, intersection_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Plane, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Plane, project, METH_O),
            DECLARE_METHOD(t_Plane, reset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, rotate, METH_VARARGS),
            DECLARE_METHOD(t_Plane, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Plane, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, translate, METH_O),
            DECLARE_METHOD(t_Plane, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Plane)[] = {
            { Py_tp_methods, t_Plane__methods_ },
            { Py_tp_init, (void *) t_Plane_init_ },
            { Py_tp_getset, t_Plane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Plane)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Plane, t_Plane, Plane);

          void t_Plane::install(PyObject *module)
          {
            installType(&PY_TYPE(Plane), &PY_TYPE_DEF(Plane), module, "Plane", 0);
          }

          void t_Plane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "class_", make_descriptor(Plane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "wrapfn_", make_descriptor(t_Plane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Plane::initializeClass, 1)))
              return NULL;
            return t_Plane::wrap_Object(Plane(((t_Plane *) arg)->object.this$));
          }
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Plane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Plane(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Plane(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                jdouble a3;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Plane(a0, a1, a2, a3));
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

          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Plane_copySelf(t_Plane *self)
          {
            Plane result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Plane::wrap_Object(result);
          }

          static PyObject *t_Plane_emptyHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_getNormal(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Plane_getOrigin(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Plane_getTolerance(t_Plane *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Plane_getU(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getV(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                Plane a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args)
          {
            Plane a0((jobject) NULL);
            Plane a1((jobject) NULL);
            Plane a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", Plane::initializeClass, Plane::initializeClass, Plane::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Plane::intersection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "intersection_", args);
            return NULL;
          }

          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg)
          {
            Plane a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Plane::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Plane_revertSelf(t_Plane *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }

          static PyObject *t_Plane_wholeHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_wholeSpace(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::wrap_Object(result);
          }

          static PyObject *t_Plane_get__normal(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__origin(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Plane_get__u(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__v(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/AbstractWell.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *AbstractWell::class$ = NULL;
      jmethodID *AbstractWell::mids$ = NULL;
      bool AbstractWell::live$ = false;

      jclass AbstractWell::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/AbstractWell");

          mids$ = new jmethodID[max_mid];
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractWell::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
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
      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args);
      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractWell__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractWell, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractWell__methods_[] = {
        DECLARE_METHOD(t_AbstractWell, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractWell)[] = {
        { Py_tp_methods, t_AbstractWell__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractWell__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractWell)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(AbstractWell, t_AbstractWell, AbstractWell);

      void t_AbstractWell::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractWell), &PY_TYPE_DEF(AbstractWell), module, "AbstractWell", 0);
      }

      void t_AbstractWell::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "class_", make_descriptor(AbstractWell::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "wrapfn_", make_descriptor(t_AbstractWell::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractWell::initializeClass, 1)))
          return NULL;
        return t_AbstractWell::wrap_Object(AbstractWell(((t_AbstractWell *) arg)->object.this$));
      }
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractWell::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(AbstractWell), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
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
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeShiftable::class$ = NULL;
      jmethodID *FieldTimeShiftable::mids$ = NULL;
      bool FieldTimeShiftable::live$ = false;

      jclass FieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_7813048a5e473cfe] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeShiftable FieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_7813048a5e473cfe], a0.this$));
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
      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data);
      static PyGetSetDef t_FieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_FieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeShiftable, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeShiftable)[] = {
        { Py_tp_methods, t_FieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeShiftable),
        NULL
      };

      DEFINE_TYPE(FieldTimeShiftable, t_FieldTimeShiftable, FieldTimeShiftable);
      PyObject *t_FieldTimeShiftable::wrap_Object(const FieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeShiftable), &PY_TYPE_DEF(FieldTimeShiftable), module, "FieldTimeShiftable", 0);
      }

      void t_FieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "class_", make_descriptor(FieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "wrapfn_", make_descriptor(t_FieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_FieldTimeShiftable::wrap_Object(FieldTimeShiftable(((t_FieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTimeShiftable result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldTimeShiftable::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldTimeShiftable), (PyObject *) self, "shiftedBy", args, 2);
      }
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/MultivariateSummaryStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
            mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_f61a0322e15bde25] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_addValue_fa9d415d19f69361] = env->getMethodID(cls, "addValue", "([D)V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCovariance_688b496048ff947b] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_60c7040667a7dc5c] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_60c7040667a7dc5c] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_60c7040667a7dc5c] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_60c7040667a7dc5c] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_60c7040667a7dc5c] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_60c7040667a7dc5c] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_60c7040667a7dc5c] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_60c7040667a7dc5c] = env->getMethodID(cls, "getSumSq", "()[D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

        MultivariateSummaryStatistics::MultivariateSummaryStatistics(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f61a0322e15bde25, a0, a1)) {}

        void MultivariateSummaryStatistics::addValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_fa9d415d19f69361], a0.this$);
        }

        void MultivariateSummaryStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        jboolean MultivariateSummaryStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateSummaryStatistics::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_688b496048ff947b]));
        }

        jint MultivariateSummaryStatistics::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_60c7040667a7dc5c]));
        }

        jlong MultivariateSummaryStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        JArray< jdouble > MultivariateSummaryStatistics::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultivariateSummaryStatistics::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_60c7040667a7dc5c]));
        }

        jint MultivariateSummaryStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        ::java::lang::String MultivariateSummaryStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *DSSTBatchLSModel::class$ = NULL;
        jmethodID *DSSTBatchLSModel::mids$ = NULL;
        bool DSSTBatchLSModel::live$ = false;

        jclass DSSTBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/DSSTBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_32488d6d2a0f0e55] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_configureHarvester_e80966db3f120c01] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_e5faaf40266e83a3] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTBatchLSModel::DSSTBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_32488d6d2a0f0e55, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DSSTBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_DSSTBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTBatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTBatchLSModel)[] = {
          { Py_tp_methods, t_DSSTBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_DSSTBatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(DSSTBatchLSModel, t_DSSTBatchLSModel, DSSTBatchLSModel);

        void t_DSSTBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTBatchLSModel), &PY_TYPE_DEF(DSSTBatchLSModel), module, "DSSTBatchLSModel", 0);
        }

        void t_DSSTBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "class_", make_descriptor(DSSTBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "wrapfn_", make_descriptor(t_DSSTBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_DSSTBatchLSModel::wrap_Object(DSSTBatchLSModel(((t_DSSTBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          DSSTBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkkK", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = DSSTBatchLSModel(a0, a1, a2, a3, a4));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/util/Blendable.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinates::class$ = NULL;
      jmethodID *PVCoordinates::mids$ = NULL;
      bool PVCoordinates::live$ = false;
      PVCoordinates *PVCoordinates::ZERO = NULL;

      jclass PVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_c79ed286e3615fed] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_029ff0cbf68ea054] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_8f7d2a24ef2ff591] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_ab85b25be4476a0e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_4d7069b4f49b3239] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_fb75995a4eb9efa6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_b6c7e1e3390c4227] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_68c2d46bde110a69] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c44d21e08d49aa42] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_cddb05cb45a93e06] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/PVCoordinates;D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_crossProduct_4be7f0caefce2f42] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_estimateVelocity_de52532c17b2a672] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAcceleration_d52645e0d4c07563] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngularVelocity_d52645e0d4c07563] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMomentum_d52645e0d4c07563] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_d52645e0d4c07563] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_d52645e0d4c07563] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_negate_9b7c658c14883c84] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_normalize_9b7c658c14883c84] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_positionShiftedBy_9137bba253a33d9c] = env->getMethodID(cls, "positionShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_6c1233261171385d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toDerivativeStructurePV_4727d8c8b638c5ff] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_7c26e03bd80d6bb3] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_aae6180d70913ad4] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_716f50c86ffc8da7] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_aae6180d70913ad4] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_716f50c86ffc8da7] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ZERO = new PVCoordinates(env->getStaticObjectField(cls, "ZERO", "Lorg/orekit/utils/PVCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PVCoordinates::PVCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c79ed286e3615fed, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_029ff0cbf68ea054, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f7d2a24ef2ff591, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(const PVCoordinates & a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab85b25be4476a0e, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d7069b4f49b3239, a0, a1.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb75995a4eb9efa6, a0.this$, a1.this$, a2.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6c7e1e3390c4227, a0, a1.this$, a2, a3.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68c2d46bde110a69, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5, jdouble a6, const PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c44d21e08d49aa42, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      PVCoordinates PVCoordinates::blendArithmeticallyWith(const PVCoordinates & a0, jdouble a1) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_cddb05cb45a93e06], a0.this$, a1));
      }

      PVCoordinates PVCoordinates::crossProduct(const PVCoordinates & a0, const PVCoordinates & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return PVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_4be7f0caefce2f42], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_de52532c17b2a672], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_d52645e0d4c07563]));
      }

      PVCoordinates PVCoordinates::negate() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_9b7c658c14883c84]));
      }

      PVCoordinates PVCoordinates::normalize() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_9b7c658c14883c84]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::positionShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_9137bba253a33d9c], a0));
      }

      PVCoordinates PVCoordinates::shiftedBy(jdouble a0) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_6c1233261171385d], a0));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_4727d8c8b638c5ff], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_7c26e03bd80d6bb3], a0));
      }

      ::java::lang::String PVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative1PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_aae6180d70913ad4]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_716f50c86ffc8da7]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative2PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_aae6180d70913ad4]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_716f50c86ffc8da7]));
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
      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data);
      static PyGetSetDef t_PVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_PVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_PVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_PVCoordinates, momentum),
        DECLARE_GET_FIELD(t_PVCoordinates, position),
        DECLARE_GET_FIELD(t_PVCoordinates, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PVCoordinates__methods_[] = {
        DECLARE_METHOD(t_PVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, crossProduct, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinates)[] = {
        { Py_tp_methods, t_PVCoordinates__methods_ },
        { Py_tp_init, (void *) t_PVCoordinates_init_ },
        { Py_tp_getset, t_PVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinates, t_PVCoordinates, PVCoordinates);

      void t_PVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinates), &PY_TYPE_DEF(PVCoordinates), module, "PVCoordinates", 0);
      }

      void t_PVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "class_", make_descriptor(PVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "wrapfn_", make_descriptor(t_PVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(PVCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "ZERO", make_descriptor(t_PVCoordinates::wrap_Object(*PVCoordinates::ZERO)));
      }

      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinates::initializeClass, 1)))
          return NULL;
        return t_PVCoordinates::wrap_Object(PVCoordinates(((t_PVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            PVCoordinates object((jobject) NULL);

            INT_CALL(object = PVCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            PVCoordinates a0((jobject) NULL);
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Dk", PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            jdouble a6;
            PVCoordinates a7((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        jdouble a1;
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kD", PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        PVCoordinates a1((jobject) NULL);
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::crossProduct(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "crossProduct", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(PVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/TroposphericModelUtils.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TroposphericModelUtils::class$ = NULL;
          jmethodID *TroposphericModelUtils::mids$ = NULL;
          bool TroposphericModelUtils::live$ = false;

          jclass TroposphericModelUtils::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TroposphericModelUtils");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeHeightCorrection_86ffecc08a63eff0] = env->getStaticMethodID(cls, "computeHeightCorrection", "(DD)D");
              mids$[mid_computeHeightCorrection_b1e1c5fc437d00b6] = env->getStaticMethodID(cls, "computeHeightCorrection", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFunction_0f015b8be9d2dc40] = env->getStaticMethodID(cls, "mappingFunction", "(DDDD)D");
              mids$[mid_mappingFunction_4a66279d01124751] = env->getStaticMethodID(cls, "mappingFunction", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble TroposphericModelUtils::computeHeightCorrection(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_computeHeightCorrection_86ffecc08a63eff0], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::computeHeightCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeHeightCorrection_b1e1c5fc437d00b6], a0.this$, a1.this$, a2.this$));
          }

          jdouble TroposphericModelUtils::mappingFunction(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_mappingFunction_0f015b8be9d2dc40], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::mappingFunction(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_mappingFunction_4a66279d01124751], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args);
          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_TroposphericModelUtils__methods_[] = {
            DECLARE_METHOD(t_TroposphericModelUtils, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, computeHeightCorrection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, mappingFunction, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TroposphericModelUtils)[] = {
            { Py_tp_methods, t_TroposphericModelUtils__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TroposphericModelUtils)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TroposphericModelUtils, t_TroposphericModelUtils, TroposphericModelUtils);

          void t_TroposphericModelUtils::install(PyObject *module)
          {
            installType(&PY_TYPE(TroposphericModelUtils), &PY_TYPE_DEF(TroposphericModelUtils), module, "TroposphericModelUtils", 0);
          }

          void t_TroposphericModelUtils::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "class_", make_descriptor(TroposphericModelUtils::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "wrapfn_", make_descriptor(t_TroposphericModelUtils::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TroposphericModelUtils::initializeClass, 1)))
              return NULL;
            return t_TroposphericModelUtils::wrap_Object(TroposphericModelUtils(((t_TroposphericModelUtils *) arg)->object.this$));
          }
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TroposphericModelUtils::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeHeightCorrection", args);
            return NULL;
          }

          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
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
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "mappingFunction", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisMessage::class$ = NULL;
              jmethodID *RtcmEphemerisMessage::mids$ = NULL;
              bool RtcmEphemerisMessage::live$ = false;

              jclass RtcmEphemerisMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_bd5295810f5a7477] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;)V");
                  mids$[mid_getEphemerisData_b2cf2868fb4f9bb1] = env->getMethodID(cls, "getEphemerisData", "()Lorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisMessage::RtcmEphemerisMessage(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData & a1) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_bd5295810f5a7477, a0, a1.this$)) {}

              ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData RtcmEphemerisMessage::getEphemerisData() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->callObjectMethod(this$, mids$[mid_getEphemerisData_b2cf2868fb4f9bb1]));
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
            namespace ephemeris {
              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args);
              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self);
              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data);
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data);
              static PyGetSetDef t_RtcmEphemerisMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, ephemerisData),
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, getEphemerisData, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisMessage)[] = {
                { Py_tp_methods, t_RtcmEphemerisMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisMessage_init_ },
                { Py_tp_getset, t_RtcmEphemerisMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisMessage, t_RtcmEphemerisMessage, RtcmEphemerisMessage);
              PyObject *t_RtcmEphemerisMessage::wrap_Object(const RtcmEphemerisMessage& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RtcmEphemerisMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RtcmEphemerisMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisMessage), &PY_TYPE_DEF(RtcmEphemerisMessage), module, "RtcmEphemerisMessage", 0);
              }

              void t_RtcmEphemerisMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "class_", make_descriptor(RtcmEphemerisMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "wrapfn_", make_descriptor(t_RtcmEphemerisMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisMessage::wrap_Object(RtcmEphemerisMessage(((t_RtcmEphemerisMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData a1((jobject) NULL);
                RtcmEphemerisMessage object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RtcmEphemerisMessage(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemerisData());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(result);
              }
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemerisData());
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticClockModifier::mids$ = NULL;
          bool AbstractRelativisticClockModifier::live$ = false;

          jclass AbstractRelativisticClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getScaleFactor_dff5885c2c873297] = env->getMethodID(cls, "getScaleFactor", "()D");
              mids$[mid_relativisticCorrection_b358632edcce3ae8] = env->getMethodID(cls, "relativisticCorrection", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticClockModifier::AbstractRelativisticClockModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticClockModifier, t_AbstractRelativisticClockModifier, AbstractRelativisticClockModifier);

          void t_AbstractRelativisticClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticClockModifier), &PY_TYPE_DEF(AbstractRelativisticClockModifier), module, "AbstractRelativisticClockModifier", 0);
          }

          void t_AbstractRelativisticClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "class_", make_descriptor(AbstractRelativisticClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticClockModifier::wrap_Object(AbstractRelativisticClockModifier(((t_AbstractRelativisticClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds)
          {
            AbstractRelativisticClockModifier object((jobject) NULL);

            INT_CALL(object = AbstractRelativisticClockModifier());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver::class$ = NULL;
        jmethodID *BracketedUnivariateSolver::mids$ = NULL;
        bool BracketedUnivariateSolver::live$ = false;

        jclass BracketedUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_ba3e208e0ba870dd] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_89bba4a49543a54f] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_dfe1f613dc6b1d83] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_solveInterval_fff76e1052c58572] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_ba3e208e0ba870dd], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_89bba4a49543a54f], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_dfe1f613dc6b1d83], a0, a1.this$, a2, a3));
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_fff76e1052c58572], a0, a1.this$, a2, a3, a4));
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
        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver, t_BracketedUnivariateSolver, BracketedUnivariateSolver);
        PyObject *t_BracketedUnivariateSolver::wrap_Object(const BracketedUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver), &PY_TYPE_DEF(BracketedUnivariateSolver), module, "BracketedUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedUnivariateSolver$Interval)));
        }

        void t_BracketedUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "class_", make_descriptor(BracketedUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver::wrap_Object(BracketedUnivariateSolver(((t_BracketedUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args)
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

          return callSuper(PY_TYPE(BracketedUnivariateSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
            break;
           case 5:
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
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/HypergeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *HypergeometricDistribution::class$ = NULL;
        jmethodID *HypergeometricDistribution::mids$ = NULL;
        bool HypergeometricDistribution::live$ = false;

        jclass HypergeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/HypergeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8336200ef3dde36b] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPopulationSize_570ce0828f81a2c1] = env->getMethodID(cls, "getPopulationSize", "()I");
            mids$[mid_getSampleSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSampleSize", "()I");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_upperCumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "upperCumulativeProbability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HypergeometricDistribution::HypergeometricDistribution(jint a0, jint a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_8336200ef3dde36b, a0, a1, a2)) {}

        jdouble HypergeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jint HypergeometricDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_570ce0828f81a2c1]);
        }

        jdouble HypergeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble HypergeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jint HypergeometricDistribution::getPopulationSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getPopulationSize_570ce0828f81a2c1]);
        }

        jint HypergeometricDistribution::getSampleSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSampleSize_570ce0828f81a2c1]);
        }

        jint HypergeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint HypergeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jboolean HypergeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble HypergeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
        }

        jdouble HypergeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_46f85b53d9aedd96], a0);
        }

        jdouble HypergeometricDistribution::upperCumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_upperCumulativeProbability_46f85b53d9aedd96], a0);
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
      namespace discrete {
        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data);
        static PyGetSetDef t_HypergeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, populationSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, sampleSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HypergeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_HypergeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getPopulationSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSampleSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, probability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, upperCumulativeProbability, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HypergeometricDistribution)[] = {
          { Py_tp_methods, t_HypergeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_HypergeometricDistribution_init_ },
          { Py_tp_getset, t_HypergeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HypergeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(HypergeometricDistribution, t_HypergeometricDistribution, HypergeometricDistribution);

        void t_HypergeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(HypergeometricDistribution), &PY_TYPE_DEF(HypergeometricDistribution), module, "HypergeometricDistribution", 0);
        }

        void t_HypergeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "class_", make_descriptor(HypergeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "wrapfn_", make_descriptor(t_HypergeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HypergeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_HypergeometricDistribution::wrap_Object(HypergeometricDistribution(((t_HypergeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HypergeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jint a2;
          HypergeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = HypergeometricDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPopulationSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSampleSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.upperCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "upperCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPopulationSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSampleSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_finish_de3e021e7266b71e] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_de3e021e7266b71e] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_c2a9f38df475e398] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatFixedStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_de3e021e7266b71e], a0.this$);
        }

        void MultiSatFixedStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_de3e021e7266b71e], a0.this$);
        }

        void MultiSatFixedStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_c2a9f38df475e398], a0.this$, a1.this$, a2);
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
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter::class$ = NULL;
              jmethodID *StreamingAemWriter::mids$ = NULL;
              bool StreamingAemWriter::live$ = false;

              jclass StreamingAemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_93ec9a5fc43b7407] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)V");
                  mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_a16bd808d4e206dc] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter::StreamingAemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a2, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_93ec9a5fc43b7407, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              void StreamingAemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter StreamingAemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_a16bd808d4e206dc]));
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
            namespace aem {
              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self);
              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self);

              static PyMethodDef t_StreamingAemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingAemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter, t_StreamingAemWriter, StreamingAemWriter);

              void t_StreamingAemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter), &PY_TYPE_DEF(StreamingAemWriter), module, "StreamingAemWriter", 0);
              }

              void t_StreamingAemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "class_", make_descriptor(StreamingAemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter::wrap_Object(StreamingAemWriter(((t_StreamingAemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter_init_(t_StreamingAemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a3((jobject) NULL);
                StreamingAemWriter object((jobject) NULL);

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a2, &a3))
                {
                  INT_CALL(object = StreamingAemWriter(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter_close(t_StreamingAemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingAemWriter_newSegment(t_StreamingAemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::adm::aem::t_StreamingAemWriter$SegmentWriter::wrap_Object(result);
              }
            }
          }
        }
      }
    }
  }
}

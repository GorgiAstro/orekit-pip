#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
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
              mids$[mid_computeObjectiveValue_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "computeObjectiveValue", "([D)D");
              mids$[mid_getGoalType_2e76f357c1c85ac8] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_optimize_02ecb87ce66bcfc1] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble MultivariateOptimizer::computeObjectiveValue(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_computeObjectiveValue_f05cb8c6dfd5e0b9], a0.this$);
          }

          ::org::hipparchus::optim::nonlinear::scalar::GoalType MultivariateOptimizer::getGoalType() const
          {
            return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_2e76f357c1c85ac8]));
          }

          ::org::hipparchus::optim::PointValuePair MultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_02ecb87ce66bcfc1], a0.this$));
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersGroundReceiverBaseModifier::class$ = NULL;
          jmethodID *PhaseCentersGroundReceiverBaseModifier::mids$ = NULL;
          bool PhaseCentersGroundReceiverBaseModifier::live$ = false;

          jclass PhaseCentersGroundReceiverBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_55b30db589ada038] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_oneWayDistanceModification_b9e7854a808aa131] = env->getMethodID(cls, "oneWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_twoWayDistanceModification_b9e7854a808aa131] = env->getMethodID(cls, "twoWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersGroundReceiverBaseModifier::PhaseCentersGroundReceiverBaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55b30db589ada038, a0.this$, a1.this$)) {}

          jdouble PhaseCentersGroundReceiverBaseModifier::oneWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_oneWayDistanceModification_b9e7854a808aa131], a0.this$);
          }

          jdouble PhaseCentersGroundReceiverBaseModifier::twoWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_twoWayDistanceModification_b9e7854a808aa131], a0.this$);
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
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args);
          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersGroundReceiverBaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersGroundReceiverBaseModifier, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersGroundReceiverBaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, oneWayDistanceModification, METH_O),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, twoWayDistanceModification, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersGroundReceiverBaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersGroundReceiverBaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersGroundReceiverBaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersGroundReceiverBaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersGroundReceiverBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersGroundReceiverBaseModifier, t_PhaseCentersGroundReceiverBaseModifier, PhaseCentersGroundReceiverBaseModifier);
          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(const PhaseCentersGroundReceiverBaseModifier& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseCentersGroundReceiverBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersGroundReceiverBaseModifier), &PY_TYPE_DEF(PhaseCentersGroundReceiverBaseModifier), module, "PhaseCentersGroundReceiverBaseModifier", 0);
          }

          void t_PhaseCentersGroundReceiverBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "class_", make_descriptor(PhaseCentersGroundReceiverBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(PhaseCentersGroundReceiverBaseModifier(((t_PhaseCentersGroundReceiverBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersGroundReceiverBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersGroundReceiverBaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.oneWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "oneWayDistanceModification", arg);
            return NULL;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.twoWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "twoWayDistanceModification", arg);
            return NULL;
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data)
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
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/lang/String.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericRefraction::class$ = NULL;
        jmethodID *AtmosphericRefraction::mids$ = NULL;
        bool AtmosphericRefraction::live$ = false;

        jclass AtmosphericRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyCorrection_af1abae4bdd3a766] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_computeGridCorrectionFunctions_641321ef7bfd456d] = env->getMethodID(cls, "computeGridCorrectionFunctions", "([[Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_configureCorrectionGrid_75c5b898b43a4df8] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_deactivateComputation_7ae3461a92a43152] = env->getMethodID(cls, "deactivateComputation", "()V");
            mids$[mid_getBifLine_4c147bc5204adc4e] = env->getMethodID(cls, "getBifLine", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getBifPixel_4c147bc5204adc4e] = env->getMethodID(cls, "getBifPixel", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getComputationParameters_9bd2b05eb139639e] = env->getMethodID(cls, "getComputationParameters", "()Lorg/orekit/rugged/refraction/AtmosphericComputationParameters;");
            mids$[mid_isSameContext_5e194cdef3826029] = env->getMethodID(cls, "isSameContext", "(Ljava/lang/String;II)Ljava/lang/Boolean;");
            mids$[mid_mustBeComputed_e470b6d9e0d979db] = env->getMethodID(cls, "mustBeComputed", "()Z");
            mids$[mid_reactivateComputation_7ae3461a92a43152] = env->getMethodID(cls, "reactivateComputation", "()V");
            mids$[mid_setGridSteps_8dbc1129a3c2557a] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint AtmosphericRefraction::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_af1abae4bdd3a766], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        void AtmosphericRefraction::computeGridCorrectionFunctions(const JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_computeGridCorrectionFunctions_641321ef7bfd456d], a0.this$);
        }

        void AtmosphericRefraction::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_75c5b898b43a4df8], a0.this$, a1, a2);
        }

        void AtmosphericRefraction::deactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_deactivateComputation_7ae3461a92a43152]);
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifLine() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifLine_4c147bc5204adc4e]));
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifPixel() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifPixel_4c147bc5204adc4e]));
        }

        ::org::orekit::rugged::refraction::AtmosphericComputationParameters AtmosphericRefraction::getComputationParameters() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericComputationParameters(env->callObjectMethod(this$, mids$[mid_getComputationParameters_9bd2b05eb139639e]));
        }

        ::java::lang::Boolean AtmosphericRefraction::isSameContext(const ::java::lang::String & a0, jint a1, jint a2) const
        {
          return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isSameContext_5e194cdef3826029], a0.this$, a1, a2));
        }

        jboolean AtmosphericRefraction::mustBeComputed() const
        {
          return env->callBooleanMethod(this$, mids$[mid_mustBeComputed_e470b6d9e0d979db]);
        }

        void AtmosphericRefraction::reactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_reactivateComputation_7ae3461a92a43152]);
        }

        void AtmosphericRefraction::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_8dbc1129a3c2557a], a0, a1);
        }

        void AtmosphericRefraction::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_77e0f9a1f260e2e5], a0);
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
      namespace refraction {
        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data);
        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_AtmosphericRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifLine),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifPixel),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, computationParameters),
          DECLARE_SET_FIELD(t_AtmosphericRefraction, inverseLocMargin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericRefraction__methods_[] = {
          DECLARE_METHOD(t_AtmosphericRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, applyCorrection, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, computeGridCorrectionFunctions, METH_O),
          DECLARE_METHOD(t_AtmosphericRefraction, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, deactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifLine, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifPixel, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getComputationParameters, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, isSameContext, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, mustBeComputed, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, reactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefraction)[] = {
          { Py_tp_methods, t_AtmosphericRefraction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AtmosphericRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericRefraction, t_AtmosphericRefraction, AtmosphericRefraction);

        void t_AtmosphericRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericRefraction), &PY_TYPE_DEF(AtmosphericRefraction), module, "AtmosphericRefraction", 0);
        }

        void t_AtmosphericRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "class_", make_descriptor(AtmosphericRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "wrapfn_", make_descriptor(t_AtmosphericRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericRefraction::initializeClass, 1)))
            return NULL;
          return t_AtmosphericRefraction::wrap_Object(AtmosphericRefraction(((t_AtmosphericRefraction *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "applyCorrection", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg)
        {
          JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > a0((jobject) NULL);

          if (!parseArg(arg, "[[k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.computeGridCorrectionFunctions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "computeGridCorrectionFunctions", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.deactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters result((jobject) NULL);
          OBJ_CALL(result = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Boolean result((jobject) NULL);

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isSameContext(a0, a1, a2));
            return ::java::lang::t_Boolean::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isSameContext", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.mustBeComputed());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.reactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters value((jobject) NULL);
          OBJ_CALL(value = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(value);
        }

        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatFixedStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatFixedStepHandler::mids$ = NULL;
        bool PythonMultiSatFixedStepHandler::live$ = false;

        jclass PythonMultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_65de9727799c5641] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_65de9727799c5641] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_9519e3ce5d916ce8] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatFixedStepHandler::PythonMultiSatFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonMultiSatFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonMultiSatFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonMultiSatFixedStepHandler::pythonExtension(jlong a0) const
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
      namespace sampling {
        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self);
        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatFixedStepHandler, t_PythonMultiSatFixedStepHandler, PythonMultiSatFixedStepHandler);

        void t_PythonMultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatFixedStepHandler), &PY_TYPE_DEF(PythonMultiSatFixedStepHandler), module, "PythonMultiSatFixedStepHandler", 1);
        }

        void t_PythonMultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "class_", make_descriptor(PythonMultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonMultiSatFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatFixedStepHandler::wrap_Object(PythonMultiSatFixedStepHandler(((t_PythonMultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data)
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
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeBuilder::class$ = NULL;
      jmethodID *AttitudeBuilder::mids$ = NULL;
      bool AttitudeBuilder::live$ = false;

      jclass AttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_build_46e50d643ce38532] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_d2838fa0adea33de] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_46e50d643ce38532], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_d2838fa0adea33de], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args);

      static PyMethodDef t_AttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_AttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeBuilder)[] = {
        { Py_tp_methods, t_AttitudeBuilder__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeBuilder, t_AttitudeBuilder, AttitudeBuilder);

      void t_AttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeBuilder), &PY_TYPE_DEF(AttitudeBuilder), module, "AttitudeBuilder", 0);
      }

      void t_AttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "class_", make_descriptor(AttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "wrapfn_", make_descriptor(t_AttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_AttitudeBuilder::wrap_Object(AttitudeBuilder(((t_AttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/ProperBigFractionFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperBigFractionFormat::class$ = NULL;
      jmethodID *ProperBigFractionFormat::mids$ = NULL;
      bool ProperBigFractionFormat::live$ = false;

      jclass ProperBigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperBigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_0d88283ed770bf4b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_42dd4f61513ad308] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_3123fd67840e701b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperBigFractionFormat::ProperBigFractionFormat() : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0d88283ed770bf4b, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperBigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_42dd4f61513ad308], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperBigFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_d34e2e8dd35583a0]));
      }

      ::org::hipparchus::fraction::BigFraction ProperBigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_3123fd67840e701b], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self);
      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data);
      static PyGetSetDef t_ProperBigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperBigFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperBigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperBigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperBigFractionFormat)[] = {
        { Py_tp_methods, t_ProperBigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperBigFractionFormat_init_ },
        { Py_tp_getset, t_ProperBigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperBigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::BigFractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperBigFractionFormat, t_ProperBigFractionFormat, ProperBigFractionFormat);

      void t_ProperBigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperBigFractionFormat), &PY_TYPE_DEF(ProperBigFractionFormat), module, "ProperBigFractionFormat", 0);
      }

      void t_ProperBigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "class_", make_descriptor(ProperBigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "wrapfn_", make_descriptor(t_ProperBigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperBigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperBigFractionFormat::wrap_Object(ProperBigFractionFormat(((t_ProperBigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperBigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperBigFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperBigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperBigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperBigFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/MullerSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver::class$ = NULL;
        jmethodID *MullerSolver::mids$ = NULL;
        bool MullerSolver::live$ = false;

        jclass MullerSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_456d9a2f64d6b28d] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver::MullerSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        MullerSolver::MullerSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        MullerSolver::MullerSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}
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
        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args);
        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data);
        static PyGetSetDef t_MullerSolver__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver__methods_[] = {
          DECLARE_METHOD(t_MullerSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver)[] = {
          { Py_tp_methods, t_MullerSolver__methods_ },
          { Py_tp_init, (void *) t_MullerSolver_init_ },
          { Py_tp_getset, t_MullerSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver, t_MullerSolver, MullerSolver);
        PyObject *t_MullerSolver::wrap_Object(const MullerSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver), &PY_TYPE_DEF(MullerSolver), module, "MullerSolver", 0);
        }

        void t_MullerSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "class_", make_descriptor(MullerSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "wrapfn_", make_descriptor(t_MullerSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver::initializeClass, 1)))
            return NULL;
          return t_MullerSolver::wrap_Object(MullerSolver(((t_MullerSolver *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver object((jobject) NULL);

              INT_CALL(object = MullerSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver(a0));
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
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver(a0, a1));
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
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/Throwable.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_4c5fe0d13c4a2327] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_a4d7e214295a00c5] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a50e19d883e35f53] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4f61fc1ea038da56] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_c51dae52f7f8ac4e] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_97c5e8233a686699] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_e470b6d9e0d979db] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonShortTermEncounter2DPOCMethod::PythonShortTermEncounter2DPOCMethod() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              void PythonShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
              }

              jlong PythonShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
              }

              void PythonShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj);
              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PythonShortTermEncounter2DPOCMethod, t_PythonShortTermEncounter2DPOCMethod, PythonShortTermEncounter2DPOCMethod);

              void t_PythonShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonShortTermEncounter2DPOCMethod), module, "PythonShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute1 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute2 },
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute3 },
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute4 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute5 },
                  { "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute6 },
                  { "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute7 },
                  { "getName", "()Ljava/lang/String;", (void *) t_PythonShortTermEncounter2DPOCMethod_getName8 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonShortTermEncounter2DPOCMethod_getType9 },
                  { "isAMaximumProbabilityOfCollisionMethod", "()Z", (void *) t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10 },
                  { "pythonDecRef", "()V", (void *) t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11 },
                };
                env->registerNatives(cls, methods, 12);
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonShortTermEncounter2DPOCMethod::wrap_Object(PythonShortTermEncounter2DPOCMethod(((t_PythonShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                PythonShortTermEncounter2DPOCMethod object((jobject) NULL);

                INT_CALL(object = PythonShortTermEncounter2DPOCMethod());
                self->object = object;

                Py_INCREF((PyObject *) self);
                self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

                return 0;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOd", o0, o1, (double) a2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOd", o0, o1, o2, o3, o4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a3));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOdd", o0, o1, o2, o3, (double) a4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jboolean value;
                PyObject *result = PyObject_CallMethod(obj, "isAMaximumProbabilityOfCollisionMethod", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "Z", &value))
                {
                  throwTypeError("isAMaximumProbabilityOfCollisionMethod", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jboolean) 0;
              }

              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/RegionFactory.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *RegionFactory::class$ = NULL;
        jmethodID *RegionFactory::mids$ = NULL;
        bool RegionFactory::live$ = false;

        jclass RegionFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/RegionFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildConvex_77d39d89d2426ad4] = env->getMethodID(cls, "buildConvex", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_difference_6a3d0544002e6cf8] = env->getMethodID(cls, "difference", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getComplement_9a5a40c9b126916b] = env->getMethodID(cls, "getComplement", "(Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_intersection_6a3d0544002e6cf8] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_union_6a3d0544002e6cf8] = env->getMethodID(cls, "union", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_xor_6a3d0544002e6cf8] = env->getMethodID(cls, "xor", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegionFactory::RegionFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::buildConvex(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_buildConvex_77d39d89d2426ad4], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::difference(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_difference_6a3d0544002e6cf8], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::getComplement(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getComplement_9a5a40c9b126916b], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::intersection(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_intersection_6a3d0544002e6cf8], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::union$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_union_6a3d0544002e6cf8], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::xor$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_xor_6a3d0544002e6cf8], a0.this$, a1.this$));
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
        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args);
        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg);
        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args);
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data);
        static PyGetSetDef t_RegionFactory__fields_[] = {
          DECLARE_GET_FIELD(t_RegionFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegionFactory__methods_[] = {
          DECLARE_METHOD(t_RegionFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegionFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, buildConvex, METH_O),
          DECLARE_METHOD(t_RegionFactory, difference, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, getComplement, METH_O),
          DECLARE_METHOD(t_RegionFactory, intersection, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, union, METH_VARARGS),
          DECLARE_METHOD(t_RegionFactory, xor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegionFactory)[] = {
          { Py_tp_methods, t_RegionFactory__methods_ },
          { Py_tp_init, (void *) t_RegionFactory_init_ },
          { Py_tp_getset, t_RegionFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegionFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RegionFactory, t_RegionFactory, RegionFactory);
        PyObject *t_RegionFactory::wrap_Object(const RegionFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegionFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegionFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegionFactory *self = (t_RegionFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegionFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(RegionFactory), &PY_TYPE_DEF(RegionFactory), module, "RegionFactory", 0);
        }

        void t_RegionFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "class_", make_descriptor(RegionFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "wrapfn_", make_descriptor(t_RegionFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegionFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegionFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegionFactory::initializeClass, 1)))
            return NULL;
          return t_RegionFactory::wrap_Object(RegionFactory(((t_RegionFactory *) arg)->object.this$));
        }
        static PyObject *t_RegionFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegionFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegionFactory_of_(t_RegionFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegionFactory_init_(t_RegionFactory *self, PyObject *args, PyObject *kwds)
        {
          RegionFactory object((jobject) NULL);

          INT_CALL(object = RegionFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_RegionFactory_buildConvex(t_RegionFactory *self, PyObject *arg)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "[K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.buildConvex(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildConvex", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_difference(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.difference(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "difference", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_getComplement(t_RegionFactory *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.getComplement(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getComplement", arg);
          return NULL;
        }

        static PyObject *t_RegionFactory_intersection(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_union(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.union$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "union", args);
          return NULL;
        }

        static PyObject *t_RegionFactory_xor(t_RegionFactory *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Region::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.xor$(a0, a1));
            return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "xor", args);
          return NULL;
        }
        static PyObject *t_RegionFactory_get__parameters_(t_RegionFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_786b2ff82ce4b0ff] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_31e05790c4db57cc] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::EventOccurrence EventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_786b2ff82ce4b0ff], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_31e05790c4db57cc], a0.this$);
        }

        jdouble EventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_456d9a2f64d6b28d]);
        }

        void EventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
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
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventTime(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventTime(t_EventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
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

        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction$ConvergenceTest::class$ = NULL;
      jmethodID *Fraction$ConvergenceTest::mids$ = NULL;
      bool Fraction$ConvergenceTest::live$ = false;

      jclass Fraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_638a6e940edd0ad7] = env->getMethodID(cls, "test", "(II)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Fraction$ConvergenceTest::test(jint a0, jint a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_638a6e940edd0ad7], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_Fraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_Fraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_Fraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fraction$ConvergenceTest, t_Fraction$ConvergenceTest, Fraction$ConvergenceTest);

      void t_Fraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction$ConvergenceTest), &PY_TYPE_DEF(Fraction$ConvergenceTest), module, "Fraction$ConvergenceTest", 0);
      }

      void t_Fraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "class_", make_descriptor(Fraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "wrapfn_", make_descriptor(t_Fraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_Fraction$ConvergenceTest::wrap_Object(Fraction$ConvergenceTest(((t_Fraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SsrVtecIonosphericModel::class$ = NULL;
          jmethodID *SsrVtecIonosphericModel::mids$ = NULL;
          bool SsrVtecIonosphericModel::live$ = false;

          jclass SsrVtecIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a5e9097c5232e356] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_c824fdb3e595a2ae] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_78d4f8498e981bf5] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SsrVtecIonosphericModel::SsrVtecIonosphericModel(const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a5e9097c5232e356, a0.this$)) {}

          ::java::util::List SsrVtecIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          jdouble SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_c824fdb3e595a2ae], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement SsrVtecIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_78d4f8498e981bf5], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self);
          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args);
          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data);
          static PyGetSetDef t_SsrVtecIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_SsrVtecIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SsrVtecIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_SsrVtecIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SsrVtecIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SsrVtecIonosphericModel)[] = {
            { Py_tp_methods, t_SsrVtecIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_SsrVtecIonosphericModel_init_ },
            { Py_tp_getset, t_SsrVtecIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SsrVtecIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SsrVtecIonosphericModel, t_SsrVtecIonosphericModel, SsrVtecIonosphericModel);

          void t_SsrVtecIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SsrVtecIonosphericModel), &PY_TYPE_DEF(SsrVtecIonosphericModel), module, "SsrVtecIonosphericModel", 0);
          }

          void t_SsrVtecIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "class_", make_descriptor(SsrVtecIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "wrapfn_", make_descriptor(t_SsrVtecIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SsrVtecIonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SsrVtecIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SsrVtecIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_SsrVtecIonosphericModel::wrap_Object(SsrVtecIonosphericModel(((t_SsrVtecIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_SsrVtecIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SsrVtecIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SsrVtecIonosphericModel_init_(t_SsrVtecIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201 a0((jobject) NULL);
            PyTypeObject **p0;
            SsrVtecIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201::initializeClass, &a0, &p0, ::org::orekit::gnss::metric::messages::ssr::subtype::t_SsrIm201::parameters_))
            {
              INT_CALL(object = SsrVtecIonosphericModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SsrVtecIonosphericModel_getParametersDrivers(t_SsrVtecIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SsrVtecIonosphericModel_pathDelay(t_SsrVtecIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
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

          static PyObject *t_SsrVtecIonosphericModel_get__parametersDrivers(t_SsrVtecIonosphericModel *self, void *data)
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
#include "org/orekit/files/ccsds/section/KvnStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureProcessingState::class$ = NULL;
          jmethodID *KvnStructureProcessingState::mids$ = NULL;
          bool KvnStructureProcessingState::live$ = false;

          jclass KvnStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89ca4960a54b0876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_aa256c47fb7b26f1] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KvnStructureProcessingState::KvnStructureProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89ca4960a54b0876, a0.this$)) {}

          jboolean KvnStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_aa256c47fb7b26f1], a0.this$);
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
          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_KvnStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_KvnStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureProcessingState)[] = {
            { Py_tp_methods, t_KvnStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_KvnStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KvnStructureProcessingState, t_KvnStructureProcessingState, KvnStructureProcessingState);

          void t_KvnStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureProcessingState), &PY_TYPE_DEF(KvnStructureProcessingState), module, "KvnStructureProcessingState", 0);
          }

          void t_KvnStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "class_", make_descriptor(KvnStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "wrapfn_", make_descriptor(t_KvnStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_KvnStructureProcessingState::wrap_Object(KvnStructureProcessingState(((t_KvnStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            KvnStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = KvnStructureProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
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
            mids$[mid_rank_4b742fe429c22ba8] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > RankingAlgorithm::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_4b742fe429c22ba8], a0.this$));
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
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetector::class$ = NULL;
        jmethodID *EventDetector::mids$ = NULL;
        bool EventDetector::live$ = false;

        jclass EventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_d450688ba8c3949b] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_5b5c68574977d620] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EventDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler EventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_d450688ba8c3949b]));
        }

        ::org::orekit::propagation::events::AdaptableInterval EventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_5b5c68574977d620]));
        }

        jint EventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        jdouble EventDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_456d9a2f64d6b28d]);
        }

        void EventDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg);
        static PyObject *t_EventDetector_getHandler(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self);
        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self);
        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self);
        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args);
        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data);
        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data);
        static PyGetSetDef t_EventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetector, handler),
          DECLARE_GET_FIELD(t_EventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_EventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_EventDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetector__methods_[] = {
          DECLARE_METHOD(t_EventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetector, g, METH_O),
          DECLARE_METHOD(t_EventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_EventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetector)[] = {
          { Py_tp_methods, t_EventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetector, t_EventDetector, EventDetector);

        void t_EventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetector), &PY_TYPE_DEF(EventDetector), module, "EventDetector", 0);
        }

        void t_EventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "class_", make_descriptor(EventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "wrapfn_", make_descriptor(t_EventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetector::initializeClass, 1)))
            return NULL;
          return t_EventDetector::wrap_Object(EventDetector(((t_EventDetector *) arg)->object.this$));
        }
        static PyObject *t_EventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetector_g(t_EventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_EventDetector_getHandler(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxCheckInterval(t_EventDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_EventDetector_getMaxIterationCount(t_EventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EventDetector_getThreshold(t_EventDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventDetector_init(t_EventDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_EventDetector_get__handler(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxCheckInterval(t_EventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_EventDetector_get__maxIterationCount(t_EventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EventDetector_get__threshold(t_EventDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASNavigationMessage::class$ = NULL;
            jmethodID *SBASNavigationMessage::mids$ = NULL;
            bool SBASNavigationMessage::live$ = false;

            jclass SBASNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAGf0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_f2f64475e4580546] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPropagator_70869a450ee7c848] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_4782ed39e925c984] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_ad237026c17751de] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;DD)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_456d9a2f64d6b28d] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_getWeek_f2f64475e4580546] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAGf0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAGf0", "(D)V");
                mids$[mid_setAGf1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAGf1", "(D)V");
                mids$[mid_setIODN_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIODN", "(D)V");
                mids$[mid_setTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SBASNavigationMessage::SBASNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble SBASNavigationMessage::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_456d9a2f64d6b28d]);
            }

            jdouble SBASNavigationMessage::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_456d9a2f64d6b28d]);
            }

            jint SBASNavigationMessage::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_f2f64475e4580546]);
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_70869a450ee7c848]));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_4782ed39e925c984], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4, jdouble a5) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ad237026c17751de], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            jdouble SBASNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
            }

            jdouble SBASNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_456d9a2f64d6b28d]);
            }

            jint SBASNavigationMessage::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_f2f64475e4580546]);
            }

            void SBASNavigationMessage::setAGf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf0_77e0f9a1f260e2e5], a0);
            }

            void SBASNavigationMessage::setAGf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf1_77e0f9a1f260e2e5], a0);
            }

            void SBASNavigationMessage::setIODN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODN_77e0f9a1f260e2e5], a0);
            }

            void SBASNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_77e0f9a1f260e2e5], a0);
            }

            void SBASNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args);
            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data);
            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data);
            static PyGetSetDef t_SBASNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf0),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf1),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, iODN),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, propagator),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, uRA),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_SBASNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf0, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf1, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setIODN, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASNavigationMessage)[] = {
              { Py_tp_methods, t_SBASNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_SBASNavigationMessage_init_ },
              { Py_tp_getset, t_SBASNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(SBASNavigationMessage, t_SBASNavigationMessage, SBASNavigationMessage);

            void t_SBASNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASNavigationMessage), &PY_TYPE_DEF(SBASNavigationMessage), module, "SBASNavigationMessage", 0);
            }

            void t_SBASNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "class_", make_descriptor(SBASNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "wrapfn_", make_descriptor(t_SBASNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_SBASNavigationMessage::wrap_Object(SBASNavigationMessage(((t_SBASNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              SBASNavigationMessage object((jobject) NULL);

              INT_CALL(object = SBASNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
                break;
               case 6:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  jdouble a5;
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkDD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4, a5));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf0", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf1", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODN", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf0", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf1", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODN", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::SBASPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(value);
            }

            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *CasterRecord::class$ = NULL;
          jmethodID *CasterRecord::mids$ = NULL;
          bool CasterRecord::live$ = false;

          jclass CasterRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/CasterRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canReceiveNMEA_e470b6d9e0d979db] = env->getMethodID(cls, "canReceiveNMEA", "()Z");
              mids$[mid_getCountry_0090f7797e403f43] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFallbackHostOrIPAddress_0090f7797e403f43] = env->getMethodID(cls, "getFallbackHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getFallbackPort_f2f64475e4580546] = env->getMethodID(cls, "getFallbackPort", "()I");
              mids$[mid_getHostOrIPAddress_0090f7797e403f43] = env->getMethodID(cls, "getHostOrIPAddress", "()Ljava/lang/String;");
              mids$[mid_getLatitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getOperator_0090f7797e403f43] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getPort_f2f64475e4580546] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getRecordType_9f311496246ad578] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_0090f7797e403f43] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CasterRecord::CasterRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          jboolean CasterRecord::canReceiveNMEA() const
          {
            return env->callBooleanMethod(this$, mids$[mid_canReceiveNMEA_e470b6d9e0d979db]);
          }

          ::java::lang::String CasterRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_0090f7797e403f43]));
          }

          ::java::lang::String CasterRecord::getFallbackHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFallbackHostOrIPAddress_0090f7797e403f43]));
          }

          jint CasterRecord::getFallbackPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getFallbackPort_f2f64475e4580546]);
          }

          ::java::lang::String CasterRecord::getHostOrIPAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHostOrIPAddress_0090f7797e403f43]));
          }

          jdouble CasterRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_456d9a2f64d6b28d]);
          }

          jdouble CasterRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_456d9a2f64d6b28d]);
          }

          ::java::lang::String CasterRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_0090f7797e403f43]));
          }

          jint CasterRecord::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_f2f64475e4580546]);
          }

          ::org::orekit::gnss::metric::ntrip::RecordType CasterRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_9f311496246ad578]));
          }

          ::java::lang::String CasterRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_0090f7797e403f43]));
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
          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self);
          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args);
          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self);
          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data);
          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data);
          static PyGetSetDef t_CasterRecord__fields_[] = {
            DECLARE_GET_FIELD(t_CasterRecord, country),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackHostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, fallbackPort),
            DECLARE_GET_FIELD(t_CasterRecord, hostOrIPAddress),
            DECLARE_GET_FIELD(t_CasterRecord, latitude),
            DECLARE_GET_FIELD(t_CasterRecord, longitude),
            DECLARE_GET_FIELD(t_CasterRecord, operator),
            DECLARE_GET_FIELD(t_CasterRecord, port),
            DECLARE_GET_FIELD(t_CasterRecord, recordType),
            DECLARE_GET_FIELD(t_CasterRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CasterRecord__methods_[] = {
            DECLARE_METHOD(t_CasterRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CasterRecord, canReceiveNMEA, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getFallbackPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getHostOrIPAddress, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getPort, METH_NOARGS),
            DECLARE_METHOD(t_CasterRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_CasterRecord, getSourceIdentifier, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CasterRecord)[] = {
            { Py_tp_methods, t_CasterRecord__methods_ },
            { Py_tp_init, (void *) t_CasterRecord_init_ },
            { Py_tp_getset, t_CasterRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CasterRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(CasterRecord, t_CasterRecord, CasterRecord);

          void t_CasterRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(CasterRecord), &PY_TYPE_DEF(CasterRecord), module, "CasterRecord", 0);
          }

          void t_CasterRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "class_", make_descriptor(CasterRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "wrapfn_", make_descriptor(t_CasterRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CasterRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CasterRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CasterRecord::initializeClass, 1)))
              return NULL;
            return t_CasterRecord::wrap_Object(CasterRecord(((t_CasterRecord *) arg)->object.this$));
          }
          static PyObject *t_CasterRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CasterRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CasterRecord_init_(t_CasterRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            CasterRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = CasterRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CasterRecord_canReceiveNMEA(t_CasterRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.canReceiveNMEA());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CasterRecord_getCountry(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFallbackHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getFallbackPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFallbackPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getHostOrIPAddress(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHostOrIPAddress());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getLatitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getLongitude(t_CasterRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CasterRecord_getOperator(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_getPort(t_CasterRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CasterRecord_getRecordType(t_CasterRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(CasterRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_CasterRecord_getSourceIdentifier(t_CasterRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_CasterRecord_get__country(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackHostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFallbackHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__fallbackPort(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFallbackPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__hostOrIPAddress(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHostOrIPAddress());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__latitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__longitude(t_CasterRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CasterRecord_get__operator(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_CasterRecord_get__port(t_CasterRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CasterRecord_get__recordType(t_CasterRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_CasterRecord_get__sourceIdentifier(t_CasterRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/List.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *List::class$ = NULL;
    jmethodID *List::mids$ = NULL;
    bool List::live$ = false;

    jclass List::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/List");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_92e02b8dd38af23a] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addAll_17269709aac5e427] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_d88dbdb69255b770] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_211b4b42e00790e5] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_2db0f6e4b8d9201f] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_ac8c1b6f384391ef] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_ac8c1b6f384391ef] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_4e1a823c948bf3a6] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_cada45a770b36785] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_of_a6156df500549a58] = env->getStaticMethodID(cls, "of", "()Ljava/util/List;");
        mids$[mid_of_234aa90ee2d16639] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_969dd6a242ef47c1] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_f09ed8d99031e9e3] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_2f154aed270c09c4] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_a646b7902ae04bf0] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_ebde985aa2676002] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_76e3249cd657c2c5] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_c3e3248cb3e950c0] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_bd46d3cd82b73f99] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_04a5eba99a9cf6b4] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_of_5c466934aa24d6e9] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_remove_2db0f6e4b8d9201f] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_d88dbdb69255b770] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_d88dbdb69255b770] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_set_fbb048a414c33f9c] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_sort_4aed3eb33e58d2f7] = env->getMethodID(cls, "sort", "(Ljava/util/Comparator;)V");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subList_4a0f7788a82593c4] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_toArray_e81d7907eea7e008] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_66041b51ef6ee21d] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean List::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    void List::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_92e02b8dd38af23a], a0, a1.this$);
    }

    jboolean List::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    jboolean List::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17269709aac5e427], a0, a1.this$);
    }

    void List::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    jboolean List::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    jboolean List::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_d88dbdb69255b770], a0.this$);
    }

    List List::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_copyOf_211b4b42e00790e5], a0.this$));
    }

    jboolean List::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object List::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_2db0f6e4b8d9201f], a0));
    }

    jint List::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint List::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_ac8c1b6f384391ef], a0.this$);
    }

    jboolean List::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator List::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    jint List::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_ac8c1b6f384391ef], a0.this$);
    }

    ::java::util::ListIterator List::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_4e1a823c948bf3a6]));
    }

    ::java::util::ListIterator List::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_cada45a770b36785], a0));
    }

    List List::of()
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_a6156df500549a58]));
    }

    List List::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_234aa90ee2d16639], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_969dd6a242ef47c1], a0.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_f09ed8d99031e9e3], a0.this$, a1.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_2f154aed270c09c4], a0.this$, a1.this$, a2.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_a646b7902ae04bf0], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_ebde985aa2676002], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_76e3249cd657c2c5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_c3e3248cb3e950c0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_bd46d3cd82b73f99], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_04a5eba99a9cf6b4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    List List::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return List(env->callStaticObjectMethod(cls, mids$[mid_of_5c466934aa24d6e9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    ::java::lang::Object List::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_2db0f6e4b8d9201f], a0));
    }

    jboolean List::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jboolean List::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_d88dbdb69255b770], a0.this$);
    }

    jboolean List::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_d88dbdb69255b770], a0.this$);
    }

    ::java::lang::Object List::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_fbb048a414c33f9c], a0, a1.this$));
    }

    jint List::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    void List::sort(const ::java::util::Comparator & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_sort_4aed3eb33e58d2f7], a0.this$);
    }

    ::java::util::Spliterator List::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }

    List List::subList(jint a0, jint a1) const
    {
      return List(env->callObjectMethod(this$, mids$[mid_subList_4a0f7788a82593c4], a0, a1));
    }

    JArray< ::java::lang::Object > List::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e81d7907eea7e008]));
    }

    JArray< ::java::lang::Object > List::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_66041b51ef6ee21d], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_of_(t_List *self, PyObject *args);
    static PyObject *t_List_add(t_List *self, PyObject *args);
    static PyObject *t_List_addAll(t_List *self, PyObject *args);
    static PyObject *t_List_clear(t_List *self, PyObject *args);
    static PyObject *t_List_contains(t_List *self, PyObject *args);
    static PyObject *t_List_containsAll(t_List *self, PyObject *args);
    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_List_equals(t_List *self, PyObject *args);
    static PyObject *t_List_get(t_List *self, PyObject *arg);
    static PyObject *t_List_hashCode(t_List *self, PyObject *args);
    static PyObject *t_List_indexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_isEmpty(t_List *self, PyObject *args);
    static PyObject *t_List_iterator(t_List *self, PyObject *args);
    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg);
    static PyObject *t_List_listIterator(t_List *self, PyObject *args);
    static PyObject *t_List_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_List_remove(t_List *self, PyObject *args);
    static PyObject *t_List_removeAll(t_List *self, PyObject *args);
    static PyObject *t_List_retainAll(t_List *self, PyObject *args);
    static PyObject *t_List_set(t_List *self, PyObject *args);
    static PyObject *t_List_size(t_List *self, PyObject *args);
    static PyObject *t_List_sort(t_List *self, PyObject *arg);
    static PyObject *t_List_spliterator(t_List *self, PyObject *args);
    static PyObject *t_List_subList(t_List *self, PyObject *args);
    static PyObject *t_List_toArray(t_List *self, PyObject *args);
    static PyObject *t_List_get__empty(t_List *self, void *data);
    static PyObject *t_List_get__parameters_(t_List *self, void *data);
    static PyGetSetDef t_List__fields_[] = {
      DECLARE_GET_FIELD(t_List, empty),
      DECLARE_GET_FIELD(t_List, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_List__methods_[] = {
      DECLARE_METHOD(t_List, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, of_, METH_VARARGS),
      DECLARE_METHOD(t_List, add, METH_VARARGS),
      DECLARE_METHOD(t_List, addAll, METH_VARARGS),
      DECLARE_METHOD(t_List, clear, METH_VARARGS),
      DECLARE_METHOD(t_List, contains, METH_VARARGS),
      DECLARE_METHOD(t_List, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_List, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_List, equals, METH_VARARGS),
      DECLARE_METHOD(t_List, get, METH_O),
      DECLARE_METHOD(t_List, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_List, indexOf, METH_O),
      DECLARE_METHOD(t_List, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_List, iterator, METH_VARARGS),
      DECLARE_METHOD(t_List, lastIndexOf, METH_O),
      DECLARE_METHOD(t_List, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_List, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_List, remove, METH_VARARGS),
      DECLARE_METHOD(t_List, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_List, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_List, set, METH_VARARGS),
      DECLARE_METHOD(t_List, size, METH_VARARGS),
      DECLARE_METHOD(t_List, sort, METH_O),
      DECLARE_METHOD(t_List, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_List, subList, METH_VARARGS),
      DECLARE_METHOD(t_List, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(List)[] = {
      { Py_tp_methods, t_List__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_List__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_List *)) get_generic_iterator< t_List >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(List)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(List, t_List, List);
    PyObject *t_List::wrap_Object(const List& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_List::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_List::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_List *self = (t_List *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_List::install(PyObject *module)
    {
      installType(&PY_TYPE(List), &PY_TYPE_DEF(List), module, "List", 0);
    }

    void t_List::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "class_", make_descriptor(List::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "wrapfn_", make_descriptor(t_List::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(List), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_List_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, List::initializeClass, 1)))
        return NULL;
      return t_List::wrap_Object(List(((t_List *) arg)->object.this$));
    }
    static PyObject *t_List_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, List::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_List_of_(t_List *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_List_add(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_List_addAll(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.addAll(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_List_clear(t_List *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_List_contains(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_List_containsAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_List_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::List::copyOf(a0));
        return t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_List_equals(t_List *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_List_get(t_List *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_List_hashCode(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_List_indexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_List_isEmpty(t_List *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_List_iterator(t_List *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_List_lastIndexOf(t_List *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_List_listIterator(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_List_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          List result((jobject) NULL);
          OBJ_CALL(result = ::java::util::List::of());
          return t_List::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::List::of(a0));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4));
            return t_List::wrap_Object(result);
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
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6));
            return t_List::wrap_Object(result);
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
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_List::wrap_Object(result);
          }
        }
        break;
       case 9:
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
          List result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_List::wrap_Object(result);
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
          List result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::List::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_List::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_List_remove(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_List_removeAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_List_retainAll(t_List *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_List_set(t_List *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_List_size(t_List *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_List_sort(t_List *self, PyObject *arg)
    {
      ::java::util::Comparator a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
      {
        OBJ_CALL(self->object.sort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "sort", arg);
      return NULL;
    }

    static PyObject *t_List_spliterator(t_List *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_List_subList(t_List *self, PyObject *args)
    {
      jint a0;
      jint a1;
      List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }

    static PyObject *t_List_toArray(t_List *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(List), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_List_get__parameters_(t_List *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_List_get__empty(t_List *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
          mids$[mid_value_01060f5a87e1d6cd] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterFunction::value(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_01060f5a87e1d6cd], a0.this$, a1.this$);
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
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState$EventOccurrence::class$ = NULL;
        jmethodID *EventState$EventOccurrence::mids$ = NULL;
        bool EventState$EventOccurrence::live$ = false;

        jclass EventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_8c7583beb4e5a879] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStopDate_aaa854c403487cf3] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action EventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_8c7583beb4e5a879]));
        }

        ::org::orekit::propagation::SpacecraftState EventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_dd3e4a8d51055f1f]));
        }

        ::org::orekit::time::AbsoluteDate EventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_aaa854c403487cf3]));
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
        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_EventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState$EventOccurrence)[] = {
          { Py_tp_methods, t_EventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState$EventOccurrence, t_EventState$EventOccurrence, EventState$EventOccurrence);
        PyObject *t_EventState$EventOccurrence::wrap_Object(const EventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState$EventOccurrence), &PY_TYPE_DEF(EventState$EventOccurrence), module, "EventState$EventOccurrence", 0);
        }

        void t_EventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "class_", make_descriptor(EventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "wrapfn_", make_descriptor(t_EventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventState$EventOccurrence::wrap_Object(EventState$EventOccurrence(((t_EventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalarFunction::class$ = NULL;
      jmethodID *TimeScalarFunction::mids$ = NULL;
      bool TimeScalarFunction::live$ = false;

      jclass TimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_e912d21057defe63] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_7bc0fd76ee915b72] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScalarFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScalarFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_7bc0fd76ee915b72], a0.this$));
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
      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args);

      static PyMethodDef t_TimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_TimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalarFunction)[] = {
        { Py_tp_methods, t_TimeScalarFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalarFunction, t_TimeScalarFunction, TimeScalarFunction);

      void t_TimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalarFunction), &PY_TYPE_DEF(TimeScalarFunction), module, "TimeScalarFunction", 0);
      }

      void t_TimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "class_", make_descriptor(TimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "wrapfn_", make_descriptor(t_TimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_TimeScalarFunction::wrap_Object(TimeScalarFunction(((t_TimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuverKey::class$ = NULL;
              jmethodID *AttitudeManeuverKey::mids$ = NULL;
              bool AttitudeManeuverKey::live$ = false;
              AttitudeManeuverKey *AttitudeManeuverKey::ACTUATOR_USED = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::COMMENT = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_BEGIN_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_DURATION = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_END_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PREV_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PURPOSE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_ATTITUDE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOMENTUM = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOM_FRAME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_SPINRATE = NULL;

              jclass AttitudeManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_588d62a629547500] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver;)Z");
                  mids$[mid_valueOf_b9f2269c9d870997] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");
                  mids$[mid_values_3ede685191255a63] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUATOR_USED = new AttitudeManeuverKey(env->getStaticObjectField(cls, "ACTUATOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  COMMENT = new AttitudeManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_BEGIN_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_BEGIN_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_DURATION = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_END_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_END_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PREV_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PURPOSE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_ATTITUDE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_ATTITUDE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOMENTUM = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOM_FRAME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOM_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_SPINRATE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_SPINRATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_588d62a629547500], a0.this$, a1.this$, a2.this$);
              }

              AttitudeManeuverKey AttitudeManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b9f2269c9d870997], a0.this$));
              }

              JArray< AttitudeManeuverKey > AttitudeManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_3ede685191255a63]));
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
              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data);
              static PyGetSetDef t_AttitudeManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuverKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuverKey)[] = {
                { Py_tp_methods, t_AttitudeManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuverKey, t_AttitudeManeuverKey, AttitudeManeuverKey);
              PyObject *t_AttitudeManeuverKey::wrap_Object(const AttitudeManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuverKey), &PY_TYPE_DEF(AttitudeManeuverKey), module, "AttitudeManeuverKey", 0);
              }

              void t_AttitudeManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "class_", make_descriptor(AttitudeManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "wrapfn_", make_descriptor(t_AttitudeManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "ACTUATOR_USED", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::ACTUATOR_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "COMMENT", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_BEGIN_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_BEGIN_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_DURATION", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_END_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_END_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PREV_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PURPOSE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_ATTITUDE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_ATTITUDE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOMENTUM", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOMENTUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOM_FRAME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOM_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_SPINRATE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_SPINRATE)));
              }

              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuverKey::wrap_Object(AttitudeManeuverKey(((t_AttitudeManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::valueOf(a0));
                  return t_AttitudeManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type)
              {
                JArray< AttitudeManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeManeuverKey::wrap_jobject);
              }
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data)
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
#include "org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsBashforthIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthIntegratorBuilder::live$ = false;

        jclass AdamsBashforthIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegratorBuilder::AdamsBashforthIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsBashforthIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsBashforthIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegratorBuilder, t_AdamsBashforthIntegratorBuilder, AdamsBashforthIntegratorBuilder);

        void t_AdamsBashforthIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthIntegratorBuilder), module, "AdamsBashforthIntegratorBuilder", 0);
        }

        void t_AdamsBashforthIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "class_", make_descriptor(AdamsBashforthIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegratorBuilder::wrap_Object(AdamsBashforthIntegratorBuilder(((t_AdamsBashforthIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsMoultonIntegrator::class$ = NULL;
        jmethodID *AdamsMoultonIntegrator::mids$ = NULL;
        bool AdamsMoultonIntegrator::live$ = false;

        jclass AdamsMoultonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6a622868df67b314] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_cc4784be32cd9c15] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_75ea1ed39c36d40d] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_dff8af8869f4d85a] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6a622868df67b314, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsMoultonIntegrator::AdamsMoultonIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cc4784be32cd9c15, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsMoultonIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegrator)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegrator, t_AdamsMoultonIntegrator, AdamsMoultonIntegrator);

        void t_AdamsMoultonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegrator), &PY_TYPE_DEF(AdamsMoultonIntegrator), module, "AdamsMoultonIntegrator", 0);
        }

        void t_AdamsMoultonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "class_", make_descriptor(AdamsMoultonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "wrapfn_", make_descriptor(t_AdamsMoultonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegrator::wrap_Object(AdamsMoultonIntegrator(((t_AdamsMoultonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegrator_init_(t_AdamsMoultonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdamsMoultonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsMoultonIntegrator(a0, a1, a2, a3, a4));
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SoftwareConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SoftwareConfiguration::mids$ = NULL;
        bool CRDConfiguration$SoftwareConfiguration::live$ = false;

        jclass CRDConfiguration$SoftwareConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareVersions_0f62ccf08eef5924] = env->getMethodID(cls, "getProcessingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getProcessingSoftwares_0f62ccf08eef5924] = env->getMethodID(cls, "getProcessingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_getSoftwareId_0090f7797e403f43] = env->getMethodID(cls, "getSoftwareId", "()Ljava/lang/String;");
            mids$[mid_getTrackingSoftwareVersions_0f62ccf08eef5924] = env->getMethodID(cls, "getTrackingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getTrackingSoftwares_0f62ccf08eef5924] = env->getMethodID(cls, "getTrackingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareVersions_5712fb35729cb71f] = env->getMethodID(cls, "setProcessingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwares_5712fb35729cb71f] = env->getMethodID(cls, "setProcessingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_setSoftwareId_e939c6558ae8d313] = env->getMethodID(cls, "setSoftwareId", "(Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwareVersions_5712fb35729cb71f] = env->getMethodID(cls, "setTrackingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwares_5712fb35729cb71f] = env->getMethodID(cls, "setTrackingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SoftwareConfiguration::CRDConfiguration$SoftwareConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersions_0f62ccf08eef5924]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwares_0f62ccf08eef5924]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::getSoftwareId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSoftwareId_0090f7797e403f43]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwareVersions_0f62ccf08eef5924]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwares_0f62ccf08eef5924]));
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersions_5712fb35729cb71f], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwares_5712fb35729cb71f], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setSoftwareId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSoftwareId_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwareVersions_5712fb35729cb71f], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwares_5712fb35729cb71f], a0.this$);
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SoftwareConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwares),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, softwareId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SoftwareConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getSoftwareId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setSoftwareId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SoftwareConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SoftwareConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SoftwareConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SoftwareConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SoftwareConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SoftwareConfiguration, t_CRDConfiguration$SoftwareConfiguration, CRDConfiguration$SoftwareConfiguration);

        void t_CRDConfiguration$SoftwareConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SoftwareConfiguration), &PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration), module, "CRDConfiguration$SoftwareConfiguration", 0);
        }

        void t_CRDConfiguration$SoftwareConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "class_", make_descriptor(CRDConfiguration$SoftwareConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SoftwareConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SoftwareConfiguration::wrap_Object(CRDConfiguration$SoftwareConfiguration(((t_CRDConfiguration$SoftwareConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SoftwareConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SoftwareConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSoftwareId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSoftwareId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSoftwareId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwares", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSoftwareId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "softwareId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwares", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/ConstantAzimuthAiming.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *ConstantAzimuthAiming::class$ = NULL;
          jmethodID *ConstantAzimuthAiming::mids$ = NULL;
          bool ConstantAzimuthAiming::live$ = false;

          jclass ConstantAzimuthAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/ConstantAzimuthAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6e31a3b5da8ff979] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_alongTileDirection_c57b22dac91cacbc] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_a6156df500549a58] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantAzimuthAiming::ConstantAzimuthAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e31a3b5da8ff979, a0.this$, a1)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantAzimuthAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_c57b22dac91cacbc], a0.this$, a1.this$));
          }

          ::java::util::List ConstantAzimuthAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_a6156df500549a58]));
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
        namespace tessellation {
          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args);
          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self);
          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data);
          static PyGetSetDef t_ConstantAzimuthAiming__fields_[] = {
            DECLARE_GET_FIELD(t_ConstantAzimuthAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConstantAzimuthAiming__methods_[] = {
            DECLARE_METHOD(t_ConstantAzimuthAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantAzimuthAiming)[] = {
            { Py_tp_methods, t_ConstantAzimuthAiming__methods_ },
            { Py_tp_init, (void *) t_ConstantAzimuthAiming_init_ },
            { Py_tp_getset, t_ConstantAzimuthAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantAzimuthAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantAzimuthAiming, t_ConstantAzimuthAiming, ConstantAzimuthAiming);

          void t_ConstantAzimuthAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantAzimuthAiming), &PY_TYPE_DEF(ConstantAzimuthAiming), module, "ConstantAzimuthAiming", 0);
          }

          void t_ConstantAzimuthAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "class_", make_descriptor(ConstantAzimuthAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "wrapfn_", make_descriptor(t_ConstantAzimuthAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantAzimuthAiming::initializeClass, 1)))
              return NULL;
            return t_ConstantAzimuthAiming::wrap_Object(ConstantAzimuthAiming(((t_ConstantAzimuthAiming *) arg)->object.this$));
          }
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantAzimuthAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            jdouble a1;
            ConstantAzimuthAiming object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantAzimuthAiming(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTileFactory::class$ = NULL;
          jmethodID *MinMaxTreeTileFactory::mids$ = NULL;
          bool MinMaxTreeTileFactory::live$ = false;

          jclass MinMaxTreeTileFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_createTile_17d307bdea6bd18b] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/intersection/duvenhage/MinMaxTreeTile;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MinMaxTreeTileFactory::MinMaxTreeTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile MinMaxTreeTileFactory::createTile() const
          {
            return ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile(env->callObjectMethod(this$, mids$[mid_createTile_17d307bdea6bd18b]));
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
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self);

          static PyMethodDef t_MinMaxTreeTileFactory__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTileFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, createTile, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTileFactory)[] = {
            { Py_tp_methods, t_MinMaxTreeTileFactory__methods_ },
            { Py_tp_init, (void *) t_MinMaxTreeTileFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTileFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTileFactory, t_MinMaxTreeTileFactory, MinMaxTreeTileFactory);

          void t_MinMaxTreeTileFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTileFactory), &PY_TYPE_DEF(MinMaxTreeTileFactory), module, "MinMaxTreeTileFactory", 0);
          }

          void t_MinMaxTreeTileFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "class_", make_descriptor(MinMaxTreeTileFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "wrapfn_", make_descriptor(t_MinMaxTreeTileFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTileFactory::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTileFactory::wrap_Object(MinMaxTreeTileFactory(((t_MinMaxTreeTileFactory *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTileFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds)
          {
            MinMaxTreeTileFactory object((jobject) NULL);

            INT_CALL(object = MinMaxTreeTileFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self)
          {
            ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile result((jobject) NULL);
            OBJ_CALL(result = self->object.createTile());
            return ::org::orekit::rugged::intersection::duvenhage::t_MinMaxTreeTile::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/PythonTileAiming.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *PythonTileAiming::class$ = NULL;
          jmethodID *PythonTileAiming::mids$ = NULL;
          bool PythonTileAiming::live$ = false;

          jclass PythonTileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/PythonTileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_alongTileDirection_c57b22dac91cacbc] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getSingularPoints_a6156df500549a58] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTileAiming::PythonTileAiming() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonTileAiming::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonTileAiming::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonTileAiming::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        namespace tessellation {
          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self);
          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args);
          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data);
          static PyGetSetDef t_PythonTileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTileAiming, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTileAiming__methods_[] = {
            DECLARE_METHOD(t_PythonTileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTileAiming, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTileAiming)[] = {
            { Py_tp_methods, t_PythonTileAiming__methods_ },
            { Py_tp_init, (void *) t_PythonTileAiming_init_ },
            { Py_tp_getset, t_PythonTileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTileAiming, t_PythonTileAiming, PythonTileAiming);

          void t_PythonTileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTileAiming), &PY_TYPE_DEF(PythonTileAiming), module, "PythonTileAiming", 1);
          }

          void t_PythonTileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "class_", make_descriptor(PythonTileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "wrapfn_", make_descriptor(t_PythonTileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTileAiming::initializeClass);
            JNINativeMethod methods[] = {
              { "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonTileAiming_alongTileDirection0 },
              { "getSingularPoints", "()Ljava/util/List;", (void *) t_PythonTileAiming_getSingularPoints1 },
              { "pythonDecRef", "()V", (void *) t_PythonTileAiming_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTileAiming::initializeClass, 1)))
              return NULL;
            return t_PythonTileAiming::wrap_Object(PythonTileAiming(((t_PythonTileAiming *) arg)->object.this$));
          }
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds)
          {
            PythonTileAiming object((jobject) NULL);

            INT_CALL(object = PythonTileAiming());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args)
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

          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *result = PyObject_CallMethod(obj, "alongTileDirection", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("alongTileDirection", result);
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

          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSingularPoints", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSingularPoints", result);
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

          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data)
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
#include "org/orekit/propagation/PythonFieldEphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldEphemerisGenerator::class$ = NULL;
      jmethodID *PythonFieldEphemerisGenerator::mids$ = NULL;
      bool PythonFieldEphemerisGenerator::live$ = false;

      jclass PythonFieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_39f09e653b07efff] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldEphemerisGenerator::PythonFieldEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldEphemerisGenerator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self);
      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonFieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, self),
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonFieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonFieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldEphemerisGenerator, t_PythonFieldEphemerisGenerator, PythonFieldEphemerisGenerator);
      PyObject *t_PythonFieldEphemerisGenerator::wrap_Object(const PythonFieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldEphemerisGenerator), &PY_TYPE_DEF(PythonFieldEphemerisGenerator), module, "PythonFieldEphemerisGenerator", 1);
      }

      void t_PythonFieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "class_", make_descriptor(PythonFieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonFieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;", (void *) t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldEphemerisGenerator::wrap_Object(PythonFieldEphemerisGenerator(((t_PythonFieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonFieldEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldBoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data)
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
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}

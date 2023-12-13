#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericModel::class$ = NULL;
          jmethodID *IonosphericModel::mids$ = NULL;
          bool IonosphericModel::live$ = false;

          jclass IonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_0c51f26f37c66719] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_5e4bace87c721642] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement IonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0c51f26f37c66719], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble IonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_5e4bace87c721642], a0.this$, a1.this$, a2, a3.this$);
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
          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args);

          static PyMethodDef t_IonosphericModel__methods_[] = {
            DECLARE_METHOD(t_IonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericModel)[] = {
            { Py_tp_methods, t_IonosphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(IonosphericModel, t_IonosphericModel, IonosphericModel);

          void t_IonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericModel), &PY_TYPE_DEF(IonosphericModel), module, "IonosphericModel", 0);
          }

          void t_IonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "class_", make_descriptor(IonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "wrapfn_", make_descriptor(t_IonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericModel::initializeClass, 1)))
              return NULL;
            return t_IonosphericModel::wrap_Object(IonosphericModel(((t_IonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *AbstractBatchLSModel::class$ = NULL;
        jmethodID *AbstractBatchLSModel::mids$ = NULL;
        bool AbstractBatchLSModel::live$ = false;

        jclass AbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/AbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_244486d6f58d6cbc] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_createPropagators_eea2f4f2cdf6f801] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_fetchEvaluatedMeasurement_e26746051feca807] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_getEvaluationsCount_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_55546ef6a647f39b] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedOrbitalParametersDriversForBuilder_d30ee09a585504b1] = env->getMethodID(cls, "getSelectedOrbitalParametersDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedPropagationDriversForBuilder_d30ee09a585504b1] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_9ab94ac1dc23b105] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_setEvaluationsCounter_29712264b86e4d61] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_29712264b86e4d61] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_75baf79414a7355b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");
            mids$[mid_configureHarvester_dafc362fdc9e50eb] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_3575848f266bfbed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractBatchLSModel::AbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_244486d6f58d6cbc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::Propagator > AbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_createPropagators_eea2f4f2cdf6f801], a0.this$));
        }

        void AbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fetchEvaluatedMeasurement_e26746051feca807], a0, a1.this$);
        }

        jint AbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_55546ef6a647f39b]);
        }

        jint AbstractBatchLSModel::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_55546ef6a647f39b]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedOrbitalParametersDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedOrbitalParametersDriversForBuilder_d30ee09a585504b1], a0));
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedPropagationDriversForBuilder_d30ee09a585504b1], a0));
        }

        jboolean AbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForwardPropagation_9ab94ac1dc23b105]);
        }

        void AbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEvaluationsCounter_29712264b86e4d61], a0.this$);
        }

        void AbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIterationsCounter_29712264b86e4d61], a0.this$);
        }

        ::org::hipparchus::util::Pair AbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_75baf79414a7355b], a0.this$));
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
        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data);
        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, evaluationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, evaluationsCounter),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, forwardPropagation),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, iterationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, iterationsCounter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_AbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, createPropagators, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedOrbitalParametersDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, isForwardPropagation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, setEvaluationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, setIterationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractBatchLSModel)[] = {
          { Py_tp_methods, t_AbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_AbstractBatchLSModel_init_ },
          { Py_tp_getset, t_AbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractBatchLSModel, t_AbstractBatchLSModel, AbstractBatchLSModel);

        void t_AbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractBatchLSModel), &PY_TYPE_DEF(AbstractBatchLSModel), module, "AbstractBatchLSModel", 0);
        }

        void t_AbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "class_", make_descriptor(AbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "wrapfn_", make_descriptor(t_AbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_AbstractBatchLSModel::wrap_Object(AbstractBatchLSModel(((t_AbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          AbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = AbstractBatchLSModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "createPropagators", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fetchEvaluatedMeasurement", args);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedOrbitalParametersDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedOrbitalParametersDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedPropagationDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForwardPropagation());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEvaluationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIterationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setEvaluationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "evaluationsCounter", arg);
          return -1;
        }

        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForwardPropagation());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setIterationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iterationsCounter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/WeibullDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *WeibullDistribution::class$ = NULL;
        jmethodID *WeibullDistribution::mids$ = NULL;
        bool WeibullDistribution::live$ = false;

        jclass WeibullDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/WeibullDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_b74f83833fdad017] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WeibullDistribution::WeibullDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble WeibullDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble WeibullDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble WeibullDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble WeibullDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble WeibullDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble WeibullDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_b74f83833fdad017]);
        }

        jdouble WeibullDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble WeibullDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble WeibullDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean WeibullDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble WeibullDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
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
        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data);
        static PyGetSetDef t_WeibullDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalMean),
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_WeibullDistribution, scale),
          DECLARE_GET_FIELD(t_WeibullDistribution, shape),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportConnected),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WeibullDistribution__methods_[] = {
          DECLARE_METHOD(t_WeibullDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeibullDistribution)[] = {
          { Py_tp_methods, t_WeibullDistribution__methods_ },
          { Py_tp_init, (void *) t_WeibullDistribution_init_ },
          { Py_tp_getset, t_WeibullDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeibullDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(WeibullDistribution, t_WeibullDistribution, WeibullDistribution);

        void t_WeibullDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(WeibullDistribution), &PY_TYPE_DEF(WeibullDistribution), module, "WeibullDistribution", 0);
        }

        void t_WeibullDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "class_", make_descriptor(WeibullDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "wrapfn_", make_descriptor(t_WeibullDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeibullDistribution::initializeClass, 1)))
            return NULL;
          return t_WeibullDistribution::wrap_Object(WeibullDistribution(((t_WeibullDistribution *) arg)->object.this$));
        }
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeibullDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          WeibullDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = WeibullDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSCivilianNavigationMessage::class$ = NULL;
            jmethodID *QZSSCivilianNavigationMessage::mids$ = NULL;
            bool QZSSCivilianNavigationMessage::live$ = false;

            jclass QZSSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSCivilianNavigationMessage::QZSSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}
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
            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSCivilianNavigationMessage, t_QZSSCivilianNavigationMessage, QZSSCivilianNavigationMessage);

            void t_QZSSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSCivilianNavigationMessage), &PY_TYPE_DEF(QZSSCivilianNavigationMessage), module, "QZSSCivilianNavigationMessage", 0);
            }

            void t_QZSSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "class_", make_descriptor(QZSSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_QZSSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSCivilianNavigationMessage::wrap_Object(QZSSCivilianNavigationMessage(((t_QZSSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              QZSSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = QZSSCivilianNavigationMessage(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FixedStepSelector.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FixedStepSelector::class$ = NULL;
      jmethodID *FixedStepSelector::mids$ = NULL;
      bool FixedStepSelector::live$ = false;

      jclass FixedStepSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FixedStepSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6e3d05f890ae5dd6] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_50850a0bb1306a34] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedStepSelector::FixedStepSelector(jdouble a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6e3d05f890ae5dd6, a0, a1.this$)) {}

      ::java::util::List FixedStepSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_50850a0bb1306a34], a0.this$, a1.this$));
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
      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args);

      static PyMethodDef t_FixedStepSelector__methods_[] = {
        DECLARE_METHOD(t_FixedStepSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedStepSelector)[] = {
        { Py_tp_methods, t_FixedStepSelector__methods_ },
        { Py_tp_init, (void *) t_FixedStepSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedStepSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedStepSelector, t_FixedStepSelector, FixedStepSelector);

      void t_FixedStepSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedStepSelector), &PY_TYPE_DEF(FixedStepSelector), module, "FixedStepSelector", 0);
      }

      void t_FixedStepSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "class_", make_descriptor(FixedStepSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "wrapfn_", make_descriptor(t_FixedStepSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedStepSelector::initializeClass, 1)))
          return NULL;
        return t_FixedStepSelector::wrap_Object(FixedStepSelector(((t_FixedStepSelector *) arg)->object.this$));
      }
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedStepSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        FixedStepSelector object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FixedStepSelector(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args)
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
#include "org/orekit/gnss/metric/parser/IgsSsrMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessagesParser::class$ = NULL;
          jmethodID *IgsSsrMessagesParser::mids$ = NULL;
          bool IgsSsrMessagesParser::live$ = false;

          jclass IgsSsrMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_7fab758a818e0182] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_c7387344adbf63af] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessagesParser::IgsSsrMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}
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
        namespace parser {
          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IgsSsrMessagesParser__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessagesParser)[] = {
            { Py_tp_methods, t_IgsSsrMessagesParser__methods_ },
            { Py_tp_init, (void *) t_IgsSsrMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessagesParser, t_IgsSsrMessagesParser, IgsSsrMessagesParser);

          void t_IgsSsrMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessagesParser), &PY_TYPE_DEF(IgsSsrMessagesParser), module, "IgsSsrMessagesParser", 0);
          }

          void t_IgsSsrMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "class_", make_descriptor(IgsSsrMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "wrapfn_", make_descriptor(t_IgsSsrMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessagesParser::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessagesParser::wrap_Object(IgsSsrMessagesParser(((t_IgsSsrMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            IgsSsrMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = IgsSsrMessagesParser(a0));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpReplayer.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createRugged_d1370324fdb0128e] = env->getMethodID(cls, "createRugged", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_execute_4adf2ac6176dd639] = env->getMethodID(cls, "execute", "(Lorg/orekit/rugged/api/Rugged;)[Lorg/orekit/rugged/errors/DumpReplayer$Result;");
            mids$[mid_parse_7e1d51614d5d6a43] = env->getMethodID(cls, "parse", "(Ljava/io/File;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DumpReplayer::DumpReplayer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::rugged::api::Rugged DumpReplayer::createRugged() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_createRugged_d1370324fdb0128e]));
        }

        JArray< ::org::orekit::rugged::errors::DumpReplayer$Result > DumpReplayer::execute(const ::org::orekit::rugged::api::Rugged & a0) const
        {
          return JArray< ::org::orekit::rugged::errors::DumpReplayer$Result >(env->callObjectMethod(this$, mids$[mid_execute_4adf2ac6176dd639], a0.this$));
        }

        void DumpReplayer::parse(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_parse_7e1d51614d5d6a43], a0.this$);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttraction::class$ = NULL;
            jmethodID *DSSTNewtonianAttraction::mids$ = NULL;
            bool DSSTNewtonianAttraction::live$ = false;
            ::java::lang::String *DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

            jclass DSSTNewtonianAttraction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getMeanElementRate_7d3eb19aa1e75a63] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_0483a0f94731abef] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMu_fd347811007a6ba3] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_3144241334d46411] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_5401e749436ec3b7] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttraction::DSSTNewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_7d3eb19aa1e75a63], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_0483a0f94731abef], a0.this$, a1.this$, a2.this$));
            }

            jdouble DSSTNewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_fd347811007a6ba3], a0.this$);
            }

            ::java::util::List DSSTNewtonianAttraction::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_6fb0c582e8925f89], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_3144241334d46411], a0.this$, a1.this$, a2.this$));
            }

            void DSSTNewtonianAttraction::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8e4d3ea100bc0095], a0.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_62f1ad39eb6f1276], a0.this$, a1.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_5401e749436ec3b7], a0.this$, a1.this$);
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
            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self);
            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttraction__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttraction, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttraction__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttraction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMu, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttraction)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttraction__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttraction_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttraction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttraction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttraction, t_DSSTNewtonianAttraction, DSSTNewtonianAttraction);

            void t_DSSTNewtonianAttraction::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttraction), &PY_TYPE_DEF(DSSTNewtonianAttraction), module, "DSSTNewtonianAttraction", 0);
            }

            void t_DSSTNewtonianAttraction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "class_", make_descriptor(DSSTNewtonianAttraction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "wrapfn_", make_descriptor(t_DSSTNewtonianAttraction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTNewtonianAttraction::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
            }

            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttraction::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttraction::wrap_Object(DSSTNewtonianAttraction(((t_DSSTNewtonianAttraction *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttraction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              DSSTNewtonianAttraction object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = DSSTNewtonianAttraction(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args)
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

            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getMu", arg);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
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

            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg)
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

            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
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

            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data)
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
#include "org/hipparchus/exception/UTF8Control.h"
#include "java/util/Locale.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/ResourceBundle.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *UTF8Control::class$ = NULL;
      jmethodID *UTF8Control::mids$ = NULL;
      bool UTF8Control::live$ = false;

      jclass UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_8ca50bd8ea3c1503] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTF8Control::UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::java::util::ResourceBundle UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_8ca50bd8ea3c1503], a0.this$, a1.this$, a2.this$, a3.this$, a4));
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
      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args);

      static PyMethodDef t_UTF8Control__methods_[] = {
        DECLARE_METHOD(t_UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTF8Control)[] = {
        { Py_tp_methods, t_UTF8Control__methods_ },
        { Py_tp_init, (void *) t_UTF8Control_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(UTF8Control, t_UTF8Control, UTF8Control);

      void t_UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(UTF8Control), &PY_TYPE_DEF(UTF8Control), module, "UTF8Control", 0);
      }

      void t_UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "class_", make_descriptor(UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "wrapfn_", make_descriptor(t_UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTF8Control::initializeClass, 1)))
          return NULL;
        return t_UTF8Control::wrap_Object(UTF8Control(((t_UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTF8Control_init_(t_UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        UTF8Control object((jobject) NULL);

        INT_CALL(object = UTF8Control());
        self->object = object;

        return 0;
      }

      static PyObject *t_UTF8Control_newBundle(t_UTF8Control *self, PyObject *args)
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

        return callSuper(PY_TYPE(UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *Month::class$ = NULL;
      jmethodID *Month::mids$ = NULL;
      bool Month::live$ = false;
      Month *Month::APRIL = NULL;
      Month *Month::AUGUST = NULL;
      Month *Month::DECEMBER = NULL;
      Month *Month::FEBRUARY = NULL;
      Month *Month::JANUARY = NULL;
      Month *Month::JULY = NULL;
      Month *Month::JUNE = NULL;
      Month *Month::MARCH = NULL;
      Month *Month::MAY = NULL;
      Month *Month::NOVEMBER = NULL;
      Month *Month::OCTOBER = NULL;
      Month *Month::SEPTEMBER = NULL;

      jclass Month::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/Month");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCapitalizedAbbreviation_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCapitalizedAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getCapitalizedName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCapitalizedName", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseAbbreviation_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLowerCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLowerCaseName", "()Ljava/lang/String;");
          mids$[mid_getMonth_fab8240f801e307f] = env->getStaticMethodID(cls, "getMonth", "(I)Lorg/orekit/time/Month;");
          mids$[mid_getNumber_55546ef6a647f39b] = env->getMethodID(cls, "getNumber", "()I");
          mids$[mid_getUpperCaseAbbreviation_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getUpperCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getUpperCaseName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getUpperCaseName", "()Ljava/lang/String;");
          mids$[mid_parseMonth_f4316336d73d53f1] = env->getStaticMethodID(cls, "parseMonth", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_valueOf_f4316336d73d53f1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_values_8e4a97337a848d9f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/time/Month;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          APRIL = new Month(env->getStaticObjectField(cls, "APRIL", "Lorg/orekit/time/Month;"));
          AUGUST = new Month(env->getStaticObjectField(cls, "AUGUST", "Lorg/orekit/time/Month;"));
          DECEMBER = new Month(env->getStaticObjectField(cls, "DECEMBER", "Lorg/orekit/time/Month;"));
          FEBRUARY = new Month(env->getStaticObjectField(cls, "FEBRUARY", "Lorg/orekit/time/Month;"));
          JANUARY = new Month(env->getStaticObjectField(cls, "JANUARY", "Lorg/orekit/time/Month;"));
          JULY = new Month(env->getStaticObjectField(cls, "JULY", "Lorg/orekit/time/Month;"));
          JUNE = new Month(env->getStaticObjectField(cls, "JUNE", "Lorg/orekit/time/Month;"));
          MARCH = new Month(env->getStaticObjectField(cls, "MARCH", "Lorg/orekit/time/Month;"));
          MAY = new Month(env->getStaticObjectField(cls, "MAY", "Lorg/orekit/time/Month;"));
          NOVEMBER = new Month(env->getStaticObjectField(cls, "NOVEMBER", "Lorg/orekit/time/Month;"));
          OCTOBER = new Month(env->getStaticObjectField(cls, "OCTOBER", "Lorg/orekit/time/Month;"));
          SEPTEMBER = new Month(env->getStaticObjectField(cls, "SEPTEMBER", "Lorg/orekit/time/Month;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Month::getCapitalizedAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedAbbreviation_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String Month::getCapitalizedName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedName_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String Month::getLowerCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseAbbreviation_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String Month::getLowerCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseName_1c1fa1e935d6cdcf]));
      }

      Month Month::getMonth(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_getMonth_fab8240f801e307f], a0));
      }

      jint Month::getNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumber_55546ef6a647f39b]);
      }

      ::java::lang::String Month::getUpperCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseAbbreviation_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String Month::getUpperCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseName_1c1fa1e935d6cdcf]));
      }

      Month Month::parseMonth(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_parseMonth_f4316336d73d53f1], a0.this$));
      }

      Month Month::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f4316336d73d53f1], a0.this$));
      }

      JArray< Month > Month::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Month >(env->callStaticObjectMethod(cls, mids$[mid_values_8e4a97337a848d9f]));
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
      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_of_(t_Month *self, PyObject *args);
      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self);
      static PyObject *t_Month_getCapitalizedName(t_Month *self);
      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getLowerCaseName(t_Month *self);
      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_getNumber(t_Month *self);
      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getUpperCaseName(t_Month *self);
      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Month_values(PyTypeObject *type);
      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__number(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data);
      static PyGetSetDef t_Month__fields_[] = {
        DECLARE_GET_FIELD(t_Month, capitalizedAbbreviation),
        DECLARE_GET_FIELD(t_Month, capitalizedName),
        DECLARE_GET_FIELD(t_Month, lowerCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, lowerCaseName),
        DECLARE_GET_FIELD(t_Month, number),
        DECLARE_GET_FIELD(t_Month, upperCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, upperCaseName),
        DECLARE_GET_FIELD(t_Month, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Month__methods_[] = {
        DECLARE_METHOD(t_Month, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, of_, METH_VARARGS),
        DECLARE_METHOD(t_Month, getCapitalizedAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getCapitalizedName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, getNumber, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, parseMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Month, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Month)[] = {
        { Py_tp_methods, t_Month__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Month__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Month)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Month, t_Month, Month);
      PyObject *t_Month::wrap_Object(const Month& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Month::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Month::install(PyObject *module)
      {
        installType(&PY_TYPE(Month), &PY_TYPE_DEF(Month), module, "Month", 0);
      }

      void t_Month::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "class_", make_descriptor(Month::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "wrapfn_", make_descriptor(t_Month::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "boxfn_", make_descriptor(boxObject));
        env->getClass(Month::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "APRIL", make_descriptor(t_Month::wrap_Object(*Month::APRIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "AUGUST", make_descriptor(t_Month::wrap_Object(*Month::AUGUST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "DECEMBER", make_descriptor(t_Month::wrap_Object(*Month::DECEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "FEBRUARY", make_descriptor(t_Month::wrap_Object(*Month::FEBRUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JANUARY", make_descriptor(t_Month::wrap_Object(*Month::JANUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JULY", make_descriptor(t_Month::wrap_Object(*Month::JULY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JUNE", make_descriptor(t_Month::wrap_Object(*Month::JUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MARCH", make_descriptor(t_Month::wrap_Object(*Month::MARCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MAY", make_descriptor(t_Month::wrap_Object(*Month::MAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "NOVEMBER", make_descriptor(t_Month::wrap_Object(*Month::NOVEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "OCTOBER", make_descriptor(t_Month::wrap_Object(*Month::OCTOBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "SEPTEMBER", make_descriptor(t_Month::wrap_Object(*Month::SEPTEMBER)));
      }

      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Month::initializeClass, 1)))
          return NULL;
        return t_Month::wrap_Object(Month(((t_Month *) arg)->object.this$));
      }
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Month::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Month_of_(t_Month *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getCapitalizedName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedName());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        Month result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::getMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_getNumber(t_Month *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getUpperCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::parseMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::valueOf(a0));
          return t_Month::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Month_values(PyTypeObject *type)
      {
        JArray< Month > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::Month::values());
        return JArray<jobject>(result.this$).wrap(t_Month::wrap_jobject);
      }
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedName());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseName());
        return j2p(value);
      }

      static PyObject *t_Month_get__number(t_Month *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBaseMessage::class$ = NULL;
          jmethodID *IonosphereBaseMessage::mids$ = NULL;
          bool IonosphereBaseMessage::live$ = false;

          jclass IonosphereBaseMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBaseMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2f7855eb8fb85f32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getTransmitTime_c325492395d89b24] = env->getMethodID(cls, "getTransmitTime", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_setTransmitTime_02135a6ef25adb4b] = env->getMethodID(cls, "setTransmitTime", "(Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBaseMessage::IonosphereBaseMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_2f7855eb8fb85f32, a0.this$, a1, a2.this$)) {}

          ::org::orekit::time::AbsoluteDate IonosphereBaseMessage::getTransmitTime() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTransmitTime_c325492395d89b24]));
          }

          void IonosphereBaseMessage::setTransmitTime(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmitTime_02135a6ef25adb4b], a0.this$);
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
          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self);
          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data);
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereBaseMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereBaseMessage, transmitTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBaseMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBaseMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, getTransmitTime, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBaseMessage, setTransmitTime, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBaseMessage)[] = {
            { Py_tp_methods, t_IonosphereBaseMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBaseMessage_init_ },
            { Py_tp_getset, t_IonosphereBaseMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBaseMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBaseMessage, t_IonosphereBaseMessage, IonosphereBaseMessage);

          void t_IonosphereBaseMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBaseMessage), &PY_TYPE_DEF(IonosphereBaseMessage), module, "IonosphereBaseMessage", 0);
          }

          void t_IonosphereBaseMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "class_", make_descriptor(IonosphereBaseMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "wrapfn_", make_descriptor(t_IonosphereBaseMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBaseMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBaseMessage::wrap_Object(IonosphereBaseMessage(((t_IonosphereBaseMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBaseMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBaseMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBaseMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTransmitTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmitTime", arg);
            return NULL;
          }

          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTransmitTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmitTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegratorFactory::class$ = NULL;
          jmethodID *GaussIntegratorFactory::mids$ = NULL;
          bool GaussIntegratorFactory::live$ = false;
          jint GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS = (jint) 0;

          jclass GaussIntegratorFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_hermite_a6e7a9f494780876] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator;");
              mids$[mid_laguerre_7b26da4847fc245c] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_7b26da4847fc245c] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_3010934f1f4f591c] = env->getMethodID(cls, "legendre", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_7b26da4847fc245c] = env->getMethodID(cls, "legendreHighPrecision", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_3010934f1f4f591c] = env->getMethodID(cls, "legendreHighPrecision", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_DECIMAL_DIGITS = env->getStaticIntField(cls, "DEFAULT_DECIMAL_DIGITS");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegratorFactory::GaussIntegratorFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          GaussIntegratorFactory::GaussIntegratorFactory(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator GaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_a6e7a9f494780876], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_7b26da4847fc245c], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_7b26da4847fc245c], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_3010934f1f4f591c], a0, a1, a2));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_7b26da4847fc245c], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_3010934f1f4f591c], a0, a1, a2));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg);
          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args);
          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args);

          static PyMethodDef t_GaussIntegratorFactory__methods_[] = {
            DECLARE_METHOD(t_GaussIntegratorFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegratorFactory, hermite, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, laguerre, METH_O),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendre, METH_VARARGS),
            DECLARE_METHOD(t_GaussIntegratorFactory, legendreHighPrecision, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegratorFactory)[] = {
            { Py_tp_methods, t_GaussIntegratorFactory__methods_ },
            { Py_tp_init, (void *) t_GaussIntegratorFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegratorFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegratorFactory, t_GaussIntegratorFactory, GaussIntegratorFactory);

          void t_GaussIntegratorFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegratorFactory), &PY_TYPE_DEF(GaussIntegratorFactory), module, "GaussIntegratorFactory", 0);
          }

          void t_GaussIntegratorFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "class_", make_descriptor(GaussIntegratorFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "wrapfn_", make_descriptor(t_GaussIntegratorFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GaussIntegratorFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegratorFactory), "DEFAULT_DECIMAL_DIGITS", make_descriptor(GaussIntegratorFactory::DEFAULT_DECIMAL_DIGITS));
          }

          static PyObject *t_GaussIntegratorFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegratorFactory::initializeClass, 1)))
              return NULL;
            return t_GaussIntegratorFactory::wrap_Object(GaussIntegratorFactory(((t_GaussIntegratorFactory *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegratorFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegratorFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegratorFactory_init_(t_GaussIntegratorFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GaussIntegratorFactory object((jobject) NULL);

                INT_CALL(object = GaussIntegratorFactory());
                self->object = object;
                break;
              }
             case 1:
              {
                jint a0;
                GaussIntegratorFactory object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = GaussIntegratorFactory(a0));
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

          static PyObject *t_GaussIntegratorFactory_hermite(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.hermite(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_SymmetricGaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "hermite", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_laguerre(t_GaussIntegratorFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.laguerre(a0));
              return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "laguerre", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendre(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendre(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendre(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendre", args);
            return NULL;
          }

          static PyObject *t_GaussIntegratorFactory_legendreHighPrecision(t_GaussIntegratorFactory *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                ::org::hipparchus::analysis::integration::gauss::GaussIntegrator result((jobject) NULL);

                if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.legendreHighPrecision(a0, a1, a2));
                  return ::org::hipparchus::analysis::integration::gauss::t_GaussIntegrator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "legendreHighPrecision", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Parser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Parser::class$ = NULL;
        jmethodID *SP3Parser::mids$ = NULL;
        bool SP3Parser::live$ = false;
        ::java::lang::String *SP3Parser::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_parse_623ea2851dad0ac0] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/sp3/SP3;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Parser::SP3Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::files::sp3::SP3 SP3Parser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::sp3::SP3(env->callObjectMethod(this$, mids$[mid_parse_623ea2851dad0ac0], a0.this$));
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
      namespace sp3 {
        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg);

        static PyMethodDef t_SP3Parser__methods_[] = {
          DECLARE_METHOD(t_SP3Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Parser)[] = {
          { Py_tp_methods, t_SP3Parser__methods_ },
          { Py_tp_init, (void *) t_SP3Parser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Parser, t_SP3Parser, SP3Parser);

        void t_SP3Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Parser), &PY_TYPE_DEF(SP3Parser), module, "SP3Parser", 0);
        }

        void t_SP3Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "class_", make_descriptor(SP3Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "wrapfn_", make_descriptor(t_SP3Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Parser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Parser::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Parser::initializeClass, 1)))
            return NULL;
          return t_SP3Parser::wrap_Object(SP3Parser(((t_SP3Parser *) arg)->object.this$));
        }
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds)
        {
          SP3Parser object((jobject) NULL);

          INT_CALL(object = SP3Parser());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::sp3::SP3 result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::sp3::t_SP3::wrap_Object(result);
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
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *RealDistribution::class$ = NULL;
      jmethodID *RealDistribution::mids$ = NULL;
      bool RealDistribution::live$ = false;

      jclass RealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/RealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
          mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
          mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
          mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
          mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
          mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");
          mids$[mid_probability_99e3200dafc19573] = env->getMethodID(cls, "probability", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealDistribution::cumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
      }

      jdouble RealDistribution::density(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
      }

      jdouble RealDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
      }

      jdouble RealDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
      }

      jdouble RealDistribution::getSupportLowerBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
      }

      jdouble RealDistribution::getSupportUpperBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
      }

      jdouble RealDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
      }

      jboolean RealDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
      }

      jdouble RealDistribution::logDensity(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
      }

      jdouble RealDistribution::probability(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_99e3200dafc19573], a0, a1);
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
      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self);
      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args);
      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data);
      static PyGetSetDef t_RealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_RealDistribution, numericalMean),
        DECLARE_GET_FIELD(t_RealDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_RealDistribution, supportConnected),
        DECLARE_GET_FIELD(t_RealDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_RealDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealDistribution__methods_[] = {
        DECLARE_METHOD(t_RealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, density, METH_O),
        DECLARE_METHOD(t_RealDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, logDensity, METH_O),
        DECLARE_METHOD(t_RealDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealDistribution)[] = {
        { Py_tp_methods, t_RealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealDistribution, t_RealDistribution, RealDistribution);

      void t_RealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(RealDistribution), &PY_TYPE_DEF(RealDistribution), module, "RealDistribution", 0);
      }

      void t_RealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "class_", make_descriptor(RealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "wrapfn_", make_descriptor(t_RealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealDistribution::initializeClass, 1)))
          return NULL;
        return t_RealDistribution::wrap_Object(RealDistribution(((t_RealDistribution *) arg)->object.this$));
      }
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.logDensity(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.probability(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *LocalizedGeometryFormats::class$ = NULL;
      jmethodID *LocalizedGeometryFormats::mids$ = NULL;
      bool LocalizedGeometryFormats::live$ = false;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSE_VERTICES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUT_OF_PLANE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::TOO_SMALL_TOLERANCE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = NULL;

      jclass LocalizedGeometryFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/LocalizedGeometryFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_26070c28e6ea354d] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_caa6b78ce82a35d8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/LocalizedGeometryFormats;");
          mids$[mid_values_ea6a946c0203fef0] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/LocalizedGeometryFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSE_VERTICES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSE_VERTICES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CROSSING_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CROSSING_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          EDGE_CONNECTED_TO_ONE_FACET = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "EDGE_CONNECTED_TO_ONE_FACET", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_ORIENTATION_MISMATCH = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_ORIENTATION_MISMATCH", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_WITH_SEVERAL_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INCONSISTENT_STATE_AT_2_PI_WRAPPING = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INCONSISTENT_STATE_AT_2_PI_WRAPPING", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INVALID_ROTATION_ORDER_NAME = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INVALID_ROTATION_ORDER_NAME", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NON_INVERTIBLE_TRANSFORM = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NON_INVERTIBLE_TRANSFORM", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX_HYPERPLANES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX_HYPERPLANES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_SUPPORTED_IN_DIMENSION_N = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_IN_DIMENSION_N", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUTLINE_BOUNDARY_LOOP_OPEN = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUTLINE_BOUNDARY_LOOP_OPEN", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUT_OF_PLANE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUT_OF_PLANE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ROTATION_MATRIX_DIMENSIONS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ROTATION_MATRIX_DIMENSIONS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          TOO_SMALL_TOLERANCE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "TOO_SMALL_TOLERANCE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          UNABLE_TO_ORTHOGONOLIZE_MATRIX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "UNABLE_TO_ORTHOGONOLIZE_MATRIX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_AXIS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_AXIS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedGeometryFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_26070c28e6ea354d], a0.this$));
      }

      ::java::lang::String LocalizedGeometryFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_1c1fa1e935d6cdcf]));
      }

      LocalizedGeometryFormats LocalizedGeometryFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedGeometryFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_caa6b78ce82a35d8], a0.this$));
      }

      JArray< LocalizedGeometryFormats > LocalizedGeometryFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedGeometryFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_ea6a946c0203fef0]));
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
      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self);
      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data);
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data);
      static PyGetSetDef t_LocalizedGeometryFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedGeometryFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedGeometryFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedGeometryFormats)[] = {
        { Py_tp_methods, t_LocalizedGeometryFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedGeometryFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedGeometryFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedGeometryFormats, t_LocalizedGeometryFormats, LocalizedGeometryFormats);
      PyObject *t_LocalizedGeometryFormats::wrap_Object(const LocalizedGeometryFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedGeometryFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedGeometryFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedGeometryFormats), &PY_TYPE_DEF(LocalizedGeometryFormats), module, "LocalizedGeometryFormats", 0);
      }

      void t_LocalizedGeometryFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "class_", make_descriptor(LocalizedGeometryFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "wrapfn_", make_descriptor(t_LocalizedGeometryFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedGeometryFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSE_VERTICES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSE_VERTICES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CROSSING_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "EDGE_CONNECTED_TO_ONE_FACET", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_ORIENTATION_MISMATCH", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INCONSISTENT_STATE_AT_2_PI_WRAPPING", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INVALID_ROTATION_ORDER_NAME", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NON_INVERTIBLE_TRANSFORM", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX_HYPERPLANES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_SUPPORTED_IN_DIMENSION_N", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUTLINE_BOUNDARY_LOOP_OPEN", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUT_OF_PLANE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUT_OF_PLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ROTATION_MATRIX_DIMENSIONS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "TOO_SMALL_TOLERANCE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::TOO_SMALL_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "UNABLE_TO_ORTHOGONOLIZE_MATRIX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_AXIS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR)));
      }

      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedGeometryFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedGeometryFormats::wrap_Object(LocalizedGeometryFormats(((t_LocalizedGeometryFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedGeometryFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg)
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

      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedGeometryFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::valueOf(a0));
          return t_LocalizedGeometryFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedGeometryFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedGeometryFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Data::class$ = NULL;
              jmethodID *SsrIgm02Data::mids$ = NULL;
              bool SsrIgm02Data::live$ = false;

              jclass SsrIgm02Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_3ae426f140e5e927] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_56b7531fea488c5a] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Data::SsrIgm02Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm02Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_3ae426f140e5e927]));
              }

              void SsrIgm02Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self);
              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg);
              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data);
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm02Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm02Data, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm02Data, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Data)[] = {
                { Py_tp_methods, t_SsrIgm02Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Data_init_ },
                { Py_tp_getset, t_SsrIgm02Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Data, t_SsrIgm02Data, SsrIgm02Data);

              void t_SsrIgm02Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Data), &PY_TYPE_DEF(SsrIgm02Data), module, "SsrIgm02Data", 0);
              }

              void t_SsrIgm02Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "class_", make_descriptor(SsrIgm02Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "wrapfn_", make_descriptor(t_SsrIgm02Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Data::wrap_Object(SsrIgm02Data(((t_SsrIgm02Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Data object((jobject) NULL);

                INT_CALL(object = SsrIgm02Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg)
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

              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data)
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
#include "org/orekit/estimation/leastsquares/PythonBatchLSObserver.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_d4b8efc731d06215] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonBatchLSObserver::PythonBatchLSObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonBatchLSObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonBatchLSObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonBatchLSObserver::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonBatchLSObserver::mids$[PythonBatchLSObserver::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
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
#include "org/orekit/files/ccsds/ndm/adm/PythonAdmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *PythonAdmParser::class$ = NULL;
            jmethodID *PythonAdmParser::mids$ = NULL;
            bool PythonAdmParser::live$ = false;

            jclass PythonAdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/PythonAdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_2ec5724104d9082e] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_beec2990b8b4fe1e] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAdmParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args);
            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self);
            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args);
            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data);
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data);
            static PyGetSetDef t_PythonAdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAdmParser, self),
              DECLARE_GET_FIELD(t_PythonAdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonAdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAdmParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAdmParser)[] = {
              { Py_tp_methods, t_PythonAdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
              NULL
            };

            DEFINE_TYPE(PythonAdmParser, t_PythonAdmParser, PythonAdmParser);
            PyObject *t_PythonAdmParser::wrap_Object(const PythonAdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAdmParser), &PY_TYPE_DEF(PythonAdmParser), module, "PythonAdmParser", 1);
            }

            void t_PythonAdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "class_", make_descriptor(PythonAdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "wrapfn_", make_descriptor(t_PythonAdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;", (void *) t_PythonAdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonAdmParser::wrap_Object(PythonAdmParser(((t_PythonAdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
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

            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_6c0ce7e438e5ded4]);
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

            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data)
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
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data)
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
#include "org/hipparchus/ode/Parameterizable.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *Parameterizable::class$ = NULL;
      jmethodID *Parameterizable::mids$ = NULL;
      bool Parameterizable::live$ = false;

      jclass Parameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/Parameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParametersNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_cde6b28e15c96b75] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List Parameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_e62d3bb06d56d7e3]));
      }

      jboolean Parameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_cde6b28e15c96b75], a0.this$);
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
      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self);
      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg);
      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data);
      static PyGetSetDef t_Parameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_Parameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Parameterizable__methods_[] = {
        DECLARE_METHOD(t_Parameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_Parameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Parameterizable)[] = {
        { Py_tp_methods, t_Parameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Parameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Parameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Parameterizable, t_Parameterizable, Parameterizable);

      void t_Parameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Parameterizable), &PY_TYPE_DEF(Parameterizable), module, "Parameterizable", 0);
      }

      void t_Parameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "class_", make_descriptor(Parameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "wrapfn_", make_descriptor(t_Parameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Parameterizable::initializeClass, 1)))
          return NULL;
        return t_Parameterizable::wrap_Object(Parameterizable(((t_Parameterizable *) arg)->object.this$));
      }
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Parameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg)
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

      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data)
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
#include "org/orekit/orbits/PythonLibrationOrbit.h"
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonLibrationOrbit::class$ = NULL;
      jmethodID *PythonLibrationOrbit::mids$ = NULL;
      bool PythonLibrationOrbit::live$ = false;

      jclass PythonLibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonLibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_61210a58b1c5967a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_57264af3b06f967f] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLibrationOrbit::PythonLibrationOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_61210a58b1c5967a, a0.this$, a1.this$, a2)) {}

      void PythonLibrationOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonLibrationOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonLibrationOrbit::pythonExtension(jlong a0) const
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
    namespace orbits {
      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self);
      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args);
      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data);
      static PyGetSetDef t_PythonLibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLibrationOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonLibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLibrationOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLibrationOrbit)[] = {
        { Py_tp_methods, t_PythonLibrationOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonLibrationOrbit_init_ },
        { Py_tp_getset, t_PythonLibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLibrationOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(PythonLibrationOrbit, t_PythonLibrationOrbit, PythonLibrationOrbit);

      void t_PythonLibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLibrationOrbit), &PY_TYPE_DEF(PythonLibrationOrbit), module, "PythonLibrationOrbit", 1);
      }

      void t_PythonLibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "class_", make_descriptor(PythonLibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "wrapfn_", make_descriptor(t_PythonLibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLibrationOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonLibrationOrbit_applyCorrectionOnPV0 },
          { "pythonDecRef", "()V", (void *) t_PythonLibrationOrbit_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonLibrationOrbit::wrap_Object(PythonLibrationOrbit(((t_PythonLibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
        jdouble a2;
        PythonLibrationOrbit object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonLibrationOrbit(a0, a1, a2));
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

      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args)
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

      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::orbits::t_CR3BPDifferentialCorrection::wrap_Object(::org::orekit::orbits::CR3BPDifferentialCorrection(a0));
        PyObject *result = PyObject_CallMethod(obj, "applyCorrectionOnPV", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
        {
          throwTypeError("applyCorrectionOnPV", result);
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

      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data)
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
#include "org/hipparchus/fraction/FractionField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionField::class$ = NULL;
      jmethodID *FractionField::mids$ = NULL;
      bool FractionField::live$ = false;

      jclass FractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_1e2decbb84e0a2b6] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getOne_7ab72bcbb3909669] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_7ab72bcbb3909669] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      FractionField FractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_1e2decbb84e0a2b6]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getOne() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getOne_7ab72bcbb3909669]));
      }

      ::java::lang::Class FractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getZero() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getZero_7ab72bcbb3909669]));
      }

      jint FractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_getInstance(PyTypeObject *type);
      static PyObject *t_FractionField_getOne(t_FractionField *self);
      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self);
      static PyObject *t_FractionField_getZero(t_FractionField *self);
      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data);
      static PyGetSetDef t_FractionField__fields_[] = {
        DECLARE_GET_FIELD(t_FractionField, instance),
        DECLARE_GET_FIELD(t_FractionField, one),
        DECLARE_GET_FIELD(t_FractionField, runtimeClass),
        DECLARE_GET_FIELD(t_FractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionField__methods_[] = {
        DECLARE_METHOD(t_FractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionField)[] = {
        { Py_tp_methods, t_FractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FractionField, t_FractionField, FractionField);

      void t_FractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionField), &PY_TYPE_DEF(FractionField), module, "FractionField", 0);
      }

      void t_FractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "class_", make_descriptor(FractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "wrapfn_", make_descriptor(t_FractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionField::initializeClass, 1)))
          return NULL;
        return t_FractionField::wrap_Object(FractionField(((t_FractionField *) arg)->object.this$));
      }
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FractionField_getInstance(PyTypeObject *type)
      {
        FractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::FractionField::getInstance());
        return t_FractionField::wrap_Object(result);
      }

      static PyObject *t_FractionField_getOne(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
      }

      static PyObject *t_FractionField_getZero(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data)
      {
        FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_FractionField::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/AdjustmentContext.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *AdjustmentContext::class$ = NULL;
        jmethodID *AdjustmentContext::mids$ = NULL;
        bool AdjustmentContext::live$ = false;

        jclass AdjustmentContext::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/AdjustmentContext");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ebc2314e09dfe0c8] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;Lorg/orekit/rugged/adjustment/measurements/Observables;)V");
            mids$[mid_estimateFreeParameters_75fd08e48639cd4b] = env->getMethodID(cls, "estimateFreeParameters", "(Ljava/util/Collection;ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_setOptimizer_c5aa51c2423b63eb] = env->getMethodID(cls, "setOptimizer", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdjustmentContext::AdjustmentContext(const ::java::util::Collection & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc2314e09dfe0c8, a0.this$, a1.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum AdjustmentContext::estimateFreeParameters(const ::java::util::Collection & a0, jint a1, jdouble a2) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_estimateFreeParameters_75fd08e48639cd4b], a0.this$, a1, a2));
        }

        void AdjustmentContext::setOptimizer(const ::org::orekit::rugged::adjustment::OptimizerId & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOptimizer_c5aa51c2423b63eb], a0.this$);
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
        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args);
        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg);
        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data);
        static PyGetSetDef t_AdjustmentContext__fields_[] = {
          DECLARE_SET_FIELD(t_AdjustmentContext, optimizer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdjustmentContext__methods_[] = {
          DECLARE_METHOD(t_AdjustmentContext, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, estimateFreeParameters, METH_VARARGS),
          DECLARE_METHOD(t_AdjustmentContext, setOptimizer, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdjustmentContext)[] = {
          { Py_tp_methods, t_AdjustmentContext__methods_ },
          { Py_tp_init, (void *) t_AdjustmentContext_init_ },
          { Py_tp_getset, t_AdjustmentContext__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdjustmentContext)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdjustmentContext, t_AdjustmentContext, AdjustmentContext);

        void t_AdjustmentContext::install(PyObject *module)
        {
          installType(&PY_TYPE(AdjustmentContext), &PY_TYPE_DEF(AdjustmentContext), module, "AdjustmentContext", 0);
        }

        void t_AdjustmentContext::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "class_", make_descriptor(AdjustmentContext::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "wrapfn_", make_descriptor(t_AdjustmentContext::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdjustmentContext::initializeClass, 1)))
            return NULL;
          return t_AdjustmentContext::wrap_Object(AdjustmentContext(((t_AdjustmentContext *) arg)->object.this$));
        }
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdjustmentContext::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          AdjustmentContext object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Collection::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            INT_CALL(object = AdjustmentContext(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jdouble a2;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArgs(args, "KID", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateFreeParameters(a0, a1, a2));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateFreeParameters", args);
          return NULL;
        }

        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg)
        {
          ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
          {
            OBJ_CALL(self->object.setOptimizer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOptimizer", arg);
          return NULL;
        }

        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::adjustment::OptimizerId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &value))
            {
              INT_CALL(self->object.setOptimizer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "optimizer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *HarmonicCurveFitter$ParameterGuesser::mids$ = NULL;
      bool HarmonicCurveFitter$ParameterGuesser::live$ = false;

      jclass HarmonicCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d8f123763cd893c] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_25e1757a36c4dde2] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter$ParameterGuesser::HarmonicCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d8f123763cd893c, a0.this$)) {}

      JArray< jdouble > HarmonicCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_25e1757a36c4dde2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_HarmonicCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_HarmonicCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter$ParameterGuesser, t_HarmonicCurveFitter$ParameterGuesser, HarmonicCurveFitter$ParameterGuesser);

      void t_HarmonicCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter$ParameterGuesser), &PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser), module, "HarmonicCurveFitter$ParameterGuesser", 0);
      }

      void t_HarmonicCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "class_", make_descriptor(HarmonicCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_HarmonicCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter$ParameterGuesser::wrap_Object(HarmonicCurveFitter$ParameterGuesser(((t_HarmonicCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        HarmonicCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = HarmonicCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ItrfVersionProvider::class$ = NULL;
      jmethodID *ItrfVersionProvider::mids$ = NULL;
      bool ItrfVersionProvider::live$ = false;

      jclass ItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConfiguration_c175c26b8f14b277] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ItrfVersionProvider::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_c175c26b8f14b277], a0.this$, a1));
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
      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args);

      static PyMethodDef t_ItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_ItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ItrfVersionProvider)[] = {
        { Py_tp_methods, t_ItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ItrfVersionProvider, t_ItrfVersionProvider, ItrfVersionProvider);

      void t_ItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ItrfVersionProvider), &PY_TYPE_DEF(ItrfVersionProvider), module, "ItrfVersionProvider", 0);
      }

      void t_ItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "class_", make_descriptor(ItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "wrapfn_", make_descriptor(t_ItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_ItrfVersionProvider::wrap_Object(ItrfVersionProvider(((t_ItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventSlopeFilter.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0eea4ce3fbabb3da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_e78af9d734a5fbe1] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_562d2ef857953f3f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0eea4ce3fbabb3da, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_e78af9d734a5fbe1]));
        }

        void FieldEventSlopeFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedEop::class$ = NULL;
      jmethodID *LazyLoadedEop::mids$ = NULL;
      bool LazyLoadedEop::live$ = false;

      jclass LazyLoadedEop::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedEop");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_71b020e53c8af149] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_6b707ef41041f12b] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_6b707ef41041f12b] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addEOPHistoryLoader_f075adbabba5d6bc] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getDataProvidersManager_58cee34d9bd73f33] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getEOPHistory_8c7e98e10e57372e] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/time/TimeScales;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_8ba9fe7a847cecad] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");
          mids$[mid_setInterpolationDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedEop::LazyLoadedEop(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71b020e53c8af149, a0.this$)) {}

      void LazyLoadedEop::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_6b707ef41041f12b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_6b707ef41041f12b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_f075adbabba5d6bc], a0.this$, a1.this$);
      }

      void LazyLoadedEop::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2]);
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedEop::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_58cee34d9bd73f33]));
      }

      ::org::orekit::frames::EOPHistory LazyLoadedEop::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_8c7e98e10e57372e], a0.this$, a1, a2.this$));
      }

      void LazyLoadedEop::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_8ba9fe7a847cecad], a0);
      }

      void LazyLoadedEop::setInterpolationDegree(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_44ed599e93e8a30c], a0);
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
      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data);
      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedEop__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedEop, dataProvidersManager),
        DECLARE_SET_FIELD(t_LazyLoadedEop, eOPContinuityThreshold),
        DECLARE_SET_FIELD(t_LazyLoadedEop, interpolationDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedEop__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedEop, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, setEOPContinuityThreshold, METH_O),
        DECLARE_METHOD(t_LazyLoadedEop, setInterpolationDegree, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedEop)[] = {
        { Py_tp_methods, t_LazyLoadedEop__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedEop_init_ },
        { Py_tp_getset, t_LazyLoadedEop__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedEop)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedEop, t_LazyLoadedEop, LazyLoadedEop);

      void t_LazyLoadedEop::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedEop), &PY_TYPE_DEF(LazyLoadedEop), module, "LazyLoadedEop", 0);
      }

      void t_LazyLoadedEop::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "class_", make_descriptor(LazyLoadedEop::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "wrapfn_", make_descriptor(t_LazyLoadedEop::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedEop::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedEop::wrap_Object(LazyLoadedEop(((t_LazyLoadedEop *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedEop::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        LazyLoadedEop object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedEop(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1, a2));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setInterpolationDegree(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setInterpolationDegree(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Patera2005::class$ = NULL;
              jmethodID *Patera2005::mids$ = NULL;
              bool Patera2005::live$ = false;

              jclass Patera2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_e1d28ae60eab08d7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_f84396b6984702e2] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_978e207e20e445e6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Patera2005::Patera2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              Patera2005::Patera2005(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_e1d28ae60eab08d7, a0.this$, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Patera2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f84396b6984702e2], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Patera2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_978e207e20e445e6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Patera2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_8397a286d982b383]));
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
              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args);
              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data);
              static PyGetSetDef t_Patera2005__fields_[] = {
                DECLARE_GET_FIELD(t_Patera2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Patera2005__methods_[] = {
                DECLARE_METHOD(t_Patera2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Patera2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Patera2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Patera2005)[] = {
                { Py_tp_methods, t_Patera2005__methods_ },
                { Py_tp_init, (void *) t_Patera2005_init_ },
                { Py_tp_getset, t_Patera2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Patera2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Patera2005, t_Patera2005, Patera2005);

              void t_Patera2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Patera2005), &PY_TYPE_DEF(Patera2005), module, "Patera2005", 0);
              }

              void t_Patera2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "class_", make_descriptor(Patera2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "wrapfn_", make_descriptor(t_Patera2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Patera2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Patera2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Patera2005::initializeClass, 1)))
                  return NULL;
                return t_Patera2005::wrap_Object(Patera2005(((t_Patera2005 *) arg)->object.this$));
              }
              static PyObject *t_Patera2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Patera2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Patera2005_init_(t_Patera2005 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Patera2005 object((jobject) NULL);

                    INT_CALL(object = Patera2005());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
                    jint a1;
                    Patera2005 object((jobject) NULL);

                    if (!parseArgs(args, "kI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1))
                    {
                      INT_CALL(object = Patera2005(a0, a1));
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

              static PyObject *t_Patera2005_compute(t_Patera2005 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 7:
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Patera2005_getType(t_Patera2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Patera2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Patera2005_get__type(t_Patera2005 *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Boolean.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadata::class$ = NULL;
              jmethodID *AemMetadata::mids$ = NULL;
              bool AemMetadata::live$ = false;

              jclass AemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getAttitudeType_bcbb9cd2c002f9bf] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                  mids$[mid_getEndpoints_c60ad1d207bc8e06] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_513511eeab1350d5] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getFrameAngvelFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getFrameAngvelFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInterpolationDegree_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStartTime_c325492395d89b24] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_c325492395d89b24] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_c325492395d89b24] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_c325492395d89b24] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_isFirst_34d396f05e4572d8] = env->getMethodID(cls, "isFirst", "()Ljava/lang/Boolean;");
                  mids$[mid_isSpacecraftBodyRate_9ab94ac1dc23b105] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_9ab94ac1dc23b105] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setAngvelFrame_4755133c5c4c59be] = env->getMethodID(cls, "setAngvelFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setAttitudeType_99b2da2ae2d39db5] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;)V");
                  mids$[mid_setEulerRotSeq_062f1951e591952f] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInterpolationDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_734b91ac30d5f9b4] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                  mids$[mid_setIsFirst_fcb96c98de6fad04] = env->getMethodID(cls, "setIsFirst", "(Z)V");
                  mids$[mid_setRateFrameIsA_fcb96c98de6fad04] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_setStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemMetadata::AemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeType AemMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_bcbb9cd2c002f9bf]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AemMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c60ad1d207bc8e06]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AemMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_513511eeab1350d5]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AemMetadata::getFrameAngvelFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameAngvelFrame_69d8be1b6b0a1a94]));
              }

              jint AemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_55546ef6a647f39b]);
              }

              ::java::lang::String AemMetadata::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf]));
              }

              jint AemMetadata::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_55546ef6a647f39b]);
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_c325492395d89b24]));
              }

              ::java::lang::Boolean AemMetadata::isFirst() const
              {
                return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isFirst_34d396f05e4572d8]));
              }

              jboolean AemMetadata::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_9ab94ac1dc23b105]);
              }

              jboolean AemMetadata::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_9ab94ac1dc23b105]);
              }

              void AemMetadata::setAngvelFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngvelFrame_4755133c5c4c59be], a0.this$);
              }

              void AemMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::AttitudeType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_99b2da2ae2d39db5], a0.this$);
              }

              void AemMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_062f1951e591952f], a0.this$);
              }

              void AemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_44ed599e93e8a30c], a0);
              }

              void AemMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_734b91ac30d5f9b4], a0.this$);
              }

              void AemMetadata::setIsFirst(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsFirst_fcb96c98de6fad04], a0);
              }

              void AemMetadata::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_fcb96c98de6fad04], a0);
              }

              void AemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_02135a6ef25adb4b], a0.this$);
              }

              void AemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_02135a6ef25adb4b], a0.this$);
              }

              void AemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_02135a6ef25adb4b], a0.this$);
              }

              void AemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_02135a6ef25adb4b], a0.this$);
              }

              void AemMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self);
              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self);
              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args);
              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AemMetadata__fields_[] = {
                DECLARE_SET_FIELD(t_AemMetadata, angvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AemMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AemMetadata, eulerRotSeq),
                DECLARE_GET_FIELD(t_AemMetadata, first),
                DECLARE_GET_FIELD(t_AemMetadata, frameAngvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationMethod),
                DECLARE_GET_FIELD(t_AemMetadata, interpolationSamples),
                DECLARE_GET_FIELD(t_AemMetadata, spacecraftBodyRate),
                DECLARE_GET_FIELD(t_AemMetadata, start),
                DECLARE_GETSET_FIELD(t_AemMetadata, startTime),
                DECLARE_GET_FIELD(t_AemMetadata, stop),
                DECLARE_GETSET_FIELD(t_AemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadata__methods_[] = {
                DECLARE_METHOD(t_AemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getFrameAngvelFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStop, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isFirst, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, setAngvelFrame, METH_O),
                DECLARE_METHOD(t_AemMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AemMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_AemMetadata, setIsFirst, METH_O),
                DECLARE_METHOD(t_AemMetadata, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadata)[] = {
                { Py_tp_methods, t_AemMetadata__methods_ },
                { Py_tp_init, (void *) t_AemMetadata_init_ },
                { Py_tp_getset, t_AemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AemMetadata, t_AemMetadata, AemMetadata);

              void t_AemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadata), &PY_TYPE_DEF(AemMetadata), module, "AemMetadata", 0);
              }

              void t_AemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "class_", make_descriptor(AemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "wrapfn_", make_descriptor(t_AemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadata::initializeClass, 1)))
                  return NULL;
                return t_AemMetadata::wrap_Object(AemMetadata(((t_AemMetadata *) arg)->object.this$));
              }
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                AemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = AemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self)
              {
                ::java::lang::Boolean result((jobject) NULL);
                OBJ_CALL(result = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAngvelFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngvelFrame", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsFirst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsFirst", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAngvelFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angvelFrame", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(value);
              }
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data)
              {
                ::java::lang::Boolean value((jobject) NULL);
                OBJ_CALL(value = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockRealMatrix::class$ = NULL;
      jmethodID *BlockRealMatrix::mids$ = NULL;
      bool BlockRealMatrix::live$ = false;
      jint BlockRealMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_07adb42ffaa97d31] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_84967766e6e8303c] = env->getMethodID(cls, "<init>", "(II[[DZ)V");
          mids$[mid_add_823baf7c4b8432f2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_add_57478e87aa8391db] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_addToEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_87b0d3e5ef669cc1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_createBlocksLayout_4bd4edddfa48c3b3] = env->getStaticMethodID(cls, "createBlocksLayout", "(II)[[D");
          mids$[mid_createMatrix_26d25f5dccee563e] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumn_bb2a44a76ad252f7] = env->getMethodID(cls, "getColumn", "(I)[D");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_6f4c7d1a6929df67] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getColumnVector_b50dc3915c68ddbc] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getData_3b7b373db8e7887f] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getEntry_cad98089d00f8a5b] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getFrobeniusNorm_b74f83833fdad017] = env->getMethodID(cls, "getFrobeniusNorm", "()D");
          mids$[mid_getNorm1_b74f83833fdad017] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInfty_b74f83833fdad017] = env->getMethodID(cls, "getNormInfty", "()D");
          mids$[mid_getRow_bb2a44a76ad252f7] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_6f4c7d1a6929df67] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_getRowVector_b50dc3915c68ddbc] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSubMatrix_7784b674b3254595] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_823baf7c4b8432f2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiply_57478e87aa8391db] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_823baf7c4b8432f2] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_multiplyTransposed_57478e87aa8391db] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_operate_14dee4cb8cc3e959] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_14dee4cb8cc3e959] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_scalarAdd_bf9d7a428ea4c205] = env->getMethodID(cls, "scalarAdd", "(D)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_scalarMultiply_f5dd9d6021dc9dae] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setColumn_75061e5f5bbace93] = env->getMethodID(cls, "setColumn", "(I[D)V");
          mids$[mid_setColumnMatrix_74dda270996520c8] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setColumnVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_75061e5f5bbace93] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setRowMatrix_6c624781ed5c298a] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockRealMatrix;)V");
          mids$[mid_setRowMatrix_74dda270996520c8] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_setRowVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_setSubMatrix_f12104c26dcf5b23] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_subtract_823baf7c4b8432f2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_subtract_57478e87aa8391db] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_toBlocksLayout_fa7294d53f56a3e3] = env->getStaticMethodID(cls, "toBlocksLayout", "([[D)[[D");
          mids$[mid_transpose_87b0d3e5ef669cc1] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_823baf7c4b8432f2] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockRealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_transposeMultiply_57478e87aa8391db] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/BlockRealMatrix;");
          mids$[mid_walkInOptimizedOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInOptimizedOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_e9eacc024b91638e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_8c777cbbebb3f320] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_7a8f404d3cc13545] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_0efcec2037689a79] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockRealMatrix::BlockRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_07adb42ffaa97d31, a0.this$)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

      BlockRealMatrix::BlockRealMatrix(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_84967766e6e8303c, a0, a1, a2.this$, a3)) {}

      BlockRealMatrix BlockRealMatrix::add(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_823baf7c4b8432f2], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::add(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_add_57478e87aa8391db], a0.this$));
      }

      void BlockRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::copy() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_87b0d3e5ef669cc1]));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::createBlocksLayout(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_4bd4edddfa48c3b3], a0, a1));
      }

      BlockRealMatrix BlockRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_26d25f5dccee563e], a0, a1));
      }

      JArray< jdouble > BlockRealMatrix::getColumn(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getColumn_bb2a44a76ad252f7], a0));
      }

      jint BlockRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      BlockRealMatrix BlockRealMatrix::getColumnMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_6f4c7d1a6929df67], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_b50dc3915c68ddbc], a0));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_3b7b373db8e7887f]));
      }

      jdouble BlockRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_cad98089d00f8a5b], a0, a1);
      }

      jdouble BlockRealMatrix::getFrobeniusNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFrobeniusNorm_b74f83833fdad017]);
      }

      jdouble BlockRealMatrix::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_b74f83833fdad017]);
      }

      jdouble BlockRealMatrix::getNormInfty() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInfty_b74f83833fdad017]);
      }

      JArray< jdouble > BlockRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_bb2a44a76ad252f7], a0));
      }

      jint BlockRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      BlockRealMatrix BlockRealMatrix::getRowMatrix(jint a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_6f4c7d1a6929df67], a0));
      }

      ::org::hipparchus::linear::RealVector BlockRealMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRowVector_b50dc3915c68ddbc], a0));
      }

      BlockRealMatrix BlockRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_7784b674b3254595], a0, a1, a2, a3));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_823baf7c4b8432f2], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_57478e87aa8391db], a0.this$));
      }

      void BlockRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_823baf7c4b8432f2], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_57478e87aa8391db], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_14dee4cb8cc3e959], a0.this$));
      }

      JArray< jdouble > BlockRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_14dee4cb8cc3e959], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::scalarAdd(jdouble a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_bf9d7a428ea4c205], a0));
      }

      ::org::hipparchus::linear::RealMatrix BlockRealMatrix::scalarMultiply(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_f5dd9d6021dc9dae], a0));
      }

      void BlockRealMatrix::setColumn(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_75061e5f5bbace93], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_74dda270996520c8], a0, a1.this$);
      }

      void BlockRealMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      void BlockRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_94fe8d9ffeb50676], a0, a1, a2);
      }

      void BlockRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_75061e5f5bbace93], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const BlockRealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_6c624781ed5c298a], a0, a1.this$);
      }

      void BlockRealMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_74dda270996520c8], a0, a1.this$);
      }

      void BlockRealMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      void BlockRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f12104c26dcf5b23], a0.this$, a1, a2);
      }

      BlockRealMatrix BlockRealMatrix::subtract(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_823baf7c4b8432f2], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_57478e87aa8391db], a0.this$));
      }

      JArray< JArray< jdouble > > BlockRealMatrix::toBlocksLayout(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_fa7294d53f56a3e3], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transpose() const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transpose_87b0d3e5ef669cc1]));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const BlockRealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_823baf7c4b8432f2], a0.this$));
      }

      BlockRealMatrix BlockRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return BlockRealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_57478e87aa8391db], a0.this$));
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_e9eacc024b91638e], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_8c777cbbebb3f320], a0.this$);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_7a8f404d3cc13545], a0.this$, a1, a2, a3, a4);
      }

      jdouble BlockRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_0efcec2037689a79], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args);
      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data);
      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data);
      static PyGetSetDef t_BlockRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockRealMatrix, data),
        DECLARE_GET_FIELD(t_BlockRealMatrix, frobeniusNorm),
        DECLARE_GET_FIELD(t_BlockRealMatrix, norm1),
        DECLARE_GET_FIELD(t_BlockRealMatrix, normInfty),
        DECLARE_GET_FIELD(t_BlockRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockRealMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getFrobeniusNorm, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNorm1, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getNormInfty, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockRealMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockRealMatrix)[] = {
        { Py_tp_methods, t_BlockRealMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockRealMatrix_init_ },
        { Py_tp_getset, t_BlockRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(BlockRealMatrix, t_BlockRealMatrix, BlockRealMatrix);

      void t_BlockRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockRealMatrix), &PY_TYPE_DEF(BlockRealMatrix), module, "BlockRealMatrix", 0);
      }

      void t_BlockRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "class_", make_descriptor(BlockRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "wrapfn_", make_descriptor(t_BlockRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockRealMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockRealMatrix), "BLOCK_SIZE", make_descriptor(BlockRealMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockRealMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockRealMatrix::wrap_Object(BlockRealMatrix(((t_BlockRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BlockRealMatrix_init_(t_BlockRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = BlockRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > a2((jobject) NULL);
            jboolean a3;
            BlockRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[DZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = BlockRealMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockRealMatrix_add(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockRealMatrix_addToEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_copy(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockRealMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::createBlocksLayout(a0, a1));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_createMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getData(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getFrobeniusNorm(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getFrobeniusNorm());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getFrobeniusNorm", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNorm1(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNorm1());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNorm1", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getNormInfty(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNormInfty());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getNormInfty", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowDimension(t_BlockRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_getSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_multiplyTransposed(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockRealMatrix_operate(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockRealMatrix_preMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarAdd(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockRealMatrix_scalarMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumn(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setColumnVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setEntry(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRow(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockRealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", BlockRealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setRowVector(t_BlockRealMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockRealMatrix_setSubMatrix(t_BlockRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockRealMatrix_subtract(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockRealMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockRealMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockRealMatrix_transpose(t_BlockRealMatrix *self, PyObject *args)
      {
        BlockRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return t_BlockRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockRealMatrix_transposeMultiply(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockRealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", BlockRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            BlockRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInOptimizedOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_walkInRowOrder(t_BlockRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(BlockRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_BlockRealMatrix_get__columnDimension(t_BlockRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockRealMatrix_get__data(t_BlockRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockRealMatrix_get__frobeniusNorm(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFrobeniusNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__norm1(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__normInfty(t_BlockRealMatrix *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInfty());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BlockRealMatrix_get__rowDimension(t_BlockRealMatrix *self, void *data)
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
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue$Event::class$ = NULL;
          jmethodID *RecordAndContinue$Event::mids$ = NULL;
          bool RecordAndContinue$Event::live$ = false;

          jclass RecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_9ada55f07f5a223c] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
              mids$[mid_getState_9d155cc8314c99cf] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_isIncreasing_9ab94ac1dc23b105] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::EventDetector RecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9ada55f07f5a223c]));
          }

          ::org::orekit::propagation::SpacecraftState RecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_9d155cc8314c99cf]));
          }

          jboolean RecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_9ab94ac1dc23b105]);
          }

          ::java::lang::String RecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_RecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, state),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue$Event)[] = {
            { Py_tp_methods, t_RecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue$Event, t_RecordAndContinue$Event, RecordAndContinue$Event);

          void t_RecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue$Event), &PY_TYPE_DEF(RecordAndContinue$Event), module, "RecordAndContinue$Event", 0);
          }

          void t_RecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "class_", make_descriptor(RecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "wrapfn_", make_descriptor(t_RecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue$Event::wrap_Object(RecordAndContinue$Event(((t_RecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *MessageObserver::class$ = NULL;
          jmethodID *MessageObserver::mids$ = NULL;
          bool MessageObserver::live$ = false;

          jclass MessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/MessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_messageAvailable_1a4f1f18b22ebdb4] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MessageObserver::messageAvailable(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::messages::ParsedMessage & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_messageAvailable_1a4f1f18b22ebdb4], a0.this$, a1.this$);
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
          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args);

          static PyMethodDef t_MessageObserver__methods_[] = {
            DECLARE_METHOD(t_MessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, messageAvailable, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageObserver)[] = {
            { Py_tp_methods, t_MessageObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageObserver, t_MessageObserver, MessageObserver);

          void t_MessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageObserver), &PY_TYPE_DEF(MessageObserver), module, "MessageObserver", 0);
          }

          void t_MessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "class_", make_descriptor(MessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "wrapfn_", make_descriptor(t_MessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageObserver::initializeClass, 1)))
              return NULL;
            return t_MessageObserver::wrap_Object(MessageObserver(((t_MessageObserver *) arg)->object.this$));
          }
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::messages::ParsedMessage a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.messageAvailable(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "messageAvailable", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/vector/VectorialCovariance.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialCovariance::class$ = NULL;
          jmethodID *VectorialCovariance::mids$ = NULL;
          bool VectorialCovariance::live$ = false;

          jclass VectorialCovariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialCovariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_34742154de10200a] = env->getMethodID(cls, "<init>", "(IZ)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_f77d745f2128c391] = env->getMethodID(cls, "getResult", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_ab69da052b88f50c] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialCovariance::VectorialCovariance(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34742154de10200a, a0, a1)) {}

          void VectorialCovariance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          jboolean VectorialCovariance::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jlong VectorialCovariance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          ::org::hipparchus::linear::RealMatrix VectorialCovariance::getResult() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getResult_f77d745f2128c391]));
          }

          jint VectorialCovariance::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          void VectorialCovariance::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_ab69da052b88f50c], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self);
          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args);
          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg);
          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data);
          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data);
          static PyGetSetDef t_VectorialCovariance__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialCovariance, n),
            DECLARE_GET_FIELD(t_VectorialCovariance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialCovariance__methods_[] = {
            DECLARE_METHOD(t_VectorialCovariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialCovariance, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialCovariance, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialCovariance, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialCovariance)[] = {
            { Py_tp_methods, t_VectorialCovariance__methods_ },
            { Py_tp_init, (void *) t_VectorialCovariance_init_ },
            { Py_tp_getset, t_VectorialCovariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialCovariance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialCovariance, t_VectorialCovariance, VectorialCovariance);

          void t_VectorialCovariance::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialCovariance), &PY_TYPE_DEF(VectorialCovariance), module, "VectorialCovariance", 0);
          }

          void t_VectorialCovariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "class_", make_descriptor(VectorialCovariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "wrapfn_", make_descriptor(t_VectorialCovariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialCovariance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialCovariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialCovariance::initializeClass, 1)))
              return NULL;
            return t_VectorialCovariance::wrap_Object(VectorialCovariance(((t_VectorialCovariance *) arg)->object.this$));
          }
          static PyObject *t_VectorialCovariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialCovariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialCovariance_init_(t_VectorialCovariance *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jboolean a1;
            VectorialCovariance object((jobject) NULL);

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              INT_CALL(object = VectorialCovariance(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialCovariance_clear(t_VectorialCovariance *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialCovariance_equals(t_VectorialCovariance *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialCovariance_getN(t_VectorialCovariance *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialCovariance_getResult(t_VectorialCovariance *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_VectorialCovariance_hashCode(t_VectorialCovariance *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialCovariance), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialCovariance_increment(t_VectorialCovariance *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialCovariance_get__n(t_VectorialCovariance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialCovariance_get__result(t_VectorialCovariance *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}

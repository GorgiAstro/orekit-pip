#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStamped::class$ = NULL;
      jmethodID *TimeStamped::mids$ = NULL;
      bool TimeStamped::live$ = false;

      jclass TimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_38232c48d8b545e8] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/TimeStamped;)D");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeStamped::durationFrom(const TimeStamped & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_38232c48d8b545e8], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate TimeStamped::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
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
      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg);
      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self);
      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data);
      static PyGetSetDef t_TimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStamped, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStamped__methods_[] = {
        DECLARE_METHOD(t_TimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_TimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStamped)[] = {
        { Py_tp_methods, t_TimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStamped, t_TimeStamped, TimeStamped);

      void t_TimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStamped), &PY_TYPE_DEF(TimeStamped), module, "TimeStamped", 0);
      }

      void t_TimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "class_", make_descriptor(TimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "wrapfn_", make_descriptor(t_TimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStamped::initializeClass, 1)))
          return NULL;
        return t_TimeStamped::wrap_Object(TimeStamped(((t_TimeStamped *) arg)->object.this$));
      }
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg)
      {
        TimeStamped a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalProcess::class$ = NULL;
        jmethodID *SemiAnalyticalProcess::mids$ = NULL;
        bool SemiAnalyticalProcess::live$ = false;

        jclass SemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_7cf22bbe05cd26dc] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_7ae3461a92a43152] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_c42c64cc17e34100] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_2b88003f931f70a7] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateNominalSpacecraftState_2b88003f931f70a7] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_2b88003f931f70a7] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalProcess::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_7cf22bbe05cd26dc], a0.this$, a1.this$);
        }

        void SemiAnalyticalProcess::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_7ae3461a92a43152]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalProcess::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_c42c64cc17e34100]));
        }

        void SemiAnalyticalProcess::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_2b88003f931f70a7], a0.this$);
        }

        void SemiAnalyticalProcess::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_2b88003f931f70a7], a0.this$);
        }

        void SemiAnalyticalProcess::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_2b88003f931f70a7], a0.this$);
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
        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args);
        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_SemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalProcess, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_SemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalProcess, t_SemiAnalyticalProcess, SemiAnalyticalProcess);

        void t_SemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalProcess), &PY_TYPE_DEF(SemiAnalyticalProcess), module, "SemiAnalyticalProcess", 0);
        }

        void t_SemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "class_", make_descriptor(SemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "wrapfn_", make_descriptor(t_SemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalProcess::wrap_Object(SemiAnalyticalProcess(((t_SemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanModel.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanModel::class$ = NULL;
        jmethodID *KalmanModel::mids$ = NULL;
        bool KalmanModel::live$ = false;

        jclass KalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4195f77bec580407] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)V");
            mids$[mid_finalizeEstimation_7cf22bbe05cd26dc] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_getBuilders_a6156df500549a58] = env->getMethodID(cls, "getBuilders", "()Ljava/util/List;");
            mids$[mid_getCorrectedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_aaa854c403487cf3] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_3d891496bfc9091e] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagators_bba03978f79693ea] = env->getMethodID(cls, "getEstimatedPropagators", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvolution_b091ae59b81dced9] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_98db7a9514783d86] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_164e77faf6b1d416] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getReferenceTrajectories_bba03978f79693ea] = env->getMethodID(cls, "getReferenceTrajectories", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setReferenceTrajectories_632446a46a48e65e] = env->getMethodID(cls, "setReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_updateReferenceTrajectories_632446a46a48e65e] = env->getMethodID(cls, "updateReferenceTrajectories", "([Lorg/orekit/propagation/Propagator;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KalmanModel::KalmanModel(const ::java::util::List & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4195f77bec580407, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void KalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_7cf22bbe05cd26dc], a0.this$, a1.this$);
        }

        ::java::util::List KalmanModel::getBuilders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBuilders_a6156df500549a58]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_a4eb258dd7a1e164]));
        }

        ::org::orekit::time::AbsoluteDate KalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_aaa854c403487cf3]));
        }

        jint KalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_f2f64475e4580546]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate KalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_3d891496bfc9091e]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_eb9e6df280c6daa0]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_eb9e6df280c6daa0]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getEstimatedPropagators() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagators_bba03978f79693ea]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution KalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_b091ae59b81dced9], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_98db7a9514783d86], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealVector KalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_6d9adf1d5b463928]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_7116bbecdd8ceb21]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_164e77faf6b1d416]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_a4eb258dd7a1e164]));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanModel::getReferenceTrajectories() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_getReferenceTrajectories_bba03978f79693ea]));
        }

        void KalmanModel::setReferenceTrajectories(const JArray< ::org::orekit::propagation::Propagator > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceTrajectories_632446a46a48e65e], a0.this$);
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
        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args);
        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self);
        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self);
        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg);
        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data);
        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data);
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanModel, builders),
          DECLARE_GET_FIELD(t_KalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanModel, currentDate),
          DECLARE_GET_FIELD(t_KalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanModel, estimate),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanModel, estimatedPropagators),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanModel, predictedSpacecraftStates),
          DECLARE_GETSET_FIELD(t_KalmanModel, referenceTrajectories),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanModel__methods_[] = {
          DECLARE_METHOD(t_KalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getBuilders, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEstimatedPropagators, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, getReferenceTrajectories, METH_NOARGS),
          DECLARE_METHOD(t_KalmanModel, setReferenceTrajectories, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanModel)[] = {
          { Py_tp_methods, t_KalmanModel__methods_ },
          { Py_tp_init, (void *) t_KalmanModel_init_ },
          { Py_tp_getset, t_KalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanModel, t_KalmanModel, KalmanModel);

        void t_KalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanModel), &PY_TYPE_DEF(KalmanModel), module, "KalmanModel", 0);
        }

        void t_KalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "class_", make_descriptor(KalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "wrapfn_", make_descriptor(t_KalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanModel::initializeClass, 1)))
            return NULL;
          return t_KalmanModel::wrap_Object(KalmanModel(((t_KalmanModel *) arg)->object.this$));
        }
        static PyObject *t_KalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KalmanModel_init_(t_KalmanModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a3((jobject) NULL);
          KalmanModel object((jobject) NULL);

          if (!parseArgs(args, "KKkk", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = KalmanModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KalmanModel_finalizeEstimation(t_KalmanModel *self, PyObject *args)
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

        static PyObject *t_KalmanModel_getBuilders(t_KalmanModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::conversion::PY_TYPE(PropagatorBuilder));
        }

        static PyObject *t_KalmanModel_getCorrectedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCorrectedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getCurrentDate(t_KalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getCurrentMeasurementNumber(t_KalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanModel_getEstimate(t_KalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedMeasurementsParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedOrbitalParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagationParameters(t_KalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getEstimatedPropagators(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagators());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getEvolution(t_KalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getInnovation(t_KalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalEstimatedState(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalInnovationCovarianceMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalKalmanGain(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalMeasurementJacobian(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPhysicalStateTransitionMatrix(t_KalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedMeasurement(t_KalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanModel_getPredictedSpacecraftStates(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_getReferenceTrajectories(t_KalmanModel *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceTrajectories());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_setReferenceTrajectories(t_KalmanModel *self, PyObject *arg)
        {
          JArray< ::org::orekit::propagation::Propagator > a0((jobject) NULL);

          if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceTrajectories(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setReferenceTrajectories", arg);
          return NULL;
        }

        static PyObject *t_KalmanModel_get__builders(t_KalmanModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getBuilders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__correctedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__currentDate(t_KalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__currentMeasurementNumber(t_KalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanModel_get__estimate(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedMeasurementsParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedOrbitalParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagationParameters(t_KalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__estimatedPropagators(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagators());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalEstimatedState(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalInnovationCovarianceMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalKalmanGain(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalMeasurementJacobian(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__physicalStateTransitionMatrix(t_KalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedMeasurement(t_KalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanModel_get__predictedSpacecraftStates(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanModel_get__referenceTrajectories(t_KalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceTrajectories());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }
        static int t_KalmanModel_set__referenceTrajectories(t_KalmanModel *self, PyObject *arg, void *data)
        {
          {
            JArray< ::org::orekit::propagation::Propagator > value((jobject) NULL);
            if (!parseArg(arg, "[k", ::org::orekit::propagation::Propagator::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceTrajectories(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceTrajectories", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FixedFrameBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedFrameBuilder::class$ = NULL;
      jmethodID *FixedFrameBuilder::mids$ = NULL;
      bool FixedFrameBuilder::live$ = false;

      jclass FixedFrameBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedFrameBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_build_46e50d643ce38532] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_d2838fa0adea33de] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedFrameBuilder::FixedFrameBuilder(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_46e50d643ce38532], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
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
      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args);

      static PyMethodDef t_FixedFrameBuilder__methods_[] = {
        DECLARE_METHOD(t_FixedFrameBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedFrameBuilder)[] = {
        { Py_tp_methods, t_FixedFrameBuilder__methods_ },
        { Py_tp_init, (void *) t_FixedFrameBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedFrameBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedFrameBuilder, t_FixedFrameBuilder, FixedFrameBuilder);

      void t_FixedFrameBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedFrameBuilder), &PY_TYPE_DEF(FixedFrameBuilder), module, "FixedFrameBuilder", 0);
      }

      void t_FixedFrameBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "class_", make_descriptor(FixedFrameBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "wrapfn_", make_descriptor(t_FixedFrameBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedFrameBuilder::initializeClass, 1)))
          return NULL;
        return t_FixedFrameBuilder::wrap_Object(FixedFrameBuilder(((t_FixedFrameBuilder *) arg)->object.this$));
      }
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedFrameBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FixedFrameBuilder object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FixedFrameBuilder(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthIntegrator::mids$ = NULL;
        bool AdamsBashforthIntegrator::live$ = false;

        jclass AdamsBashforthIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator");

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

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6a622868df67b314, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cc4784be32cd9c15, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsBashforthIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegrator, t_AdamsBashforthIntegrator, AdamsBashforthIntegrator);

        void t_AdamsBashforthIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegrator), &PY_TYPE_DEF(AdamsBashforthIntegrator), module, "AdamsBashforthIntegrator", 0);
        }

        void t_AdamsBashforthIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "class_", make_descriptor(AdamsBashforthIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegrator::wrap_Object(AdamsBashforthIntegrator(((t_AdamsBashforthIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
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
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
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
#include "org/orekit/rugged/adjustment/LeastSquareAdjuster.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *LeastSquareAdjuster::class$ = NULL;
        jmethodID *LeastSquareAdjuster::mids$ = NULL;
        bool LeastSquareAdjuster::live$ = false;

        jclass LeastSquareAdjuster::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/LeastSquareAdjuster");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a666ad31260df77e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");
            mids$[mid_optimize_15b17ff9a423a2d3] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LeastSquareAdjuster::LeastSquareAdjuster() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        LeastSquareAdjuster::LeastSquareAdjuster(const ::org::orekit::rugged::adjustment::OptimizerId & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a666ad31260df77e, a0.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquareAdjuster::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_15b17ff9a423a2d3], a0.this$));
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
        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg);

        static PyMethodDef t_LeastSquareAdjuster__methods_[] = {
          DECLARE_METHOD(t_LeastSquareAdjuster, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LeastSquareAdjuster, optimize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LeastSquareAdjuster)[] = {
          { Py_tp_methods, t_LeastSquareAdjuster__methods_ },
          { Py_tp_init, (void *) t_LeastSquareAdjuster_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LeastSquareAdjuster)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LeastSquareAdjuster, t_LeastSquareAdjuster, LeastSquareAdjuster);

        void t_LeastSquareAdjuster::install(PyObject *module)
        {
          installType(&PY_TYPE(LeastSquareAdjuster), &PY_TYPE_DEF(LeastSquareAdjuster), module, "LeastSquareAdjuster", 0);
        }

        void t_LeastSquareAdjuster::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "class_", make_descriptor(LeastSquareAdjuster::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "wrapfn_", make_descriptor(t_LeastSquareAdjuster::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquareAdjuster), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LeastSquareAdjuster_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LeastSquareAdjuster::initializeClass, 1)))
            return NULL;
          return t_LeastSquareAdjuster::wrap_Object(LeastSquareAdjuster(((t_LeastSquareAdjuster *) arg)->object.this$));
        }
        static PyObject *t_LeastSquareAdjuster_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LeastSquareAdjuster::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LeastSquareAdjuster_init_(t_LeastSquareAdjuster *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LeastSquareAdjuster object((jobject) NULL);

              INT_CALL(object = LeastSquareAdjuster());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquareAdjuster object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
              {
                INT_CALL(object = LeastSquareAdjuster(a0));
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

        static PyObject *t_LeastSquareAdjuster_optimize(t_LeastSquareAdjuster *self, PyObject *arg)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "optimize", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldBlendable::class$ = NULL;
      jmethodID *FieldBlendable::mids$ = NULL;
      bool FieldBlendable::live$ = false;

      jclass FieldBlendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldBlendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_c81fec308763ae01] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;Lorg/hipparchus/FieldElement;)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object FieldBlendable::blendArithmeticallyWith(const ::java::lang::Object & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_c81fec308763ae01], a0.this$, a1.this$));
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
      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data);
      static PyGetSetDef t_FieldBlendable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBlendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBlendable__methods_[] = {
        DECLARE_METHOD(t_FieldBlendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBlendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBlendable)[] = {
        { Py_tp_methods, t_FieldBlendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBlendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBlendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBlendable, t_FieldBlendable, FieldBlendable);
      PyObject *t_FieldBlendable::wrap_Object(const FieldBlendable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldBlendable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldBlendable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBlendable), &PY_TYPE_DEF(FieldBlendable), module, "FieldBlendable", 0);
      }

      void t_FieldBlendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "class_", make_descriptor(FieldBlendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "wrapfn_", make_descriptor(t_FieldBlendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBlendable::initializeClass, 1)))
          return NULL;
        return t_FieldBlendable::wrap_Object(FieldBlendable(((t_FieldBlendable *) arg)->object.this$));
      }
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBlendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OK", self->parameters[0], ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *TurnAroundRangeBuilder::class$ = NULL;
          jmethodID *TurnAroundRangeBuilder::mids$ = NULL;
          bool TurnAroundRangeBuilder::live$ = false;

          jclass TurnAroundRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa060bc4347f0934] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_6e810764b75edf5a] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TurnAroundRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeBuilder::TurnAroundRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_aa060bc4347f0934, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TurnAroundRange TurnAroundRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TurnAroundRange(env->callObjectMethod(this$, mids$[mid_build_6e810764b75edf5a], a0.this$, a1.this$));
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
          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args);
          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args);
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data);
          static PyGetSetDef t_TurnAroundRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_TurnAroundRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeBuilder)[] = {
            { Py_tp_methods, t_TurnAroundRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeBuilder_init_ },
            { Py_tp_getset, t_TurnAroundRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeBuilder, t_TurnAroundRangeBuilder, TurnAroundRangeBuilder);
          PyObject *t_TurnAroundRangeBuilder::wrap_Object(const TurnAroundRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_TurnAroundRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_TurnAroundRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_TurnAroundRangeBuilder *self = (t_TurnAroundRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_TurnAroundRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeBuilder), &PY_TYPE_DEF(TurnAroundRangeBuilder), module, "TurnAroundRangeBuilder", 0);
          }

          void t_TurnAroundRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "class_", make_descriptor(TurnAroundRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "wrapfn_", make_descriptor(t_TurnAroundRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeBuilder::wrap_Object(TurnAroundRangeBuilder(((t_TurnAroundRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TurnAroundRangeBuilder_of_(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_TurnAroundRangeBuilder_init_(t_TurnAroundRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            TurnAroundRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TurnAroundRangeBuilder(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_TurnAroundRangeBuilder_build(t_TurnAroundRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::TurnAroundRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_TurnAroundRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TurnAroundRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_TurnAroundRangeBuilder_get__parameters_(t_TurnAroundRangeBuilder *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerBootstrapping.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerBootstrapping::class$ = NULL;
          jmethodID *IntegerBootstrapping::mids$ = NULL;
          bool IntegerBootstrapping::live$ = false;

          jclass IntegerBootstrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerBootstrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_recoverAmbiguities_d6c5bc318d7188c2] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_discreteSearch_7ae3461a92a43152] = env->getMethodID(cls, "discreteSearch", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerBootstrapping::IntegerBootstrapping(jdouble a0) : ::org::orekit::estimation::measurements::gnss::LambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}
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
          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IntegerBootstrapping__methods_[] = {
            DECLARE_METHOD(t_IntegerBootstrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerBootstrapping, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerBootstrapping)[] = {
            { Py_tp_methods, t_IntegerBootstrapping__methods_ },
            { Py_tp_init, (void *) t_IntegerBootstrapping_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerBootstrapping)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::LambdaMethod),
            NULL
          };

          DEFINE_TYPE(IntegerBootstrapping, t_IntegerBootstrapping, IntegerBootstrapping);

          void t_IntegerBootstrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerBootstrapping), &PY_TYPE_DEF(IntegerBootstrapping), module, "IntegerBootstrapping", 0);
          }

          void t_IntegerBootstrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "class_", make_descriptor(IntegerBootstrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "wrapfn_", make_descriptor(t_IntegerBootstrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerBootstrapping::initializeClass, 1)))
              return NULL;
            return t_IntegerBootstrapping::wrap_Object(IntegerBootstrapping(((t_IntegerBootstrapping *) arg)->object.this$));
          }
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerBootstrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            IntegerBootstrapping object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = IntegerBootstrapping(a0));
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
#include "org/hipparchus/linear/OrderedComplexEigenDecomposition.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OrderedComplexEigenDecomposition::class$ = NULL;
      jmethodID *OrderedComplexEigenDecomposition::mids$ = NULL;
      bool OrderedComplexEigenDecomposition::live$ = false;

      jclass OrderedComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OrderedComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_257185813e52aecb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_init$_ef60382838826874] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDDLjava/util/Comparator;)V");
          mids$[mid_getVT_cc77900a647586cf] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_257185813e52aecb, a0.this$, a1, a2, a3)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::Comparator & a4) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_ef60382838826874, a0.this$, a1, a2, a3, a4.this$)) {}

      ::org::hipparchus::linear::FieldMatrix OrderedComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_cc77900a647586cf]));
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
      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args);
      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_OrderedComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_OrderedComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrderedComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, getVT, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrderedComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_OrderedComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_OrderedComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_OrderedComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrderedComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::ComplexEigenDecomposition),
        NULL
      };

      DEFINE_TYPE(OrderedComplexEigenDecomposition, t_OrderedComplexEigenDecomposition, OrderedComplexEigenDecomposition);

      void t_OrderedComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(OrderedComplexEigenDecomposition), &PY_TYPE_DEF(OrderedComplexEigenDecomposition), module, "OrderedComplexEigenDecomposition", 0);
      }

      void t_OrderedComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "class_", make_descriptor(OrderedComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "wrapfn_", make_descriptor(t_OrderedComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_OrderedComplexEigenDecomposition::wrap_Object(OrderedComplexEigenDecomposition(((t_OrderedComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::java::util::Comparator a4((jobject) NULL);
            PyTypeObject **p4;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDDK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3, a4));
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

      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getVT());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        return callSuper(PY_TYPE(OrderedComplexEigenDecomposition), (PyObject *) self, "getVT", args, 2);
      }

      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1Field::class$ = NULL;
        jmethodID *UnivariateDerivative1Field::mids$ = NULL;
        bool UnivariateDerivative1Field::live$ = false;

        jclass UnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_2f31d09ea5bf5b80] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getOne_d8e02a4df001f4b7] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_d8e02a4df001f4b7] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        UnivariateDerivative1Field UnivariateDerivative1Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_2f31d09ea5bf5b80]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_d8e02a4df001f4b7]));
        }

        ::java::lang::Class UnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 UnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_d8e02a4df001f4b7]));
        }

        jint UnivariateDerivative1Field::hashCode() const
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
        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self);
        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data);
        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative1Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1Field, t_UnivariateDerivative1Field, UnivariateDerivative1Field);

        void t_UnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1Field), &PY_TYPE_DEF(UnivariateDerivative1Field), module, "UnivariateDerivative1Field", 0);
        }

        void t_UnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "class_", make_descriptor(UnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "wrapfn_", make_descriptor(t_UnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1Field::wrap_Object(UnivariateDerivative1Field(((t_UnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1Field_equals(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative1Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field::getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getOne(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_getRuntimeClass(t_UnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
        }

        static PyObject *t_UnivariateDerivative1Field_getZero(t_UnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative1Field_hashCode(t_UnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1Field_get__instance(t_UnivariateDerivative1Field *self, void *data)
        {
          UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__one(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__runtimeClass(t_UnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1Field_get__zero(t_UnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_492e97ecdce43bb1] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldInterpolationGrid::PythonFieldInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonFieldInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonFieldInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonFieldInterpolationGrid::pythonExtension(jlong a0) const
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldInterpolationGrid::mids$[PythonFieldInterpolationGrid::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader$RawPVProvider::class$ = NULL;
      jmethodID *JPLEphemeridesLoader$RawPVProvider::mids$ = NULL;
      bool JPLEphemeridesLoader$RawPVProvider::live$ = false;

      jclass JPLEphemeridesLoader$RawPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawPV_72289093b5ce53a7] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getRawPV_f415cd919df1e5a6] = env->getMethodID(cls, "getRawPV", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getRawPosition_71c51b45829333ce] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRawPosition_11a4be79061d1fe3] = env->getMethodID(cls, "getRawPosition", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_72289093b5ce53a7], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates JPLEphemeridesLoader$RawPVProvider::getRawPV(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getRawPV_f415cd919df1e5a6], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_71c51b45829333ce], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D JPLEphemeridesLoader$RawPVProvider::getRawPosition(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRawPosition_11a4be79061d1fe3], a0.this$));
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
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args);

      static PyMethodDef t_JPLEphemeridesLoader$RawPVProvider__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPV, METH_VARARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader$RawPVProvider, getRawPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader$RawPVProvider)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader$RawPVProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader$RawPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader$RawPVProvider, t_JPLEphemeridesLoader$RawPVProvider, JPLEphemeridesLoader$RawPVProvider);

      void t_JPLEphemeridesLoader$RawPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader$RawPVProvider), &PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider), module, "JPLEphemeridesLoader$RawPVProvider", 0);
      }

      void t_JPLEphemeridesLoader$RawPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "class_", make_descriptor(JPLEphemeridesLoader$RawPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader$RawPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader$RawPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader$RawPVProvider::wrap_Object(JPLEphemeridesLoader$RawPVProvider(((t_JPLEphemeridesLoader$RawPVProvider *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader$RawPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPV(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPV(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPV", args);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader$RawPVProvider_getRawPosition(t_JPLEphemeridesLoader$RawPVProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRawPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRawPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixel::class$ = NULL;
        jmethodID *SensorPixel::mids$ = NULL;
        bool SensorPixel::live$ = false;

        jclass SensorPixel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLineNumber_456d9a2f64d6b28d] = env->getMethodID(cls, "getLineNumber", "()D");
            mids$[mid_getPixelNumber_456d9a2f64d6b28d] = env->getMethodID(cls, "getPixelNumber", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixel::SensorPixel(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble SensorPixel::getLineNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLineNumber_456d9a2f64d6b28d]);
        }

        jdouble SensorPixel::getPixelNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPixelNumber_456d9a2f64d6b28d]);
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
      namespace linesensor {
        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data);
        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data);
        static PyGetSetDef t_SensorPixel__fields_[] = {
          DECLARE_GET_FIELD(t_SensorPixel, lineNumber),
          DECLARE_GET_FIELD(t_SensorPixel, pixelNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorPixel__methods_[] = {
          DECLARE_METHOD(t_SensorPixel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, getLineNumber, METH_NOARGS),
          DECLARE_METHOD(t_SensorPixel, getPixelNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixel)[] = {
          { Py_tp_methods, t_SensorPixel__methods_ },
          { Py_tp_init, (void *) t_SensorPixel_init_ },
          { Py_tp_getset, t_SensorPixel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixel, t_SensorPixel, SensorPixel);

        void t_SensorPixel::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixel), &PY_TYPE_DEF(SensorPixel), module, "SensorPixel", 0);
        }

        void t_SensorPixel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "class_", make_descriptor(SensorPixel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "wrapfn_", make_descriptor(t_SensorPixel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixel::initializeClass, 1)))
            return NULL;
          return t_SensorPixel::wrap_Object(SensorPixel(((t_SensorPixel *) arg)->object.this$));
        }
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          SensorPixel object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = SensorPixel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLineNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLineNumber());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/PythonForceModel.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *PythonForceModel::class$ = NULL;
      jmethodID *PythonForceModel::mids$ = NULL;
      bool PythonForceModel::live$ = false;

      jclass PythonForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PythonForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_addContribution_3ae28f2cc7cbb00b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_170c8a5902f676b2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParameterDriver_d5ba0ef5703f4c62] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_7cdc325af0834901] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_62f3dd52a41b90da] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_isSupported_6b161f495ea569b8] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonForceModel::PythonForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonForceModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonForceModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonForceModel::pythonExtension(jlong a0) const
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
    namespace forces {
      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self);
      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args);
      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data);
      static PyGetSetDef t_PythonForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonForceModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonForceModel__methods_[] = {
        DECLARE_METHOD(t_PythonForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonForceModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonForceModel)[] = {
        { Py_tp_methods, t_PythonForceModel__methods_ },
        { Py_tp_init, (void *) t_PythonForceModel_init_ },
        { Py_tp_getset, t_PythonForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonForceModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonForceModel, t_PythonForceModel, PythonForceModel);

      void t_PythonForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonForceModel), &PY_TYPE_DEF(PythonForceModel), module, "PythonForceModel", 1);
      }

      void t_PythonForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "class_", make_descriptor(PythonForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "wrapfn_", make_descriptor(t_PythonForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonForceModel::initializeClass);
        JNINativeMethod methods[] = {
          { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonForceModel_acceleration0 },
          { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonForceModel_acceleration1 },
          { "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution2 },
          { "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution3 },
          { "dependsOnPositionOnly", "()Z", (void *) t_PythonForceModel_dependsOnPositionOnly4 },
          { "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;", (void *) t_PythonForceModel_getParameterDriver5 },
          { "getParameters", "()[D", (void *) t_PythonForceModel_getParameters6 },
          { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonForceModel_getParameters7 },
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonForceModel_getParametersDrivers8 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonForceModel_init9 },
          { "isSupported", "(Ljava/lang/String;)Z", (void *) t_PythonForceModel_isSupported10 },
          { "pythonDecRef", "()V", (void *) t_PythonForceModel_pythonDecRef11 },
        };
        env->registerNatives(cls, methods, 12);
      }

      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonForceModel::initializeClass, 1)))
          return NULL;
        return t_PythonForceModel::wrap_Object(PythonForceModel(((t_PythonForceModel *) arg)->object.this$));
      }
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds)
      {
        PythonForceModel object((jobject) NULL);

        INT_CALL(object = PythonForceModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args)
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

      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = JArray<jdouble>(a1).wrap();
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::FieldTimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_TimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::TimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "dependsOnPositionOnly", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("dependsOnPositionOnly", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::ParameterDriver value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getParameterDriver", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &value))
        {
          throwTypeError("getParameterDriver", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isSupported", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isSupported", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonShortPeriodTerms::class$ = NULL;
            jmethodID *PythonShortPeriodTerms::mids$ = NULL;
            bool PythonShortPeriodTerms::live$ = false;

            jclass PythonShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_f2bf54770645c00d] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_0090f7797e403f43] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_bae9521eacc13195] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonShortPeriodTerms::PythonShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonShortPeriodTerms::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self);
            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonShortPeriodTerms, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonShortPeriodTerms, t_PythonShortPeriodTerms, PythonShortPeriodTerms);

            void t_PythonShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonShortPeriodTerms), &PY_TYPE_DEF(PythonShortPeriodTerms), module, "PythonShortPeriodTerms", 1);
            }

            void t_PythonShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "class_", make_descriptor(PythonShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/Orbit;)[D", (void *) t_PythonShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonShortPeriodTerms::wrap_Object(PythonShortPeriodTerms(((t_PythonShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("value", result);
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

            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSNavigationMessage::class$ = NULL;
            jmethodID *GLONASSNavigationMessage::mids$ = NULL;
            bool GLONASSNavigationMessage::live$ = false;

            jclass GLONASSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getFrequencyNumber_f2f64475e4580546] = env->getMethodID(cls, "getFrequencyNumber", "()I");
                mids$[mid_getGammaN_456d9a2f64d6b28d] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getGroupDelayDifference_456d9a2f64d6b28d] = env->getMethodID(cls, "getGroupDelayDifference", "()D");
                mids$[mid_getHealthFlags_f2f64475e4580546] = env->getMethodID(cls, "getHealthFlags", "()I");
                mids$[mid_getPropagator_fbbdc460aba8e084] = env->getMethodID(cls, "getPropagator", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_d52842b358aff2b7] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_1f228923689bc3a3] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getStatusFlags_f2f64475e4580546] = env->getMethodID(cls, "getStatusFlags", "()I");
                mids$[mid_getTN_456d9a2f64d6b28d] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_456d9a2f64d6b28d] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setFrequencyNumber_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFrequencyNumber", "(D)V");
                mids$[mid_setGammaN_77e0f9a1f260e2e5] = env->getMethodID(cls, "setGammaN", "(D)V");
                mids$[mid_setGroupDelayDifference_77e0f9a1f260e2e5] = env->getMethodID(cls, "setGroupDelayDifference", "(D)V");
                mids$[mid_setHealthFlags_77e0f9a1f260e2e5] = env->getMethodID(cls, "setHealthFlags", "(D)V");
                mids$[mid_setStatusFlags_77e0f9a1f260e2e5] = env->getMethodID(cls, "setStatusFlags", "(D)V");
                mids$[mid_setTauN_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTauN", "(D)V");
                mids$[mid_setTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSNavigationMessage::GLONASSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint GLONASSNavigationMessage::getFrequencyNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyNumber_f2f64475e4580546]);
            }

            jdouble GLONASSNavigationMessage::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_456d9a2f64d6b28d]);
            }

            jdouble GLONASSNavigationMessage::getGroupDelayDifference() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGroupDelayDifference_456d9a2f64d6b28d]);
            }

            jint GLONASSNavigationMessage::getHealthFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthFlags_f2f64475e4580546]);
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_fbbdc460aba8e084], a0));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_d52842b358aff2b7], a0, a1.this$));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_1f228923689bc3a3], a0, a1.this$, a2.this$, a3.this$, a4));
            }

            jint GLONASSNavigationMessage::getStatusFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getStatusFlags_f2f64475e4580546]);
            }

            jdouble GLONASSNavigationMessage::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_456d9a2f64d6b28d]);
            }

            jdouble GLONASSNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
            }

            jdouble GLONASSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_456d9a2f64d6b28d]);
            }

            void GLONASSNavigationMessage::setFrequencyNumber(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrequencyNumber_77e0f9a1f260e2e5], a0);
            }

            void GLONASSNavigationMessage::setGammaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGammaN_77e0f9a1f260e2e5], a0);
            }

            void GLONASSNavigationMessage::setGroupDelayDifference(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGroupDelayDifference_77e0f9a1f260e2e5], a0);
            }

            void GLONASSNavigationMessage::setHealthFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthFlags_77e0f9a1f260e2e5], a0);
            }

            void GLONASSNavigationMessage::setStatusFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStatusFlags_77e0f9a1f260e2e5], a0);
            }

            void GLONASSNavigationMessage::setTauN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTauN_77e0f9a1f260e2e5], a0);
            }

            void GLONASSNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_77e0f9a1f260e2e5], a0);
            }

            void GLONASSNavigationMessage::setURA(jdouble a0) const
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
            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args);
            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GLONASSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, frequencyNumber),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, gammaN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, groupDelayDifference),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, healthFlags),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, statusFlags),
              DECLARE_GET_FIELD(t_GLONASSNavigationMessage, tN),
              DECLARE_SET_FIELD(t_GLONASSNavigationMessage, tauN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GLONASSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getFrequencyNumber, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGroupDelayDifference, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getHealthFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getStatusFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setFrequencyNumber, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGammaN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGroupDelayDifference, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setHealthFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setStatusFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTauN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSNavigationMessage)[] = {
              { Py_tp_methods, t_GLONASSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GLONASSNavigationMessage_init_ },
              { Py_tp_getset, t_GLONASSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(GLONASSNavigationMessage, t_GLONASSNavigationMessage, GLONASSNavigationMessage);

            void t_GLONASSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSNavigationMessage), &PY_TYPE_DEF(GLONASSNavigationMessage), module, "GLONASSNavigationMessage", 0);
            }

            void t_GLONASSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "class_", make_descriptor(GLONASSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "wrapfn_", make_descriptor(t_GLONASSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GLONASSNavigationMessage::wrap_Object(GLONASSNavigationMessage(((t_GLONASSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GLONASSNavigationMessage object((jobject) NULL);

              INT_CALL(object = GLONASSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "Dk", ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "DkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getStatusFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFrequencyNumber(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrequencyNumber", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGammaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGammaN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGroupDelayDifference(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGroupDelayDifference", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealthFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setStatusFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStatusFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTauN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTauN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFrequencyNumber(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frequencyNumber", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGammaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "gammaN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGroupDelayDifference(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "groupDelayDifference", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealthFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getStatusFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setStatusFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "statusFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTauN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tauN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
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
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$Builder::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$Builder::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$Builder::live$ = false;

      jclass AggregatedPVCoordinatesProvider$Builder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$Builder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_16cee8786fe06864] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
          mids$[mid_addPVProviderAfter_d1ce544e9c100f26] = env->getMethodID(cls, "addPVProviderAfter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_addPVProviderBefore_d1ce544e9c100f26] = env->getMethodID(cls, "addPVProviderBefore", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;Z)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_build_a12b962198e2cd02] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/AggregatedPVCoordinatesProvider;");
          mids$[mid_invalidAfter_5587c9059662aa3f] = env->getMethodID(cls, "invalidAfter", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");
          mids$[mid_invalidBefore_5587c9059662aa3f] = env->getMethodID(cls, "invalidBefore", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/AggregatedPVCoordinatesProvider$Builder;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      AggregatedPVCoordinatesProvider$Builder::AggregatedPVCoordinatesProvider$Builder(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_16cee8786fe06864, a0.this$)) {}

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderAfter(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderAfter_d1ce544e9c100f26], a0.this$, a1.this$, a2));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::addPVProviderBefore(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jboolean a2) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_addPVProviderBefore_d1ce544e9c100f26], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::AggregatedPVCoordinatesProvider AggregatedPVCoordinatesProvider$Builder::build() const
      {
        return ::org::orekit::utils::AggregatedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_a12b962198e2cd02]));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidAfter(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidAfter_5587c9059662aa3f], a0.this$));
      }

      AggregatedPVCoordinatesProvider$Builder AggregatedPVCoordinatesProvider$Builder::invalidBefore(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return AggregatedPVCoordinatesProvider$Builder(env->callObjectMethod(this$, mids$[mid_invalidBefore_5587c9059662aa3f], a0.this$));
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
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$Builder__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderAfter, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, addPVProviderBefore, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, build, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidAfter, METH_O),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$Builder, invalidBefore, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$Builder)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$Builder__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$Builder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$Builder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$Builder, t_AggregatedPVCoordinatesProvider$Builder, AggregatedPVCoordinatesProvider$Builder);

      void t_AggregatedPVCoordinatesProvider$Builder::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$Builder), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder), module, "AggregatedPVCoordinatesProvider$Builder", 0);
      }

      void t_AggregatedPVCoordinatesProvider$Builder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "class_", make_descriptor(AggregatedPVCoordinatesProvider$Builder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$Builder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$Builder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(AggregatedPVCoordinatesProvider$Builder(((t_AggregatedPVCoordinatesProvider$Builder *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$Builder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$Builder_init_(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            INT_CALL(object = AggregatedPVCoordinatesProvider$Builder());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            AggregatedPVCoordinatesProvider$Builder object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider$Builder(a0));
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

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderAfter(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderAfter", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_addPVProviderBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        jboolean a2;
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArgs(args, "kkZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addPVProviderBefore(a0, a1, a2));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addPVProviderBefore", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_build(t_AggregatedPVCoordinatesProvider$Builder *self)
      {
        ::org::orekit::utils::AggregatedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_AggregatedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidAfter(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidAfter(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidAfter", arg);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$Builder_invalidBefore(t_AggregatedPVCoordinatesProvider$Builder *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        AggregatedPVCoordinatesProvider$Builder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.invalidBefore(a0));
          return t_AggregatedPVCoordinatesProvider$Builder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "invalidBefore", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *PivotingStrategy::class$ = NULL;
      jmethodID *PivotingStrategy::mids$ = NULL;
      bool PivotingStrategy::live$ = false;
      PivotingStrategy *PivotingStrategy::CENTRAL = NULL;
      PivotingStrategy *PivotingStrategy::MEDIAN_OF_3 = NULL;

      jclass PivotingStrategy::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/PivotingStrategy");

          mids$ = new jmethodID[max_mid];
          mids$[mid_pivotIndex_ce53e6e652fa49b4] = env->getMethodID(cls, "pivotIndex", "([DII)I");
          mids$[mid_valueOf_e95c91753d6eaedd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/PivotingStrategy;");
          mids$[mid_values_2b9a5e68e3baad60] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/PivotingStrategy;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CENTRAL = new PivotingStrategy(env->getStaticObjectField(cls, "CENTRAL", "Lorg/hipparchus/util/PivotingStrategy;"));
          MEDIAN_OF_3 = new PivotingStrategy(env->getStaticObjectField(cls, "MEDIAN_OF_3", "Lorg/hipparchus/util/PivotingStrategy;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint PivotingStrategy::pivotIndex(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_pivotIndex_ce53e6e652fa49b4], a0.this$, a1, a2);
      }

      PivotingStrategy PivotingStrategy::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PivotingStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e95c91753d6eaedd], a0.this$));
      }

      JArray< PivotingStrategy > PivotingStrategy::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PivotingStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_2b9a5e68e3baad60]));
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
      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args);
      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PivotingStrategy_values(PyTypeObject *type);
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data);
      static PyGetSetDef t_PivotingStrategy__fields_[] = {
        DECLARE_GET_FIELD(t_PivotingStrategy, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PivotingStrategy__methods_[] = {
        DECLARE_METHOD(t_PivotingStrategy, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, of_, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, pivotIndex, METH_VARARGS),
        DECLARE_METHOD(t_PivotingStrategy, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PivotingStrategy, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PivotingStrategy)[] = {
        { Py_tp_methods, t_PivotingStrategy__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PivotingStrategy__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PivotingStrategy)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PivotingStrategy, t_PivotingStrategy, PivotingStrategy);
      PyObject *t_PivotingStrategy::wrap_Object(const PivotingStrategy& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PivotingStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PivotingStrategy::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PivotingStrategy *self = (t_PivotingStrategy *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PivotingStrategy::install(PyObject *module)
      {
        installType(&PY_TYPE(PivotingStrategy), &PY_TYPE_DEF(PivotingStrategy), module, "PivotingStrategy", 0);
      }

      void t_PivotingStrategy::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "class_", make_descriptor(PivotingStrategy::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "wrapfn_", make_descriptor(t_PivotingStrategy::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "boxfn_", make_descriptor(boxObject));
        env->getClass(PivotingStrategy::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "CENTRAL", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::CENTRAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PivotingStrategy), "MEDIAN_OF_3", make_descriptor(t_PivotingStrategy::wrap_Object(*PivotingStrategy::MEDIAN_OF_3)));
      }

      static PyObject *t_PivotingStrategy_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PivotingStrategy::initializeClass, 1)))
          return NULL;
        return t_PivotingStrategy::wrap_Object(PivotingStrategy(((t_PivotingStrategy *) arg)->object.this$));
      }
      static PyObject *t_PivotingStrategy_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PivotingStrategy::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PivotingStrategy_of_(t_PivotingStrategy *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PivotingStrategy_pivotIndex(t_PivotingStrategy *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jint a1;
        jint a2;
        jint result;

        if (!parseArgs(args, "[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pivotIndex(a0, a1, a2));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "pivotIndex", args);
        return NULL;
      }

      static PyObject *t_PivotingStrategy_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PivotingStrategy result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::valueOf(a0));
          return t_PivotingStrategy::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PivotingStrategy_values(PyTypeObject *type)
      {
        JArray< PivotingStrategy > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::PivotingStrategy::values());
        return JArray<jobject>(result.this$).wrap(t_PivotingStrategy::wrap_jobject);
      }
      static PyObject *t_PivotingStrategy_get__parameters_(t_PivotingStrategy *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistory::class$ = NULL;
              jmethodID *OrbitManeuverHistory::mids$ = NULL;
              bool OrbitManeuverHistory::live$ = false;

              jclass OrbitManeuverHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b198251bf9153cf4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getManeuvers_a6156df500549a58] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_d20eeeee6387179d] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistory::OrbitManeuverHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b198251bf9153cf4, a0.this$, a1.this$)) {}

              ::java::util::List OrbitManeuverHistory::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_a6156df500549a58]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata OrbitManeuverHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_d20eeeee6387179d]));
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
              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data);
              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, maneuvers),
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistory)[] = {
                { Py_tp_methods, t_OrbitManeuverHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistory_init_ },
                { Py_tp_getset, t_OrbitManeuverHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistory, t_OrbitManeuverHistory, OrbitManeuverHistory);

              void t_OrbitManeuverHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistory), &PY_TYPE_DEF(OrbitManeuverHistory), module, "OrbitManeuverHistory", 0);
              }

              void t_OrbitManeuverHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "class_", make_descriptor(OrbitManeuverHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "wrapfn_", make_descriptor(t_OrbitManeuverHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistory::wrap_Object(OrbitManeuverHistory(((t_OrbitManeuverHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitManeuverHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitManeuverHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuver));
              }

              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSRange::class$ = NULL;
          jmethodID *OneWayGNSSRange::mids$ = NULL;
          bool OneWayGNSSRange::live$ = false;
          ::java::lang::String *OneWayGNSSRange::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSRange::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSRange");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f49423698f256876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSRange::OneWayGNSSRange(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_f49423698f256876, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args);
          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data);
          static PyGetSetDef t_OneWayGNSSRange__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRange, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRange__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRange, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRange)[] = {
            { Py_tp_methods, t_OneWayGNSSRange__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSRange_init_ },
            { Py_tp_getset, t_OneWayGNSSRange__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRange)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRange, t_OneWayGNSSRange, OneWayGNSSRange);
          PyObject *t_OneWayGNSSRange::wrap_Object(const OneWayGNSSRange& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRange::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRange), &PY_TYPE_DEF(OneWayGNSSRange), module, "OneWayGNSSRange", 0);
          }

          void t_OneWayGNSSRange::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "class_", make_descriptor(OneWayGNSSRange::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "wrapfn_", make_descriptor(t_OneWayGNSSRange::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSRange::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSRange::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRange::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRange::wrap_Object(OneWayGNSSRange(((t_OneWayGNSSRange *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRange::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            OneWayGNSSRange object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = OneWayGNSSRange(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data)
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
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/TimeScales.h"
#include "java/util/List.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "java/util/Collection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPHistory::class$ = NULL;
      jmethodID *EOPHistory::mids$ = NULL;
      bool EOPHistory::live$ = false;
      jint EOPHistory::DEFAULT_INTERPOLATION_DEGREE = (jint) 0;

      jclass EOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_430599cedbcf6c87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;ILjava/util/Collection;ZLorg/orekit/time/TimeScales;)V");
          mids$[mid_cachesTidalCorrection_e470b6d9e0d979db] = env->getMethodID(cls, "cachesTidalCorrection", "()Z");
          mids$[mid_checkEOPContinuity_77e0f9a1f260e2e5] = env->getMethodID(cls, "checkEOPContinuity", "(D)V");
          mids$[mid_getConventions_f657aa17e72227da] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_1266c6198e5d43dd] = env->getMethodID(cls, "getEOPHistoryWithoutCachedTidalCorrection", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEndDate_aaa854c403487cf3] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEntries_a6156df500549a58] = env->getMethodID(cls, "getEntries", "()Ljava/util/List;");
          mids$[mid_getEquinoxNutationCorrection_e586dea4c0bad69b] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getEquinoxNutationCorrection_263b2fd0cf81fe4d] = env->getMethodID(cls, "getEquinoxNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getITRFVersion_cd056b51a1bc8948] = env->getMethodID(cls, "getITRFVersion", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getInterpolationDegree_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationDegree", "()I");
          mids$[mid_getLOD_e912d21057defe63] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLOD_7bc0fd76ee915b72] = env->getMethodID(cls, "getLOD", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNonRotatinOriginNutationCorrection_e586dea4c0bad69b] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getNonRotatinOriginNutationCorrection_263b2fd0cf81fe4d] = env->getMethodID(cls, "getNonRotatinOriginNutationCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPoleCorrection_8f1ef07ba316c64b] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/PoleCorrection;");
          mids$[mid_getPoleCorrection_a500ed9d98c577f1] = env->getMethodID(cls, "getPoleCorrection", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldPoleCorrection;");
          mids$[mid_getStartDate_aaa854c403487cf3] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTimeScales_5912acf3bafa785f] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_getUT1MinusUTC_e912d21057defe63] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getUT1MinusUTC_7bc0fd76ee915b72] = env->getMethodID(cls, "getUT1MinusUTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_isSimpleEop_e470b6d9e0d979db] = env->getMethodID(cls, "isSimpleEop", "()Z");
          mids$[mid_getNeighbors_1f145bd0decc1d0c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_hasDataFor_ee2067c5768b6768] = env->getMethodID(cls, "hasDataFor", "(Lorg/orekit/time/AbsoluteDate;)Z");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_INTERPOLATION_DEGREE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_DEGREE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPHistory::EOPHistory(const ::org::orekit::utils::IERSConventions & a0, jint a1, const ::java::util::Collection & a2, jboolean a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_430599cedbcf6c87, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      jboolean EOPHistory::cachesTidalCorrection() const
      {
        return env->callBooleanMethod(this$, mids$[mid_cachesTidalCorrection_e470b6d9e0d979db]);
      }

      void EOPHistory::checkEOPContinuity(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_checkEOPContinuity_77e0f9a1f260e2e5], a0);
      }

      ::org::orekit::utils::IERSConventions EOPHistory::getConventions() const
      {
        return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_f657aa17e72227da]));
      }

      EOPHistory EOPHistory::getEOPHistoryWithoutCachedTidalCorrection() const
      {
        return EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistoryWithoutCachedTidalCorrection_1266c6198e5d43dd]));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getEndDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_aaa854c403487cf3]));
      }

      ::java::util::List EOPHistory::getEntries() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEntries_a6156df500549a58]));
      }

      JArray< jdouble > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_e586dea4c0bad69b], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getEquinoxNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getEquinoxNutationCorrection_263b2fd0cf81fe4d], a0.this$));
      }

      ::org::orekit::frames::ITRFVersion EOPHistory::getITRFVersion(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_cd056b51a1bc8948], a0.this$));
      }

      jint EOPHistory::getInterpolationDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_f2f64475e4580546]);
      }

      jdouble EOPHistory::getLOD(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getLOD(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLOD_7bc0fd76ee915b72], a0.this$));
      }

      JArray< jdouble > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_e586dea4c0bad69b], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > EOPHistory::getNonRotatinOriginNutationCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getNonRotatinOriginNutationCorrection_263b2fd0cf81fe4d], a0.this$));
      }

      ::org::orekit::frames::PoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::PoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_8f1ef07ba316c64b], a0.this$));
      }

      ::org::orekit::frames::FieldPoleCorrection EOPHistory::getPoleCorrection(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldPoleCorrection(env->callObjectMethod(this$, mids$[mid_getPoleCorrection_a500ed9d98c577f1], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate EOPHistory::getStartDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::TimeScales EOPHistory::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_5912acf3bafa785f]));
      }

      jdouble EOPHistory::getUT1MinusUTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement EOPHistory::getUT1MinusUTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getUT1MinusUTC_7bc0fd76ee915b72], a0.this$));
      }

      jboolean EOPHistory::isSimpleEop() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSimpleEop_e470b6d9e0d979db]);
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
      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg);
      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self);
      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args);
      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self);
      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data);
      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data);
      static PyGetSetDef t_EOPHistory__fields_[] = {
        DECLARE_GET_FIELD(t_EOPHistory, conventions),
        DECLARE_GET_FIELD(t_EOPHistory, eOPHistoryWithoutCachedTidalCorrection),
        DECLARE_GET_FIELD(t_EOPHistory, endDate),
        DECLARE_GET_FIELD(t_EOPHistory, entries),
        DECLARE_GET_FIELD(t_EOPHistory, interpolationDegree),
        DECLARE_GET_FIELD(t_EOPHistory, simpleEop),
        DECLARE_GET_FIELD(t_EOPHistory, startDate),
        DECLARE_GET_FIELD(t_EOPHistory, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPHistory__methods_[] = {
        DECLARE_METHOD(t_EOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPHistory, cachesTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, checkEOPContinuity, METH_O),
        DECLARE_METHOD(t_EOPHistory, getConventions, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEOPHistoryWithoutCachedTidalCorrection, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEndDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEntries, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getEquinoxNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getITRFVersion, METH_O),
        DECLARE_METHOD(t_EOPHistory, getInterpolationDegree, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getLOD, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getNonRotatinOriginNutationCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getPoleCorrection, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, getStartDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getTimeScales, METH_NOARGS),
        DECLARE_METHOD(t_EOPHistory, getUT1MinusUTC, METH_VARARGS),
        DECLARE_METHOD(t_EOPHistory, isSimpleEop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPHistory)[] = {
        { Py_tp_methods, t_EOPHistory__methods_ },
        { Py_tp_init, (void *) t_EOPHistory_init_ },
        { Py_tp_getset, t_EOPHistory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPHistory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPHistory, t_EOPHistory, EOPHistory);

      void t_EOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPHistory), &PY_TYPE_DEF(EOPHistory), module, "EOPHistory", 0);
      }

      void t_EOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "class_", make_descriptor(EOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "wrapfn_", make_descriptor(t_EOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "boxfn_", make_descriptor(boxObject));
        env->getClass(EOPHistory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPHistory), "DEFAULT_INTERPOLATION_DEGREE", make_descriptor(EOPHistory::DEFAULT_INTERPOLATION_DEGREE));
      }

      static PyObject *t_EOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPHistory::initializeClass, 1)))
          return NULL;
        return t_EOPHistory::wrap_Object(EOPHistory(((t_EOPHistory *) arg)->object.this$));
      }
      static PyObject *t_EOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPHistory_init_(t_EOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::java::util::Collection a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean a3;
        ::org::orekit::time::TimeScales a4((jobject) NULL);
        EOPHistory object((jobject) NULL);

        if (!parseArgs(args, "KIKZk", ::org::orekit::utils::IERSConventions::initializeClass, ::java::util::Collection::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
        {
          INT_CALL(object = EOPHistory(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPHistory_cachesTidalCorrection(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.cachesTidalCorrection());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_checkEOPContinuity(t_EOPHistory *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.checkEOPContinuity(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "checkEOPContinuity", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getConventions(t_EOPHistory *self)
      {
        ::org::orekit::utils::IERSConventions result((jobject) NULL);
        OBJ_CALL(result = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self)
      {
        EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEndDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getEntries(t_EOPHistory *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(EOPEntry));
      }

      static PyObject *t_EOPHistory_getEquinoxNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getEquinoxNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEquinoxNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getITRFVersion(t_EOPHistory *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getITRFVersion(a0));
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFVersion", arg);
        return NULL;
      }

      static PyObject *t_EOPHistory_getInterpolationDegree(t_EOPHistory *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPHistory_getLOD(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLOD(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLOD", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getNonRotatinOriginNutationCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNonRotatinOriginNutationCorrection(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNonRotatinOriginNutationCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getPoleCorrection(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::PoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_PoleCorrection::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldPoleCorrection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPoleCorrection(a0));
              return ::org::orekit::frames::t_FieldPoleCorrection::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoleCorrection", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_getStartDate(t_EOPHistory *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getTimeScales(t_EOPHistory *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_EOPHistory_getUT1MinusUTC(t_EOPHistory *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getUT1MinusUTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1MinusUTC", args);
        return NULL;
      }

      static PyObject *t_EOPHistory_isSimpleEop(t_EOPHistory *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSimpleEop());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_EOPHistory_get__conventions(t_EOPHistory *self, void *data)
      {
        ::org::orekit::utils::IERSConventions value((jobject) NULL);
        OBJ_CALL(value = self->object.getConventions());
        return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__eOPHistoryWithoutCachedTidalCorrection(t_EOPHistory *self, void *data)
      {
        EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistoryWithoutCachedTidalCorrection());
        return t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__endDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__entries(t_EOPHistory *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEntries());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__interpolationDegree(t_EOPHistory *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getInterpolationDegree());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPHistory_get__simpleEop(t_EOPHistory *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSimpleEop());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_EOPHistory_get__startDate(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPHistory_get__timeScales(t_EOPHistory *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics$StreamingStatisticsBuilder::class$ = NULL;
        jmethodID *StreamingStatistics$StreamingStatisticsBuilder::mids$ = NULL;
        bool StreamingStatistics$StreamingStatisticsBuilder::live$ = false;

        jclass StreamingStatistics$StreamingStatisticsBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_build_cdee09d4729ad8fd] = env->getMethodID(cls, "build", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_extrema_2fa0b82810c56fd8] = env->getMethodID(cls, "extrema", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_moments_2fa0b82810c56fd8] = env->getMethodID(cls, "moments", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_percentiles_6bcab1bdf48141c3] = env->getMethodID(cls, "percentiles", "(DLorg/hipparchus/random/RandomGenerator;)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfLogs_2fa0b82810c56fd8] = env->getMethodID(cls, "sumOfLogs", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_sumOfSquares_2fa0b82810c56fd8] = env->getMethodID(cls, "sumOfSquares", "(Z)Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics$StreamingStatisticsBuilder::StreamingStatistics$StreamingStatisticsBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::stat::descriptive::StreamingStatistics StreamingStatistics$StreamingStatisticsBuilder::build() const
        {
          return ::org::hipparchus::stat::descriptive::StreamingStatistics(env->callObjectMethod(this$, mids$[mid_build_cdee09d4729ad8fd]));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::extrema(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_extrema_2fa0b82810c56fd8], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::moments(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_moments_2fa0b82810c56fd8], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::percentiles(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_percentiles_6bcab1bdf48141c3], a0, a1.this$));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfLogs(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfLogs_2fa0b82810c56fd8], a0));
        }

        StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics$StreamingStatisticsBuilder::sumOfSquares(jboolean a0) const
        {
          return StreamingStatistics$StreamingStatisticsBuilder(env->callObjectMethod(this$, mids$[mid_sumOfSquares_2fa0b82810c56fd8], a0));
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
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg);

        static PyMethodDef t_StreamingStatistics$StreamingStatisticsBuilder__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, extrema, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, moments, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, percentiles, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfLogs, METH_O),
          DECLARE_METHOD(t_StreamingStatistics$StreamingStatisticsBuilder, sumOfSquares, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          { Py_tp_methods, t_StreamingStatistics$StreamingStatisticsBuilder__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics$StreamingStatisticsBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics$StreamingStatisticsBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics$StreamingStatisticsBuilder, t_StreamingStatistics$StreamingStatisticsBuilder, StreamingStatistics$StreamingStatisticsBuilder);

        void t_StreamingStatistics$StreamingStatisticsBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), &PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder), module, "StreamingStatistics$StreamingStatisticsBuilder", 0);
        }

        void t_StreamingStatistics$StreamingStatisticsBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "class_", make_descriptor(StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "wrapfn_", make_descriptor(t_StreamingStatistics$StreamingStatisticsBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics$StreamingStatisticsBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(StreamingStatistics$StreamingStatisticsBuilder(((t_StreamingStatistics$StreamingStatisticsBuilder *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics$StreamingStatisticsBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics$StreamingStatisticsBuilder_init_(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args, PyObject *kwds)
        {
          StreamingStatistics$StreamingStatisticsBuilder object((jobject) NULL);

          INT_CALL(object = StreamingStatistics$StreamingStatisticsBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_build(t_StreamingStatistics$StreamingStatisticsBuilder *self)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_extrema(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.extrema(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "extrema", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_moments(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.moments(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "moments", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_percentiles(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.percentiles(a0, a1));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "percentiles", args);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfLogs(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfLogs(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfLogs", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics$StreamingStatisticsBuilder_sumOfSquares(t_StreamingStatistics$StreamingStatisticsBuilder *self, PyObject *arg)
        {
          jboolean a0;
          StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.sumOfSquares(a0));
            return t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sumOfSquares", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmParser::class$ = NULL;
              jmethodID *AcmParser::mids$ = NULL;
              bool AcmParser::live$ = false;

              jclass AcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_fe21b0b85e8b60d9] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_c489cac8f838b2e9] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_7c784a34c8278ccf] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_build_fe21b0b85e8b60d9]));
              }

              jboolean AcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
              }

              jboolean AcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
              }

              jboolean AcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_c489cac8f838b2e9]));
              }

              ::java::util::Map AcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_d6753b7055940a54]));
              }

              jboolean AcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
              }

              jboolean AcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
              }

              jboolean AcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_parse_7c784a34c8278ccf], a0.this$));
              }

              jboolean AcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
              }

              jboolean AcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
              }

              jboolean AcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
              }

              void AcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg);
              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data);
              static PyGetSetDef t_AcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_AcmParser, header),
                DECLARE_GET_FIELD(t_AcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_AcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmParser__methods_[] = {
                DECLARE_METHOD(t_AcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, parse, METH_O),
                DECLARE_METHOD(t_AcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmParser)[] = {
                { Py_tp_methods, t_AcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AcmParser, t_AcmParser, AcmParser);
              PyObject *t_AcmParser::wrap_Object(const AcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmParser), &PY_TYPE_DEF(AcmParser), module, "AcmParser", 0);
              }

              void t_AcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "class_", make_descriptor(AcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "wrapfn_", make_descriptor(t_AcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmParser::initializeClass, 1)))
                  return NULL;
                return t_AcmParser::wrap_Object(AcmParser(((t_AcmParser *) arg)->object.this$));
              }
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
              }

              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
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
            namespace oem {

              ::java::lang::Class *OemWriter::class$ = NULL;
              jmethodID *OemWriter::mids$ = NULL;
              bool OemWriter::live$ = false;
              jdouble OemWriter::CCSDS_OEM_VERS = (jdouble) 0;
              ::java::lang::String *OemWriter::DEFAULT_FILE_NAME = NULL;
              jint OemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7cae0d769c2d9ccc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_a14d189c8b6dc4c8] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/odm/oem/OemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OEM_VERS = env->getStaticDoubleField(cls, "CCSDS_OEM_VERS");
                  DEFAULT_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_FILE_NAME", "Ljava/lang/String;"));
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemWriter::OemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_7cae0d769c2d9ccc, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args);
              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data);
              static PyGetSetDef t_OemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemWriter__methods_[] = {
                DECLARE_METHOD(t_OemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemWriter)[] = {
                { Py_tp_methods, t_OemWriter__methods_ },
                { Py_tp_init, (void *) t_OemWriter_init_ },
                { Py_tp_getset, t_OemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OemWriter, t_OemWriter, OemWriter);
              PyObject *t_OemWriter::wrap_Object(const OemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OemWriter), &PY_TYPE_DEF(OemWriter), module, "OemWriter", 0);
              }

              void t_OemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "class_", make_descriptor(OemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "wrapfn_", make_descriptor(t_OemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "CCSDS_OEM_VERS", make_descriptor(OemWriter::CCSDS_OEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "DEFAULT_FILE_NAME", make_descriptor(j2p(*OemWriter::DEFAULT_FILE_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "KVN_PADDING_WIDTH", make_descriptor(OemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemWriter::initializeClass, 1)))
                  return NULL;
                return t_OemWriter::wrap_Object(OemWriter(((t_OemWriter *) arg)->object.this$));
              }
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(Oem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data)
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
#include "org/orekit/files/sp3/SP3Writer.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Writer::class$ = NULL;
        jmethodID *SP3Writer::mids$ = NULL;
        bool SP3Writer::live$ = false;

        jclass SP3Writer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Writer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_52f16e19f52d2733] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_write_0c62a5505384da6e] = env->getMethodID(cls, "write", "(Lorg/orekit/files/sp3/SP3;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Writer::SP3Writer(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52f16e19f52d2733, a0.this$, a1.this$, a2.this$)) {}

        void SP3Writer::write(const ::org::orekit::files::sp3::SP3 & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_write_0c62a5505384da6e], a0.this$);
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
        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg);

        static PyMethodDef t_SP3Writer__methods_[] = {
          DECLARE_METHOD(t_SP3Writer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, write, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Writer)[] = {
          { Py_tp_methods, t_SP3Writer__methods_ },
          { Py_tp_init, (void *) t_SP3Writer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Writer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Writer, t_SP3Writer, SP3Writer);

        void t_SP3Writer::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Writer), &PY_TYPE_DEF(SP3Writer), module, "SP3Writer", 0);
        }

        void t_SP3Writer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "class_", make_descriptor(SP3Writer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "wrapfn_", make_descriptor(t_SP3Writer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Writer::initializeClass, 1)))
            return NULL;
          return t_SP3Writer::wrap_Object(SP3Writer(((t_SP3Writer *) arg)->object.this$));
        }
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Writer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::TimeScales a2((jobject) NULL);
          SP3Writer object((jobject) NULL);

          if (!parseArgs(args, "ksk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3Writer(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3 a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3::initializeClass, &a0))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AdapterPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator::class$ = NULL;
        jmethodID *AdapterPropagator::mids$ = NULL;
        bool AdapterPropagator::live$ = false;

        jclass AdapterPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d2c685c0565d437e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_addEffect_7774cfce6b8b756b] = env->getMethodID(cls, "addEffect", "(Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;)V");
            mids$[mid_getEffects_a6156df500549a58] = env->getMethodID(cls, "getEffects", "()Ljava/util/List;");
            mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPropagator_46f8fd1706005d71] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_basicPropagate_889031abe87f3b14] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterPropagator::AdapterPropagator(const ::org::orekit::propagation::Propagator & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d2c685c0565d437e, a0.this$)) {}

        void AdapterPropagator::addEffect(const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEffect_7774cfce6b8b756b], a0.this$);
        }

        ::java::util::List AdapterPropagator::getEffects() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEffects_a6156df500549a58]));
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_dd3e4a8d51055f1f]));
        }

        ::org::orekit::propagation::Propagator AdapterPropagator::getPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_46f8fd1706005d71]));
        }

        void AdapterPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
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
        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg);
        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data);
        static PyGetSetDef t_AdapterPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterPropagator, effects),
          DECLARE_GET_FIELD(t_AdapterPropagator, initialState),
          DECLARE_GET_FIELD(t_AdapterPropagator, propagator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterPropagator__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, addEffect, METH_O),
          DECLARE_METHOD(t_AdapterPropagator, getEffects, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AdapterPropagator, getPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator)[] = {
          { Py_tp_methods, t_AdapterPropagator__methods_ },
          { Py_tp_init, (void *) t_AdapterPropagator_init_ },
          { Py_tp_getset, t_AdapterPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator, t_AdapterPropagator, AdapterPropagator);

        void t_AdapterPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator), &PY_TYPE_DEF(AdapterPropagator), module, "AdapterPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "DifferentialEffect", make_descriptor(&PY_TYPE_DEF(AdapterPropagator$DifferentialEffect)));
        }

        void t_AdapterPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "class_", make_descriptor(AdapterPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "wrapfn_", make_descriptor(t_AdapterPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator::wrap_Object(AdapterPropagator(((t_AdapterPropagator *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::Propagator a0((jobject) NULL);
          AdapterPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            INT_CALL(object = AdapterPropagator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEffect(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEffect", arg);
          return NULL;
        }

        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::PY_TYPE(AdapterPropagator$DifferentialEffect));
        }

        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
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

              ::java::lang::Class *Alfano2005::class$ = NULL;
              jmethodID *Alfano2005::mids$ = NULL;
              bool Alfano2005::live$ = false;

              jclass Alfano2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfano2005::Alfano2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Alfano2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_23211d1e26c9c2c1], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Alfano2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f7ffb3ec4f2d0056], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfano2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_830fb81b25fc6619]));
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
              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data);
              static PyGetSetDef t_Alfano2005__fields_[] = {
                DECLARE_GET_FIELD(t_Alfano2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfano2005__methods_[] = {
                DECLARE_METHOD(t_Alfano2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Alfano2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfano2005)[] = {
                { Py_tp_methods, t_Alfano2005__methods_ },
                { Py_tp_init, (void *) t_Alfano2005_init_ },
                { Py_tp_getset, t_Alfano2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfano2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Alfano2005, t_Alfano2005, Alfano2005);

              void t_Alfano2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfano2005), &PY_TYPE_DEF(Alfano2005), module, "Alfano2005", 0);
              }

              void t_Alfano2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "class_", make_descriptor(Alfano2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "wrapfn_", make_descriptor(t_Alfano2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfano2005::initializeClass, 1)))
                  return NULL;
                return t_Alfano2005::wrap_Object(Alfano2005(((t_Alfano2005 *) arg)->object.this$));
              }
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfano2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds)
              {
                Alfano2005 object((jobject) NULL);

                INT_CALL(object = Alfano2005());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args)
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

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data)
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
#include "org/hipparchus/analysis/function/Inverse.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Inverse::class$ = NULL;
        jmethodID *Inverse::mids$ = NULL;
        bool Inverse::live$ = false;

        jclass Inverse::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Inverse");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Inverse::Inverse() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Inverse::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Inverse::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
      namespace function {
        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args);

        static PyMethodDef t_Inverse__methods_[] = {
          DECLARE_METHOD(t_Inverse, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Inverse)[] = {
          { Py_tp_methods, t_Inverse__methods_ },
          { Py_tp_init, (void *) t_Inverse_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Inverse)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Inverse, t_Inverse, Inverse);

        void t_Inverse::install(PyObject *module)
        {
          installType(&PY_TYPE(Inverse), &PY_TYPE_DEF(Inverse), module, "Inverse", 0);
        }

        void t_Inverse::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "class_", make_descriptor(Inverse::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "wrapfn_", make_descriptor(t_Inverse::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Inverse::initializeClass, 1)))
            return NULL;
          return t_Inverse::wrap_Object(Inverse(((t_Inverse *) arg)->object.this$));
        }
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Inverse::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds)
        {
          Inverse object((jobject) NULL);

          INT_CALL(object = Inverse());
          self->object = object;

          return 0;
        }

        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}

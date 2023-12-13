#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PropulsionModel::class$ = NULL;
          jmethodID *PropulsionModel::mids$ = NULL;
          bool PropulsionModel::live$ = false;

          jclass PropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_e58d235f532e1fec] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_fa24c1d0852b99d1] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getMassDerivatives_8e86371c61460f23] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_f867476668f8eb00] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_e58d235f532e1fec], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_fa24c1d0852b99d1], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::forces::maneuvers::Control3DVectorCostType PropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_2eba60c257188b83]));
          }

          ::java::util::stream::Stream PropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
          }

          ::java::util::stream::Stream PropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
          }

          jdouble PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_8e86371c61460f23], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_f867476668f8eb00], a0.this$, a1.this$));
          }

          ::java::lang::String PropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          void PropulsionModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
          }

          void PropulsionModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg);
          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data);
          static PyGetSetDef t_PropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_PropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_PropulsionModel, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_PropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PropulsionModel)[] = {
            { Py_tp_methods, t_PropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(PropulsionModel, t_PropulsionModel, PropulsionModel);

          void t_PropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PropulsionModel), &PY_TYPE_DEF(PropulsionModel), module, "PropulsionModel", 0);
          }

          void t_PropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "class_", make_descriptor(PropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "wrapfn_", make_descriptor(t_PropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PropulsionModel::wrap_Object(PropulsionModel(((t_PropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAcceleration", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getMassDerivatives", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
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
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanModel.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanModel::mids$ = NULL;
        bool SemiAnalyticalKalmanModel::live$ = false;

        jclass SemiAnalyticalKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_aef7db4b13ced902] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_c325492395d89b24] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_e37ac5ac73cc5311] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_66c9e2c4a4a85214] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_bcc61f692c4eea8a] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_dd883423c2f99f26] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getObserver_f666564f549c2e32] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_280c3390961e0a50] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_c868912a9bd4d407] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_578d9ba5b3b8b483] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_280c3390961e0a50] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateReferenceTrajectory_7adcca4465dccf23] = env->getMethodID(cls, "updateReferenceTrajectory", "(Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;)V");
            mids$[mid_updateShortPeriods_280c3390961e0a50] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_aef7db4b13ced902], a0.this$, a1.this$);
        }

        void SemiAnalyticalKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_c325492395d89b24]));
        }

        jint SemiAnalyticalKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_e37ac5ac73cc5311]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_66c9e2c4a4a85214]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution SemiAnalyticalKalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_bcc61f692c4eea8a], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_dd883423c2f99f26], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_f666564f549c2e32]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821]));
        }

        void SemiAnalyticalKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_280c3390961e0a50], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_c868912a9bd4d407], a0.this$, a1.this$));
        }

        void SemiAnalyticalKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_578d9ba5b3b8b483], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_280c3390961e0a50], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateReferenceTrajectory(const ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateReferenceTrajectory_7adcca4465dccf23], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_280c3390961e0a50], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data);
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagator),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateReferenceTrajectory, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanModel, t_SemiAnalyticalKalmanModel, SemiAnalyticalKalmanModel);

        void t_SemiAnalyticalKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanModel), &PY_TYPE_DEF(SemiAnalyticalKalmanModel), module, "SemiAnalyticalKalmanModel", 0);
        }

        void t_SemiAnalyticalKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "class_", make_descriptor(SemiAnalyticalKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanModel::wrap_Object(SemiAnalyticalKalmanModel(((t_SemiAnalyticalKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_ExtendedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateReferenceTrajectory(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateReferenceTrajectory", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
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
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeExtremumDetector::class$ = NULL;
        jmethodID *LatitudeExtremumDetector::mids$ = NULL;
        bool LatitudeExtremumDetector::live$ = false;

        jclass LatitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fe488c9958f1d2fe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_c418d6dd4ee73383] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_95d324082d4f411b] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_3f2a1a8ae74f496a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeExtremumDetector::LatitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fe488c9958f1d2fe, a0.this$)) {}

        LatitudeExtremumDetector::LatitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c418d6dd4ee73383, a0, a1, a2.this$)) {}

        jdouble LatitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LatitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_95d324082d4f411b]));
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
        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args);
        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self);
        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data);
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LatitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LatitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LatitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeExtremumDetector, t_LatitudeExtremumDetector, LatitudeExtremumDetector);
        PyObject *t_LatitudeExtremumDetector::wrap_Object(const LatitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeExtremumDetector), &PY_TYPE_DEF(LatitudeExtremumDetector), module, "LatitudeExtremumDetector", 0);
        }

        void t_LatitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "class_", make_descriptor(LatitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "wrapfn_", make_descriptor(t_LatitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeExtremumDetector::wrap_Object(LatitudeExtremumDetector(((t_LatitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
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

        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElementsKey::class$ = NULL;
            jmethodID *KeplerianElementsKey::mids$ = NULL;
            bool KeplerianElementsKey::live$ = false;
            KeplerianElementsKey *KeplerianElementsKey::ARG_OF_PERICENTER = NULL;
            KeplerianElementsKey *KeplerianElementsKey::COMMENT = NULL;
            KeplerianElementsKey *KeplerianElementsKey::ECCENTRICITY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::EPOCH = NULL;
            KeplerianElementsKey *KeplerianElementsKey::GM = NULL;
            KeplerianElementsKey *KeplerianElementsKey::INCLINATION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_ANOMALY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_MOTION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::RA_OF_ASC_NODE = NULL;
            KeplerianElementsKey *KeplerianElementsKey::SEMI_MAJOR_AXIS = NULL;
            KeplerianElementsKey *KeplerianElementsKey::TRUE_ANOMALY = NULL;

            jclass KeplerianElementsKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_5724598d97234a33] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;)Z");
                mids$[mid_valueOf_7cef80353448408d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");
                mids$[mid_values_86e094ae356316e9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ARG_OF_PERICENTER = new KeplerianElementsKey(env->getStaticObjectField(cls, "ARG_OF_PERICENTER", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                COMMENT = new KeplerianElementsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                ECCENTRICITY = new KeplerianElementsKey(env->getStaticObjectField(cls, "ECCENTRICITY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                EPOCH = new KeplerianElementsKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                GM = new KeplerianElementsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                INCLINATION = new KeplerianElementsKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_MOTION = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_MOTION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                RA_OF_ASC_NODE = new KeplerianElementsKey(env->getStaticObjectField(cls, "RA_OF_ASC_NODE", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                SEMI_MAJOR_AXIS = new KeplerianElementsKey(env->getStaticObjectField(cls, "SEMI_MAJOR_AXIS", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                TRUE_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "TRUE_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean KeplerianElementsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_5724598d97234a33], a0.this$, a1.this$, a2.this$);
            }

            KeplerianElementsKey KeplerianElementsKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return KeplerianElementsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7cef80353448408d], a0.this$));
            }

            JArray< KeplerianElementsKey > KeplerianElementsKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< KeplerianElementsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_86e094ae356316e9]));
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
            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type);
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data);
            static PyGetSetDef t_KeplerianElementsKey__fields_[] = {
              DECLARE_GET_FIELD(t_KeplerianElementsKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElementsKey__methods_[] = {
              DECLARE_METHOD(t_KeplerianElementsKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, process, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElementsKey)[] = {
              { Py_tp_methods, t_KeplerianElementsKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_KeplerianElementsKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElementsKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(KeplerianElementsKey, t_KeplerianElementsKey, KeplerianElementsKey);
            PyObject *t_KeplerianElementsKey::wrap_Object(const KeplerianElementsKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_KeplerianElementsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_KeplerianElementsKey::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElementsKey), &PY_TYPE_DEF(KeplerianElementsKey), module, "KeplerianElementsKey", 0);
            }

            void t_KeplerianElementsKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "class_", make_descriptor(KeplerianElementsKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "wrapfn_", make_descriptor(t_KeplerianElementsKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(KeplerianElementsKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ARG_OF_PERICENTER", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ARG_OF_PERICENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "COMMENT", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ECCENTRICITY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ECCENTRICITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "EPOCH", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "GM", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::GM)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "INCLINATION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_ANOMALY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_MOTION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_MOTION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "RA_OF_ASC_NODE", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::RA_OF_ASC_NODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "SEMI_MAJOR_AXIS", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::SEMI_MAJOR_AXIS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "TRUE_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::TRUE_ANOMALY)));
            }

            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElementsKey::initializeClass, 1)))
                return NULL;
              return t_KeplerianElementsKey::wrap_Object(KeplerianElementsKey(((t_KeplerianElementsKey *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElementsKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              KeplerianElementsKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::valueOf(a0));
                return t_KeplerianElementsKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type)
            {
              JArray< KeplerianElementsKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::values());
              return JArray<jobject>(result.this$).wrap(t_KeplerianElementsKey::wrap_jobject);
            }
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data)
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
#include "org/hipparchus/stat/inference/ChiSquareTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *ChiSquareTest::class$ = NULL;
        jmethodID *ChiSquareTest::mids$ = NULL;
        bool ChiSquareTest::live$ = false;

        jclass ChiSquareTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/ChiSquareTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_chiSquare_54e0c9e47c29aca2] = env->getMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_5da72ec1f5d4a740] = env->getMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_f69626ae7ca2489a] = env->getMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_54e0c9e47c29aca2] = env->getMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_5da72ec1f5d4a740] = env->getMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_446489047f3f1b4f] = env->getMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_337fdba983c67932] = env->getMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_f69626ae7ca2489a] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_05bd0745ca7cc56a] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquareTest::ChiSquareTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble ChiSquareTest::chiSquare(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_54e0c9e47c29aca2], a0.this$);
        }

        jdouble ChiSquareTest::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_54e0c9e47c29aca2], a0.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_446489047f3f1b4f], a0.this$, a1);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_337fdba983c67932], a0.this$, a1.this$, a2);
        }

        jdouble ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_05bd0745ca7cc56a], a0.this$, a1.this$, a2);
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
        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args);

        static PyMethodDef t_ChiSquareTest__methods_[] = {
          DECLARE_METHOD(t_ChiSquareTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquare, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTest, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTestDataSetsComparison, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquareTest)[] = {
          { Py_tp_methods, t_ChiSquareTest__methods_ },
          { Py_tp_init, (void *) t_ChiSquareTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquareTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ChiSquareTest, t_ChiSquareTest, ChiSquareTest);

        void t_ChiSquareTest::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquareTest), &PY_TYPE_DEF(ChiSquareTest), module, "ChiSquareTest", 0);
        }

        void t_ChiSquareTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "class_", make_descriptor(ChiSquareTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "wrapfn_", make_descriptor(t_ChiSquareTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquareTest::initializeClass, 1)))
            return NULL;
          return t_ChiSquareTest::wrap_Object(ChiSquareTest(((t_ChiSquareTest *) arg)->object.this$));
        }
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquareTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds)
        {
          ChiSquareTest object((jobject) NULL);

          INT_CALL(object = ChiSquareTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanModel::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanModel::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_aef7db4b13ced902] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_c325492395d89b24] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_e37ac5ac73cc5311] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_66c9e2c4a4a85214] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_1545440d4dab3e97] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_c0bf9a4322bf8619] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getNumberSelectedMeasurementDrivers_55546ef6a647f39b] = env->getMethodID(cls, "getNumberSelectedMeasurementDrivers", "()I");
            mids$[mid_getNumberSelectedOrbitalDrivers_55546ef6a647f39b] = env->getMethodID(cls, "getNumberSelectedOrbitalDrivers", "()I");
            mids$[mid_getNumberSelectedPropagationDrivers_55546ef6a647f39b] = env->getMethodID(cls, "getNumberSelectedPropagationDrivers", "()I");
            mids$[mid_getObserver_f666564f549c2e32] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_9927c8980e79c922] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_b0b6792f6308ef30] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_280c3390961e0a50] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_cab9cfc5c83fc53e] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_578d9ba5b3b8b483] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_280c3390961e0a50] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_280c3390961e0a50] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_aef7db4b13ced902], a0.this$, a1.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_3807ff088e7ce821]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalUnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_c325492395d89b24]));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalUnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_e37ac5ac73cc5311]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_cfb822366e8ab425]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_66c9e2c4a4a85214]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution SemiAnalyticalUnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_1545440d4dab3e97], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_c0bf9a4322bf8619], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedMeasurementDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedMeasurementDrivers_55546ef6a647f39b]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedOrbitalDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedOrbitalDrivers_55546ef6a647f39b]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedPropagationDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedPropagationDrivers_55546ef6a647f39b]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalUnscentedKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_f666564f549c2e32]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_f77d745f2128c391]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_9927c8980e79c922]));
        }

        JArray< ::org::hipparchus::linear::RealVector > SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_b0b6792f6308ef30], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_3807ff088e7ce821]));
        }

        void SemiAnalyticalUnscentedKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_280c3390961e0a50], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_cab9cfc5c83fc53e], a0.this$, a1.this$));
        }

        void SemiAnalyticalUnscentedKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_578d9ba5b3b8b483], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_280c3390961e0a50], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_280c3390961e0a50], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagator),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedMeasurementDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedOrbitalDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedPropagationDrivers),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedMeasurementDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedOrbitalDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedPropagationDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanModel, t_SemiAnalyticalUnscentedKalmanModel, SemiAnalyticalUnscentedKalmanModel);

        void t_SemiAnalyticalUnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanModel), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanModel), module, "SemiAnalyticalUnscentedKalmanModel", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanModel::wrap_Object(SemiAnalyticalUnscentedKalmanModel(((t_SemiAnalyticalUnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
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

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
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
#include "org/orekit/utils/units/UnitsConverter.h"
#include "org/orekit/utils/units/UnitsConverter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsConverter::class$ = NULL;
        jmethodID *UnitsConverter::mids$ = NULL;
        bool UnitsConverter::live$ = false;
        UnitsConverter *UnitsConverter::ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::DAYS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::IDENTITY = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_2_TO_METRES_2 = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_TO_METRES = NULL;
        UnitsConverter *UnitsConverter::KM3_P_S2_TO_M3_P_S2 = NULL;
        UnitsConverter *UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::MILLI_SECONDS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::NANO_TESLAS_TO_TESLAS = NULL;
        UnitsConverter *UnitsConverter::PERCENTS_TO_UNIT = NULL;

        jclass UnitsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4d5ce5d361e6f129] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)V");
            mids$[mid_convert_04fd0666b613d2ab] = env->getMethodID(cls, "convert", "(D)D");
            mids$[mid_getFrom_6466188dbb1eea22] = env->getMethodID(cls, "getFrom", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_getTo_6466188dbb1eea22] = env->getMethodID(cls, "getTo", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            DAYS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "DAYS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            IDENTITY = new UnitsConverter(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_2_TO_METRES_2 = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_2_TO_METRES_2", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_TO_METRES = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_TO_METRES", "Lorg/orekit/utils/units/UnitsConverter;"));
            KM3_P_S2_TO_M3_P_S2 = new UnitsConverter(env->getStaticObjectField(cls, "KM3_P_S2_TO_M3_P_S2", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_SECONDS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_SECONDS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            NANO_TESLAS_TO_TESLAS = new UnitsConverter(env->getStaticObjectField(cls, "NANO_TESLAS_TO_TESLAS", "Lorg/orekit/utils/units/UnitsConverter;"));
            PERCENTS_TO_UNIT = new UnitsConverter(env->getStaticObjectField(cls, "PERCENTS_TO_UNIT", "Lorg/orekit/utils/units/UnitsConverter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsConverter::UnitsConverter(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d5ce5d361e6f129, a0.this$, a1.this$)) {}

        jdouble UnitsConverter::convert(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_convert_04fd0666b613d2ab], a0);
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getFrom() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getFrom_6466188dbb1eea22]));
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getTo() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getTo_6466188dbb1eea22]));
        }

        ::java::lang::String UnitsConverter::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg);
        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args);
        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data);
        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data);
        static PyGetSetDef t_UnitsConverter__fields_[] = {
          DECLARE_GET_FIELD(t_UnitsConverter, from),
          DECLARE_GET_FIELD(t_UnitsConverter, to),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnitsConverter__methods_[] = {
          DECLARE_METHOD(t_UnitsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, convert, METH_O),
          DECLARE_METHOD(t_UnitsConverter, getFrom, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, getTo, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsConverter)[] = {
          { Py_tp_methods, t_UnitsConverter__methods_ },
          { Py_tp_init, (void *) t_UnitsConverter_init_ },
          { Py_tp_getset, t_UnitsConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsConverter, t_UnitsConverter, UnitsConverter);

        void t_UnitsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsConverter), &PY_TYPE_DEF(UnitsConverter), module, "UnitsConverter", 0);
        }

        void t_UnitsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "class_", make_descriptor(UnitsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "wrapfn_", make_descriptor(t_UnitsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnitsConverter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "DAYS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::DAYS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "IDENTITY", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::IDENTITY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_2_TO_METRES_2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_2_TO_METRES_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_TO_METRES", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_TO_METRES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KM3_P_S2_TO_M3_P_S2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KM3_P_S2_TO_M3_P_S2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_SECONDS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_SECONDS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "NANO_TESLAS_TO_TESLAS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::NANO_TESLAS_TO_TESLAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "PERCENTS_TO_UNIT", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::PERCENTS_TO_UNIT)));
        }

        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsConverter::initializeClass, 1)))
            return NULL;
          return t_UnitsConverter::wrap_Object(UnitsConverter(((t_UnitsConverter *) arg)->object.this$));
        }
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          ::org::orekit::utils::units::Unit a1((jobject) NULL);
          UnitsConverter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
          {
            INT_CALL(object = UnitsConverter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.convert(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "convert", arg);
          return NULL;
        }

        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(UnitsConverter), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }

        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *FieldDSSTPropagator::class$ = NULL;
          jmethodID *FieldDSSTPropagator::mids$ = NULL;
          bool FieldDSSTPropagator::live$ = false;

          jclass FieldDSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b32dfc76ba0d0dfd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
              mids$[mid_init$_85033171501dd1b3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_fb37e725b65dfde5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_init$_e0343c2c388bd762] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_d24de896ffe1d07a] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_042e6dd80dea32d3] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeMeanState_45ec3e9f52e63efd] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_computeOsculatingState_042e6dd80dea32d3] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_getAllForceModels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_7e8f11dd23d1142c] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_initialIsOsculating_9ab94ac1dc23b105] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_a1fa5dae97ea5ed2] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_54d9efbf99822980] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_setInitialState_8d1259686cbbe3a1] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_f2b4bfa0af1007e8] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setMu_f2b4bfa0af1007e8] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_setSatelliteRevolution_44ed599e93e8a30c] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_4d8d93045ba4dc2c] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_tolerances_725d262c7a2ce0e1] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_tolerances_e9446c2dc4d08ee3] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;)[[D");
              mids$[mid_createMapper_23e677752bbdcbdf] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
              mids$[mid_getMainStateEquations_f48ddce9ae4b38bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
              mids$[mid_getInitialIntegrationState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
              mids$[mid_beforeIntegration_96d019f392abf918] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_afterIntegration_a1fa5dae97ea5ed2] = env->getMethodID(cls, "afterIntegration", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_b32dfc76ba0d0dfd, a0.this$, a1.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_85033171501dd1b3, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_fb37e725b65dfde5, a0.this$, a1.this$, a2.this$)) {}

          FieldDSSTPropagator::FieldDSSTPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_e0343c2c388bd762, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void FieldDSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_d24de896ffe1d07a], a0.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_042e6dd80dea32d3], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeMeanState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_45ec3e9f52e63efd], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldDSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::FieldSpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_042e6dd80dea32d3], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List FieldDSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_e62d3bb06d56d7e3]));
          }

          ::org::orekit::orbits::OrbitType FieldDSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
          }

          ::org::orekit::orbits::PositionAngleType FieldDSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
          }

          jint FieldDSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_55546ef6a647f39b]);
          }

          ::java::util::Set FieldDSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_7e8f11dd23d1142c]));
          }

          jboolean FieldDSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_9ab94ac1dc23b105]);
          }

          void FieldDSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_a1fa5dae97ea5ed2]);
          }

          void FieldDSSTPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
          }

          void FieldDSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_54d9efbf99822980], a0.this$);
          }

          void FieldDSSTPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_8d1259686cbbe3a1], a0.this$, a1.this$);
          }

          void FieldDSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_44ed599e93e8a30c], a0);
          }

          void FieldDSSTPropagator::setInterpolationGridToMaxTimeGap(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_f2b4bfa0af1007e8], a0.this$);
          }

          void FieldDSSTPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_f2b4bfa0af1007e8], a0.this$);
          }

          void FieldDSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_44ed599e93e8a30c], a0);
          }

          void FieldDSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_4d8d93045ba4dc2c], a0.this$);
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_725d262c7a2ce0e1], a0.this$, a1.this$));
          }

          JArray< JArray< jdouble > > FieldDSSTPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_e9446c2dc4d08ee3], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args);
          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self);
          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg);
          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data);
          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data);
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data);
          static PyGetSetDef t_FieldDSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_FieldDSSTPropagator, mu),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_FieldDSSTPropagator, selectedCoefficients),
            DECLARE_GET_FIELD(t_FieldDSSTPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldDSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_FieldDSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDSSTPropagator)[] = {
            { Py_tp_methods, t_FieldDSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_FieldDSSTPropagator_init_ },
            { Py_tp_getset, t_FieldDSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(FieldDSSTPropagator, t_FieldDSSTPropagator, FieldDSSTPropagator);
          PyObject *t_FieldDSSTPropagator::wrap_Object(const FieldDSSTPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDSSTPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDSSTPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDSSTPropagator *self = (t_FieldDSSTPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDSSTPropagator), &PY_TYPE_DEF(FieldDSSTPropagator), module, "FieldDSSTPropagator", 0);
          }

          void t_FieldDSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "class_", make_descriptor(FieldDSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "wrapfn_", make_descriptor(t_FieldDSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldDSSTPropagator::wrap_Object(FieldDSSTPropagator(((t_FieldDSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldDSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDSSTPropagator_of_(t_FieldDSSTPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDSSTPropagator_init_(t_FieldDSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::propagation::PropagationType a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
                FieldDSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "KKKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
                {
                  INT_CALL(object = FieldDSSTPropagator(a0, a1, a2, a3));
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

          static PyObject *t_FieldDSSTPropagator_addForceModel(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addForceModel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "KkKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_getAllForceModels(t_FieldDSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_FieldDSSTPropagator_getOrbitType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getPositionAngleType(t_FieldDSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_FieldDSSTPropagator_getSatelliteRevolution(t_FieldDSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldDSSTPropagator_getSelectedCoefficients(t_FieldDSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_FieldDSSTPropagator_initialIsOsculating(t_FieldDSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldDSSTPropagator_removeForceModels(t_FieldDSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldDSSTPropagator_resetInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setAttitudeProvider(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setInitialState(t_FieldDSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToFixedNumberOfPoints", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setInterpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setMu(t_FieldDSSTPropagator *self, PyObject *args)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldDSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_FieldDSSTPropagator_setSatelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setSatelliteRevolution(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteRevolution", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_setSelectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg)
          {
            ::java::util::Set a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
            {
              OBJ_CALL(self->object.setSelectedCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSelectedCoefficients", arg);
            return NULL;
          }

          static PyObject *t_FieldDSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::FieldDSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }
          static PyObject *t_FieldDSSTPropagator_get__parameters_(t_FieldDSSTPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldDSSTPropagator_get__allForceModels(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_FieldDSSTPropagator_set__attitudeProvider(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
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

          static int t_FieldDSSTPropagator_set__initialState(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setInterpolationGridToFixedNumberOfPoints(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToFixedNumberOfPoints", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__interpolationGridToMaxTimeGap(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_FieldDSSTPropagator_set__mu(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                INT_CALL(self->object.setMu(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__orbitType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__positionAngleType(t_FieldDSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_FieldDSSTPropagator_get__satelliteRevolution(t_FieldDSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_FieldDSSTPropagator_set__satelliteRevolution(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setSatelliteRevolution(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteRevolution", arg);
            return -1;
          }

          static PyObject *t_FieldDSSTPropagator_get__selectedCoefficients(t_FieldDSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_FieldDSSTPropagator_set__selectedCoefficients(t_FieldDSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Set value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Set::initializeClass, &value))
              {
                INT_CALL(self->object.setSelectedCoefficients(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "selectedCoefficients", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
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
              mids$[mid_init$_3482c99d647cecc6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_0bffdda4caaf1050] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/TurnAroundRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeBuilder::TurnAroundRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_3482c99d647cecc6, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::TurnAroundRange TurnAroundRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::TurnAroundRange(env->callObjectMethod(this$, mids$[mid_build_0bffdda4caaf1050], a0.this$, a1.this$));
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
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *BodiesElements::class$ = NULL;
      jmethodID *BodiesElements::mids$ = NULL;
      bool BodiesElements::live$ = false;

      jclass BodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/BodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_52219a7c17472ec7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD)V");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_b74f83833fdad017] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLJu_b74f83833fdad017] = env->getMethodID(cls, "getLJu", "()D");
          mids$[mid_getLJuDot_b74f83833fdad017] = env->getMethodID(cls, "getLJuDot", "()D");
          mids$[mid_getLMa_b74f83833fdad017] = env->getMethodID(cls, "getLMa", "()D");
          mids$[mid_getLMaDot_b74f83833fdad017] = env->getMethodID(cls, "getLMaDot", "()D");
          mids$[mid_getLMe_b74f83833fdad017] = env->getMethodID(cls, "getLMe", "()D");
          mids$[mid_getLMeDot_b74f83833fdad017] = env->getMethodID(cls, "getLMeDot", "()D");
          mids$[mid_getLNe_b74f83833fdad017] = env->getMethodID(cls, "getLNe", "()D");
          mids$[mid_getLNeDot_b74f83833fdad017] = env->getMethodID(cls, "getLNeDot", "()D");
          mids$[mid_getLSa_b74f83833fdad017] = env->getMethodID(cls, "getLSa", "()D");
          mids$[mid_getLSaDot_b74f83833fdad017] = env->getMethodID(cls, "getLSaDot", "()D");
          mids$[mid_getLUr_b74f83833fdad017] = env->getMethodID(cls, "getLUr", "()D");
          mids$[mid_getLUrDot_b74f83833fdad017] = env->getMethodID(cls, "getLUrDot", "()D");
          mids$[mid_getLVe_b74f83833fdad017] = env->getMethodID(cls, "getLVe", "()D");
          mids$[mid_getLVeDot_b74f83833fdad017] = env->getMethodID(cls, "getLVeDot", "()D");
          mids$[mid_getPa_b74f83833fdad017] = env->getMethodID(cls, "getPa", "()D");
          mids$[mid_getPaDot_b74f83833fdad017] = env->getMethodID(cls, "getPaDot", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodiesElements::BodiesElements(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jdouble a16, jdouble a17, jdouble a18, jdouble a19, jdouble a20, jdouble a21, jdouble a22, jdouble a23, jdouble a24, jdouble a25, jdouble a26, jdouble a27, jdouble a28, jdouble a29, jdouble a30, jdouble a31) : ::org::orekit::data::DelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_52219a7c17472ec7, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31)) {}

      jdouble BodiesElements::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLJu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJu_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLJuDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLJuDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLMa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMa_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLMaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMaDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLMe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMe_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLMeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMeDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLNe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNe_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLNeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLNeDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLSa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSa_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLSaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLSaDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLUr() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUr_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLUrDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLUrDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLVe() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVe_b74f83833fdad017]);
      }

      jdouble BodiesElements::getLVeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLVeDot_b74f83833fdad017]);
      }

      jdouble BodiesElements::getPa() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPa_b74f83833fdad017]);
      }

      jdouble BodiesElements::getPaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPaDot_b74f83833fdad017]);
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
      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self);
      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self);
      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data);
      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data);
      static PyGetSetDef t_BodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_BodiesElements, lE),
        DECLARE_GET_FIELD(t_BodiesElements, lEDot),
        DECLARE_GET_FIELD(t_BodiesElements, lJu),
        DECLARE_GET_FIELD(t_BodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMa),
        DECLARE_GET_FIELD(t_BodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lMe),
        DECLARE_GET_FIELD(t_BodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lNe),
        DECLARE_GET_FIELD(t_BodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_BodiesElements, lSa),
        DECLARE_GET_FIELD(t_BodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_BodiesElements, lUr),
        DECLARE_GET_FIELD(t_BodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_BodiesElements, lVe),
        DECLARE_GET_FIELD(t_BodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_BodiesElements, pa),
        DECLARE_GET_FIELD(t_BodiesElements, paDot),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodiesElements__methods_[] = {
        DECLARE_METHOD(t_BodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_BodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodiesElements)[] = {
        { Py_tp_methods, t_BodiesElements__methods_ },
        { Py_tp_init, (void *) t_BodiesElements_init_ },
        { Py_tp_getset, t_BodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::DelaunayArguments),
        NULL
      };

      DEFINE_TYPE(BodiesElements, t_BodiesElements, BodiesElements);

      void t_BodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(BodiesElements), &PY_TYPE_DEF(BodiesElements), module, "BodiesElements", 0);
      }

      void t_BodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "class_", make_descriptor(BodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "wrapfn_", make_descriptor(t_BodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodiesElements::initializeClass, 1)))
          return NULL;
        return t_BodiesElements::wrap_Object(BodiesElements(((t_BodiesElements *) arg)->object.this$));
      }
      static PyObject *t_BodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodiesElements_init_(t_BodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
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
        jdouble a12;
        jdouble a13;
        jdouble a14;
        jdouble a15;
        jdouble a16;
        jdouble a17;
        jdouble a18;
        jdouble a19;
        jdouble a20;
        jdouble a21;
        jdouble a22;
        jdouble a23;
        jdouble a24;
        jdouble a25;
        jdouble a26;
        jdouble a27;
        jdouble a28;
        jdouble a29;
        jdouble a30;
        jdouble a31;
        BodiesElements object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18, &a19, &a20, &a21, &a22, &a23, &a24, &a25, &a26, &a27, &a28, &a29, &a30, &a31))
        {
          INT_CALL(object = BodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodiesElements_getLE(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLEDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJu(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLJuDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLJuDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLMeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLNeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLNeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLSaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLSaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUr(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUr());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLUrDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLUrDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVe(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVe());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getLVeDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLVeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPa(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPa());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_getPaDot(t_BodiesElements *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BodiesElements_get__lE(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lEDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJu(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lJuDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLJuDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lMeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lNeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLNeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lSaDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLSaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUr(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUr());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lUrDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLUrDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVe(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVe());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__lVeDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLVeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__pa(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPa());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BodiesElements_get__paDot(t_BodiesElements *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPaDot());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2D::class$ = NULL;
          jmethodID *Vector2D::mids$ = NULL;
          bool Vector2D::live$ = false;
          Vector2D *Vector2D::MINUS_I = NULL;
          Vector2D *Vector2D::MINUS_J = NULL;
          Vector2D *Vector2D::NEGATIVE_INFINITY = NULL;
          Vector2D *Vector2D::NaN = NULL;
          Vector2D *Vector2D::PLUS_I = NULL;
          Vector2D *Vector2D::PLUS_J = NULL;
          Vector2D *Vector2D::POSITIVE_INFINITY = NULL;
          Vector2D *Vector2D::ZERO = NULL;

          jclass Vector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_d8b88b24b02865b1] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_a0bb1dda4d070321] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_7fb6bfd21f9324eb] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_4ef6123990113253] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_4f90fdb34b7d1107] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_add_12bf5e1b264beb0a] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_angle_00cbd9690bb8a91b] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_crossProduct_00cbd9690bb8a91b] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance_f0dd8cb59ea09794] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_00cbd9690bb8a91b] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance1_2f915fa9762130df] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_00cbd9690bb8a91b] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceInf_2f915fa9762130df] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_00cbd9690bb8a91b] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceSq_2f915fa9762130df] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_00cbd9690bb8a91b] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_dotProduct_2f915fa9762130df] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_460c5e2d9d51c6cc] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_b74f83833fdad017] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_b74f83833fdad017] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_b74f83833fdad017] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZero_9cb1572c1d4936cf] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_9cb1572c1d4936cf] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_orientation_4cb54b5cd3974eb4] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_scalarMultiply_32a32febf6739dcf] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_4f90fdb34b7d1107] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_12bf5e1b264beb0a] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toArray_25e1757a36c4dde2] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_a9120cb5e83d0986] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector2D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              MINUS_J = new Vector2D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NEGATIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NaN = new Vector2D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_I = new Vector2D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_J = new Vector2D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              POSITIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              ZERO = new Vector2D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2D::Vector2D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8b88b24b02865b1, a0, a1.this$)) {}

          Vector2D::Vector2D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0bb1dda4d070321, a0, a1.this$, a2, a3.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7fb6bfd21f9324eb, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5, jdouble a6, const Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ef6123990113253, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector2D Vector2D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_4f90fdb34b7d1107], a0.this$));
          }

          Vector2D Vector2D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_12bf5e1b264beb0a], a0, a1.this$));
          }

          jdouble Vector2D::angle(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_00cbd9690bb8a91b], a0.this$, a1.this$);
          }

          jdouble Vector2D::crossProduct(const Vector2D & a0, const Vector2D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_crossProduct_00cbd9690bb8a91b], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_f0dd8cb59ea09794], a0.this$);
          }

          jdouble Vector2D::distance(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_00cbd9690bb8a91b], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_2f915fa9762130df], a0.this$);
          }

          jdouble Vector2D::distance1(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_00cbd9690bb8a91b], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_2f915fa9762130df], a0.this$);
          }

          jdouble Vector2D::distanceInf(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_00cbd9690bb8a91b], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_2f915fa9762130df], a0.this$);
          }

          jdouble Vector2D::distanceSq(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_00cbd9690bb8a91b], a0.this$, a1.this$);
          }

          jdouble Vector2D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_2f915fa9762130df], a0.this$);
          }

          jboolean Vector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          jboolean Vector2D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_460c5e2d9d51c6cc], a0.this$);
          }

          jdouble Vector2D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
          }

          jdouble Vector2D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_b74f83833fdad017]);
          }

          jdouble Vector2D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_b74f83833fdad017]);
          }

          jdouble Vector2D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::Space Vector2D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_9afbccb68c8e9ef8]));
          }

          jdouble Vector2D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
          }

          jdouble Vector2D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
          }

          Vector2D Vector2D::getZero() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_getZero_9cb1572c1d4936cf]));
          }

          jint Vector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
          }

          jboolean Vector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
          }

          jboolean Vector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
          }

          Vector2D Vector2D::negate() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_negate_9cb1572c1d4936cf]));
          }

          jdouble Vector2D::orientation(const Vector2D & a0, const Vector2D & a1, const Vector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_orientation_4cb54b5cd3974eb4], a0.this$, a1.this$, a2.this$);
          }

          Vector2D Vector2D::scalarMultiply(jdouble a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_32a32febf6739dcf], a0));
          }

          Vector2D Vector2D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_4f90fdb34b7d1107], a0.this$));
          }

          Vector2D Vector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_12bf5e1b264beb0a], a0, a1.this$));
          }

          JArray< jdouble > Vector2D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_25e1757a36c4dde2]));
          }

          ::java::lang::String Vector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String Vector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_a9120cb5e83d0986], a0.this$));
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
          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_getNorm(t_Vector2D *self);
          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self);
          static PyObject *t_Vector2D_getSpace(t_Vector2D *self);
          static PyObject *t_Vector2D_getX(t_Vector2D *self);
          static PyObject *t_Vector2D_getY(t_Vector2D *self);
          static PyObject *t_Vector2D_getZero(t_Vector2D *self);
          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self);
          static PyObject *t_Vector2D_isNaN(t_Vector2D *self);
          static PyObject *t_Vector2D_negate(t_Vector2D *self);
          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_toArray(t_Vector2D *self);
          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data);
          static PyGetSetDef t_Vector2D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2D, infinite),
            DECLARE_GET_FIELD(t_Vector2D, naN),
            DECLARE_GET_FIELD(t_Vector2D, norm),
            DECLARE_GET_FIELD(t_Vector2D, norm1),
            DECLARE_GET_FIELD(t_Vector2D, normInf),
            DECLARE_GET_FIELD(t_Vector2D, normSq),
            DECLARE_GET_FIELD(t_Vector2D, space),
            DECLARE_GET_FIELD(t_Vector2D, x),
            DECLARE_GET_FIELD(t_Vector2D, y),
            DECLARE_GET_FIELD(t_Vector2D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2D__methods_[] = {
            DECLARE_METHOD(t_Vector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, distance, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2D)[] = {
            { Py_tp_methods, t_Vector2D__methods_ },
            { Py_tp_init, (void *) t_Vector2D_init_ },
            { Py_tp_getset, t_Vector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector2D, t_Vector2D, Vector2D);

          void t_Vector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2D), &PY_TYPE_DEF(Vector2D), module, "Vector2D", 0);
          }

          void t_Vector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "class_", make_descriptor(Vector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "wrapfn_", make_descriptor(t_Vector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NEGATIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NaN", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "POSITIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "ZERO", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::ZERO)));
          }

          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2D::initializeClass, 1)))
              return NULL;
            return t_Vector2D::wrap_Object(Vector2D(((t_Vector2D *) arg)->object.this$));
          }
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                jdouble a6;
                Vector2D a7((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.crossProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_getNorm(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getSpace(t_Vector2D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector2D_getX(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getY(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getZero(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_isNaN(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_negate(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            Vector2D a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::orientation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg)
          {
            jdouble a0;
            Vector2D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector2D_toArray(t_Vector2D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data)
          {
            Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/AbstractKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *AbstractKalmanFilter::class$ = NULL;
        jmethodID *AbstractKalmanFilter::mids$ = NULL;
        bool AbstractKalmanFilter::live$ = false;

        jclass AbstractKalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/AbstractKalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrected_e37ac5ac73cc5311] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_e37ac5ac73cc5311] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_predict_d6b77aa52bc10925] = env->getMethodID(cls, "predict", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeInnovationCovarianceMatrix_9ea00249b16d58c4] = env->getMethodID(cls, "computeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correct_1d2b8a7ddd079f16] = env->getMethodID(cls, "correct", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_e37ac5ac73cc5311]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_e37ac5ac73cc5311]));
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
        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args);
        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data);
        static PyGetSetDef t_AbstractKalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, corrected),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, predicted),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanFilter__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanFilter)[] = {
          { Py_tp_methods, t_AbstractKalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanFilter, t_AbstractKalmanFilter, AbstractKalmanFilter);
        PyObject *t_AbstractKalmanFilter::wrap_Object(const AbstractKalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractKalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanFilter), &PY_TYPE_DEF(AbstractKalmanFilter), module, "AbstractKalmanFilter", 0);
        }

        void t_AbstractKalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "class_", make_descriptor(AbstractKalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "wrapfn_", make_descriptor(t_AbstractKalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanFilter::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanFilter::wrap_Object(AbstractKalmanFilter(((t_AbstractKalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodFacade::class$ = NULL;
          jmethodID *OdMethodFacade::mids$ = NULL;
          bool OdMethodFacade::live$ = false;

          jclass OdMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e3d2ae147623baae] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/OdMethodType;Ljava/lang/String;)V");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTool_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTool", "()Ljava/lang/String;");
              mids$[mid_getType_0550450699e266ae] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_parse_3520f8eb4f4b6e1e] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodFacade::OdMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::OdMethodType & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e3d2ae147623baae, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::String OdMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String OdMethodFacade::getTool() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTool_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::files::ccsds::definitions::OdMethodType OdMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::OdMethodType(env->callObjectMethod(this$, mids$[mid_getType_0550450699e266ae]));
          }

          OdMethodFacade OdMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_3520f8eb4f4b6e1e], a0.this$));
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
          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data);
          static PyGetSetDef t_OdMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodFacade, name),
            DECLARE_GET_FIELD(t_OdMethodFacade, tool),
            DECLARE_GET_FIELD(t_OdMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodFacade__methods_[] = {
            DECLARE_METHOD(t_OdMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getTool, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodFacade)[] = {
            { Py_tp_methods, t_OdMethodFacade__methods_ },
            { Py_tp_init, (void *) t_OdMethodFacade_init_ },
            { Py_tp_getset, t_OdMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OdMethodFacade, t_OdMethodFacade, OdMethodFacade);

          void t_OdMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodFacade), &PY_TYPE_DEF(OdMethodFacade), module, "OdMethodFacade", 0);
          }

          void t_OdMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "class_", make_descriptor(OdMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "wrapfn_", make_descriptor(t_OdMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodFacade::initializeClass, 1)))
              return NULL;
            return t_OdMethodFacade::wrap_Object(OdMethodFacade(((t_OdMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::OdMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            OdMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sKs", ::org::orekit::files::ccsds::definitions::OdMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_OdMethodType::parameters_, &a2))
            {
              INT_CALL(object = OdMethodFacade(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTool());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(result);
          }

          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodFacade::parse(a0));
              return t_OdMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTool());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_55530e2c0ebc5829] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVectorWriter::StateVectorWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2, const ::org::orekit::files::ccsds::definitions::TimeConverter & a3) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_55530e2c0ebc5829, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) t_StateVectorWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a3((jobject) NULL);
              StateVectorWriter object((jobject) NULL);

              if (!parseArgs(args, "sskk", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StateVectorWriter(a0, a1, a2, a3));
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *UnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool UnscentedKalmanEstimatorBuilder::live$ = false;

        jclass UnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_78676135deb8c0da] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_44884b07d1979173] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/UnscentedKalmanEstimator;");
            mids$[mid_decomposer_4b0cb9d23292e5e6] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_cb63c0b6abf85c3a] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_bf16635748e57770] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnscentedKalmanEstimatorBuilder::UnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_78676135deb8c0da], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::UnscentedKalmanEstimator UnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::UnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_44884b07d1979173]));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_4b0cb9d23292e5e6], a0.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_cb63c0b6abf85c3a], a0.this$, a1.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_bf16635748e57770], a0.this$));
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
        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_UnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_UnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimatorBuilder, t_UnscentedKalmanEstimatorBuilder, UnscentedKalmanEstimatorBuilder);

        void t_UnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(UnscentedKalmanEstimatorBuilder), module, "UnscentedKalmanEstimatorBuilder", 0);
        }

        void t_UnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "class_", make_descriptor(UnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimatorBuilder::wrap_Object(UnscentedKalmanEstimatorBuilder(((t_UnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          UnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = UnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::UnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_UnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractCycleSlipDetector::class$ = NULL;
          jmethodID *PythonAbstractCycleSlipDetector::mids$ = NULL;
          bool PythonAbstractCycleSlipDetector::live$ = false;

          jclass PythonAbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cycleSlipDataSet_6ac7265223ac326f] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getMaxTimeBeetween2Measurement_b74f83833fdad017] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getMinMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getResults_e62d3bb06d56d7e3] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_manageData_e95b94a72b1c921a] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_setName_c8f78fa2214ae788] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void PythonAbstractCycleSlipDetector::cycleSlipDataSet(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::gnss::Frequency & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_cycleSlipDataSet_6ac7265223ac326f], a0.this$, a1.this$, a2, a3.this$);
          }

          void PythonAbstractCycleSlipDetector::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jdouble PythonAbstractCycleSlipDetector::getMaxTimeBeetween2Measurement() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxTimeBeetween2Measurement_b74f83833fdad017]);
          }

          jint PythonAbstractCycleSlipDetector::getMinMeasurementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getMinMeasurementNumber_55546ef6a647f39b]);
          }

          ::java::util::List PythonAbstractCycleSlipDetector::getResults() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getResults_e62d3bb06d56d7e3]));
          }

          jlong PythonAbstractCycleSlipDetector::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractCycleSlipDetector::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }

          ::java::lang::String PythonAbstractCycleSlipDetector::setName(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_setName_c8f78fa2214ae788], a0, a1.this$));
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
          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyGetSetDef t_PythonAbstractCycleSlipDetector__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, maxTimeBeetween2Measurement),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, minMeasurementNumber),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, results),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cycleSlipDataSet, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMaxTimeBeetween2Measurement, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMinMeasurementNumber, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getResults, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, setName, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_PythonAbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PythonAbstractCycleSlipDetector__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PythonAbstractCycleSlipDetector, t_PythonAbstractCycleSlipDetector, PythonAbstractCycleSlipDetector);

          void t_PythonAbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractCycleSlipDetector), &PY_TYPE_DEF(PythonAbstractCycleSlipDetector), module, "PythonAbstractCycleSlipDetector", 1);
          }

          void t_PythonAbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "class_", make_descriptor(PythonAbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_PythonAbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractCycleSlipDetector::initializeClass);
            JNINativeMethod methods[] = {
              { "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V", (void *) t_PythonAbstractCycleSlipDetector_manageData0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractCycleSlipDetector_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractCycleSlipDetector::wrap_Object(PythonAbstractCycleSlipDetector(((t_PythonAbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::gnss::Frequency a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "skDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::Frequency::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.cycleSlipDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "cycleSlipDataSet", args);
            return NULL;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getResults());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.setName(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setName", args);
            return NULL;
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "manageData", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getResults());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/QRDecomposition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposition::class$ = NULL;
      jmethodID *QRDecomposition::mids$ = NULL;
      bool QRDecomposition::live$ = false;

      jclass QRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_84bd15e0995d0c79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_5c88fbe0835e7c85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getH_f77d745f2128c391] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQ_f77d745f2128c391] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQT_f77d745f2128c391] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getR_f77d745f2128c391] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_5823fb909376de2c] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_07adb42ffaa97d31] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_fd10cb359d67ca83] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84bd15e0995d0c79, a0.this$)) {}

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c88fbe0835e7c85, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQ_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQT_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getR_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::DecompositionSolver QRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_5823fb909376de2c]));
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
      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data);
      static PyGetSetDef t_QRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_QRDecomposition, h),
        DECLARE_GET_FIELD(t_QRDecomposition, q),
        DECLARE_GET_FIELD(t_QRDecomposition, qT),
        DECLARE_GET_FIELD(t_QRDecomposition, r),
        DECLARE_GET_FIELD(t_QRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QRDecomposition__methods_[] = {
        DECLARE_METHOD(t_QRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposition)[] = {
        { Py_tp_methods, t_QRDecomposition__methods_ },
        { Py_tp_init, (void *) t_QRDecomposition_init_ },
        { Py_tp_getset, t_QRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposition, t_QRDecomposition, QRDecomposition);

      void t_QRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposition), &PY_TYPE_DEF(QRDecomposition), module, "QRDecomposition", 0);
      }

      void t_QRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "class_", make_descriptor(QRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "wrapfn_", make_descriptor(t_QRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposition::initializeClass, 1)))
          return NULL;
        return t_QRDecomposition::wrap_Object(QRDecomposition(((t_QRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = QRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = QRDecomposition(a0, a1));
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

      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonEstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationModifier::class$ = NULL;
        jmethodID *PythonEstimationModifier::mids$ = NULL;
        bool PythonEstimationModifier::live$ = false;

        jclass PythonEstimationModifier::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationModifier");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationModifier::PythonEstimationModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEstimationModifier::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEstimationModifier::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEstimationModifier::pythonExtension(jlong a0) const
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
      namespace measurements {
        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args);
        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self);
        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data);
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data);
        static PyGetSetDef t_PythonEstimationModifier__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationModifier, self),
          DECLARE_GET_FIELD(t_PythonEstimationModifier, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationModifier__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationModifier, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationModifier, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationModifier, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationModifier)[] = {
          { Py_tp_methods, t_PythonEstimationModifier__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationModifier_init_ },
          { Py_tp_getset, t_PythonEstimationModifier__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationModifier)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationModifier, t_PythonEstimationModifier, PythonEstimationModifier);
        PyObject *t_PythonEstimationModifier::wrap_Object(const PythonEstimationModifier& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonEstimationModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonEstimationModifier::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonEstimationModifier *self = (t_PythonEstimationModifier *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonEstimationModifier::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationModifier), &PY_TYPE_DEF(PythonEstimationModifier), module, "PythonEstimationModifier", 1);
        }

        void t_PythonEstimationModifier::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "class_", make_descriptor(PythonEstimationModifier::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "wrapfn_", make_descriptor(t_PythonEstimationModifier::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationModifier), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationModifier::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonEstimationModifier_getParametersDrivers0 },
            { "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonEstimationModifier_modify1 },
            { "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V", (void *) t_PythonEstimationModifier_modifyWithoutDerivatives2 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationModifier_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonEstimationModifier_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationModifier::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationModifier::wrap_Object(PythonEstimationModifier(((t_PythonEstimationModifier *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationModifier_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationModifier::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonEstimationModifier_of_(t_PythonEstimationModifier *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonEstimationModifier_init_(t_PythonEstimationModifier *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationModifier object((jobject) NULL);

          INT_CALL(object = PythonEstimationModifier());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationModifier_finalize(t_PythonEstimationModifier *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationModifier_pythonExtension(t_PythonEstimationModifier *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationModifier_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static void JNICALL t_PythonEstimationModifier_modify1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "modify", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_modifyWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
          PyObject *result = PyObject_CallMethod(obj, "modifyWithoutDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEstimationModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationModifier::mids$[PythonEstimationModifier::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationModifier_get__self(t_PythonEstimationModifier *self, void *data)
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
        static PyObject *t_PythonEstimationModifier_get__parameters_(t_PythonEstimationModifier *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonEphemerisFileWriter.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonEphemerisFileWriter::mids$ = NULL;
        bool PythonEphemerisFileWriter::live$ = false;

        jclass PythonEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_cb06ae4b8b65b727] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_b257e3ad1002b2a9] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileWriter::PythonEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEphemerisFileWriter::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self);
        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileWriter, t_PythonEphemerisFileWriter, PythonEphemerisFileWriter);

        void t_PythonEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileWriter), &PY_TYPE_DEF(PythonEphemerisFileWriter), module, "PythonEphemerisFileWriter", 1);
        }

        void t_PythonEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "class_", make_descriptor(PythonEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write1 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileWriter::wrap_Object(PythonEphemerisFileWriter(((t_PythonEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = env->fromJString((jstring) a0, 0);
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data)
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
#include "org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder.h"
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

        ::java::lang::Class *DormandPrince54IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54IntegratorBuilder::mids$ = NULL;
        bool DormandPrince54IntegratorBuilder::live$ = false;

        jclass DormandPrince54IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54IntegratorBuilder::DormandPrince54IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince54IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince54IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince54IntegratorBuilder, t_DormandPrince54IntegratorBuilder, DormandPrince54IntegratorBuilder);

        void t_DormandPrince54IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54IntegratorBuilder), &PY_TYPE_DEF(DormandPrince54IntegratorBuilder), module, "DormandPrince54IntegratorBuilder", 0);
        }

        void t_DormandPrince54IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "class_", make_descriptor(DormandPrince54IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54IntegratorBuilder::wrap_Object(DormandPrince54IntegratorBuilder(((t_DormandPrince54IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54IntegratorBuilder_init_(t_DormandPrince54IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54IntegratorBuilder_buildIntegrator(t_DormandPrince54IntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
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
              mids$[mid_init$_c749d199d359fa63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_oneWayDistanceModification_2fa6405c70ee6844] = env->getMethodID(cls, "oneWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_twoWayDistanceModification_2fa6405c70ee6844] = env->getMethodID(cls, "twoWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersGroundReceiverBaseModifier::PhaseCentersGroundReceiverBaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c749d199d359fa63, a0.this$, a1.this$)) {}

          jdouble PhaseCentersGroundReceiverBaseModifier::oneWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_oneWayDistanceModification_2fa6405c70ee6844], a0.this$);
          }

          jdouble PhaseCentersGroundReceiverBaseModifier::twoWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_twoWayDistanceModification_2fa6405c70ee6844], a0.this$);
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
#include "org/orekit/propagation/events/handlers/PythonFieldEventHandler.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonFieldEventHandler::class$ = NULL;
          jmethodID *PythonFieldEventHandler::mids$ = NULL;
          bool PythonFieldEventHandler::live$ = false;

          jclass PythonFieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonFieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_839b1f3ec2c4fbf6] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_0c5b04ee41f00344] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_f13ac1fae17e489e] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldEventHandler::PythonFieldEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonFieldEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonFieldEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonFieldEventHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args);
          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self);
          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data);
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data);
          static PyGetSetDef t_PythonFieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, self),
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonFieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventHandler)[] = {
            { Py_tp_methods, t_PythonFieldEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonFieldEventHandler_init_ },
            { Py_tp_getset, t_PythonFieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldEventHandler, t_PythonFieldEventHandler, PythonFieldEventHandler);
          PyObject *t_PythonFieldEventHandler::wrap_Object(const PythonFieldEventHandler& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonFieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonFieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldEventHandler), &PY_TYPE_DEF(PythonFieldEventHandler), module, "PythonFieldEventHandler", 1);
          }

          void t_PythonFieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "class_", make_descriptor(PythonFieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "wrapfn_", make_descriptor(t_PythonFieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonFieldEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonFieldEventHandler::wrap_Object(PythonFieldEventHandler(((t_PythonFieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldEventHandler object((jobject) NULL);

            INT_CALL(object = PythonFieldEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
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

          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data)
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
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data)
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
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereKlobucharMessage::class$ = NULL;
          jmethodID *IonosphereKlobucharMessage::mids$ = NULL;
          bool IonosphereKlobucharMessage::live$ = false;
          JArray< ::org::orekit::utils::units::Unit > *IonosphereKlobucharMessage::S_PER_SC_N = NULL;

          jclass IonosphereKlobucharMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereKlobucharMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2f7855eb8fb85f32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_25e1757a36c4dde2] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_25e1757a36c4dde2] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getRegionCode_4d9174f820356647] = env->getMethodID(cls, "getRegionCode", "()Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_setAlphaI_d5322b8b512aeb26] = env->getMethodID(cls, "setAlphaI", "(ID)V");
              mids$[mid_setBetaI_d5322b8b512aeb26] = env->getMethodID(cls, "setBetaI", "(ID)V");
              mids$[mid_setRegionCode_239322339573c66a] = env->getMethodID(cls, "setRegionCode", "(Lorg/orekit/files/rinex/navigation/RegionCode;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              S_PER_SC_N = new JArray< ::org::orekit::utils::units::Unit >(env->getStaticObjectField(cls, "S_PER_SC_N", "[Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereKlobucharMessage::IonosphereKlobucharMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_2f7855eb8fb85f32, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereKlobucharMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_25e1757a36c4dde2]));
          }

          JArray< jdouble > IonosphereKlobucharMessage::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_25e1757a36c4dde2]));
          }

          ::org::orekit::files::rinex::navigation::RegionCode IonosphereKlobucharMessage::getRegionCode() const
          {
            return ::org::orekit::files::rinex::navigation::RegionCode(env->callObjectMethod(this$, mids$[mid_getRegionCode_4d9174f820356647]));
          }

          void IonosphereKlobucharMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_d5322b8b512aeb26], a0, a1);
          }

          void IonosphereKlobucharMessage::setBetaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setBetaI_d5322b8b512aeb26], a0, a1);
          }

          void IonosphereKlobucharMessage::setRegionCode(const ::org::orekit::files::rinex::navigation::RegionCode & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRegionCode_239322339573c66a], a0.this$);
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
          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data);
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereKlobucharMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, alpha),
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, beta),
            DECLARE_GETSET_FIELD(t_IonosphereKlobucharMessage, regionCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereKlobucharMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereKlobucharMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getRegionCode, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setAlphaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setBetaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setRegionCode, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereKlobucharMessage)[] = {
            { Py_tp_methods, t_IonosphereKlobucharMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereKlobucharMessage_init_ },
            { Py_tp_getset, t_IonosphereKlobucharMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereKlobucharMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereKlobucharMessage, t_IonosphereKlobucharMessage, IonosphereKlobucharMessage);

          void t_IonosphereKlobucharMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereKlobucharMessage), &PY_TYPE_DEF(IonosphereKlobucharMessage), module, "IonosphereKlobucharMessage", 0);
          }

          void t_IonosphereKlobucharMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "class_", make_descriptor(IonosphereKlobucharMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "wrapfn_", make_descriptor(t_IonosphereKlobucharMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereKlobucharMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "S_PER_SC_N", make_descriptor(JArray<jobject>(IonosphereKlobucharMessage::S_PER_SC_N->this$).wrap(::org::orekit::utils::units::t_Unit::wrap_jobject)));
          }

          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereKlobucharMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereKlobucharMessage::wrap_Object(IonosphereKlobucharMessage(((t_IonosphereKlobucharMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereKlobucharMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereKlobucharMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereKlobucharMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self)
          {
            ::org::orekit::files::rinex::navigation::RegionCode result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(result);
          }

          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setBetaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBetaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::RegionCode a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_RegionCode::parameters_))
            {
              OBJ_CALL(self->object.setRegionCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRegionCode", arg);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(value);
          }
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &value))
              {
                INT_CALL(self->object.setRegionCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "regionCode", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceKey::class$ = NULL;
            jmethodID *RTNCovarianceKey::mids$ = NULL;
            bool RTNCovarianceKey::live$ = false;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CDRG_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CNDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CN_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::COMMENT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CRDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CSRP_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTDOT_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_DRG = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_N = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_NDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_RDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_SRP = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_T = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_TDOT = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CTHR_THR = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_R = NULL;
            RTNCovarianceKey *RTNCovarianceKey::CT_T = NULL;

            jclass RTNCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_de46bf683f387688] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)Z");
                mids$[mid_valueOf_19f1783447388dba] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");
                mids$[mid_values_689b9b68e9226995] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CDRG_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CDRG_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CNDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CNDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CN_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CN_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                COMMENT = new RTNCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CRDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CRDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CSRP_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CSRP_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTDOT_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTDOT_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_DRG = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_N = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_N", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_NDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_NDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_RDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_RDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_SRP = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_TDOT = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_TDOT", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CTHR_THR = new RTNCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_R = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_R", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                CT_T = new RTNCovarianceKey(env->getStaticObjectField(cls, "CT_T", "Lorg/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean RTNCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_de46bf683f387688], a0.this$, a1.this$, a2.this$);
            }

            RTNCovarianceKey RTNCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RTNCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_19f1783447388dba], a0.this$));
            }

            JArray< RTNCovarianceKey > RTNCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RTNCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_689b9b68e9226995]));
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
            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args);
            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data);
            static PyGetSetDef t_RTNCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_RTNCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RTNCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_RTNCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceKey)[] = {
              { Py_tp_methods, t_RTNCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RTNCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceKey, t_RTNCovarianceKey, RTNCovarianceKey);
            PyObject *t_RTNCovarianceKey::wrap_Object(const RTNCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RTNCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RTNCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RTNCovarianceKey *self = (t_RTNCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RTNCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceKey), &PY_TYPE_DEF(RTNCovarianceKey), module, "RTNCovarianceKey", 0);
            }

            void t_RTNCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "class_", make_descriptor(RTNCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "wrapfn_", make_descriptor(t_RTNCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(RTNCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CDRG_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CDRG_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CNDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CNDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CN_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CN_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "COMMENT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CRDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CRDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CSRP_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CSRP_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTDOT_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTDOT_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_DRG", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_N", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_NDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_NDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_RDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_RDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_SRP", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_TDOT", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_TDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CTHR_THR", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_R", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceKey), "CT_T", make_descriptor(t_RTNCovarianceKey::wrap_Object(*RTNCovarianceKey::CT_T)));
            }

            static PyObject *t_RTNCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceKey::wrap_Object(RTNCovarianceKey(((t_RTNCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RTNCovarianceKey_of_(t_RTNCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RTNCovarianceKey_process(t_RTNCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_RTNCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RTNCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::valueOf(a0));
                return t_RTNCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RTNCovarianceKey_values(PyTypeObject *type)
            {
              JArray< RTNCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::RTNCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_RTNCovarianceKey::wrap_jobject);
            }
            static PyObject *t_RTNCovarianceKey_get__parameters_(t_RTNCovarianceKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *SpinStabilized::class$ = NULL;
              jmethodID *SpinStabilized::mids$ = NULL;
              bool SpinStabilized::live$ = false;

              jclass SpinStabilized::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_c60ad1d207bc8e06] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getMomentumAlpha_b74f83833fdad017] = env->getMethodID(cls, "getMomentumAlpha", "()D");
                  mids$[mid_getMomentumDelta_b74f83833fdad017] = env->getMethodID(cls, "getMomentumDelta", "()D");
                  mids$[mid_getNutation_b74f83833fdad017] = env->getMethodID(cls, "getNutation", "()D");
                  mids$[mid_getNutationPeriod_b74f83833fdad017] = env->getMethodID(cls, "getNutationPeriod", "()D");
                  mids$[mid_getNutationPhase_b74f83833fdad017] = env->getMethodID(cls, "getNutationPhase", "()D");
                  mids$[mid_getNutationVel_b74f83833fdad017] = env->getMethodID(cls, "getNutationVel", "()D");
                  mids$[mid_getSpinAlpha_b74f83833fdad017] = env->getMethodID(cls, "getSpinAlpha", "()D");
                  mids$[mid_getSpinAngle_b74f83833fdad017] = env->getMethodID(cls, "getSpinAngle", "()D");
                  mids$[mid_getSpinAngleVel_b74f83833fdad017] = env->getMethodID(cls, "getSpinAngleVel", "()D");
                  mids$[mid_getSpinDelta_b74f83833fdad017] = env->getMethodID(cls, "getSpinDelta", "()D");
                  mids$[mid_hasMomentum_9ab94ac1dc23b105] = env->getMethodID(cls, "hasMomentum", "()Z");
                  mids$[mid_hasNutation_9ab94ac1dc23b105] = env->getMethodID(cls, "hasNutation", "()Z");
                  mids$[mid_setMomentumAlpha_8ba9fe7a847cecad] = env->getMethodID(cls, "setMomentumAlpha", "(D)V");
                  mids$[mid_setMomentumDelta_8ba9fe7a847cecad] = env->getMethodID(cls, "setMomentumDelta", "(D)V");
                  mids$[mid_setNutation_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutation", "(D)V");
                  mids$[mid_setNutationPeriod_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutationPeriod", "(D)V");
                  mids$[mid_setNutationPhase_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutationPhase", "(D)V");
                  mids$[mid_setNutationVel_8ba9fe7a847cecad] = env->getMethodID(cls, "setNutationVel", "(D)V");
                  mids$[mid_setSpinAlpha_8ba9fe7a847cecad] = env->getMethodID(cls, "setSpinAlpha", "(D)V");
                  mids$[mid_setSpinAngle_8ba9fe7a847cecad] = env->getMethodID(cls, "setSpinAngle", "(D)V");
                  mids$[mid_setSpinAngleVel_8ba9fe7a847cecad] = env->getMethodID(cls, "setSpinAngleVel", "(D)V");
                  mids$[mid_setSpinDelta_8ba9fe7a847cecad] = env->getMethodID(cls, "setSpinDelta", "(D)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SpinStabilized::SpinStabilized() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints SpinStabilized::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c60ad1d207bc8e06]));
              }

              jdouble SpinStabilized::getMomentumAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumAlpha_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getMomentumDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumDelta_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getNutation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutation_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getNutationPeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPeriod_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getNutationPhase() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPhase_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getNutationVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationVel_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getSpinAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAlpha_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getSpinAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngle_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getSpinAngleVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngleVel_b74f83833fdad017]);
              }

              jdouble SpinStabilized::getSpinDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinDelta_b74f83833fdad017]);
              }

              jboolean SpinStabilized::hasMomentum() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasMomentum_9ab94ac1dc23b105]);
              }

              jboolean SpinStabilized::hasNutation() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasNutation_9ab94ac1dc23b105]);
              }

              void SpinStabilized::setMomentumAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumAlpha_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setMomentumDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumDelta_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setNutation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutation_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setNutationPeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPeriod_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setNutationPhase(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPhase_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setNutationVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationVel_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setSpinAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAlpha_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setSpinAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngle_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setSpinAngleVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngleVel_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::setSpinDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinDelta_8ba9fe7a847cecad], a0);
              }

              void SpinStabilized::validate(jdouble a0) const
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
            namespace apm {
              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args);
              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data);
              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyGetSetDef t_SpinStabilized__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilized, endpoints),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumDelta),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutation),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPeriod),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPhase),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngle),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngleVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinDelta),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilized__methods_[] = {
                DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPeriod, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPhase, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngle, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngleVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasMomentum, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, setMomentumAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setMomentumDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutation, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPeriod, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPhase, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngle, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngleVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
                { Py_tp_methods, t_SpinStabilized__methods_ },
                { Py_tp_init, (void *) t_SpinStabilized_init_ },
                { Py_tp_getset, t_SpinStabilized__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

              void t_SpinStabilized::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
              }

              void t_SpinStabilized::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilized::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
              {
                SpinStabilized object((jobject) NULL);

                INT_CALL(object = SpinStabilized());
                self->object = object;

                return 0;
              }

              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasMomentum());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasNutation());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutation", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPeriod", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPhase(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPhase", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngle", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngleVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngleVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(SpinStabilized), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumDelta", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutation", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPeriod", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPhase(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPhase", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngle", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngleVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngleVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinDelta", arg);
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
#include "org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAmbiguityAcceptance::class$ = NULL;
          jmethodID *PythonAmbiguityAcceptance::mids$ = NULL;
          bool PythonAmbiguityAcceptance::live$ = false;

          jclass PythonAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_accept_77098f4ed257d870] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_numberOfCandidates_55546ef6a647f39b] = env->getMethodID(cls, "numberOfCandidates", "()I");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAmbiguityAcceptance::PythonAmbiguityAcceptance() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonAmbiguityAcceptance::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAmbiguityAcceptance::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAmbiguityAcceptance::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self);
          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args);
          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data);
          static PyGetSetDef t_PythonAmbiguityAcceptance__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAmbiguityAcceptance, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAmbiguityAcceptance, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_PythonAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_PythonAmbiguityAcceptance_init_ },
            { Py_tp_getset, t_PythonAmbiguityAcceptance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAmbiguityAcceptance, t_PythonAmbiguityAcceptance, PythonAmbiguityAcceptance);

          void t_PythonAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAmbiguityAcceptance), &PY_TYPE_DEF(PythonAmbiguityAcceptance), module, "PythonAmbiguityAcceptance", 1);
          }

          void t_PythonAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "class_", make_descriptor(PythonAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "wrapfn_", make_descriptor(t_PythonAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAmbiguityAcceptance::initializeClass);
            JNINativeMethod methods[] = {
              { "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonAmbiguityAcceptance_accept0 },
              { "numberOfCandidates", "()I", (void *) t_PythonAmbiguityAcceptance_numberOfCandidates1 },
              { "pythonDecRef", "()V", (void *) t_PythonAmbiguityAcceptance_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_PythonAmbiguityAcceptance::wrap_Object(PythonAmbiguityAcceptance(((t_PythonAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_PythonAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAmbiguityAcceptance_init_(t_PythonAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            PythonAmbiguityAcceptance object((jobject) NULL);

            INT_CALL(object = PythonAmbiguityAcceptance());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAmbiguityAcceptance_finalize(t_PythonAmbiguityAcceptance *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAmbiguityAcceptance_pythonExtension(t_PythonAmbiguityAcceptance *self, PyObject *args)
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

          static jobject JNICALL t_PythonAmbiguityAcceptance_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
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

          static jint JNICALL t_PythonAmbiguityAcceptance_numberOfCandidates1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "numberOfCandidates", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("numberOfCandidates", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAmbiguityAcceptance_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAmbiguityAcceptance::mids$[PythonAmbiguityAcceptance::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAmbiguityAcceptance_get__self(t_PythonAmbiguityAcceptance *self, void *data)
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
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *GeodeticPoint::class$ = NULL;
      jmethodID *GeodeticPoint::mids$ = NULL;
      bool GeodeticPoint::live$ = false;
      GeodeticPoint *GeodeticPoint::NORTH_POLE = NULL;
      GeodeticPoint *GeodeticPoint::SOUTH_POLE = NULL;

      jclass GeodeticPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/GeodeticPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getAltitude_b74f83833fdad017] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getEast_8b724f8b4fdad1a2] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getLatitude_b74f83833fdad017] = env->getMethodID(cls, "getLatitude", "()D");
          mids$[mid_getLongitude_b74f83833fdad017] = env->getMethodID(cls, "getLongitude", "()D");
          mids$[mid_getNadir_8b724f8b4fdad1a2] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_8b724f8b4fdad1a2] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSouth_8b724f8b4fdad1a2] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getWest_8b724f8b4fdad1a2] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_8b724f8b4fdad1a2] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "NORTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          SOUTH_POLE = new GeodeticPoint(env->getStaticObjectField(cls, "SOUTH_POLE", "Lorg/orekit/bodies/GeodeticPoint;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GeodeticPoint::GeodeticPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

      jboolean GeodeticPoint::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jdouble GeodeticPoint::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_b74f83833fdad017]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_8b724f8b4fdad1a2]));
      }

      jdouble GeodeticPoint::getLatitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLatitude_b74f83833fdad017]);
      }

      jdouble GeodeticPoint::getLongitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLongitude_b74f83833fdad017]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D GeodeticPoint::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_8b724f8b4fdad1a2]));
      }

      jint GeodeticPoint::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      ::java::lang::String GeodeticPoint::toString() const
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
  namespace orekit {
    namespace bodies {
      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self);
      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args);
      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data);
      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data);
      static PyGetSetDef t_GeodeticPoint__fields_[] = {
        DECLARE_GET_FIELD(t_GeodeticPoint, altitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, east),
        DECLARE_GET_FIELD(t_GeodeticPoint, latitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, longitude),
        DECLARE_GET_FIELD(t_GeodeticPoint, nadir),
        DECLARE_GET_FIELD(t_GeodeticPoint, north),
        DECLARE_GET_FIELD(t_GeodeticPoint, south),
        DECLARE_GET_FIELD(t_GeodeticPoint, west),
        DECLARE_GET_FIELD(t_GeodeticPoint, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GeodeticPoint__methods_[] = {
        DECLARE_METHOD(t_GeodeticPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GeodeticPoint, equals, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getEast, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLatitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getLongitude, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getWest, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_GeodeticPoint, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_GeodeticPoint, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GeodeticPoint)[] = {
        { Py_tp_methods, t_GeodeticPoint__methods_ },
        { Py_tp_init, (void *) t_GeodeticPoint_init_ },
        { Py_tp_getset, t_GeodeticPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GeodeticPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GeodeticPoint, t_GeodeticPoint, GeodeticPoint);

      void t_GeodeticPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(GeodeticPoint), &PY_TYPE_DEF(GeodeticPoint), module, "GeodeticPoint", 0);
      }

      void t_GeodeticPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "class_", make_descriptor(GeodeticPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "wrapfn_", make_descriptor(t_GeodeticPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "boxfn_", make_descriptor(boxObject));
        env->getClass(GeodeticPoint::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "NORTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::NORTH_POLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GeodeticPoint), "SOUTH_POLE", make_descriptor(t_GeodeticPoint::wrap_Object(*GeodeticPoint::SOUTH_POLE)));
      }

      static PyObject *t_GeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GeodeticPoint::initializeClass, 1)))
          return NULL;
        return t_GeodeticPoint::wrap_Object(GeodeticPoint(((t_GeodeticPoint *) arg)->object.this$));
      }
      static PyObject *t_GeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GeodeticPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GeodeticPoint_init_(t_GeodeticPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        GeodeticPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = GeodeticPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GeodeticPoint_equals(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_GeodeticPoint_getAltitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getEast(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getLatitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLatitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getLongitude(t_GeodeticPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLongitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GeodeticPoint_getNadir(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getNorth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getSouth(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getWest(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_getZenith(t_GeodeticPoint *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_GeodeticPoint_hashCode(t_GeodeticPoint *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_GeodeticPoint_toString(t_GeodeticPoint *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GeodeticPoint), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GeodeticPoint_get__altitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__east(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__latitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLatitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__longitude(t_GeodeticPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLongitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GeodeticPoint_get__nadir(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__north(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__south(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__west(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_GeodeticPoint_get__zenith(t_GeodeticPoint *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmHeader::class$ = NULL;
            jmethodID *TdmHeader::mids$ = NULL;
            bool TdmHeader::live$ = false;

            jclass TdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmHeader::TdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_TdmHeader__methods_[] = {
              DECLARE_METHOD(t_TdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmHeader)[] = {
              { Py_tp_methods, t_TdmHeader__methods_ },
              { Py_tp_init, (void *) t_TdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(TdmHeader, t_TdmHeader, TdmHeader);

            void t_TdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmHeader), &PY_TYPE_DEF(TdmHeader), module, "TdmHeader", 0);
            }

            void t_TdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "class_", make_descriptor(TdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "wrapfn_", make_descriptor(t_TdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmHeader::initializeClass, 1)))
                return NULL;
              return t_TdmHeader::wrap_Object(TdmHeader(((t_TdmHeader *) arg)->object.this$));
            }
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds)
            {
              TdmHeader object((jobject) NULL);

              INT_CALL(object = TdmHeader());
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldForceModelContext::class$ = NULL;
            jmethodID *FieldForceModelContext::mids$ = NULL;
            bool FieldForceModelContext::live$ = false;

            jclass FieldForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFieldAuxiliaryElements_b34bbd2d7e4f9226] = env->getMethodID(cls, "getFieldAuxiliaryElements", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements FieldForceModelContext::getFieldAuxiliaryElements() const
            {
              return ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(env->callObjectMethod(this$, mids$[mid_getFieldAuxiliaryElements_b34bbd2d7e4f9226]));
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
            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args);
            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self);
            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data);
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data);
            static PyGetSetDef t_FieldForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldForceModelContext, fieldAuxiliaryElements),
              DECLARE_GET_FIELD(t_FieldForceModelContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldForceModelContext__methods_[] = {
              DECLARE_METHOD(t_FieldForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldForceModelContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldForceModelContext, getFieldAuxiliaryElements, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldForceModelContext)[] = {
              { Py_tp_methods, t_FieldForceModelContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldForceModelContext)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldForceModelContext, t_FieldForceModelContext, FieldForceModelContext);
            PyObject *t_FieldForceModelContext::wrap_Object(const FieldForceModelContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldForceModelContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldForceModelContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldForceModelContext *self = (t_FieldForceModelContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldForceModelContext), &PY_TYPE_DEF(FieldForceModelContext), module, "FieldForceModelContext", 0);
            }

            void t_FieldForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "class_", make_descriptor(FieldForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "wrapfn_", make_descriptor(t_FieldForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldForceModelContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldForceModelContext::initializeClass, 1)))
                return NULL;
              return t_FieldForceModelContext::wrap_Object(FieldForceModelContext(((t_FieldForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_FieldForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldForceModelContext_of_(t_FieldForceModelContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldForceModelContext_getFieldAuxiliaryElements(t_FieldForceModelContext *self)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements result((jobject) NULL);
              OBJ_CALL(result = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_FieldForceModelContext_get__parameters_(t_FieldForceModelContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldForceModelContext_get__fieldAuxiliaryElements(t_FieldForceModelContext *self, void *data)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements value((jobject) NULL);
              OBJ_CALL(value = self->object.getFieldAuxiliaryElements());
              return ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/TimeSpanDragForce.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *TimeSpanDragForce::class$ = NULL;
        jmethodID *TimeSpanDragForce::mids$ = NULL;
        bool TimeSpanDragForce::live$ = false;
        ::java::lang::String *TimeSpanDragForce::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanDragForce::DATE_BEFORE = NULL;

        jclass TimeSpanDragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/TimeSpanDragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9d51f29c5e5b1e8b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_init$_f18a516710107195] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addDragSensitiveValidAfter_a24566f3f23eb049] = env->getMethodID(cls, "addDragSensitiveValidAfter", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addDragSensitiveValidBefore_a24566f3f23eb049] = env->getMethodID(cls, "addDragSensitiveValidBefore", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_extractDragSensitiveRange_2917731b47ff4d6e] = env->getMethodID(cls, "extractDragSensitiveRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_5417afc1212505b6] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_afb90c8392ccc216] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDragSensitive_8dce189cfa5cc5ad] = env->getMethodID(cls, "getDragSensitive", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/drag/DragSensitive;");
            mids$[mid_getDragSensitiveSpan_d9699fc4c4f11b26] = env->getMethodID(cls, "getDragSensitiveSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_5290b219f9ebfd63] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_9d51f29c5e5b1e8b, a0.this$, a1.this$)) {}

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_f18a516710107195, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        void TimeSpanDragForce::addDragSensitiveValidAfter(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidAfter_a24566f3f23eb049], a0.this$, a1.this$);
        }

        void TimeSpanDragForce::addDragSensitiveValidBefore(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidBefore_a24566f3f23eb049], a0.this$, a1.this$);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanDragForce::extractDragSensitiveRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractDragSensitiveRange_2917731b47ff4d6e], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanDragForce::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_5417afc1212505b6], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanDragForce::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_afb90c8392ccc216], a0.this$, a1.this$));
        }

        ::org::orekit::forces::drag::DragSensitive TimeSpanDragForce::getDragSensitive(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getDragSensitive_8dce189cfa5cc5ad], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getDragSensitiveSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getDragSensitiveSpan_d9699fc4c4f11b26], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_5290b219f9ebfd63]));
        }

        ::java::util::List TimeSpanDragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
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
      namespace drag {
        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg);
        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self);
        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args);
        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data);
        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data);
        static PyGetSetDef t_TimeSpanDragForce__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanDragForce, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanDragForce, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanDragForce__methods_[] = {
          DECLARE_METHOD(t_TimeSpanDragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanDragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, addDragSensitiveValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractDragSensitiveRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitive, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getDragSensitiveSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanDragForce, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFieldEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanDragForce, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanDragForce)[] = {
          { Py_tp_methods, t_TimeSpanDragForce__methods_ },
          { Py_tp_init, (void *) t_TimeSpanDragForce_init_ },
          { Py_tp_getset, t_TimeSpanDragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanDragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(TimeSpanDragForce, t_TimeSpanDragForce, TimeSpanDragForce);

        void t_TimeSpanDragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanDragForce), &PY_TYPE_DEF(TimeSpanDragForce), module, "TimeSpanDragForce", 0);
        }

        void t_TimeSpanDragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "class_", make_descriptor(TimeSpanDragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "wrapfn_", make_descriptor(t_TimeSpanDragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanDragForce::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_AFTER", make_descriptor(j2p(*TimeSpanDragForce::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanDragForce), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanDragForce::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanDragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanDragForce::initializeClass, 1)))
            return NULL;
          return t_TimeSpanDragForce::wrap_Object(TimeSpanDragForce(((t_TimeSpanDragForce *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanDragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanDragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanDragForce_init_(t_TimeSpanDragForce *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
              ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              TimeSpanDragForce object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanDragForce(a0, a1, a2));
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

        static PyObject *t_TimeSpanDragForce_acceleration(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidAfter(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_addDragSensitiveValidBefore(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::forces::drag::DragSensitive a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::drag::DragSensitive::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addDragSensitiveValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDragSensitiveValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractDragSensitiveRange(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractDragSensitiveRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "extractDragSensitiveRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_extractParameters(t_TimeSpanDragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitive(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitive(a0));
            return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitive", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getDragSensitiveSpan(t_TimeSpanDragForce *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDragSensitiveSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
          }

          PyErr_SetArgsError((PyObject *) self, "getDragSensitiveSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanDragForce_getEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFieldEventDetectors(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getFieldEventDetectors", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_getFirstSpan(t_TimeSpanDragForce *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::drag::PY_TYPE(DragSensitive));
        }

        static PyObject *t_TimeSpanDragForce_getParametersDrivers(t_TimeSpanDragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(TimeSpanDragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_TimeSpanDragForce_get__eventDetectors(t_TimeSpanDragForce *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__firstSpan(t_TimeSpanDragForce *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanDragForce_get__parametersDrivers(t_TimeSpanDragForce *self, void *data)
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
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FootprintOverlapDetector::class$ = NULL;
        jmethodID *FootprintOverlapDetector::mids$ = NULL;
        bool FootprintOverlapDetector::live$ = false;

        jclass FootprintOverlapDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FootprintOverlapDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fe9b3eeb49751d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/geometry/fov/FieldOfView;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_95d324082d4f411b] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getFOV_f16dd2df58a56a14] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getZone_bf39bb9c5825f40e] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_create_257a941781dd43fc] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FootprintOverlapDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FootprintOverlapDetector::FootprintOverlapDetector(const ::org::orekit::geometry::fov::FieldOfView & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fe9b3eeb49751d68, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble FootprintOverlapDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::bodies::BodyShape FootprintOverlapDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_95d324082d4f411b]));
        }

        ::org::orekit::geometry::fov::FieldOfView FootprintOverlapDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_f16dd2df58a56a14]));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet FootprintOverlapDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_bf39bb9c5825f40e]));
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
        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args);
        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args);
        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data);
        static PyGetSetDef t_FootprintOverlapDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, body),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, fOV),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, zone),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FootprintOverlapDetector__methods_[] = {
          DECLARE_METHOD(t_FootprintOverlapDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getZone, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FootprintOverlapDetector)[] = {
          { Py_tp_methods, t_FootprintOverlapDetector__methods_ },
          { Py_tp_init, (void *) t_FootprintOverlapDetector_init_ },
          { Py_tp_getset, t_FootprintOverlapDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FootprintOverlapDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FootprintOverlapDetector, t_FootprintOverlapDetector, FootprintOverlapDetector);
        PyObject *t_FootprintOverlapDetector::wrap_Object(const FootprintOverlapDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FootprintOverlapDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FootprintOverlapDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FootprintOverlapDetector), &PY_TYPE_DEF(FootprintOverlapDetector), module, "FootprintOverlapDetector", 0);
        }

        void t_FootprintOverlapDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "class_", make_descriptor(FootprintOverlapDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "wrapfn_", make_descriptor(t_FootprintOverlapDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FootprintOverlapDetector::initializeClass, 1)))
            return NULL;
          return t_FootprintOverlapDetector::wrap_Object(FootprintOverlapDetector(((t_FootprintOverlapDetector *) arg)->object.this$));
        }
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FootprintOverlapDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::geometry::fov::FieldOfView a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          FootprintOverlapDetector object((jobject) NULL);

          if (!parseArgs(args, "kkKD", ::org::orekit::geometry::fov::FieldOfView::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a3))
          {
            INT_CALL(object = FootprintOverlapDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FootprintOverlapDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FootprintOverlapDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaTurnAroundRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaTurnAroundRangeModifier::mids$ = NULL;
          bool OnBoardAntennaTurnAroundRangeModifier::live$ = false;

          jclass OnBoardAntennaTurnAroundRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1844f891addbac57] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaTurnAroundRangeModifier::OnBoardAntennaTurnAroundRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1844f891addbac57, a0.this$)) {}

          ::java::util::List OnBoardAntennaTurnAroundRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void OnBoardAntennaTurnAroundRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaTurnAroundRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaTurnAroundRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaTurnAroundRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaTurnAroundRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaTurnAroundRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaTurnAroundRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaTurnAroundRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaTurnAroundRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaTurnAroundRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaTurnAroundRangeModifier, t_OnBoardAntennaTurnAroundRangeModifier, OnBoardAntennaTurnAroundRangeModifier);

          void t_OnBoardAntennaTurnAroundRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), &PY_TYPE_DEF(OnBoardAntennaTurnAroundRangeModifier), module, "OnBoardAntennaTurnAroundRangeModifier", 0);
          }

          void t_OnBoardAntennaTurnAroundRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "class_", make_descriptor(OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaTurnAroundRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaTurnAroundRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaTurnAroundRangeModifier::wrap_Object(OnBoardAntennaTurnAroundRangeModifier(((t_OnBoardAntennaTurnAroundRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaTurnAroundRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaTurnAroundRangeModifier_init_(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            OnBoardAntennaTurnAroundRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = OnBoardAntennaTurnAroundRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_getParametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaTurnAroundRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaTurnAroundRangeModifier_get__parametersDrivers(t_OnBoardAntennaTurnAroundRangeModifier *self, void *data)
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

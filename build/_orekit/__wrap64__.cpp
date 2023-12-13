#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTPropagator::class$ = NULL;
          jmethodID *DSSTPropagator::mids$ = NULL;
          bool DSSTPropagator::live$ = false;

          jclass DSSTPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9bd4ec1fb1f57fec] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
              mids$[mid_init$_f0d3d6e737d787ad] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_153d1681902fa55a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_d24de896ffe1d07a] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_a758179087969c11] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeMeanState_25e2788c2a82293e] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeOsculatingState_a758179087969c11] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getAllForceModels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_7e8f11dd23d1142c] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_getShortPeriodTerms_e62d3bb06d56d7e3] = env->getMethodID(cls, "getShortPeriodTerms", "()Ljava/util/List;");
              mids$[mid_getShortPeriodTermsValue_f227e5f48720b798] = env->getMethodID(cls, "getShortPeriodTermsValue", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_initialIsOsculating_9ab94ac1dc23b105] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_a1fa5dae97ea5ed2] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_280c3390961e0a50] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setInitialState_5cc6a7fd8ae54bf5] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_8ba9fe7a847cecad] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(D)V");
              mids$[mid_setMu_8ba9fe7a847cecad] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_setSatelliteRevolution_44ed599e93e8a30c] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_4d8d93045ba4dc2c] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_setShortPeriodTerms_0e7c3032c7c93ed3] = env->getMethodID(cls, "setShortPeriodTerms", "(Ljava/util/List;)V");
              mids$[mid_tolerances_0f9017a4d6b57b54] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_tolerances_a8d3338ffaa47864] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_createMapper_74f07e2c0845997b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
              mids$[mid_getMainStateEquations_8e0da39ae64099e8] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
              mids$[mid_setUpStmAndJacobianGenerators_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");
              mids$[mid_getInitialIntegrationState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_beforeIntegration_2d7f9a496c7e9781] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_afterIntegration_a1fa5dae97ea5ed2] = env->getMethodID(cls, "afterIntegration", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_9bd4ec1fb1f57fec, a0.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f0d3d6e737d787ad, a0.this$, a1.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_153d1681902fa55a, a0.this$, a1.this$, a2.this$)) {}

          void DSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_d24de896ffe1d07a], a0.this$);
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_a758179087969c11], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_25e2788c2a82293e], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_a758179087969c11], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List DSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_e62d3bb06d56d7e3]));
          }

          ::org::orekit::orbits::OrbitType DSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
          }

          ::org::orekit::orbits::PositionAngleType DSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
          }

          jint DSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_55546ef6a647f39b]);
          }

          ::java::util::Set DSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_7e8f11dd23d1142c]));
          }

          ::java::util::List DSSTPropagator::getShortPeriodTerms() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShortPeriodTerms_e62d3bb06d56d7e3]));
          }

          JArray< jdouble > DSSTPropagator::getShortPeriodTermsValue(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getShortPeriodTermsValue_f227e5f48720b798], a0.this$));
          }

          jboolean DSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_9ab94ac1dc23b105]);
          }

          void DSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_a1fa5dae97ea5ed2]);
          }

          void DSSTPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
          }

          void DSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_280c3390961e0a50], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_5cc6a7fd8ae54bf5], a0.this$, a1.this$);
          }

          void DSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_44ed599e93e8a30c], a0);
          }

          void DSSTPropagator::setInterpolationGridToMaxTimeGap(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_8ba9fe7a847cecad], a0);
          }

          void DSSTPropagator::setMu(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_8ba9fe7a847cecad], a0);
          }

          void DSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_44ed599e93e8a30c], a0);
          }

          void DSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_4d8d93045ba4dc2c], a0.this$);
          }

          void DSSTPropagator::setShortPeriodTerms(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setShortPeriodTerms_0e7c3032c7c93ed3], a0.this$);
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_0f9017a4d6b57b54], a0, a1.this$));
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_a8d3338ffaa47864], a0, a1, a2.this$));
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
          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self);
          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args);
          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg);
          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args);
          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data);
          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data);
          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data);
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTPropagator, allForceModels),
            DECLARE_SET_FIELD(t_DSSTPropagator, attitudeProvider),
            DECLARE_SET_FIELD(t_DSSTPropagator, initialState),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToFixedNumberOfPoints),
            DECLARE_SET_FIELD(t_DSSTPropagator, interpolationGridToMaxTimeGap),
            DECLARE_SET_FIELD(t_DSSTPropagator, mu),
            DECLARE_GET_FIELD(t_DSSTPropagator, orbitType),
            DECLARE_GET_FIELD(t_DSSTPropagator, positionAngleType),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, satelliteRevolution),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, selectedCoefficients),
            DECLARE_GETSET_FIELD(t_DSSTPropagator, shortPeriodTerms),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTPropagator__methods_[] = {
            DECLARE_METHOD(t_DSSTPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, addForceModel, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, computeMeanState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, computeOsculatingState, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DSSTPropagator, getAllForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getOrbitType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getPositionAngleType, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSatelliteRevolution, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getSelectedCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTerms, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, getShortPeriodTermsValue, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, initialIsOsculating, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, removeForceModels, METH_NOARGS),
            DECLARE_METHOD(t_DSSTPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setAttitudeProvider, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInitialState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToFixedNumberOfPoints, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setInterpolationGridToMaxTimeGap, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setMu, METH_VARARGS),
            DECLARE_METHOD(t_DSSTPropagator, setSatelliteRevolution, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setSelectedCoefficients, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, setShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTPropagator, tolerances, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTPropagator)[] = {
            { Py_tp_methods, t_DSSTPropagator__methods_ },
            { Py_tp_init, (void *) t_DSSTPropagator_init_ },
            { Py_tp_getset, t_DSSTPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
            NULL
          };

          DEFINE_TYPE(DSSTPropagator, t_DSSTPropagator, DSSTPropagator);

          void t_DSSTPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTPropagator), &PY_TYPE_DEF(DSSTPropagator), module, "DSSTPropagator", 0);
          }

          void t_DSSTPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "class_", make_descriptor(DSSTPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "wrapfn_", make_descriptor(t_DSSTPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTPropagator::initializeClass, 1)))
              return NULL;
            return t_DSSTPropagator::wrap_Object(DSSTPropagator(((t_DSSTPropagator *) arg)->object.this$));
          }
          static PyObject *t_DSSTPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DSSTPropagator_init_(t_DSSTPropagator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
                {
                  INT_CALL(object = DSSTPropagator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                DSSTPropagator object((jobject) NULL);

                if (!parseArgs(args, "kKk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                {
                  INT_CALL(object = DSSTPropagator(a0, a1, a2));
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

          static PyObject *t_DSSTPropagator_addForceModel(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_computeMeanState(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::java::util::Collection a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble a3;
                jint a4;
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

                if (!parseArgs(args, "kkKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeMeanState(a0, a1, a2, a3, a4));
                  return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeMeanState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_computeOsculatingState(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
            ::java::util::Collection a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::computeOsculatingState(a0, a1, a2));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "computeOsculatingState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_getAllForceModels(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(DSSTForceModel));
          }

          static PyObject *t_DSSTPropagator_getOrbitType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getPositionAngleType(t_DSSTPropagator *self)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          static PyObject *t_DSSTPropagator_getSatelliteRevolution(t_DSSTPropagator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DSSTPropagator_getSelectedCoefficients(t_DSSTPropagator *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTerms(t_DSSTPropagator *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
          }

          static PyObject *t_DSSTPropagator_getShortPeriodTermsValue(t_DSSTPropagator *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getShortPeriodTermsValue(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getShortPeriodTermsValue", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_initialIsOsculating(t_DSSTPropagator *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.initialIsOsculating());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DSSTPropagator_removeForceModels(t_DSSTPropagator *self)
          {
            OBJ_CALL(self->object.removeForceModels());
            Py_RETURN_NONE;
          }

          static PyObject *t_DSSTPropagator_resetInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_DSSTPropagator_setAttitudeProvider(t_DSSTPropagator *self, PyObject *args)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAttitudeProvider(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
          }

          static PyObject *t_DSSTPropagator_setInitialState(t_DSSTPropagator *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInitialState(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
                {
                  OBJ_CALL(self->object.setInitialState(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialState", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setInterpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_setInterpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterpolationGridToMaxTimeGap(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterpolationGridToMaxTimeGap", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_setMu(t_DSSTPropagator *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setMu(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTPropagator), (PyObject *) self, "setMu", args, 2);
          }

          static PyObject *t_DSSTPropagator_setSatelliteRevolution(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_setSelectedCoefficients(t_DSSTPropagator *self, PyObject *arg)
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

          static PyObject *t_DSSTPropagator_setShortPeriodTerms(t_DSSTPropagator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_tolerances(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                ::org::orekit::orbits::Orbit a1((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
              break;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::orbits::Orbit a2((jobject) NULL);
                JArray< JArray< jdouble > > result((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::tolerances(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(NULL);
                }
              }
            }

            PyErr_SetArgsError(type, "tolerances", args);
            return NULL;
          }

          static PyObject *t_DSSTPropagator_get__allForceModels(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllForceModels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static int t_DSSTPropagator_set__attitudeProvider(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static int t_DSSTPropagator_set__initialState(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialState", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__interpolationGridToFixedNumberOfPoints(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static int t_DSSTPropagator_set__interpolationGridToMaxTimeGap(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterpolationGridToMaxTimeGap(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interpolationGridToMaxTimeGap", arg);
            return -1;
          }

          static int t_DSSTPropagator_set__mu(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMu(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return -1;
          }

          static PyObject *t_DSSTPropagator_get__orbitType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__positionAngleType(t_DSSTPropagator *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static PyObject *t_DSSTPropagator_get__satelliteRevolution(t_DSSTPropagator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteRevolution());
            return PyLong_FromLong((long) value);
          }
          static int t_DSSTPropagator_set__satelliteRevolution(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static PyObject *t_DSSTPropagator_get__selectedCoefficients(t_DSSTPropagator *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelectedCoefficients());
            return ::java::util::t_Set::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__selectedCoefficients(t_DSSTPropagator *self, PyObject *arg, void *data)
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

          static PyObject *t_DSSTPropagator_get__shortPeriodTerms(t_DSSTPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getShortPeriodTerms());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_DSSTPropagator_set__shortPeriodTerms(t_DSSTPropagator *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setShortPeriodTerms(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "shortPeriodTerms", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/IntRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *IntRandomGenerator::class$ = NULL;
      jmethodID *IntRandomGenerator::mids$ = NULL;
      bool IntRandomGenerator::live$ = false;

      jclass IntRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/IntRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_9ab94ac1dc23b105] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_459771b03534868e] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_a9fddc59b07ce512] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_1fb1bf0772ae5db7] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextLong_6c0ce7e438e5ded4] = env->getMethodID(cls, "nextLong", "()J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean IntRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_9ab94ac1dc23b105]);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_459771b03534868e], a0.this$);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_a9fddc59b07ce512], a0.this$, a1, a2);
      }

      jdouble IntRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
      }

      jfloat IntRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_1fb1bf0772ae5db7]);
      }

      jint IntRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }

      jlong IntRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_6c0ce7e438e5ded4]);
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
      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args);

      static PyMethodDef t_IntRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_IntRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextLong, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntRandomGenerator)[] = {
        { Py_tp_methods, t_IntRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::BaseRandomGenerator),
        NULL
      };

      DEFINE_TYPE(IntRandomGenerator, t_IntRandomGenerator, IntRandomGenerator);

      void t_IntRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(IntRandomGenerator), &PY_TYPE_DEF(IntRandomGenerator), module, "IntRandomGenerator", 0);
      }

      void t_IntRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "class_", make_descriptor(IntRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "wrapfn_", make_descriptor(t_IntRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_IntRandomGenerator::wrap_Object(IntRandomGenerator(((t_IntRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonMultiSatStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatStepHandler::mids$ = NULL;
        bool PythonMultiSatStepHandler::live$ = false;

        jclass PythonMultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_0e7c3032c7c93ed3] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_0e7c3032c7c93ed3] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_0365da66b6e36325] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatStepHandler::PythonMultiSatStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonMultiSatStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonMultiSatStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonMultiSatStepHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self);
        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatStepHandler, t_PythonMultiSatStepHandler, PythonMultiSatStepHandler);

        void t_PythonMultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatStepHandler), &PY_TYPE_DEF(PythonMultiSatStepHandler), module, "PythonMultiSatStepHandler", 1);
        }

        void t_PythonMultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "class_", make_descriptor(PythonMultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMultiSatStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatStepHandler::wrap_Object(PythonMultiSatStepHandler(((t_PythonMultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data)
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
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField$RoundingMode::class$ = NULL;
      jmethodID *DfpField$RoundingMode::mids$ = NULL;
      bool DfpField$RoundingMode::live$ = false;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_CEIL = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_FLOOR = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_EVEN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_ODD = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_UP = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_UP = NULL;

      jclass DfpField$RoundingMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField$RoundingMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_6f1e9a27ef3e16cb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_values_0ea88ae57111b0dc] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/dfp/DfpField$RoundingMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ROUND_CEIL = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_CEIL", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_FLOOR = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_FLOOR", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_EVEN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_EVEN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_ODD = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_ODD", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField$RoundingMode DfpField$RoundingMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DfpField$RoundingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6f1e9a27ef3e16cb], a0.this$));
      }

      JArray< DfpField$RoundingMode > DfpField$RoundingMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DfpField$RoundingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_0ea88ae57111b0dc]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type);
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data);
      static PyGetSetDef t_DfpField$RoundingMode__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField$RoundingMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField$RoundingMode__methods_[] = {
        DECLARE_METHOD(t_DfpField$RoundingMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_DfpField$RoundingMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField$RoundingMode)[] = {
        { Py_tp_methods, t_DfpField$RoundingMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DfpField$RoundingMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField$RoundingMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DfpField$RoundingMode, t_DfpField$RoundingMode, DfpField$RoundingMode);
      PyObject *t_DfpField$RoundingMode::wrap_Object(const DfpField$RoundingMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DfpField$RoundingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DfpField$RoundingMode::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField$RoundingMode), &PY_TYPE_DEF(DfpField$RoundingMode), module, "DfpField$RoundingMode", 0);
      }

      void t_DfpField$RoundingMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "class_", make_descriptor(DfpField$RoundingMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "wrapfn_", make_descriptor(t_DfpField$RoundingMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField$RoundingMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_CEIL", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_CEIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_FLOOR", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_FLOOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_EVEN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_EVEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_ODD", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_ODD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_UP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_UP)));
      }

      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField$RoundingMode::initializeClass, 1)))
          return NULL;
        return t_DfpField$RoundingMode::wrap_Object(DfpField$RoundingMode(((t_DfpField$RoundingMode *) arg)->object.this$));
      }
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField$RoundingMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DfpField$RoundingMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::valueOf(a0));
          return t_DfpField$RoundingMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type)
      {
        JArray< DfpField$RoundingMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::values());
        return JArray<jobject>(result.this$).wrap(t_DfpField$RoundingMode::wrap_jobject);
      }
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadata::class$ = NULL;
              jmethodID *OmmMetadata::mids$ = NULL;
              bool OmmMetadata::live$ = false;
              ::java::lang::String *OmmMetadata::DSST_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP4_XP_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP_SGP4_THEORY = NULL;

              jclass OmmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getMeanElementTheory_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMeanElementTheory", "()Ljava/lang/String;");
                  mids$[mid_setMeanElementTheory_734b91ac30d5f9b4] = env->getMethodID(cls, "setMeanElementTheory", "(Ljava/lang/String;)V");
                  mids$[mid_theoryIsSgpSdp_9ab94ac1dc23b105] = env->getMethodID(cls, "theoryIsSgpSdp", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DSST_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "DSST_THEORY", "Ljava/lang/String;"));
                  SGP4_XP_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP4_XP_THEORY", "Ljava/lang/String;"));
                  SGP_SGP4_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP_SGP4_THEORY", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmMetadata::OmmMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::java::lang::String OmmMetadata::getMeanElementTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeanElementTheory_1c1fa1e935d6cdcf]));
              }

              void OmmMetadata::setMeanElementTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanElementTheory_734b91ac30d5f9b4], a0.this$);
              }

              jboolean OmmMetadata::theoryIsSgpSdp() const
              {
                return env->callBooleanMethod(this$, mids$[mid_theoryIsSgpSdp_9ab94ac1dc23b105]);
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
            namespace omm {
              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg);
              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data);
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmMetadata, meanElementTheory),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadata__methods_[] = {
                DECLARE_METHOD(t_OmmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, getMeanElementTheory, METH_NOARGS),
                DECLARE_METHOD(t_OmmMetadata, setMeanElementTheory, METH_O),
                DECLARE_METHOD(t_OmmMetadata, theoryIsSgpSdp, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadata)[] = {
                { Py_tp_methods, t_OmmMetadata__methods_ },
                { Py_tp_init, (void *) t_OmmMetadata_init_ },
                { Py_tp_getset, t_OmmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OmmMetadata, t_OmmMetadata, OmmMetadata);

              void t_OmmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadata), &PY_TYPE_DEF(OmmMetadata), module, "OmmMetadata", 0);
              }

              void t_OmmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "class_", make_descriptor(OmmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "wrapfn_", make_descriptor(t_OmmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "DSST_THEORY", make_descriptor(j2p(*OmmMetadata::DSST_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP4_XP_THEORY", make_descriptor(j2p(*OmmMetadata::SGP4_XP_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP_SGP4_THEORY", make_descriptor(j2p(*OmmMetadata::SGP_SGP4_THEORY)));
              }

              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadata::wrap_Object(OmmMetadata(((t_OmmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds)
              {
                OmmMetadata object((jobject) NULL);

                INT_CALL(object = OmmMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getMeanElementTheory());
                return j2p(result);
              }

              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setMeanElementTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanElementTheory", arg);
                return NULL;
              }

              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.theoryIsSgpSdp());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getMeanElementTheory());
                return j2p(value);
              }
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setMeanElementTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanElementTheory", arg);
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
#include "org/hipparchus/analysis/function/Exp.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Exp::class$ = NULL;
        jmethodID *Exp::mids$ = NULL;
        bool Exp::live$ = false;

        jclass Exp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Exp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Exp::Exp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Exp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Exp::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Exp_value(t_Exp *self, PyObject *args);

        static PyMethodDef t_Exp__methods_[] = {
          DECLARE_METHOD(t_Exp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Exp, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Exp)[] = {
          { Py_tp_methods, t_Exp__methods_ },
          { Py_tp_init, (void *) t_Exp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Exp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Exp, t_Exp, Exp);

        void t_Exp::install(PyObject *module)
        {
          installType(&PY_TYPE(Exp), &PY_TYPE_DEF(Exp), module, "Exp", 0);
        }

        void t_Exp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "class_", make_descriptor(Exp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "wrapfn_", make_descriptor(t_Exp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Exp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Exp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Exp::initializeClass, 1)))
            return NULL;
          return t_Exp::wrap_Object(Exp(((t_Exp *) arg)->object.this$));
        }
        static PyObject *t_Exp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Exp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Exp_init_(t_Exp *self, PyObject *args, PyObject *kwds)
        {
          Exp object((jobject) NULL);

          INT_CALL(object = Exp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Exp_value(t_Exp *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularRaDec::class$ = NULL;
        jmethodID *AngularRaDec::mids$ = NULL;
        bool AngularRaDec::live$ = false;
        ::java::lang::String *AngularRaDec::MEASUREMENT_TYPE = NULL;

        jclass AngularRaDec::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularRaDec");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6e623b0c5c0e1cea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_982d534f80d70918] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularRaDec::AngularRaDec(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_6e623b0c5c0e1cea, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularRaDec::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_982d534f80d70918], a0.this$));
        }

        ::org::orekit::frames::Frame AngularRaDec::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
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
        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args);
        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg);
        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self);
        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data);
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data);
        static PyGetSetDef t_AngularRaDec__fields_[] = {
          DECLARE_GET_FIELD(t_AngularRaDec, referenceFrame),
          DECLARE_GET_FIELD(t_AngularRaDec, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularRaDec__methods_[] = {
          DECLARE_METHOD(t_AngularRaDec, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularRaDec, getObservedLineOfSight, METH_O),
          DECLARE_METHOD(t_AngularRaDec, getReferenceFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularRaDec)[] = {
          { Py_tp_methods, t_AngularRaDec__methods_ },
          { Py_tp_init, (void *) t_AngularRaDec_init_ },
          { Py_tp_getset, t_AngularRaDec__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularRaDec)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularRaDec, t_AngularRaDec, AngularRaDec);
        PyObject *t_AngularRaDec::wrap_Object(const AngularRaDec& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularRaDec::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularRaDec::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularRaDec), &PY_TYPE_DEF(AngularRaDec), module, "AngularRaDec", 0);
        }

        void t_AngularRaDec::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "class_", make_descriptor(AngularRaDec::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "wrapfn_", make_descriptor(t_AngularRaDec::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularRaDec::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularRaDec::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularRaDec::initializeClass, 1)))
            return NULL;
          return t_AngularRaDec::wrap_Object(AngularRaDec(((t_AngularRaDec *) arg)->object.this$));
        }
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularRaDec::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          JArray< jdouble > a5((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          AngularRaDec object((jobject) NULL);

          if (!parseArgs(args, "kkk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = AngularRaDec(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }

        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54Integrator::class$ = NULL;
        jmethodID *HighamHall54Integrator::mids$ = NULL;
        bool HighamHall54Integrator::live$ = false;

        jclass HighamHall54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aa31b8b89ee72c31] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_1b8fb725fec61331] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54StateInterpolator;");
            mids$[mid_estimateError_30c238558e44050a] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_aa31b8b89ee72c31, a0, a1, a2.this$, a3.this$)) {}

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > HighamHall54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > HighamHall54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > HighamHall54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
        }

        jint HighamHall54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
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
        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data);
        static PyGetSetDef t_HighamHall54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54Integrator, a),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, b),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, c),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54Integrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54Integrator)[] = {
          { Py_tp_methods, t_HighamHall54Integrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54Integrator_init_ },
          { Py_tp_getset, t_HighamHall54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54Integrator, t_HighamHall54Integrator, HighamHall54Integrator);

        void t_HighamHall54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54Integrator), &PY_TYPE_DEF(HighamHall54Integrator), module, "HighamHall54Integrator", 0);
        }

        void t_HighamHall54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "class_", make_descriptor(HighamHall54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "wrapfn_", make_descriptor(t_HighamHall54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54Integrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54Integrator::wrap_Object(HighamHall54Integrator(((t_HighamHall54Integrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data)
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
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEState::class$ = NULL;
      jmethodID *FieldODEState::mids$ = NULL;
      bool FieldODEState::live$ = false;

      jclass FieldODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d66803ed368a800] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_0cdef1a17fc48fcf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteState_883be608cfc68c26] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCompleteStateDimension_55546ef6a647f39b] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_883be608cfc68c26] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryStateDimension_55546ef6a647f39b] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_d171b140dbb0db9f] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryStateDimension_0e7cf35192c3effe] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_81520b552cb3fa26] = env->getMethodID(cls, "getTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copy_d79ba52f6fd92946] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d66803ed368a800, a0.this$, a1.this$)) {}

      FieldODEState::FieldODEState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0cdef1a17fc48fcf, a0.this$, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteState_883be608cfc68c26]));
      }

      jint FieldODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_55546ef6a647f39b]);
      }

      jint FieldODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_55546ef6a647f39b]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_883be608cfc68c26]));
      }

      jint FieldODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_55546ef6a647f39b]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_d171b140dbb0db9f], a0));
      }

      jint FieldODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_0e7cf35192c3effe], a0);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEState::getTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTime_81520b552cb3fa26]));
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
      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args);
      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self);
      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg);
      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self);
      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data);
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data);
      static PyGetSetDef t_FieldODEState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEState, completeState),
        DECLARE_GET_FIELD(t_FieldODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_FieldODEState, primaryState),
        DECLARE_GET_FIELD(t_FieldODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_FieldODEState, time),
        DECLARE_GET_FIELD(t_FieldODEState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEState__methods_[] = {
        DECLARE_METHOD(t_FieldODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_FieldODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_FieldODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEState)[] = {
        { Py_tp_methods, t_FieldODEState__methods_ },
        { Py_tp_init, (void *) t_FieldODEState_init_ },
        { Py_tp_getset, t_FieldODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEState, t_FieldODEState, FieldODEState);
      PyObject *t_FieldODEState::wrap_Object(const FieldODEState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEState *self = (t_FieldODEState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEState), &PY_TYPE_DEF(FieldODEState), module, "FieldODEState", 0);
      }

      void t_FieldODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "class_", make_descriptor(FieldODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "wrapfn_", make_descriptor(t_FieldODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEState::initializeClass, 1)))
          return NULL;
        return t_FieldODEState::wrap_Object(FieldODEState(((t_FieldODEState *) arg)->object.this$));
      }
      static PyObject *t_FieldODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEState_of_(t_FieldODEState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEState_init_(t_FieldODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEState object((jobject) NULL);

            if (!parseArgs(args, "K[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEState(a0, a1, a2));
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

      static PyObject *t_FieldODEState_getCompleteState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getCompleteStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getNumberOfSecondaryStates(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getPrimaryState(t_FieldODEState *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_getPrimaryStateDimension(t_FieldODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEState_getSecondaryState(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getSecondaryStateDimension(t_FieldODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_FieldODEState_getTime(t_FieldODEState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldODEState_get__parameters_(t_FieldODEState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEState_get__completeState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__completeStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__numberOfSecondaryStates(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__primaryState(t_FieldODEState *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEState_get__primaryStateDimension(t_FieldODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEState_get__time(t_FieldODEState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonForceModelContext::class$ = NULL;
            jmethodID *PythonForceModelContext::mids$ = NULL;
            bool PythonForceModelContext::live$ = false;

            jclass PythonForceModelContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f321342535a598c3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonForceModelContext::PythonForceModelContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_f321342535a598c3, a0.this$)) {}

            void PythonForceModelContext::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonForceModelContext::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonForceModelContext::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self);
            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args);
            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data);
            static PyGetSetDef t_PythonForceModelContext__fields_[] = {
              DECLARE_GET_FIELD(t_PythonForceModelContext, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonForceModelContext__methods_[] = {
              DECLARE_METHOD(t_PythonForceModelContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonForceModelContext, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonForceModelContext, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonForceModelContext)[] = {
              { Py_tp_methods, t_PythonForceModelContext__methods_ },
              { Py_tp_init, (void *) t_PythonForceModelContext_init_ },
              { Py_tp_getset, t_PythonForceModelContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonForceModelContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(PythonForceModelContext, t_PythonForceModelContext, PythonForceModelContext);

            void t_PythonForceModelContext::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonForceModelContext), &PY_TYPE_DEF(PythonForceModelContext), module, "PythonForceModelContext", 1);
            }

            void t_PythonForceModelContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "class_", make_descriptor(PythonForceModelContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "wrapfn_", make_descriptor(t_PythonForceModelContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModelContext), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonForceModelContext::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonForceModelContext_pythonDecRef0 },
              };
              env->registerNatives(cls, methods, 1);
            }

            static PyObject *t_PythonForceModelContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonForceModelContext::initializeClass, 1)))
                return NULL;
              return t_PythonForceModelContext::wrap_Object(PythonForceModelContext(((t_PythonForceModelContext *) arg)->object.this$));
            }
            static PyObject *t_PythonForceModelContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonForceModelContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonForceModelContext_init_(t_PythonForceModelContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              PythonForceModelContext object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0))
              {
                INT_CALL(object = PythonForceModelContext(a0));
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

            static PyObject *t_PythonForceModelContext_finalize(t_PythonForceModelContext *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonForceModelContext_pythonExtension(t_PythonForceModelContext *self, PyObject *args)
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

            static void JNICALL t_PythonForceModelContext_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonForceModelContext::mids$[PythonForceModelContext::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonForceModelContext_get__self(t_PythonForceModelContext *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternion::class$ = NULL;
              jmethodID *ApmQuaternion::mids$ = NULL;
              bool ApmQuaternion::live$ = false;

              jclass ApmQuaternion::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_c60ad1d207bc8e06] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getQuaternion_6890e724ec73e493] = env->getMethodID(cls, "getQuaternion", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_getQuaternionDot_6890e724ec73e493] = env->getMethodID(cls, "getQuaternionDot", "()Lorg/hipparchus/complex/Quaternion;");
                  mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_setQ_d5322b8b512aeb26] = env->getMethodID(cls, "setQ", "(ID)V");
                  mids$[mid_setQDot_d5322b8b512aeb26] = env->getMethodID(cls, "setQDot", "(ID)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmQuaternion::ApmQuaternion() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints ApmQuaternion::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c60ad1d207bc8e06]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternion() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternion_6890e724ec73e493]));
              }

              ::org::hipparchus::complex::Quaternion ApmQuaternion::getQuaternionDot() const
              {
                return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionDot_6890e724ec73e493]));
              }

              jboolean ApmQuaternion::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
              }

              void ApmQuaternion::setQ(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQ_d5322b8b512aeb26], a0, a1);
              }

              void ApmQuaternion::setQDot(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setQDot_d5322b8b512aeb26], a0, a1);
              }

              void ApmQuaternion::validate(jdouble a0) const
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
              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self);
              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args);
              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data);
              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data);
              static PyGetSetDef t_ApmQuaternion__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternion, endpoints),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternion),
                DECLARE_GET_FIELD(t_ApmQuaternion, quaternionDot),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternion__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternion, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternion, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternion, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, getQuaternionDot, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQ, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, setQDot, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternion, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternion)[] = {
                { Py_tp_methods, t_ApmQuaternion__methods_ },
                { Py_tp_init, (void *) t_ApmQuaternion_init_ },
                { Py_tp_getset, t_ApmQuaternion__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternion)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(ApmQuaternion, t_ApmQuaternion, ApmQuaternion);

              void t_ApmQuaternion::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternion), &PY_TYPE_DEF(ApmQuaternion), module, "ApmQuaternion", 0);
              }

              void t_ApmQuaternion::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "class_", make_descriptor(ApmQuaternion::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "wrapfn_", make_descriptor(t_ApmQuaternion::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternion), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmQuaternion_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternion::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternion::wrap_Object(ApmQuaternion(((t_ApmQuaternion *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternion_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternion::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmQuaternion_init_(t_ApmQuaternion *self, PyObject *args, PyObject *kwds)
              {
                ApmQuaternion object((jobject) NULL);

                INT_CALL(object = ApmQuaternion());
                self->object = object;

                return 0;
              }

              static PyObject *t_ApmQuaternion_getEndpoints(t_ApmQuaternion *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternion(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_getQuaternionDot(t_ApmQuaternion *self)
              {
                ::org::hipparchus::complex::Quaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
              }

              static PyObject *t_ApmQuaternion_hasRates(t_ApmQuaternion *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmQuaternion_setQ(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQ(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQ", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_setQDot(t_ApmQuaternion *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setQDot(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQDot", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternion_validate(t_ApmQuaternion *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmQuaternion), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_ApmQuaternion_get__endpoints(t_ApmQuaternion *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternion(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternion());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
              }

              static PyObject *t_ApmQuaternion_get__quaternionDot(t_ApmQuaternion *self, void *data)
              {
                ::org::hipparchus::complex::Quaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionDot());
                return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
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
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *LazyLoadedGravityFields::class$ = NULL;
          jmethodID *LazyLoadedGravityFields::mids$ = NULL;
          bool LazyLoadedGravityFields::live$ = false;

          jclass LazyLoadedGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/LazyLoadedGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_405b68d44521ed68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addDefaultOceanTidesReaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_8553ac96c69b089e] = env->getMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_a78d658c1995df90] = env->getMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_245a505170348b26] = env->getMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_405c10e81094d951] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_3d381fbe1e441e33] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_a686ea82e96d2c01] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_69ab25dc2098be80] = env->getMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_39b43a702bd6611c] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_fbbe2c197b102dc9] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_f43b948b764d44fc] = env->getMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LazyLoadedGravityFields::LazyLoadedGravityFields(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_405b68d44521ed68, a0.this$, a1.this$)) {}

          void LazyLoadedGravityFields::addDefaultOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultOceanTidesReaders_a1fa5dae97ea5ed2]);
          }

          void LazyLoadedGravityFields::addDefaultPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultPotentialCoefficientsReaders_a1fa5dae97ea5ed2]);
          }

          void LazyLoadedGravityFields::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addOceanTidesReader_8553ac96c69b089e], a0.this$);
          }

          void LazyLoadedGravityFields::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPotentialCoefficientsReader_a78d658c1995df90], a0.this$);
          }

          void LazyLoadedGravityFields::clearOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearOceanTidesReaders_a1fa5dae97ea5ed2]);
          }

          void LazyLoadedGravityFields::clearPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearPotentialCoefficientsReaders_a1fa5dae97ea5ed2]);
          }

          void LazyLoadedGravityFields::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_configureOceanLoadDeformationCoefficients_245a505170348b26], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_405c10e81094d951], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_3d381fbe1e441e33], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_a686ea82e96d2c01], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients LazyLoadedGravityFields::getOceanLoadDeformationCoefficients() const
          {
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callObjectMethod(this$, mids$[mid_getOceanLoadDeformationCoefficients_69ab25dc2098be80]));
          }

          ::java::util::List LazyLoadedGravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_39b43a702bd6611c], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_fbbe2c197b102dc9], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader LazyLoadedGravityFields::readGravityField(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callObjectMethod(this$, mids$[mid_readGravityField_f43b948b764d44fc], a0, a1));
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
          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data);
          static PyGetSetDef t_LazyLoadedGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_LazyLoadedGravityFields, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LazyLoadedGravityFields__methods_[] = {
            DECLARE_METHOD(t_LazyLoadedGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addOceanTidesReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addPotentialCoefficientsReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, configureOceanLoadDeformationCoefficients, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanLoadDeformationCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, readGravityField, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGravityFields)[] = {
            { Py_tp_methods, t_LazyLoadedGravityFields__methods_ },
            { Py_tp_init, (void *) t_LazyLoadedGravityFields_init_ },
            { Py_tp_getset, t_LazyLoadedGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LazyLoadedGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LazyLoadedGravityFields, t_LazyLoadedGravityFields, LazyLoadedGravityFields);

          void t_LazyLoadedGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(LazyLoadedGravityFields), &PY_TYPE_DEF(LazyLoadedGravityFields), module, "LazyLoadedGravityFields", 0);
          }

          void t_LazyLoadedGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "class_", make_descriptor(LazyLoadedGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "wrapfn_", make_descriptor(t_LazyLoadedGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LazyLoadedGravityFields::initializeClass, 1)))
              return NULL;
            return t_LazyLoadedGravityFields::wrap_Object(LazyLoadedGravityFields(((t_LazyLoadedGravityFields *) arg)->object.this$));
          }
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LazyLoadedGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            LazyLoadedGravityFields object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LazyLoadedGravityFields(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(self->object.configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError((PyObject *) self, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataKey::class$ = NULL;
            jmethodID *CdmMetadataKey::mids$ = NULL;
            bool CdmMetadataKey::live$ = false;
            CdmMetadataKey *CdmMetadataKey::ADM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::ATMOSPHERIC_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::CATALOG_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_METHOD = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_SOURCE = NULL;
            CdmMetadataKey *CdmMetadataKey::EARTH_TIDES = NULL;
            CdmMetadataKey *CdmMetadataKey::EPHEMERIS_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::GRAVITY_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::INTRACK_THRUST = NULL;
            CdmMetadataKey *CdmMetadataKey::MANEUVERABLE = NULL;
            CdmMetadataKey *CdmMetadataKey::N_BODY_PERTURBATIONS = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE = NULL;
            CdmMetadataKey *CdmMetadataKey::ODM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_CONTACT_POSITION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_EMAIL = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_ORGANIZATION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_PHONE = NULL;
            CdmMetadataKey *CdmMetadataKey::ORBIT_CENTER = NULL;
            CdmMetadataKey *CdmMetadataKey::REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::SOLAR_RAD_PRESSURE = NULL;

            jclass CdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_fb211c400eff2692] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)Z");
                mids$[mid_valueOf_b0f560972826b0b8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");
                mids$[mid_values_6d420f07df58e24b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ADM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ATMOSPHERIC_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                CATALOG_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_METHOD = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_SOURCE = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EARTH_TIDES = new CdmMetadataKey(env->getStaticObjectField(cls, "EARTH_TIDES", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EPHEMERIS_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                GRAVITY_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTERNATIONAL_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTRACK_THRUST = new CdmMetadataKey(env->getStaticObjectField(cls, "INTRACK_THRUST", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                MANEUVERABLE = new CdmMetadataKey(env->getStaticObjectField(cls, "MANEUVERABLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                N_BODY_PERTURBATIONS = new CdmMetadataKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBS_BEFORE_NEXT_MESSAGE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBS_BEFORE_NEXT_MESSAGE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ODM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_CONTACT_POSITION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_CONTACT_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_EMAIL = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_ORGANIZATION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_ORGANIZATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_PHONE = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ORBIT_CENTER = new CdmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CENTER", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                SOLAR_RAD_PRESSURE = new CdmMetadataKey(env->getStaticObjectField(cls, "SOLAR_RAD_PRESSURE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_fb211c400eff2692], a0.this$, a1.this$, a2.this$);
            }

            CdmMetadataKey CdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b0f560972826b0b8], a0.this$));
            }

            JArray< CdmMetadataKey > CdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6d420f07df58e24b]));
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
            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data);
            static PyGetSetDef t_CdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataKey)[] = {
              { Py_tp_methods, t_CdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmMetadataKey, t_CdmMetadataKey, CdmMetadataKey);
            PyObject *t_CdmMetadataKey::wrap_Object(const CdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataKey), &PY_TYPE_DEF(CdmMetadataKey), module, "CdmMetadataKey", 0);
            }

            void t_CdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "class_", make_descriptor(CdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "wrapfn_", make_descriptor(t_CdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ADM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ATMOSPHERIC_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ATMOSPHERIC_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "CATALOG_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::CATALOG_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_METHOD", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_SOURCE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_SOURCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EARTH_TIDES", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EARTH_TIDES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EPHEMERIS_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EPHEMERIS_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "GRAVITY_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::GRAVITY_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTERNATIONAL_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTRACK_THRUST", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTRACK_THRUST)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "MANEUVERABLE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::MANEUVERABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "N_BODY_PERTURBATIONS", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::N_BODY_PERTURBATIONS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBS_BEFORE_NEXT_MESSAGE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ODM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_CONTACT_POSITION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_CONTACT_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_EMAIL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_EMAIL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_ORGANIZATION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_ORGANIZATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_PHONE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_PHONE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ORBIT_CENTER", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ORBIT_CENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "SOLAR_RAD_PRESSURE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::SOLAR_RAD_PRESSURE)));
            }

            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataKey::wrap_Object(CdmMetadataKey(((t_CdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::valueOf(a0));
                return t_CdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGHmsjPolynomials::class$ = NULL;
            jmethodID *FieldGHmsjPolynomials::mids$ = NULL;
            bool FieldGHmsjPolynomials::live$ = false;

            jclass FieldGHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_dab780a8ee9172eb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getGmsj_fe798a87bc58eca4] = env->getMethodID(cls, "getGmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHmsj_fe798a87bc58eca4] = env->getMethodID(cls, "getHmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdAlpha_fe798a87bc58eca4] = env->getMethodID(cls, "getdGmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdBeta_fe798a87bc58eca4] = env->getMethodID(cls, "getdGmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdh_fe798a87bc58eca4] = env->getMethodID(cls, "getdGmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdk_fe798a87bc58eca4] = env->getMethodID(cls, "getdGmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdAlpha_fe798a87bc58eca4] = env->getMethodID(cls, "getdHmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdBeta_fe798a87bc58eca4] = env->getMethodID(cls, "getdHmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdh_fe798a87bc58eca4] = env->getMethodID(cls, "getdHmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdk_fe798a87bc58eca4] = env->getMethodID(cls, "getdHmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHmsjPolynomials::FieldGHmsjPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dab780a8ee9172eb, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGmsj_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHmsj_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdAlpha_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdBeta_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdh_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdk_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdAlpha_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdBeta_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdh_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdk_fe798a87bc58eca4], a0, a1, a2));
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
            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args);
            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args);
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data);
            static PyGetSetDef t_FieldGHmsjPolynomials__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGHmsjPolynomials, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_FieldGHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_FieldGHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGHmsjPolynomials)[] = {
              { Py_tp_methods, t_FieldGHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_FieldGHmsjPolynomials_init_ },
              { Py_tp_getset, t_FieldGHmsjPolynomials__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGHmsjPolynomials, t_FieldGHmsjPolynomials, FieldGHmsjPolynomials);
            PyObject *t_FieldGHmsjPolynomials::wrap_Object(const FieldGHmsjPolynomials& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGHmsjPolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGHmsjPolynomials::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGHmsjPolynomials *self = (t_FieldGHmsjPolynomials *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGHmsjPolynomials), &PY_TYPE_DEF(FieldGHmsjPolynomials), module, "FieldGHmsjPolynomials", 0);
            }

            void t_FieldGHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "class_", make_descriptor(FieldGHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "wrapfn_", make_descriptor(t_FieldGHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_FieldGHmsjPolynomials::wrap_Object(FieldGHmsjPolynomials(((t_FieldGHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_FieldGHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGHmsjPolynomials_of_(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGHmsjPolynomials_init_(t_FieldGHmsjPolynomials *self, PyObject *args, PyObject *kwds)
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
              FieldGHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGHmsjPolynomials(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGHmsjPolynomials_getGmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getHmsj(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdGmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdAlpha(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdBeta(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdh(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_FieldGHmsjPolynomials_getdHmsdk(t_FieldGHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
              return NULL;
            }
            static PyObject *t_FieldGHmsjPolynomials_get__parameters_(t_FieldGHmsjPolynomials *self, void *data)
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
#include "org/hipparchus/analysis/function/Logit$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit$Parametric::class$ = NULL;
        jmethodID *Logit$Parametric::mids$ = NULL;
        bool Logit$Parametric::live$ = false;

        jclass Logit$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_91fbb4072ae7ce9a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_e45651f63bcd931a] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit$Parametric::Logit$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        JArray< jdouble > Logit$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_91fbb4072ae7ce9a], a0, a1.this$));
        }

        jdouble Logit$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_e45651f63bcd931a], a0, a1.this$);
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
        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args);
        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args);

        static PyMethodDef t_Logit$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logit$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logit$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit$Parametric)[] = {
          { Py_tp_methods, t_Logit$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logit$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit$Parametric, t_Logit$Parametric, Logit$Parametric);

        void t_Logit$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit$Parametric), &PY_TYPE_DEF(Logit$Parametric), module, "Logit$Parametric", 0);
        }

        void t_Logit$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "class_", make_descriptor(Logit$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "wrapfn_", make_descriptor(t_Logit$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logit$Parametric::wrap_Object(Logit$Parametric(((t_Logit$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logit$Parametric object((jobject) NULL);

          INT_CALL(object = Logit$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrHeader::class$ = NULL;
            jmethodID *SsrHeader::mids$ = NULL;
            bool SsrHeader::live$ = false;

            jclass SsrHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIodSsr_55546ef6a647f39b] = env->getMethodID(cls, "getIodSsr", "()I");
                mids$[mid_getSsrEpoch1s_b74f83833fdad017] = env->getMethodID(cls, "getSsrEpoch1s", "()D");
                mids$[mid_getSsrMultipleMessageIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getSsrMultipleMessageIndicator", "()I");
                mids$[mid_getSsrProviderId_55546ef6a647f39b] = env->getMethodID(cls, "getSsrProviderId", "()I");
                mids$[mid_getSsrSolutionId_55546ef6a647f39b] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                mids$[mid_getSsrUpdateInterval_55546ef6a647f39b] = env->getMethodID(cls, "getSsrUpdateInterval", "()I");
                mids$[mid_setIodSsr_44ed599e93e8a30c] = env->getMethodID(cls, "setIodSsr", "(I)V");
                mids$[mid_setSsrEpoch1s_8ba9fe7a847cecad] = env->getMethodID(cls, "setSsrEpoch1s", "(D)V");
                mids$[mid_setSsrMultipleMessageIndicator_44ed599e93e8a30c] = env->getMethodID(cls, "setSsrMultipleMessageIndicator", "(I)V");
                mids$[mid_setSsrProviderId_44ed599e93e8a30c] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                mids$[mid_setSsrSolutionId_44ed599e93e8a30c] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                mids$[mid_setSsrUpdateInterval_44ed599e93e8a30c] = env->getMethodID(cls, "setSsrUpdateInterval", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrHeader::SsrHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint SsrHeader::getIodSsr() const
            {
              return env->callIntMethod(this$, mids$[mid_getIodSsr_55546ef6a647f39b]);
            }

            jdouble SsrHeader::getSsrEpoch1s() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSsrEpoch1s_b74f83833fdad017]);
            }

            jint SsrHeader::getSsrMultipleMessageIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrMultipleMessageIndicator_55546ef6a647f39b]);
            }

            jint SsrHeader::getSsrProviderId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrProviderId_55546ef6a647f39b]);
            }

            jint SsrHeader::getSsrSolutionId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_55546ef6a647f39b]);
            }

            jint SsrHeader::getSsrUpdateInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrUpdateInterval_55546ef6a647f39b]);
            }

            void SsrHeader::setIodSsr(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIodSsr_44ed599e93e8a30c], a0);
            }

            void SsrHeader::setSsrEpoch1s(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrEpoch1s_8ba9fe7a847cecad], a0);
            }

            void SsrHeader::setSsrMultipleMessageIndicator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrMultipleMessageIndicator_44ed599e93e8a30c], a0);
            }

            void SsrHeader::setSsrProviderId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrProviderId_44ed599e93e8a30c], a0);
            }

            void SsrHeader::setSsrSolutionId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_44ed599e93e8a30c], a0);
            }

            void SsrHeader::setSsrUpdateInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_44ed599e93e8a30c], a0);
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
            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self);
            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self);
            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg);
            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data);
            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data);
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_SsrHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_SsrHeader, iodSsr),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrEpoch1s),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrMultipleMessageIndicator),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrProviderId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrSolutionId),
              DECLARE_GETSET_FIELD(t_SsrHeader, ssrUpdateInterval),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrHeader__methods_[] = {
              DECLARE_METHOD(t_SsrHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrHeader, getIodSsr, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrEpoch1s, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrMultipleMessageIndicator, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrProviderId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrSolutionId, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, getSsrUpdateInterval, METH_NOARGS),
              DECLARE_METHOD(t_SsrHeader, setIodSsr, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrEpoch1s, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrMultipleMessageIndicator, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrProviderId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrSolutionId, METH_O),
              DECLARE_METHOD(t_SsrHeader, setSsrUpdateInterval, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrHeader)[] = {
              { Py_tp_methods, t_SsrHeader__methods_ },
              { Py_tp_init, (void *) t_SsrHeader_init_ },
              { Py_tp_getset, t_SsrHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrHeader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrHeader, t_SsrHeader, SsrHeader);

            void t_SsrHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrHeader), &PY_TYPE_DEF(SsrHeader), module, "SsrHeader", 0);
            }

            void t_SsrHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "class_", make_descriptor(SsrHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "wrapfn_", make_descriptor(t_SsrHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrHeader::initializeClass, 1)))
                return NULL;
              return t_SsrHeader::wrap_Object(SsrHeader(((t_SsrHeader *) arg)->object.this$));
            }
            static PyObject *t_SsrHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrHeader_init_(t_SsrHeader *self, PyObject *args, PyObject *kwds)
            {
              SsrHeader object((jobject) NULL);

              INT_CALL(object = SsrHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_SsrHeader_getIodSsr(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIodSsr());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrEpoch1s(t_SsrHeader *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SsrHeader_getSsrMultipleMessageIndicator(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrProviderId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrProviderId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrSolutionId(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_getSsrUpdateInterval(t_SsrHeader *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SsrHeader_setIodSsr(t_SsrHeader *self, PyObject *arg)
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

            static PyObject *t_SsrHeader_setSsrEpoch1s(t_SsrHeader *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSsrEpoch1s(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrEpoch1s", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrMultipleMessageIndicator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrMultipleMessageIndicator", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_setSsrProviderId(t_SsrHeader *self, PyObject *arg)
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

            static PyObject *t_SsrHeader_setSsrSolutionId(t_SsrHeader *self, PyObject *arg)
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

            static PyObject *t_SsrHeader_setSsrUpdateInterval(t_SsrHeader *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSsrUpdateInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSsrUpdateInterval", arg);
              return NULL;
            }

            static PyObject *t_SsrHeader_get__iodSsr(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIodSsr());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__iodSsr(t_SsrHeader *self, PyObject *arg, void *data)
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

            static PyObject *t_SsrHeader_get__ssrEpoch1s(t_SsrHeader *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSsrEpoch1s());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SsrHeader_set__ssrEpoch1s(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSsrEpoch1s(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrEpoch1s", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrMultipleMessageIndicator(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrMultipleMessageIndicator());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrMultipleMessageIndicator(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSsrMultipleMessageIndicator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ssrMultipleMessageIndicator", arg);
              return -1;
            }

            static PyObject *t_SsrHeader_get__ssrProviderId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrProviderId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrProviderId(t_SsrHeader *self, PyObject *arg, void *data)
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

            static PyObject *t_SsrHeader_get__ssrSolutionId(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrSolutionId());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrSolutionId(t_SsrHeader *self, PyObject *arg, void *data)
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

            static PyObject *t_SsrHeader_get__ssrUpdateInterval(t_SsrHeader *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSsrUpdateInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_SsrHeader_set__ssrUpdateInterval(t_SsrHeader *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldEcksteinHechlerPropagator::class$ = NULL;
        jmethodID *FieldEcksteinHechlerPropagator::mids$ = NULL;
        bool FieldEcksteinHechlerPropagator::live$ = false;

        jclass FieldEcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10fe98ec08fe64dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_1987eca3c1b1a5fe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_ebc9853bd1995162] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_2c2dd6d39c82326d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_9d3771f35ee74f1e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_397c3216725fa489] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_65e5a76b10da374a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_012044f960993702] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_ce0444971780ae4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_306fc9258fe51121] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_d07f79dd2beb177d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_ede64f98202da1d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_c1f0e02642ec45da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_57e68ed5098fd231] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_70b1c415eba73dd3] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_ed38a0274f582849] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_881b3b3865c214cc] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_e60d023eafdccfb5] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
            mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_8d1259686cbbe3a1] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_657957653e5b26ba] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_140b8964300ddedf] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_3c05d7291d010c9e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_871885b409df9d57] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_10fe98ec08fe64dc, a0.this$, a1.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_1987eca3c1b1a5fe, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ebc9853bd1995162, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2c2dd6d39c82326d, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9d3771f35ee74f1e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_397c3216725fa489, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_65e5a76b10da374a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_012044f960993702, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ce0444971780ae4d, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_306fc9258fe51121, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d07f79dd2beb177d, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ede64f98202da1d4, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c1f0e02642ec45da, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_57e68ed5098fd231, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_70b1c415eba73dd3], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_ed38a0274f582849], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_881b3b3865c214cc], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        ::java::util::List FieldEcksteinHechlerPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::orekit::orbits::FieldCartesianOrbit FieldEcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_e60d023eafdccfb5], a0.this$, a1.this$));
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8d1259686cbbe3a1], a0.this$, a1.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_657957653e5b26ba], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_FieldEcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_FieldEcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldEcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_FieldEcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldEcksteinHechlerPropagator, t_FieldEcksteinHechlerPropagator, FieldEcksteinHechlerPropagator);
        PyObject *t_FieldEcksteinHechlerPropagator::wrap_Object(const FieldEcksteinHechlerPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEcksteinHechlerPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEcksteinHechlerPropagator), &PY_TYPE_DEF(FieldEcksteinHechlerPropagator), module, "FieldEcksteinHechlerPropagator", 0);
        }

        void t_FieldEcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "class_", make_descriptor(FieldEcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_FieldEcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldEcksteinHechlerPropagator::wrap_Object(FieldEcksteinHechlerPropagator(((t_FieldEcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDKDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldCartesianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
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
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "KKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
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

          ::java::lang::Class *BistaticRangeRateBuilder::class$ = NULL;
          jmethodID *BistaticRangeRateBuilder::mids$ = NULL;
          bool BistaticRangeRateBuilder::live$ = false;

          jclass BistaticRangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3482c99d647cecc6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_b7c445e22b52ae8d] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateBuilder::BistaticRangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_3482c99d647cecc6, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRangeRate BistaticRangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRangeRate(env->callObjectMethod(this$, mids$[mid_build_b7c445e22b52ae8d], a0.this$, a1.this$));
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
          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args);
          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateBuilder, t_BistaticRangeRateBuilder, BistaticRangeRateBuilder);
          PyObject *t_BistaticRangeRateBuilder::wrap_Object(const BistaticRangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateBuilder), &PY_TYPE_DEF(BistaticRangeRateBuilder), module, "BistaticRangeRateBuilder", 0);
          }

          void t_BistaticRangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "class_", make_descriptor(BistaticRangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "wrapfn_", make_descriptor(t_BistaticRangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateBuilder::wrap_Object(BistaticRangeRateBuilder(((t_BistaticRangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data)
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
#include "org/orekit/attitudes/FieldAttitudeInterpolator.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitudeInterpolator::class$ = NULL;
      jmethodID *FieldAttitudeInterpolator::mids$ = NULL;
      bool FieldAttitudeInterpolator::live$ = false;

      jclass FieldAttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d37d1e77bb1e8424] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_9cf5e479bf3925c5] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_getReferenceFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_f0c30115168a83c4] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitudeInterpolator::FieldAttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d37d1e77bb1e8424, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldTimeInterpolator FieldAttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::FieldTimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_9cf5e479bf3925c5]));
      }

      ::org::orekit::frames::Frame FieldAttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_2c51111cc6894ba1]));
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
      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args);
      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data);
      static PyGetSetDef t_FieldAttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitudeInterpolator)[] = {
        { Py_tp_methods, t_FieldAttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAttitudeInterpolator_init_ },
        { Py_tp_getset, t_FieldAttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAttitudeInterpolator, t_FieldAttitudeInterpolator, FieldAttitudeInterpolator);
      PyObject *t_FieldAttitudeInterpolator::wrap_Object(const FieldAttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitudeInterpolator), &PY_TYPE_DEF(FieldAttitudeInterpolator), module, "FieldAttitudeInterpolator", 0);
      }

      void t_FieldAttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "class_", make_descriptor(FieldAttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "wrapfn_", make_descriptor(t_FieldAttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAttitudeInterpolator::wrap_Object(FieldAttitudeInterpolator(((t_FieldAttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        FieldAttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
        {
          INT_CALL(object = FieldAttitudeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::time::FieldTimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(result);
      }

      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/GTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *GTest::class$ = NULL;
        jmethodID *GTest::mids$ = NULL;
        bool GTest::live$ = false;

        jclass GTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/GTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_5da72ec1f5d4a740] = env->getMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_f69626ae7ca2489a] = env->getMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_5da72ec1f5d4a740] = env->getMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_337fdba983c67932] = env->getMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_f69626ae7ca2489a] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_05bd0745ca7cc56a] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_5da72ec1f5d4a740] = env->getMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_rootLogLikelihoodRatio_84bd267915ec3a91] = env->getMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GTest::GTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble GTest::g(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jdouble GTest::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jdouble GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTest_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jboolean GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTest_337fdba983c67932], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestDataSetsComparison_f69626ae7ca2489a], a0.this$, a1.this$);
        }

        jboolean GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTestDataSetsComparison_05bd0745ca7cc56a], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestIntrinsic_5da72ec1f5d4a740], a0.this$, a1.this$);
        }

        jdouble GTest::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_rootLogLikelihoodRatio_84bd267915ec3a91], a0, a1, a2, a3);
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
        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GTest_g(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args);

        static PyMethodDef t_GTest__methods_[] = {
          DECLARE_METHOD(t_GTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, g, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTest, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestIntrinsic, METH_VARARGS),
          DECLARE_METHOD(t_GTest, rootLogLikelihoodRatio, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GTest)[] = {
          { Py_tp_methods, t_GTest__methods_ },
          { Py_tp_init, (void *) t_GTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GTest, t_GTest, GTest);

        void t_GTest::install(PyObject *module)
        {
          installType(&PY_TYPE(GTest), &PY_TYPE_DEF(GTest), module, "GTest", 0);
        }

        void t_GTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "class_", make_descriptor(GTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "wrapfn_", make_descriptor(t_GTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GTest::initializeClass, 1)))
            return NULL;
          return t_GTest::wrap_Object(GTest(((t_GTest *) arg)->object.this$));
        }
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds)
        {
          GTest object((jobject) NULL);

          INT_CALL(object = GTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_GTest_g(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", args);
          return NULL;
        }

        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
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
                OBJ_CALL(result = self->object.gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTest", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1));
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
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootLogLikelihoodRatio", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *SmallManeuverAnalyticalModel::class$ = NULL;
        jmethodID *SmallManeuverAnalyticalModel::mids$ = NULL;
        bool SmallManeuverAnalyticalModel::live$ = false;

        jclass SmallManeuverAnalyticalModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c2b83dc7e69685f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_db76597cf6e043f6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_apply_17366d6f28f0e9a3] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_c3c52b1257139045] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getInertialDV_8b724f8b4fdad1a2] = env->getMethodID(cls, "getInertialDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getJacobian_c444daada41664f4] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[[D)V");
            mids$[mid_updateMass_04fd0666b613d2ab] = env->getMethodID(cls, "updateMass", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c2b83dc7e69685f6, a0.this$, a1.this$, a2)) {}

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db76597cf6e043f6, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::orbits::Orbit SmallManeuverAnalyticalModel::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_17366d6f28f0e9a3], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState SmallManeuverAnalyticalModel::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_c3c52b1257139045], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SmallManeuverAnalyticalModel::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmallManeuverAnalyticalModel::getInertialDV() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getInertialDV_8b724f8b4fdad1a2]));
        }

        ::org::orekit::frames::Frame SmallManeuverAnalyticalModel::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_2c51111cc6894ba1]));
        }

        void SmallManeuverAnalyticalModel::getJacobian(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_getJacobian_c444daada41664f4], a0.this$, a1.this$, a2.this$);
        }

        jdouble SmallManeuverAnalyticalModel::updateMass(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_updateMass_04fd0666b613d2ab], a0);
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
        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyGetSetDef t_SmallManeuverAnalyticalModel__fields_[] = {
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, date),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialDV),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialFrame),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmallManeuverAnalyticalModel__methods_[] = {
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, apply, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialDV, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getJacobian, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, updateMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmallManeuverAnalyticalModel)[] = {
          { Py_tp_methods, t_SmallManeuverAnalyticalModel__methods_ },
          { Py_tp_init, (void *) t_SmallManeuverAnalyticalModel_init_ },
          { Py_tp_getset, t_SmallManeuverAnalyticalModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmallManeuverAnalyticalModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmallManeuverAnalyticalModel, t_SmallManeuverAnalyticalModel, SmallManeuverAnalyticalModel);

        void t_SmallManeuverAnalyticalModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SmallManeuverAnalyticalModel), &PY_TYPE_DEF(SmallManeuverAnalyticalModel), module, "SmallManeuverAnalyticalModel", 0);
        }

        void t_SmallManeuverAnalyticalModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "class_", make_descriptor(SmallManeuverAnalyticalModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "wrapfn_", make_descriptor(t_SmallManeuverAnalyticalModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 1)))
            return NULL;
          return t_SmallManeuverAnalyticalModel::wrap_Object(SmallManeuverAnalyticalModel(((t_SmallManeuverAnalyticalModel *) arg)->object.this$));
        }
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2, a3));
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

        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "kK[[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
          {
            OBJ_CALL(self->object.getJacobian(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.updateMass(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateMass", arg);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
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
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
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
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfano2005::Alfano2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Alfano2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a73e6347f5238a63], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Alfano2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_11689cd07cf55453], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfano2005::getType() const
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadataKey::class$ = NULL;
              jmethodID *AemMetadataKey::mids$ = NULL;
              bool AemMetadataKey::live$ = false;
              AemMetadataKey *AemMetadataKey::ANGVEL_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_DIR = NULL;
              AemMetadataKey *AemMetadataKey::ATTITUDE_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::EULER_ROT_SEQ = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_DEGREE = NULL;
              AemMetadataKey *AemMetadataKey::INTERPOLATION_METHOD = NULL;
              AemMetadataKey *AemMetadataKey::QUATERNION_TYPE = NULL;
              AemMetadataKey *AemMetadataKey::RATE_FRAME = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_A = NULL;
              AemMetadataKey *AemMetadataKey::REF_FRAME_B = NULL;
              AemMetadataKey *AemMetadataKey::START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::STOP_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_START_TIME = NULL;
              AemMetadataKey *AemMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass AemMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_97411375202f96f1] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;)Z");
                  mids$[mid_valueOf_1ac1e81f8f652152] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");
                  mids$[mid_values_92a612c8880f0dbc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_DIR = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_DIR", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  ATTITUDE_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "ATTITUDE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  EULER_ROT_SEQ = new AemMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_DEGREE = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  INTERPOLATION_METHOD = new AemMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  QUATERNION_TYPE = new AemMetadataKey(env->getStaticObjectField(cls, "QUATERNION_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  RATE_FRAME = new AemMetadataKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_A = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  REF_FRAME_B = new AemMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_START_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  USEABLE_STOP_TIME = new AemMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AemMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_97411375202f96f1], a0.this$, a1.this$, a2.this$);
              }

              AemMetadataKey AemMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AemMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1ac1e81f8f652152], a0.this$));
              }

              JArray< AemMetadataKey > AemMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AemMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_92a612c8880f0dbc]));
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
              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args);
              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AemMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data);
              static PyGetSetDef t_AemMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AemMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AemMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AemMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AemMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadataKey)[] = {
                { Py_tp_methods, t_AemMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AemMetadataKey, t_AemMetadataKey, AemMetadataKey);
              PyObject *t_AemMetadataKey::wrap_Object(const AemMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AemMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AemMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemMetadataKey *self = (t_AemMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AemMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadataKey), &PY_TYPE_DEF(AemMetadataKey), module, "AemMetadataKey", 0);
              }

              void t_AemMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "class_", make_descriptor(AemMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "wrapfn_", make_descriptor(t_AemMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ANGVEL_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_DIR", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "ATTITUDE_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::ATTITUDE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "INTERPOLATION_METHOD", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::INTERPOLATION_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "QUATERNION_TYPE", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::QUATERNION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "RATE_FRAME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_A", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "REF_FRAME_B", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_START_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_AemMetadataKey::wrap_Object(*AemMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_AemMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AemMetadataKey::wrap_Object(AemMetadataKey(((t_AemMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AemMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemMetadataKey_of_(t_AemMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemMetadataKey_process(t_AemMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AemMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AemMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::valueOf(a0));
                  return t_AemMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AemMetadataKey_values(PyTypeObject *type)
              {
                JArray< AemMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AemMetadataKey::wrap_jobject);
              }
              static PyObject *t_AemMetadataKey_get__parameters_(t_AemMetadataKey *self, void *data)
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
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEStateAndDerivative::class$ = NULL;
      jmethodID *ODEStateAndDerivative::mids$ = NULL;
      bool ODEStateAndDerivative::live$ = false;

      jclass ODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6fe32ac24b853639] = env->getMethodID(cls, "<init>", "(D[D[D)V");
          mids$[mid_init$_1cbb0b220bfb337a] = env->getMethodID(cls, "<init>", "(D[D[D[[D[[D)V");
          mids$[mid_getCompleteDerivative_25e1757a36c4dde2] = env->getMethodID(cls, "getCompleteDerivative", "()[D");
          mids$[mid_getPrimaryDerivative_25e1757a36c4dde2] = env->getMethodID(cls, "getPrimaryDerivative", "()[D");
          mids$[mid_getSecondaryDerivative_bb2a44a76ad252f7] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_6fe32ac24b853639, a0, a1.this$, a2.this$)) {}

      ODEStateAndDerivative::ODEStateAndDerivative(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4) : ::org::hipparchus::ode::ODEState(env->newObject(initializeClass, &mids$, mid_init$_1cbb0b220bfb337a, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< jdouble > ODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_25e1757a36c4dde2]));
      }

      JArray< jdouble > ODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_25e1757a36c4dde2]));
      }

      JArray< jdouble > ODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_bb2a44a76ad252f7], a0));
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
      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self);
      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_ODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_ODEStateAndDerivative, primaryDerivative),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_ODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_ODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEStateAndDerivative)[] = {
        { Py_tp_methods, t_ODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_ODEStateAndDerivative_init_ },
        { Py_tp_getset, t_ODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::ODEState),
        NULL
      };

      DEFINE_TYPE(ODEStateAndDerivative, t_ODEStateAndDerivative, ODEStateAndDerivative);

      void t_ODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEStateAndDerivative), &PY_TYPE_DEF(ODEStateAndDerivative), module, "ODEStateAndDerivative", 0);
      }

      void t_ODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "class_", make_descriptor(ODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "wrapfn_", make_descriptor(t_ODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_ODEStateAndDerivative::wrap_Object(ODEStateAndDerivative(((t_ODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_ODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEStateAndDerivative_init_(t_ODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            ODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "D[D[D[[D[[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_ODEStateAndDerivative_getCompleteDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getPrimaryDerivative(t_ODEStateAndDerivative *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return result.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_getSecondaryDerivative(t_ODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }

      static PyObject *t_ODEStateAndDerivative_get__completeDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return value.wrap();
      }

      static PyObject *t_ODEStateAndDerivative_get__primaryDerivative(t_ODEStateAndDerivative *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersKey::class$ = NULL;
            jmethodID *SpacecraftParametersKey::mids$ = NULL;
            bool SpacecraftParametersKey::live$ = false;
            SpacecraftParametersKey *SpacecraftParametersKey::COMMENT = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_COEFF = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::MASS = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_COEFF = NULL;

            jclass SpacecraftParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_9cab59e1b6ed0632] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)Z");
                mids$[mid_valueOf_873a1ad5148e88e2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");
                mids$[mid_values_e7bcac37e80a0c82] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SpacecraftParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                MASS = new SpacecraftParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SpacecraftParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_9cab59e1b6ed0632], a0.this$, a1.this$, a2.this$);
            }

            SpacecraftParametersKey SpacecraftParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SpacecraftParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_873a1ad5148e88e2], a0.this$));
            }

            JArray< SpacecraftParametersKey > SpacecraftParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SpacecraftParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e7bcac37e80a0c82]));
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
            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type);
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data);
            static PyGetSetDef t_SpacecraftParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_SpacecraftParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParametersKey__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersKey)[] = {
              { Py_tp_methods, t_SpacecraftParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SpacecraftParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersKey, t_SpacecraftParametersKey, SpacecraftParametersKey);
            PyObject *t_SpacecraftParametersKey::wrap_Object(const SpacecraftParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SpacecraftParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SpacecraftParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersKey), &PY_TYPE_DEF(SpacecraftParametersKey), module, "SpacecraftParametersKey", 0);
            }

            void t_SpacecraftParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "class_", make_descriptor(SpacecraftParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "wrapfn_", make_descriptor(t_SpacecraftParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SpacecraftParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "COMMENT", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_COEFF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "MASS", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_COEFF)));
            }

            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersKey::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersKey::wrap_Object(SpacecraftParametersKey(((t_SpacecraftParametersKey *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SpacecraftParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::valueOf(a0));
                return t_SpacecraftParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type)
            {
              JArray< SpacecraftParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_SpacecraftParametersKey::wrap_jobject);
            }
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data)
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
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *TileAiming::class$ = NULL;
          jmethodID *TileAiming::mids$ = NULL;
          bool TileAiming::live$ = false;

          jclass TileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/TileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_alongTileDirection_636e2b82319b8646] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TileAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_636e2b82319b8646], a0.this$, a1.this$));
          }

          ::java::util::List TileAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_e62d3bb06d56d7e3]));
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
          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args);
          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self);
          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data);
          static PyGetSetDef t_TileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_TileAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TileAiming__methods_[] = {
            DECLARE_METHOD(t_TileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TileAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_TileAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TileAiming)[] = {
            { Py_tp_methods, t_TileAiming__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TileAiming, t_TileAiming, TileAiming);

          void t_TileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(TileAiming), &PY_TYPE_DEF(TileAiming), module, "TileAiming", 0);
          }

          void t_TileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "class_", make_descriptor(TileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "wrapfn_", make_descriptor(t_TileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TileAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TileAiming::initializeClass, 1)))
              return NULL;
            return t_TileAiming::wrap_Object(TileAiming(((t_TileAiming *) arg)->object.this$));
          }
          static PyObject *t_TileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TileAiming_alongTileDirection(t_TileAiming *self, PyObject *args)
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

          static PyObject *t_TileAiming_getSingularPoints(t_TileAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_TileAiming_get__singularPoints(t_TileAiming *self, void *data)
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
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getUnnormalizedCnm_cad98089d00f8a5b] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_cad98089d00f8a5b] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedCnm_cad98089d00f8a5b], a0, a1);
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedSnm_cad98089d00f8a5b], a0, a1);
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics);

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), module, "UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics", 0);
          }

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(((t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateMatrixFunction::mids$ = NULL;
      bool CalculusFieldUnivariateMatrixFunction::live$ = false;

      jclass CalculusFieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_c1fd585c814bcbf4] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_c1fd585c814bcbf4], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_of_(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_value(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_get__parameters_(t_CalculusFieldUnivariateMatrixFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateMatrixFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateMatrixFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateMatrixFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateMatrixFunction, t_CalculusFieldUnivariateMatrixFunction, CalculusFieldUnivariateMatrixFunction);
      PyObject *t_CalculusFieldUnivariateMatrixFunction::wrap_Object(const CalculusFieldUnivariateMatrixFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateMatrixFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateMatrixFunction *self = (t_CalculusFieldUnivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateMatrixFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateMatrixFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateMatrixFunction *self = (t_CalculusFieldUnivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateMatrixFunction), &PY_TYPE_DEF(CalculusFieldUnivariateMatrixFunction), module, "CalculusFieldUnivariateMatrixFunction", 0);
      }

      void t_CalculusFieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "class_", make_descriptor(CalculusFieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateMatrixFunction::wrap_Object(CalculusFieldUnivariateMatrixFunction(((t_CalculusFieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_of_(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_value(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_get__parameters_(t_CalculusFieldUnivariateMatrixFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$MeteorologicalConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$MeteorologicalConfiguration::mids$ = NULL;
        bool CRDConfiguration$MeteorologicalConfiguration::live$ = false;

        jclass CRDConfiguration$MeteorologicalConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getHumiSensorManufacturer_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getHumiSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getHumiSensorModel", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorSerialNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getHumiSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getMeteorologicalId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMeteorologicalId", "()Ljava/lang/String;");
            mids$[mid_getPressSensorManufacturer_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPressSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getPressSensorModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPressSensorModel", "()Ljava/lang/String;");
            mids$[mid_getPressSensorSerialNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPressSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getTempSensorManufacturer_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTempSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getTempSensorModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTempSensorModel", "()Ljava/lang/String;");
            mids$[mid_getTempSensorSerialNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTempSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setHumiSensorManufacturer_734b91ac30d5f9b4] = env->getMethodID(cls, "setHumiSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setHumiSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorSerialNumber_734b91ac30d5f9b4] = env->getMethodID(cls, "setHumiSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setMeteorologicalId_734b91ac30d5f9b4] = env->getMethodID(cls, "setMeteorologicalId", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorManufacturer_734b91ac30d5f9b4] = env->getMethodID(cls, "setPressSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setPressSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorSerialNumber_734b91ac30d5f9b4] = env->getMethodID(cls, "setPressSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorManufacturer_734b91ac30d5f9b4] = env->getMethodID(cls, "setTempSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setTempSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorSerialNumber_734b91ac30d5f9b4] = env->getMethodID(cls, "setTempSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$MeteorologicalConfiguration::CRDConfiguration$MeteorologicalConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorManufacturer_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorModel_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorSerialNumber_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getMeteorologicalId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeteorologicalId_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorManufacturer_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorModel_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorSerialNumber_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorManufacturer_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorModel_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorSerialNumber_1c1fa1e935d6cdcf]));
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorManufacturer_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorModel_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorSerialNumber_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setMeteorologicalId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMeteorologicalId_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorManufacturer_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorModel_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorSerialNumber_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorManufacturer_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorModel_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorSerialNumber_734b91ac30d5f9b4], a0.this$);
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toString() const
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
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$MeteorologicalConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, meteorologicalId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$MeteorologicalConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getMeteorologicalId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setMeteorologicalId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$MeteorologicalConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$MeteorologicalConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$MeteorologicalConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$MeteorologicalConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$MeteorologicalConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$MeteorologicalConfiguration, t_CRDConfiguration$MeteorologicalConfiguration, CRDConfiguration$MeteorologicalConfiguration);

        void t_CRDConfiguration$MeteorologicalConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), &PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration), module, "CRDConfiguration$MeteorologicalConfiguration", 0);
        }

        void t_CRDConfiguration$MeteorologicalConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "class_", make_descriptor(CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$MeteorologicalConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(CRDConfiguration$MeteorologicalConfiguration(((t_CRDConfiguration$MeteorologicalConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$MeteorologicalConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$MeteorologicalConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteorologicalId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setMeteorologicalId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMeteorologicalId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalId());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setMeteorologicalId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "meteorologicalId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationHeader::class$ = NULL;
          jmethodID *RinexObservationHeader::mids$ = NULL;
          bool RinexObservationHeader::live$ = false;

          jclass RinexObservationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addAppliedDCBS_0fdf888bd1afbe51] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_f61ab6fa49270d08] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addGlonassChannel_33adad59f1fe6906] = env->getMethodID(cls, "addGlonassChannel", "(Lorg/orekit/files/rinex/observation/GlonassSatelliteChannel;)V");
              mids$[mid_addPhaseShiftCorrection_1621cb7001452a6c] = env->getMethodID(cls, "addPhaseShiftCorrection", "(Lorg/orekit/files/rinex/observation/PhaseShiftCorrection;)V");
              mids$[mid_addScaleFactorCorrection_72ae2e1032ed1675] = env->getMethodID(cls, "addScaleFactorCorrection", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/rinex/observation/ScaleFactorCorrection;)V");
              mids$[mid_getAgencyName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAntennaAzimuth_b74f83833fdad017] = env->getMethodID(cls, "getAntennaAzimuth", "()D");
              mids$[mid_getAntennaBSight_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAntennaBSight", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaHeight_b74f83833fdad017] = env->getMethodID(cls, "getAntennaHeight", "()D");
              mids$[mid_getAntennaNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAntennaNumber", "()Ljava/lang/String;");
              mids$[mid_getAntennaPhaseCenter_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAntennaPhaseCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaReferencePoint_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAntennaReferencePoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAntennaType", "()Ljava/lang/String;");
              mids$[mid_getAntennaZeroDirection_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAntennaZeroDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getApproxPos_8b724f8b4fdad1a2] = env->getMethodID(cls, "getApproxPos", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getC1cCodePhaseBias_b74f83833fdad017] = env->getMethodID(cls, "getC1cCodePhaseBias", "()D");
              mids$[mid_getC1pCodePhaseBias_b74f83833fdad017] = env->getMethodID(cls, "getC1pCodePhaseBias", "()D");
              mids$[mid_getC2cCodePhaseBias_b74f83833fdad017] = env->getMethodID(cls, "getC2cCodePhaseBias", "()D");
              mids$[mid_getC2pCodePhaseBias_b74f83833fdad017] = env->getMethodID(cls, "getC2pCodePhaseBias", "()D");
              mids$[mid_getCenterMass_8b724f8b4fdad1a2] = env->getMethodID(cls, "getCenterMass", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getClkOffset_55546ef6a647f39b] = env->getMethodID(cls, "getClkOffset", "()I");
              mids$[mid_getEccentricities_9cb1572c1d4936cf] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getGlonassChannels_e62d3bb06d56d7e3] = env->getMethodID(cls, "getGlonassChannels", "()Ljava/util/List;");
              mids$[mid_getInterval_b74f83833fdad017] = env->getMethodID(cls, "getInterval", "()D");
              mids$[mid_getLeapSeconds_55546ef6a647f39b] = env->getMethodID(cls, "getLeapSeconds", "()I");
              mids$[mid_getLeapSecondsDayNum_55546ef6a647f39b] = env->getMethodID(cls, "getLeapSecondsDayNum", "()I");
              mids$[mid_getLeapSecondsFuture_55546ef6a647f39b] = env->getMethodID(cls, "getLeapSecondsFuture", "()I");
              mids$[mid_getLeapSecondsWeekNum_55546ef6a647f39b] = env->getMethodID(cls, "getLeapSecondsWeekNum", "()I");
              mids$[mid_getListAppliedDCBS_e62d3bb06d56d7e3] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_e62d3bb06d56d7e3] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getMarkerName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMarkerName", "()Ljava/lang/String;");
              mids$[mid_getMarkerNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMarkerNumber", "()Ljava/lang/String;");
              mids$[mid_getMarkerType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMarkerType", "()Ljava/lang/String;");
              mids$[mid_getNbObsPerSat_810bed48fafb0b9a] = env->getMethodID(cls, "getNbObsPerSat", "()Ljava/util/Map;");
              mids$[mid_getNbSat_55546ef6a647f39b] = env->getMethodID(cls, "getNbSat", "()I");
              mids$[mid_getObservationCode_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObservationCode", "()Ljava/lang/String;");
              mids$[mid_getObserverName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObserverName", "()Ljava/lang/String;");
              mids$[mid_getPhaseCenterSystem_21bd759cc4a81606] = env->getMethodID(cls, "getPhaseCenterSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getPhaseShiftCorrections_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPhaseShiftCorrections", "()Ljava/util/List;");
              mids$[mid_getReceiverNumber_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getReceiverNumber", "()Ljava/lang/String;");
              mids$[mid_getReceiverType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getReceiverType", "()Ljava/lang/String;");
              mids$[mid_getReceiverVersion_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getReceiverVersion", "()Ljava/lang/String;");
              mids$[mid_getScaleFactorCorrections_c8350d68c8d51d84] = env->getMethodID(cls, "getScaleFactorCorrections", "(Lorg/orekit/gnss/SatelliteSystem;)Ljava/util/List;");
              mids$[mid_getSignalStrengthUnit_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSignalStrengthUnit", "()Ljava/lang/String;");
              mids$[mid_getTFirstObs_c325492395d89b24] = env->getMethodID(cls, "getTFirstObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTLastObs_c325492395d89b24] = env->getMethodID(cls, "getTLastObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTypeObs_810bed48fafb0b9a] = env->getMethodID(cls, "getTypeObs", "()Ljava/util/Map;");
              mids$[mid_setAgencyName_734b91ac30d5f9b4] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaAzimuth_8ba9fe7a847cecad] = env->getMethodID(cls, "setAntennaAzimuth", "(D)V");
              mids$[mid_setAntennaBSight_1844f891addbac57] = env->getMethodID(cls, "setAntennaBSight", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaHeight_8ba9fe7a847cecad] = env->getMethodID(cls, "setAntennaHeight", "(D)V");
              mids$[mid_setAntennaNumber_734b91ac30d5f9b4] = env->getMethodID(cls, "setAntennaNumber", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaPhaseCenter_1844f891addbac57] = env->getMethodID(cls, "setAntennaPhaseCenter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaReferencePoint_1844f891addbac57] = env->getMethodID(cls, "setAntennaReferencePoint", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaType_734b91ac30d5f9b4] = env->getMethodID(cls, "setAntennaType", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaZeroDirection_1844f891addbac57] = env->getMethodID(cls, "setAntennaZeroDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setApproxPos_1844f891addbac57] = env->getMethodID(cls, "setApproxPos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setC1cCodePhaseBias_8ba9fe7a847cecad] = env->getMethodID(cls, "setC1cCodePhaseBias", "(D)V");
              mids$[mid_setC1pCodePhaseBias_8ba9fe7a847cecad] = env->getMethodID(cls, "setC1pCodePhaseBias", "(D)V");
              mids$[mid_setC2cCodePhaseBias_8ba9fe7a847cecad] = env->getMethodID(cls, "setC2cCodePhaseBias", "(D)V");
              mids$[mid_setC2pCodePhaseBias_8ba9fe7a847cecad] = env->getMethodID(cls, "setC2pCodePhaseBias", "(D)V");
              mids$[mid_setCenterMass_1844f891addbac57] = env->getMethodID(cls, "setCenterMass", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setClkOffset_44ed599e93e8a30c] = env->getMethodID(cls, "setClkOffset", "(I)V");
              mids$[mid_setEccentricities_e94ae32a63c9501d] = env->getMethodID(cls, "setEccentricities", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_setInterval_8ba9fe7a847cecad] = env->getMethodID(cls, "setInterval", "(D)V");
              mids$[mid_setLeapSeconds_44ed599e93e8a30c] = env->getMethodID(cls, "setLeapSeconds", "(I)V");
              mids$[mid_setLeapSecondsDayNum_44ed599e93e8a30c] = env->getMethodID(cls, "setLeapSecondsDayNum", "(I)V");
              mids$[mid_setLeapSecondsFuture_44ed599e93e8a30c] = env->getMethodID(cls, "setLeapSecondsFuture", "(I)V");
              mids$[mid_setLeapSecondsWeekNum_44ed599e93e8a30c] = env->getMethodID(cls, "setLeapSecondsWeekNum", "(I)V");
              mids$[mid_setMarkerName_734b91ac30d5f9b4] = env->getMethodID(cls, "setMarkerName", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerNumber_734b91ac30d5f9b4] = env->getMethodID(cls, "setMarkerNumber", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerType_734b91ac30d5f9b4] = env->getMethodID(cls, "setMarkerType", "(Ljava/lang/String;)V");
              mids$[mid_setNbObsPerSatellite_accf4185711b3ada] = env->getMethodID(cls, "setNbObsPerSatellite", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/gnss/ObservationType;I)V");
              mids$[mid_setNbSat_44ed599e93e8a30c] = env->getMethodID(cls, "setNbSat", "(I)V");
              mids$[mid_setObservationCode_734b91ac30d5f9b4] = env->getMethodID(cls, "setObservationCode", "(Ljava/lang/String;)V");
              mids$[mid_setObserverName_734b91ac30d5f9b4] = env->getMethodID(cls, "setObserverName", "(Ljava/lang/String;)V");
              mids$[mid_setPhaseCenterSystem_cfddc646eebc7104] = env->getMethodID(cls, "setPhaseCenterSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setReceiverNumber_734b91ac30d5f9b4] = env->getMethodID(cls, "setReceiverNumber", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverType_734b91ac30d5f9b4] = env->getMethodID(cls, "setReceiverType", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverVersion_734b91ac30d5f9b4] = env->getMethodID(cls, "setReceiverVersion", "(Ljava/lang/String;)V");
              mids$[mid_setSignalStrengthUnit_734b91ac30d5f9b4] = env->getMethodID(cls, "setSignalStrengthUnit", "(Ljava/lang/String;)V");
              mids$[mid_setTFirstObs_02135a6ef25adb4b] = env->getMethodID(cls, "setTFirstObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTLastObs_02135a6ef25adb4b] = env->getMethodID(cls, "setTLastObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTypeObs_86f62df52fe5e155] = env->getMethodID(cls, "setTypeObs", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationHeader::RinexObservationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void RinexObservationHeader::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_0fdf888bd1afbe51], a0.this$);
          }

          void RinexObservationHeader::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_f61ab6fa49270d08], a0.this$);
          }

          void RinexObservationHeader::addGlonassChannel(const ::org::orekit::files::rinex::observation::GlonassSatelliteChannel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassChannel_33adad59f1fe6906], a0.this$);
          }

          void RinexObservationHeader::addPhaseShiftCorrection(const ::org::orekit::files::rinex::observation::PhaseShiftCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPhaseShiftCorrection_1621cb7001452a6c], a0.this$);
          }

          void RinexObservationHeader::addScaleFactorCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::rinex::observation::ScaleFactorCorrection & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addScaleFactorCorrection_72ae2e1032ed1675], a0.this$, a1.this$);
          }

          ::java::lang::String RinexObservationHeader::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_1c1fa1e935d6cdcf]));
          }

          jdouble RinexObservationHeader::getAntennaAzimuth() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaAzimuth_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaBSight() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaBSight_8b724f8b4fdad1a2]));
          }

          jdouble RinexObservationHeader::getAntennaHeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaHeight_b74f83833fdad017]);
          }

          ::java::lang::String RinexObservationHeader::getAntennaNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaNumber_1c1fa1e935d6cdcf]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaPhaseCenter() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaPhaseCenter_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaReferencePoint() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaReferencePoint_8b724f8b4fdad1a2]));
          }

          ::java::lang::String RinexObservationHeader::getAntennaType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_1c1fa1e935d6cdcf]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaZeroDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaZeroDirection_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getApproxPos() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getApproxPos_8b724f8b4fdad1a2]));
          }

          jdouble RinexObservationHeader::getC1cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1cCodePhaseBias_b74f83833fdad017]);
          }

          jdouble RinexObservationHeader::getC1pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1pCodePhaseBias_b74f83833fdad017]);
          }

          jdouble RinexObservationHeader::getC2cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2cCodePhaseBias_b74f83833fdad017]);
          }

          jdouble RinexObservationHeader::getC2pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2pCodePhaseBias_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getCenterMass() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterMass_8b724f8b4fdad1a2]));
          }

          jint RinexObservationHeader::getClkOffset() const
          {
            return env->callIntMethod(this$, mids$[mid_getClkOffset_55546ef6a647f39b]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D RinexObservationHeader::getEccentricities() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEccentricities_9cb1572c1d4936cf]));
          }

          ::java::util::List RinexObservationHeader::getGlonassChannels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassChannels_e62d3bb06d56d7e3]));
          }

          jdouble RinexObservationHeader::getInterval() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInterval_b74f83833fdad017]);
          }

          jint RinexObservationHeader::getLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSeconds_55546ef6a647f39b]);
          }

          jint RinexObservationHeader::getLeapSecondsDayNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsDayNum_55546ef6a647f39b]);
          }

          jint RinexObservationHeader::getLeapSecondsFuture() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsFuture_55546ef6a647f39b]);
          }

          jint RinexObservationHeader::getLeapSecondsWeekNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsWeekNum_55546ef6a647f39b]);
          }

          ::java::util::List RinexObservationHeader::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_e62d3bb06d56d7e3]));
          }

          ::java::util::List RinexObservationHeader::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_e62d3bb06d56d7e3]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerName_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerNumber_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerType_1c1fa1e935d6cdcf]));
          }

          ::java::util::Map RinexObservationHeader::getNbObsPerSat() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getNbObsPerSat_810bed48fafb0b9a]));
          }

          jint RinexObservationHeader::getNbSat() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSat_55546ef6a647f39b]);
          }

          ::java::lang::String RinexObservationHeader::getObservationCode() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObservationCode_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexObservationHeader::getObserverName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObserverName_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexObservationHeader::getPhaseCenterSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getPhaseCenterSystem_21bd759cc4a81606]));
          }

          ::java::util::List RinexObservationHeader::getPhaseShiftCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPhaseShiftCorrections_e62d3bb06d56d7e3]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverNumber_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverType_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverVersion() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverVersion_1c1fa1e935d6cdcf]));
          }

          ::java::util::List RinexObservationHeader::getScaleFactorCorrections(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getScaleFactorCorrections_c8350d68c8d51d84], a0.this$));
          }

          ::java::lang::String RinexObservationHeader::getSignalStrengthUnit() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSignalStrengthUnit_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTFirstObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTFirstObs_c325492395d89b24]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTLastObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTLastObs_c325492395d89b24]));
          }

          ::java::util::Map RinexObservationHeader::getTypeObs() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTypeObs_810bed48fafb0b9a]));
          }

          void RinexObservationHeader::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setAntennaAzimuth(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaAzimuth_8ba9fe7a847cecad], a0);
          }

          void RinexObservationHeader::setAntennaBSight(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaBSight_1844f891addbac57], a0.this$);
          }

          void RinexObservationHeader::setAntennaHeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaHeight_8ba9fe7a847cecad], a0);
          }

          void RinexObservationHeader::setAntennaNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaNumber_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setAntennaPhaseCenter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaPhaseCenter_1844f891addbac57], a0.this$);
          }

          void RinexObservationHeader::setAntennaReferencePoint(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaReferencePoint_1844f891addbac57], a0.this$);
          }

          void RinexObservationHeader::setAntennaType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaType_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setAntennaZeroDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaZeroDirection_1844f891addbac57], a0.this$);
          }

          void RinexObservationHeader::setApproxPos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setApproxPos_1844f891addbac57], a0.this$);
          }

          void RinexObservationHeader::setC1cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1cCodePhaseBias_8ba9fe7a847cecad], a0);
          }

          void RinexObservationHeader::setC1pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1pCodePhaseBias_8ba9fe7a847cecad], a0);
          }

          void RinexObservationHeader::setC2cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2cCodePhaseBias_8ba9fe7a847cecad], a0);
          }

          void RinexObservationHeader::setC2pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2pCodePhaseBias_8ba9fe7a847cecad], a0);
          }

          void RinexObservationHeader::setCenterMass(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCenterMass_1844f891addbac57], a0.this$);
          }

          void RinexObservationHeader::setClkOffset(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClkOffset_44ed599e93e8a30c], a0);
          }

          void RinexObservationHeader::setEccentricities(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setEccentricities_e94ae32a63c9501d], a0.this$);
          }

          void RinexObservationHeader::setInterval(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterval_8ba9fe7a847cecad], a0);
          }

          void RinexObservationHeader::setLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSeconds_44ed599e93e8a30c], a0);
          }

          void RinexObservationHeader::setLeapSecondsDayNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsDayNum_44ed599e93e8a30c], a0);
          }

          void RinexObservationHeader::setLeapSecondsFuture(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsFuture_44ed599e93e8a30c], a0);
          }

          void RinexObservationHeader::setLeapSecondsWeekNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsWeekNum_44ed599e93e8a30c], a0);
          }

          void RinexObservationHeader::setMarkerName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setMarkerNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerNumber_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setMarkerType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerType_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setNbObsPerSatellite(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbObsPerSatellite_accf4185711b3ada], a0.this$, a1.this$, a2);
          }

          void RinexObservationHeader::setNbSat(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbSat_44ed599e93e8a30c], a0);
          }

          void RinexObservationHeader::setObservationCode(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObservationCode_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setObserverName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObserverName_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setPhaseCenterSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setPhaseCenterSystem_cfddc646eebc7104], a0.this$);
          }

          void RinexObservationHeader::setReceiverNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverNumber_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setReceiverType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverType_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setReceiverVersion(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverVersion_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setSignalStrengthUnit(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSignalStrengthUnit_734b91ac30d5f9b4], a0.this$);
          }

          void RinexObservationHeader::setTFirstObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTFirstObs_02135a6ef25adb4b], a0.this$);
          }

          void RinexObservationHeader::setTLastObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTLastObs_02135a6ef25adb4b], a0.this$);
          }

          void RinexObservationHeader::setTypeObs(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::util::List & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setTypeObs_86f62df52fe5e155], a0.this$, a1.this$);
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
        namespace observation {
          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data);
          static PyGetSetDef t_RinexObservationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, agencyName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaAzimuth),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaBSight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaHeight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaPhaseCenter),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaReferencePoint),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaZeroDirection),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, approxPos),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, centerMass),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, clkOffset),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, eccentricities),
            DECLARE_GET_FIELD(t_RinexObservationHeader, glonassChannels),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, interval),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSeconds),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsDayNum),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsFuture),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsWeekNum),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedPCVS),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerType),
            DECLARE_GET_FIELD(t_RinexObservationHeader, nbObsPerSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, nbSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observationCode),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, phaseCenterSystem),
            DECLARE_GET_FIELD(t_RinexObservationHeader, phaseShiftCorrections),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverVersion),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, signalStrengthUnit),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tFirstObs),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tLastObs),
            DECLARE_GET_FIELD(t_RinexObservationHeader, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexObservationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addGlonassChannel, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addPhaseShiftCorrection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addScaleFactorCorrection, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaAzimuth, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaBSight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaHeight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaPhaseCenter, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaReferencePoint, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaZeroDirection, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getApproxPos, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getCenterMass, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getEccentricities, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getGlonassChannels, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getInterval, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsDayNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsFuture, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsWeekNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbObsPerSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObservationCode, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObserverName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseCenterSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseShiftCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getScaleFactorCorrections, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, getSignalStrengthUnit, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTFirstObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTLastObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTypeObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaAzimuth, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaBSight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaHeight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaPhaseCenter, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaReferencePoint, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaZeroDirection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setApproxPos, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setCenterMass, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setClkOffset, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setEccentricities, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setInterval, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsDayNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsFuture, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsWeekNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setNbObsPerSatellite, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setNbSat, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObservationCode, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObserverName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setPhaseCenterSystem, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverVersion, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setSignalStrengthUnit, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTFirstObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTLastObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTypeObs, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationHeader)[] = {
            { Py_tp_methods, t_RinexObservationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexObservationHeader_init_ },
            { Py_tp_getset, t_RinexObservationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexObservationHeader, t_RinexObservationHeader, RinexObservationHeader);

          void t_RinexObservationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationHeader), &PY_TYPE_DEF(RinexObservationHeader), module, "RinexObservationHeader", 0);
          }

          void t_RinexObservationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "class_", make_descriptor(RinexObservationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "wrapfn_", make_descriptor(t_RinexObservationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexObservationHeader::wrap_Object(RinexObservationHeader(((t_RinexObservationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexObservationHeader object((jobject) NULL);

            INT_CALL(object = RinexObservationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::GlonassSatelliteChannel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::GlonassSatelliteChannel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassChannel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassChannel", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::PhaseShiftCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::PhaseShiftCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPhaseShiftCorrection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPhaseShiftCorrection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::files::rinex::observation::ScaleFactorCorrection a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::rinex::observation::ScaleFactorCorrection::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(self->object.addScaleFactorCorrection(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScaleFactorCorrection", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getClkOffset());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(GlonassSatelliteChannel));
          }

          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInterval());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSat());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationCode());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObserverName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(PhaseShiftCorrection));
          }

          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverVersion());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.getScaleFactorCorrections(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ScaleFactorCorrection));
            }

            PyErr_SetArgsError((PyObject *) self, "getScaleFactorCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSignalStrengthUnit());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaAzimuth(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaAzimuth", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaBSight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaBSight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaHeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaHeight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaPhaseCenter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaPhaseCenter", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaReferencePoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaReferencePoint", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaZeroDirection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaZeroDirection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setApproxPos(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setApproxPos", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCenterMass(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCenterMass", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setClkOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClkOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setEccentricities(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setEccentricities", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterval(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterval", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsDayNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsDayNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsFuture(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsFuture", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsWeekNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsWeekNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;

            if (!parseArgs(args, "kKI", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
            {
              OBJ_CALL(self->object.setNbObsPerSatellite(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbObsPerSatellite", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNbSat(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbSat", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObservationCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObservationCode", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObserverName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObserverName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setPhaseCenterSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setPhaseCenterSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setSignalStrengthUnit(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSignalStrengthUnit", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTFirstObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTFirstObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTLastObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTLastObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setTypeObs(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTypeObs", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaAzimuth(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaAzimuth", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaBSight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaBSight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaHeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaHeight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaPhaseCenter(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaPhaseCenter", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaReferencePoint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaReferencePoint", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaZeroDirection(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaZeroDirection", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setApproxPos(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "approxPos", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setCenterMass(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "centerMass", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getClkOffset());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setClkOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "clkOffset", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &value))
              {
                INT_CALL(self->object.setEccentricities(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "eccentricities", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInterval());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterval(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interval", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsDayNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsDayNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsFuture(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsFuture", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsWeekNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsWeekNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSat());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNbSat(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "nbSat", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationCode());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObservationCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observationCode", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObserverName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObserverName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setPhaseCenterSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "phaseCenterSystem", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverVersion());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverVersion", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSignalStrengthUnit());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setSignalStrengthUnit(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "signalStrengthUnit", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTFirstObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tFirstObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTLastObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tLastObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmParser::class$ = NULL;
              jmethodID *OmmParser::mids$ = NULL;
              bool OmmParser::live$ = false;

              jclass OmmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_80f036726d3115a8] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/omm/Omm;");
                  mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_de29107d9fd9c097] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::Omm OmmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::Omm(env->callObjectMethod(this$, mids$[mid_build_80f036726d3115a8]));
              }

              jboolean OmmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
              }

              jboolean OmmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
              }

              jboolean OmmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OmmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_de29107d9fd9c097]));
              }

              ::java::util::Map OmmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
              }

              jboolean OmmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
              }

              jboolean OmmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
              }

              jboolean OmmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
              }

              jboolean OmmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
              }

              jboolean OmmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
              }

              jboolean OmmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
              }

              void OmmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
            namespace omm {
              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args);
              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data);
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data);
              static PyGetSetDef t_OmmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OmmParser, header),
                DECLARE_GET_FIELD(t_OmmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OmmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmParser__methods_[] = {
                DECLARE_METHOD(t_OmmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OmmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmParser)[] = {
                { Py_tp_methods, t_OmmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OmmParser, t_OmmParser, OmmParser);
              PyObject *t_OmmParser::wrap_Object(const OmmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OmmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OmmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmParser *self = (t_OmmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OmmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmParser), &PY_TYPE_DEF(OmmParser), module, "OmmParser", 0);
              }

              void t_OmmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "class_", make_descriptor(OmmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "wrapfn_", make_descriptor(t_OmmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OmmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmParser::initializeClass, 1)))
                  return NULL;
                return t_OmmParser::wrap_Object(OmmParser(((t_OmmParser *) arg)->object.this$));
              }
              static PyObject *t_OmmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmParser_of_(t_OmmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmParser_build(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::Omm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::omm::t_Omm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OmmParser_finalizeData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OmmParser_finalizeHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OmmParser_finalizeMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OmmParser_getHeader(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OmmParser_getSpecialXmlElementsBuilders(t_OmmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OmmParser_inData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OmmParser_inHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OmmParser_inMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OmmParser_prepareData(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OmmParser_prepareHeader(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OmmParser_prepareMetadata(t_OmmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OmmParser_reset(t_OmmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OmmParser_get__parameters_(t_OmmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OmmParser_get__header(t_OmmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OmmParser_get__specialXmlElementsBuilders(t_OmmParser *self, void *data)
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
#include "org/hipparchus/stat/inference/OneWayAnova.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *OneWayAnova::class$ = NULL;
        jmethodID *OneWayAnova::mids$ = NULL;
        bool OneWayAnova::live$ = false;

        jclass OneWayAnova::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/OneWayAnova");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_anovaFValue_b19699bf13064258] = env->getMethodID(cls, "anovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_b19699bf13064258] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_84cc8e311072bbb9] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;Z)D");
            mids$[mid_anovaTest_9417b0f508298776] = env->getMethodID(cls, "anovaTest", "(Ljava/util/Collection;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneWayAnova::OneWayAnova() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble OneWayAnova::anovaFValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaFValue_b19699bf13064258], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_b19699bf13064258], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0, jboolean a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_84cc8e311072bbb9], a0.this$, a1);
        }

        jboolean OneWayAnova::anovaTest(const ::java::util::Collection & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_anovaTest_9417b0f508298776], a0.this$, a1);
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
        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg);
        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args);
        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args);

        static PyMethodDef t_OneWayAnova__methods_[] = {
          DECLARE_METHOD(t_OneWayAnova, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, anovaFValue, METH_O),
          DECLARE_METHOD(t_OneWayAnova, anovaPValue, METH_VARARGS),
          DECLARE_METHOD(t_OneWayAnova, anovaTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneWayAnova)[] = {
          { Py_tp_methods, t_OneWayAnova__methods_ },
          { Py_tp_init, (void *) t_OneWayAnova_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneWayAnova)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneWayAnova, t_OneWayAnova, OneWayAnova);

        void t_OneWayAnova::install(PyObject *module)
        {
          installType(&PY_TYPE(OneWayAnova), &PY_TYPE_DEF(OneWayAnova), module, "OneWayAnova", 0);
        }

        void t_OneWayAnova::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "class_", make_descriptor(OneWayAnova::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "wrapfn_", make_descriptor(t_OneWayAnova::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneWayAnova::initializeClass, 1)))
            return NULL;
          return t_OneWayAnova::wrap_Object(OneWayAnova(((t_OneWayAnova *) arg)->object.this$));
        }
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneWayAnova::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds)
        {
          OneWayAnova object((jobject) NULL);

          INT_CALL(object = OneWayAnova());
          self->object = object;

          return 0;
        }

        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.anovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaFValue", arg);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble result;

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jdouble result;

              if (!parseArgs(args, "KZ", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "anovaPValue", args);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.anovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaTest", args);
          return NULL;
        }
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldBrouwerLyddanePropagator::class$ = NULL;
        jmethodID *FieldBrouwerLyddanePropagator::mids$ = NULL;
        bool FieldBrouwerLyddanePropagator::live$ = false;

        jclass FieldBrouwerLyddanePropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e7cd2ef2420d1594] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_3c3e85df13e3351b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_90f2cc506ebfa134] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_85270cfa4cce05cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_41fc38cfd1c91d93] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_15911629bfdf8c58] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_844e097acddc5ee6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_f2475f48f60e5e40] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_ca81bc3db3056d46] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_86281233528e311a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_34a0dab3c03a36d1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_0fc57aacdd580695] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_5c4212d79c973cfe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_84e3b93e6a6da77c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_4be4dbea6fe8e776] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_e3a434bff1818af6] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_a3123543fdf24586] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_getM2_dff5885c2c873297] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getM2_bf1d7732f1acb697] = env->getMethodID(cls, "getM2", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_3209fa9b92c0cbe8] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_c0db61abf5db836e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_25f988e2d639cbc3] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_2a5f05be83ff251d] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_d141acdd230f09c3] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_33f1c56ea7775d4e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e7cd2ef2420d1594, a0.this$, a1.this$, a2)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3c3e85df13e3351b, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_90f2cc506ebfa134, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_85270cfa4cce05cb, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_41fc38cfd1c91d93, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_15911629bfdf8c58, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_844e097acddc5ee6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f2475f48f60e5e40, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ca81bc3db3056d46, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_86281233528e311a, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_34a0dab3c03a36d1, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0fc57aacdd580695, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5c4212d79c973cfe, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_84e3b93e6a6da77c, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_4be4dbea6fe8e776], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_e3a434bff1818af6], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_a3123543fdf24586], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        jdouble FieldBrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_dff5885c2c873297]);
        }

        jdouble FieldBrouwerLyddanePropagator::getM2(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_bf1d7732f1acb697], a0.this$);
        }

        ::java::util::List FieldBrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_3209fa9b92c0cbe8], a0.this$, a1.this$));
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_c0db61abf5db836e], a0.this$, a1.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_25f988e2d639cbc3], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyGetSetDef t_FieldBrouwerLyddanePropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, m2),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBrouwerLyddanePropagator__methods_[] = {
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getM2, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBrouwerLyddanePropagator)[] = {
          { Py_tp_methods, t_FieldBrouwerLyddanePropagator__methods_ },
          { Py_tp_init, (void *) t_FieldBrouwerLyddanePropagator_init_ },
          { Py_tp_getset, t_FieldBrouwerLyddanePropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBrouwerLyddanePropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldBrouwerLyddanePropagator, t_FieldBrouwerLyddanePropagator, FieldBrouwerLyddanePropagator);
        PyObject *t_FieldBrouwerLyddanePropagator::wrap_Object(const FieldBrouwerLyddanePropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBrouwerLyddanePropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBrouwerLyddanePropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBrouwerLyddanePropagator), &PY_TYPE_DEF(FieldBrouwerLyddanePropagator), module, "FieldBrouwerLyddanePropagator", 0);
        }

        void t_FieldBrouwerLyddanePropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "class_", make_descriptor(FieldBrouwerLyddanePropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "wrapfn_", make_descriptor(t_FieldBrouwerLyddanePropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 1)))
            return NULL;
          return t_FieldBrouwerLyddanePropagator::wrap_Object(FieldBrouwerLyddanePropagator(((t_FieldBrouwerLyddanePropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              jdouble a2;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
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
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
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
              jdouble a4;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4));
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
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
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
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
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
              jdouble a6;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_, &a6))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6));
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
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7));
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
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
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
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              jint a12;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10, &a11, &a12))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jint a5;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
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
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getM2(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getM2", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getM2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
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
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_hermite_b2a9019dd645a638] = env->getMethodID(cls, "hermite", "(I)Lorg/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator;");
              mids$[mid_laguerre_a1fc7e5503947186] = env->getMethodID(cls, "laguerre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_a1fc7e5503947186] = env->getMethodID(cls, "legendre", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendre_fb915b19a9e931fe] = env->getMethodID(cls, "legendre", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_a1fc7e5503947186] = env->getMethodID(cls, "legendreHighPrecision", "(I)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");
              mids$[mid_legendreHighPrecision_fb915b19a9e931fe] = env->getMethodID(cls, "legendreHighPrecision", "(IDD)Lorg/hipparchus/analysis/integration/gauss/GaussIntegrator;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_DECIMAL_DIGITS = env->getStaticIntField(cls, "DEFAULT_DECIMAL_DIGITS");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegratorFactory::GaussIntegratorFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          GaussIntegratorFactory::GaussIntegratorFactory(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

          ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator GaussIntegratorFactory::hermite(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::SymmetricGaussIntegrator(env->callObjectMethod(this$, mids$[mid_hermite_b2a9019dd645a638], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::laguerre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_laguerre_a1fc7e5503947186], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_a1fc7e5503947186], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendre(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendre_fb915b19a9e931fe], a0, a1, a2));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_a1fc7e5503947186], a0));
          }

          ::org::hipparchus::analysis::integration::gauss::GaussIntegrator GaussIntegratorFactory::legendreHighPrecision(jint a0, jdouble a1, jdouble a2) const
          {
            return ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->callObjectMethod(this$, mids$[mid_legendreHighPrecision_fb915b19a9e931fe], a0, a1, a2));
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
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataStreamRecord::class$ = NULL;
          jmethodID *DataStreamRecord::mids$ = NULL;
          bool DataStreamRecord::live$ = false;

          jclass DataStreamRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataStreamRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_b108b35ef48e27bd] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_9b280d308e8278f6] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getBitRate_570ce0828f81a2c1] = env->getMethodID(cls, "getBitRate", "()I");
              mids$[mid_getCarrierPhase_90a98dc6928530e7] = env->getMethodID(cls, "getCarrierPhase", "()Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_getCompressionEncryption_11b109bd155ca898] = env->getMethodID(cls, "getCompressionEncryption", "()Ljava/lang/String;");
              mids$[mid_getCountry_11b109bd155ca898] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFormat_d3caf78f280234e4] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_getFormatDetails_2afa36052df4765d] = env->getMethodID(cls, "getFormatDetails", "()Ljava/util/List;");
              mids$[mid_getGenerator_11b109bd155ca898] = env->getMethodID(cls, "getGenerator", "()Ljava/lang/String;");
              mids$[mid_getLatitude_dff5885c2c873297] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_dff5885c2c873297] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getMountPoint_11b109bd155ca898] = env->getMethodID(cls, "getMountPoint", "()Ljava/lang/String;");
              mids$[mid_getNavigationSystems_2afa36052df4765d] = env->getMethodID(cls, "getNavigationSystems", "()Ljava/util/List;");
              mids$[mid_getNetwork_11b109bd155ca898] = env->getMethodID(cls, "getNetwork", "()Ljava/lang/String;");
              mids$[mid_getRecordType_7952bb756bff2dbf] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_11b109bd155ca898] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");
              mids$[mid_isNMEARequired_b108b35ef48e27bd] = env->getMethodID(cls, "isNMEARequired", "()Z");
              mids$[mid_isNetworked_b108b35ef48e27bd] = env->getMethodID(cls, "isNetworked", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataStreamRecord::DataStreamRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          jboolean DataStreamRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_b108b35ef48e27bd]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication DataStreamRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_9b280d308e8278f6]));
          }

          jint DataStreamRecord::getBitRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getBitRate_570ce0828f81a2c1]);
          }

          ::org::orekit::gnss::metric::ntrip::CarrierPhase DataStreamRecord::getCarrierPhase() const
          {
            return ::org::orekit::gnss::metric::ntrip::CarrierPhase(env->callObjectMethod(this$, mids$[mid_getCarrierPhase_90a98dc6928530e7]));
          }

          ::java::lang::String DataStreamRecord::getCompressionEncryption() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCompressionEncryption_11b109bd155ca898]));
          }

          ::java::lang::String DataStreamRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_11b109bd155ca898]));
          }

          ::org::orekit::gnss::metric::ntrip::DataFormat DataStreamRecord::getFormat() const
          {
            return ::org::orekit::gnss::metric::ntrip::DataFormat(env->callObjectMethod(this$, mids$[mid_getFormat_d3caf78f280234e4]));
          }

          ::java::util::List DataStreamRecord::getFormatDetails() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormatDetails_2afa36052df4765d]));
          }

          ::java::lang::String DataStreamRecord::getGenerator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGenerator_11b109bd155ca898]));
          }

          jdouble DataStreamRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_dff5885c2c873297]);
          }

          jdouble DataStreamRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_dff5885c2c873297]);
          }

          ::java::lang::String DataStreamRecord::getMountPoint() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMountPoint_11b109bd155ca898]));
          }

          ::java::util::List DataStreamRecord::getNavigationSystems() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNavigationSystems_2afa36052df4765d]));
          }

          ::java::lang::String DataStreamRecord::getNetwork() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetwork_11b109bd155ca898]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType DataStreamRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_7952bb756bff2dbf]));
          }

          ::java::lang::String DataStreamRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_11b109bd155ca898]));
          }

          jboolean DataStreamRecord::isNMEARequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNMEARequired_b108b35ef48e27bd]);
          }

          jboolean DataStreamRecord::isNetworked() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNetworked_b108b35ef48e27bd]);
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
          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args);
          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data);
          static PyGetSetDef t_DataStreamRecord__fields_[] = {
            DECLARE_GET_FIELD(t_DataStreamRecord, authentication),
            DECLARE_GET_FIELD(t_DataStreamRecord, bitRate),
            DECLARE_GET_FIELD(t_DataStreamRecord, carrierPhase),
            DECLARE_GET_FIELD(t_DataStreamRecord, compressionEncryption),
            DECLARE_GET_FIELD(t_DataStreamRecord, country),
            DECLARE_GET_FIELD(t_DataStreamRecord, format),
            DECLARE_GET_FIELD(t_DataStreamRecord, formatDetails),
            DECLARE_GET_FIELD(t_DataStreamRecord, generator),
            DECLARE_GET_FIELD(t_DataStreamRecord, latitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, longitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, mountPoint),
            DECLARE_GET_FIELD(t_DataStreamRecord, nMEARequired),
            DECLARE_GET_FIELD(t_DataStreamRecord, navigationSystems),
            DECLARE_GET_FIELD(t_DataStreamRecord, network),
            DECLARE_GET_FIELD(t_DataStreamRecord, networked),
            DECLARE_GET_FIELD(t_DataStreamRecord, recordType),
            DECLARE_GET_FIELD(t_DataStreamRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataStreamRecord__methods_[] = {
            DECLARE_METHOD(t_DataStreamRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getBitRate, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCarrierPhase, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCompressionEncryption, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormat, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormatDetails, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getGenerator, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getMountPoint, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNavigationSystems, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNetwork, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_DataStreamRecord, getSourceIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNMEARequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNetworked, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataStreamRecord)[] = {
            { Py_tp_methods, t_DataStreamRecord__methods_ },
            { Py_tp_init, (void *) t_DataStreamRecord_init_ },
            { Py_tp_getset, t_DataStreamRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataStreamRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(DataStreamRecord, t_DataStreamRecord, DataStreamRecord);

          void t_DataStreamRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(DataStreamRecord), &PY_TYPE_DEF(DataStreamRecord), module, "DataStreamRecord", 0);
          }

          void t_DataStreamRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "class_", make_descriptor(DataStreamRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "wrapfn_", make_descriptor(t_DataStreamRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataStreamRecord::initializeClass, 1)))
              return NULL;
            return t_DataStreamRecord::wrap_Object(DataStreamRecord(((t_DataStreamRecord *) arg)->object.this$));
          }
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataStreamRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            DataStreamRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataStreamRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getBitRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase result((jobject) NULL);
            OBJ_CALL(result = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCompressionEncryption());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(StreamedMessage));
          }

          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getGenerator());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMountPoint());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NavigationSystem));
          }

          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetwork());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DataStreamRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNMEARequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNetworked());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getBitRate());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase value((jobject) NULL);
            OBJ_CALL(value = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCompressionEncryption());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getGenerator());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMountPoint());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNMEARequired());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetwork());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNetworked());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data)
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
#include "org/hipparchus/analysis/function/Atan.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan::class$ = NULL;
        jmethodID *Atan::mids$ = NULL;
        bool Atan::live$ = false;

        jclass Atan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan::Atan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Atan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan_value(t_Atan *self, PyObject *args);

        static PyMethodDef t_Atan__methods_[] = {
          DECLARE_METHOD(t_Atan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan)[] = {
          { Py_tp_methods, t_Atan__methods_ },
          { Py_tp_init, (void *) t_Atan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan, t_Atan, Atan);

        void t_Atan::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan), &PY_TYPE_DEF(Atan), module, "Atan", 0);
        }

        void t_Atan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "class_", make_descriptor(Atan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "wrapfn_", make_descriptor(t_Atan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan::initializeClass, 1)))
            return NULL;
          return t_Atan::wrap_Object(Atan(((t_Atan *) arg)->object.this$));
        }
        static PyObject *t_Atan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan_init_(t_Atan *self, PyObject *args, PyObject *kwds)
        {
          Atan object((jobject) NULL);

          INT_CALL(object = Atan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan_value(t_Atan *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/RungeKuttaIntegrator.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaIntegrator::class$ = NULL;
        jmethodID *RungeKuttaIntegrator::mids$ = NULL;
        bool RungeKuttaIntegrator::live$ = false;

        jclass RungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_dff5885c2c873297] = env->getMethodID(cls, "getDefaultStep", "()D");
            mids$[mid_integrate_3c1cc820e563e3e9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_singleStep_ab3ac540cd7660e4] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;D[DD)[D");
            mids$[mid_createInterpolator_3c3452116c60fd90] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble RungeKuttaIntegrator::getDefaultStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultStep_dff5885c2c873297]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative RungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3c1cc820e563e3e9], a0.this$, a1.this$, a2));
        }

        JArray< jdouble > RungeKuttaIntegrator::singleStep(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, jdouble a1, const JArray< jdouble > & a2, jdouble a3) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_singleStep_ab3ac540cd7660e4], a0.this$, a1, a2.this$, a3));
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
        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self);
        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaIntegrator, defaultStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaIntegrator, t_RungeKuttaIntegrator, RungeKuttaIntegrator);

        void t_RungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaIntegrator), &PY_TYPE_DEF(RungeKuttaIntegrator), module, "RungeKuttaIntegrator", 0);
        }

        void t_RungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "class_", make_descriptor(RungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaIntegrator::wrap_Object(RungeKuttaIntegrator(((t_RungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(RungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kD[DD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }

        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/PythonLocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *PythonLocalizedException::class$ = NULL;
      jmethodID *PythonLocalizedException::mids$ = NULL;
      bool PythonLocalizedException::live$ = false;

      jclass PythonLocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/PythonLocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLocalizedException::PythonLocalizedException() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonLocalizedException::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonLocalizedException::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonLocalizedException::pythonExtension(jlong a0) const
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
    namespace errors {
      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self);
      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args);
      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data);
      static PyGetSetDef t_PythonLocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLocalizedException, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLocalizedException__methods_[] = {
        DECLARE_METHOD(t_PythonLocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLocalizedException, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLocalizedException)[] = {
        { Py_tp_methods, t_PythonLocalizedException__methods_ },
        { Py_tp_init, (void *) t_PythonLocalizedException_init_ },
        { Py_tp_getset, t_PythonLocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLocalizedException, t_PythonLocalizedException, PythonLocalizedException);

      void t_PythonLocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLocalizedException), &PY_TYPE_DEF(PythonLocalizedException), module, "PythonLocalizedException", 1);
      }

      void t_PythonLocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "class_", make_descriptor(PythonLocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "wrapfn_", make_descriptor(t_PythonLocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLocalizedException::initializeClass);
        JNINativeMethod methods[] = {
          { "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", (void *) t_PythonLocalizedException_getMessage0 },
          { "getParts", "()[Ljava/lang/Object;", (void *) t_PythonLocalizedException_getParts1 },
          { "getSpecifier", "()Lorg/hipparchus/exception/Localizable;", (void *) t_PythonLocalizedException_getSpecifier2 },
          { "pythonDecRef", "()V", (void *) t_PythonLocalizedException_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLocalizedException::initializeClass, 1)))
          return NULL;
        return t_PythonLocalizedException::wrap_Object(PythonLocalizedException(((t_PythonLocalizedException *) arg)->object.this$));
      }
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds)
      {
        PythonLocalizedException object((jobject) NULL);

        INT_CALL(object = PythonLocalizedException());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args)
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

      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::util::t_Locale::wrap_Object(::java::util::Locale(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMessage", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getMessage", result);
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

      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::Object > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParts", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[o", &value))
        {
          throwTypeError("getParts", result);
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

      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSpecifier", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::exception::Localizable::initializeClass, &value))
        {
          throwTypeError("getSpecifier", result);
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

      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagator::class$ = NULL;
          jmethodID *SBASPropagator::mids$ = NULL;
          bool SBASPropagator::live$ = false;

          jclass SBASPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_b86f9f61d97a7244] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_b86f9f61d97a7244] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_dff5885c2c873297] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getSBASOrbitalElements_155020a76818292b] = env->getMethodID(cls, "getSBASOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;");
              mids$[mid_propagateInEcef_38efe74c9e3a1286] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame SBASPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_b86f9f61d97a7244]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_b86f9f61d97a7244]));
          }

          ::org::orekit::frames::Frame SBASPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          jdouble SBASPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_dff5885c2c873297]);
          }

          ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements SBASPropagator::getSBASOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements(env->callObjectMethod(this$, mids$[mid_getSBASOrbitalElements_155020a76818292b]));
          }

          ::org::orekit::utils::PVCoordinates SBASPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_38efe74c9e3a1286], a0.this$));
          }

          void SBASPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
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
          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self);
          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg);
          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args);
          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data);
          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data);
          static PyGetSetDef t_SBASPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_SBASPropagator, eCEF),
            DECLARE_GET_FIELD(t_SBASPropagator, eCI),
            DECLARE_GET_FIELD(t_SBASPropagator, frame),
            DECLARE_GET_FIELD(t_SBASPropagator, mU),
            DECLARE_GET_FIELD(t_SBASPropagator, sBASOrbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SBASPropagator__methods_[] = {
            DECLARE_METHOD(t_SBASPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_SBASPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, getSBASOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_SBASPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagator)[] = {
            { Py_tp_methods, t_SBASPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SBASPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(SBASPropagator, t_SBASPropagator, SBASPropagator);

          void t_SBASPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagator), &PY_TYPE_DEF(SBASPropagator), module, "SBASPropagator", 0);
          }

          void t_SBASPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "class_", make_descriptor(SBASPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "wrapfn_", make_descriptor(t_SBASPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagator::initializeClass, 1)))
              return NULL;
            return t_SBASPropagator::wrap_Object(SBASPropagator(((t_SBASPropagator *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SBASPropagator_getECEF(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getECI(t_SBASPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_getFrame(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_SBASPropagator_getMU(t_SBASPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SBASPropagator_getSBASOrbitalElements(t_SBASPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_SBASPropagator_propagateInEcef(t_SBASPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagator_resetInitialState(t_SBASPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SBASPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_SBASPropagator_get__eCEF(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__eCI(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__frame(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_SBASPropagator_get__mU(t_SBASPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SBASPropagator_get__sBASOrbitalElements(t_SBASPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_SBASOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *RegularXmlTokenBuilder::class$ = NULL;
            jmethodID *RegularXmlTokenBuilder::mids$ = NULL;
            bool RegularXmlTokenBuilder::live$ = false;

            jclass RegularXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_e5e9154f880f1aad] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RegularXmlTokenBuilder::RegularXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::java::util::List RegularXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_e5e9154f880f1aad], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RegularXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RegularXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RegularXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RegularXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RegularXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RegularXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RegularXmlTokenBuilder, t_RegularXmlTokenBuilder, RegularXmlTokenBuilder);

            void t_RegularXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RegularXmlTokenBuilder), &PY_TYPE_DEF(RegularXmlTokenBuilder), module, "RegularXmlTokenBuilder", 0);
            }

            void t_RegularXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "class_", make_descriptor(RegularXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "wrapfn_", make_descriptor(t_RegularXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RegularXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RegularXmlTokenBuilder::wrap_Object(RegularXmlTokenBuilder(((t_RegularXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RegularXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RegularXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RegularXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1063::class$ = NULL;
              jmethodID *Rtcm1063::mids$ = NULL;
              bool Rtcm1063::live$ = false;

              jclass Rtcm1063::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c862bfeb63a17bd5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1063::Rtcm1063(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_c862bfeb63a17bd5, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args);
              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data);
              static PyGetSetDef t_Rtcm1063__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1063, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1063__methods_[] = {
                DECLARE_METHOD(t_Rtcm1063, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1063)[] = {
                { Py_tp_methods, t_Rtcm1063__methods_ },
                { Py_tp_init, (void *) t_Rtcm1063_init_ },
                { Py_tp_getset, t_Rtcm1063__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1063)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1063, t_Rtcm1063, Rtcm1063);
              PyObject *t_Rtcm1063::wrap_Object(const Rtcm1063& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1063::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1063::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1063), &PY_TYPE_DEF(Rtcm1063), module, "Rtcm1063", 0);
              }

              void t_Rtcm1063::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "class_", make_descriptor(Rtcm1063::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "wrapfn_", make_descriptor(t_Rtcm1063::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1063::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1063::wrap_Object(Rtcm1063(((t_Rtcm1063 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1063::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1063 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1063(a0, a1, a2));
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
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *AbstractEvaluation::class$ = NULL;
            jmethodID *AbstractEvaluation::mids$ = NULL;
            bool AbstractEvaluation::live$ = false;

            jclass AbstractEvaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getChiSquare_dff5885c2c873297] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_dff5885c2c873297] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_f21dcd9464c6e3c5] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getRMS_dff5885c2c873297] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_46f85b53d9aedd96] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getSigma_5df18376713b9c4f] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEvaluation::AbstractEvaluation(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            jdouble AbstractEvaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_dff5885c2c873297]);
            }

            jdouble AbstractEvaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_dff5885c2c873297]);
            }

            ::org::hipparchus::linear::RealMatrix AbstractEvaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_f21dcd9464c6e3c5], a0));
            }

            jdouble AbstractEvaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_dff5885c2c873297]);
            }

            jdouble AbstractEvaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_46f85b53d9aedd96], a0);
            }

            ::org::hipparchus::linear::RealVector AbstractEvaluation::getSigma(jdouble a0) const
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
            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self);
            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg);
            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data);
            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data);
            static PyGetSetDef t_AbstractEvaluation__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractEvaluation, chiSquare),
              DECLARE_GET_FIELD(t_AbstractEvaluation, cost),
              DECLARE_GET_FIELD(t_AbstractEvaluation, rMS),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEvaluation__methods_[] = {
              DECLARE_METHOD(t_AbstractEvaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEvaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEvaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_AbstractEvaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEvaluation)[] = {
              { Py_tp_methods, t_AbstractEvaluation__methods_ },
              { Py_tp_init, (void *) t_AbstractEvaluation_init_ },
              { Py_tp_getset, t_AbstractEvaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEvaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEvaluation, t_AbstractEvaluation, AbstractEvaluation);

            void t_AbstractEvaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEvaluation), &PY_TYPE_DEF(AbstractEvaluation), module, "AbstractEvaluation", 0);
            }

            void t_AbstractEvaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "class_", make_descriptor(AbstractEvaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "wrapfn_", make_descriptor(t_AbstractEvaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEvaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEvaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEvaluation::initializeClass, 1)))
                return NULL;
              return t_AbstractEvaluation::wrap_Object(AbstractEvaluation(((t_AbstractEvaluation *) arg)->object.this$));
            }
            static PyObject *t_AbstractEvaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEvaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEvaluation_init_(t_AbstractEvaluation *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              AbstractEvaluation object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = AbstractEvaluation(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractEvaluation_getChiSquare(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCost(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getCovariances(t_AbstractEvaluation *self, PyObject *arg)
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

            static PyObject *t_AbstractEvaluation_getRMS(t_AbstractEvaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEvaluation_getReducedChiSquare(t_AbstractEvaluation *self, PyObject *arg)
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

            static PyObject *t_AbstractEvaluation_getSigma(t_AbstractEvaluation *self, PyObject *arg)
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

            static PyObject *t_AbstractEvaluation_get__chiSquare(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__cost(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractEvaluation_get__rMS(t_AbstractEvaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
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
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadata::class$ = NULL;
            jmethodID *AdmMetadata::mids$ = NULL;
            bool AdmMetadata::live$ = false;

            jclass AdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getCenter_23d31d5db0bee8e9] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getHasCreatableBody_b108b35ef48e27bd] = env->getMethodID(cls, "getHasCreatableBody", "()Z");
                mids$[mid_getLaunchNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchNumber", "()I");
                mids$[mid_getLaunchPiece_11b109bd155ca898] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
                mids$[mid_getLaunchYear_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchYear", "()I");
                mids$[mid_getObjectID_11b109bd155ca898] = env->getMethodID(cls, "getObjectID", "()Ljava/lang/String;");
                mids$[mid_getObjectName_11b109bd155ca898] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_setCenter_32e120c3a0353f27] = env->getMethodID(cls, "setCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setObjectID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectID", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmMetadata::AdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::org::orekit::files::ccsds::definitions::BodyFacade AdmMetadata::getCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getCenter_23d31d5db0bee8e9]));
            }

            jboolean AdmMetadata::getHasCreatableBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_getHasCreatableBody_b108b35ef48e27bd]);
            }

            jint AdmMetadata::getLaunchNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchNumber_570ce0828f81a2c1]);
            }

            ::java::lang::String AdmMetadata::getLaunchPiece() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_11b109bd155ca898]));
            }

            jint AdmMetadata::getLaunchYear() const
            {
              return env->callIntMethod(this$, mids$[mid_getLaunchYear_570ce0828f81a2c1]);
            }

            ::java::lang::String AdmMetadata::getObjectID() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectID_11b109bd155ca898]));
            }

            ::java::lang::String AdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_11b109bd155ca898]));
            }

            void AdmMetadata::setCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCenter_32e120c3a0353f27], a0.this$);
            }

            void AdmMetadata::setObjectID(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectID_d0bc48d5b00dc40c], a0.this$);
            }

            void AdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_d0bc48d5b00dc40c], a0.this$);
            }

            void AdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self);
            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg);
            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args);
            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data);
            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data);
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdmMetadata, center),
              DECLARE_GET_FIELD(t_AdmMetadata, hasCreatableBody),
              DECLARE_GET_FIELD(t_AdmMetadata, launchNumber),
              DECLARE_GET_FIELD(t_AdmMetadata, launchPiece),
              DECLARE_GET_FIELD(t_AdmMetadata, launchYear),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectID),
              DECLARE_GETSET_FIELD(t_AdmMetadata, objectName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadata__methods_[] = {
              DECLARE_METHOD(t_AdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadata, getCenter, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getHasCreatableBody, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchNumber, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchPiece, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getLaunchYear, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectID, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_AdmMetadata, setCenter, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectID, METH_O),
              DECLARE_METHOD(t_AdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_AdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadata)[] = {
              { Py_tp_methods, t_AdmMetadata__methods_ },
              { Py_tp_init, (void *) t_AdmMetadata_init_ },
              { Py_tp_getset, t_AdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(AdmMetadata, t_AdmMetadata, AdmMetadata);

            void t_AdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadata), &PY_TYPE_DEF(AdmMetadata), module, "AdmMetadata", 0);
            }

            void t_AdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "class_", make_descriptor(AdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "wrapfn_", make_descriptor(t_AdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadata::initializeClass, 1)))
                return NULL;
              return t_AdmMetadata::wrap_Object(AdmMetadata(((t_AdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmMetadata_init_(t_AdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdmMetadata object((jobject) NULL);

              INT_CALL(object = AdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdmMetadata_getCenter(t_AdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_AdmMetadata_getHasCreatableBody(t_AdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AdmMetadata_getLaunchNumber(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getLaunchPiece(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getLaunchPiece());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getLaunchYear(t_AdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getLaunchYear());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AdmMetadata_getObjectID(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectID());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_getObjectName(t_AdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_AdmMetadata_setCenter(t_AdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCenter", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_setObjectID(t_AdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectID(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectID", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_setObjectName(t_AdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_AdmMetadata_validate(t_AdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdmMetadata_get__center(t_AdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_AdmMetadata_set__center(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "center", arg);
              return -1;
            }

            static PyObject *t_AdmMetadata_get__hasCreatableBody(t_AdmMetadata *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.getHasCreatableBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AdmMetadata_get__launchNumber(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchNumber());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__launchPiece(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getLaunchPiece());
              return j2p(value);
            }

            static PyObject *t_AdmMetadata_get__launchYear(t_AdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getLaunchYear());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AdmMetadata_get__objectID(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectID());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectID(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectID(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectID", arg);
              return -1;
            }

            static PyObject *t_AdmMetadata_get__objectName(t_AdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_AdmMetadata_set__objectName(t_AdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
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
#include "org/hipparchus/random/Well512a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well512a::class$ = NULL;
      jmethodID *Well512a::mids$ = NULL;
      bool Well512a::live$ = false;

      jclass Well512a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well512a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well512a::Well512a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Well512a::Well512a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      Well512a::Well512a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Well512a::Well512a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint Well512a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
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
      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args);

      static PyMethodDef t_Well512a__methods_[] = {
        DECLARE_METHOD(t_Well512a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well512a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well512a)[] = {
        { Py_tp_methods, t_Well512a__methods_ },
        { Py_tp_init, (void *) t_Well512a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well512a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well512a, t_Well512a, Well512a);

      void t_Well512a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well512a), &PY_TYPE_DEF(Well512a), module, "Well512a", 0);
      }

      void t_Well512a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "class_", make_descriptor(Well512a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "wrapfn_", make_descriptor(t_Well512a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well512a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well512a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well512a::initializeClass, 1)))
          return NULL;
        return t_Well512a::wrap_Object(Well512a(((t_Well512a *) arg)->object.this$));
      }
      static PyObject *t_Well512a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well512a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well512a_init_(t_Well512a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well512a object((jobject) NULL);

            INT_CALL(object = Well512a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well512a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well512a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well512a(a0));
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

      static PyObject *t_Well512a_nextInt(t_Well512a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well512a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/LegendrePolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LegendrePolynomials::class$ = NULL;
      jmethodID *LegendrePolynomials::mids$ = NULL;
      bool LegendrePolynomials::live$ = false;

      jclass LegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1506189166690b5e] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_getPnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getPnm", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LegendrePolynomials::LegendrePolynomials(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1506189166690b5e, a0, a1, a2)) {}

      jdouble LegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPnm_dbbe5f05149dbf73], a0, a1);
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
      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args);

      static PyMethodDef t_LegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_LegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LegendrePolynomials)[] = {
        { Py_tp_methods, t_LegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_LegendrePolynomials_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LegendrePolynomials, t_LegendrePolynomials, LegendrePolynomials);

      void t_LegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(LegendrePolynomials), &PY_TYPE_DEF(LegendrePolynomials), module, "LegendrePolynomials", 0);
      }

      void t_LegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "class_", make_descriptor(LegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "wrapfn_", make_descriptor(t_LegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_LegendrePolynomials::wrap_Object(LegendrePolynomials(((t_LegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        jdouble a2;
        LegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          INT_CALL(object = LegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
    }
  }
}
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
              mids$[mid_pathDelay_28325ab4dabb069a] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_bea489d08473aa2e] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement IonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_28325ab4dabb069a], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble IonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_bea489d08473aa2e], a0.this$, a1.this$, a2, a3.this$);
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
#include "org/orekit/time/TAIUTCDatFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_2afa36052df4765d] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      TAIUTCDatFilesLoader::TAIUTCDatFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}

      ::java::util::List TAIUTCDatFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_2afa36052df4765d]));
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
#include "java/lang/Character.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Character::class$ = NULL;
    jmethodID *Character::mids$ = NULL;
    bool Character::live$ = false;
    jint Character::BYTES = (jint) 0;
    jbyte Character::COMBINING_SPACING_MARK = (jbyte) 0;
    jbyte Character::CONNECTOR_PUNCTUATION = (jbyte) 0;
    jbyte Character::CONTROL = (jbyte) 0;
    jbyte Character::CURRENCY_SYMBOL = (jbyte) 0;
    jbyte Character::DASH_PUNCTUATION = (jbyte) 0;
    jbyte Character::DECIMAL_DIGIT_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_ARABIC_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_BOUNDARY_NEUTRAL = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_NONSPACING_MARK = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_OTHER_NEUTRALS = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_SEGMENT_SEPARATOR = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_UNDEFINED = (jbyte) 0;
    jbyte Character::DIRECTIONALITY_WHITESPACE = (jbyte) 0;
    jbyte Character::ENCLOSING_MARK = (jbyte) 0;
    jbyte Character::END_PUNCTUATION = (jbyte) 0;
    jbyte Character::FINAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::FORMAT = (jbyte) 0;
    jbyte Character::INITIAL_QUOTE_PUNCTUATION = (jbyte) 0;
    jbyte Character::LETTER_NUMBER = (jbyte) 0;
    jbyte Character::LINE_SEPARATOR = (jbyte) 0;
    jbyte Character::LOWERCASE_LETTER = (jbyte) 0;
    jbyte Character::MATH_SYMBOL = (jbyte) 0;
    jint Character::MAX_CODE_POINT = (jint) 0;
    jchar Character::MAX_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MAX_LOW_SURROGATE = (jchar) 0;
    jint Character::MAX_RADIX = (jint) 0;
    jchar Character::MAX_SURROGATE = (jchar) 0;
    jchar Character::MAX_VALUE = (jchar) 0;
    jint Character::MIN_CODE_POINT = (jint) 0;
    jchar Character::MIN_HIGH_SURROGATE = (jchar) 0;
    jchar Character::MIN_LOW_SURROGATE = (jchar) 0;
    jint Character::MIN_RADIX = (jint) 0;
    jint Character::MIN_SUPPLEMENTARY_CODE_POINT = (jint) 0;
    jchar Character::MIN_SURROGATE = (jchar) 0;
    jchar Character::MIN_VALUE = (jchar) 0;
    jbyte Character::MODIFIER_LETTER = (jbyte) 0;
    jbyte Character::MODIFIER_SYMBOL = (jbyte) 0;
    jbyte Character::NON_SPACING_MARK = (jbyte) 0;
    jbyte Character::OTHER_LETTER = (jbyte) 0;
    jbyte Character::OTHER_NUMBER = (jbyte) 0;
    jbyte Character::OTHER_PUNCTUATION = (jbyte) 0;
    jbyte Character::OTHER_SYMBOL = (jbyte) 0;
    jbyte Character::PARAGRAPH_SEPARATOR = (jbyte) 0;
    jbyte Character::PRIVATE_USE = (jbyte) 0;
    jint Character::SIZE = (jint) 0;
    jbyte Character::SPACE_SEPARATOR = (jbyte) 0;
    jbyte Character::START_PUNCTUATION = (jbyte) 0;
    jbyte Character::SURROGATE = (jbyte) 0;
    jbyte Character::TITLECASE_LETTER = (jbyte) 0;
    ::java::lang::Class *Character::TYPE = NULL;
    jbyte Character::UNASSIGNED = (jbyte) 0;
    jbyte Character::UPPERCASE_LETTER = (jbyte) 0;

    jclass Character::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Character");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_636c0bbb96cab723] = env->getMethodID(cls, "<init>", "(C)V");
        mids$[mid_charCount_2235cd056f5a882b] = env->getStaticMethodID(cls, "charCount", "(I)I");
        mids$[mid_charValue_7818f5b58320cd1f] = env->getMethodID(cls, "charValue", "()C");
        mids$[mid_codePointAt_59f9c2d0435954b6] = env->getStaticMethodID(cls, "codePointAt", "([CI)I");
        mids$[mid_codePointAt_72df1bce0f4d6206] = env->getStaticMethodID(cls, "codePointAt", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointAt_e1525dbb996fb0b1] = env->getStaticMethodID(cls, "codePointAt", "([CII)I");
        mids$[mid_codePointBefore_59f9c2d0435954b6] = env->getStaticMethodID(cls, "codePointBefore", "([CI)I");
        mids$[mid_codePointBefore_72df1bce0f4d6206] = env->getStaticMethodID(cls, "codePointBefore", "(Ljava/lang/CharSequence;I)I");
        mids$[mid_codePointBefore_e1525dbb996fb0b1] = env->getStaticMethodID(cls, "codePointBefore", "([CII)I");
        mids$[mid_codePointCount_e1525dbb996fb0b1] = env->getStaticMethodID(cls, "codePointCount", "([CII)I");
        mids$[mid_codePointCount_c028f0c47f9d8f31] = env->getStaticMethodID(cls, "codePointCount", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_codePointOf_02f02486e9727d8f] = env->getStaticMethodID(cls, "codePointOf", "(Ljava/lang/String;)I");
        mids$[mid_compare_dd48bf2aa6dfbaa3] = env->getStaticMethodID(cls, "compare", "(CC)I");
        mids$[mid_compareTo_d3818e483000ff27] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Character;)I");
        mids$[mid_digit_508f62e89e997929] = env->getStaticMethodID(cls, "digit", "(CI)I");
        mids$[mid_digit_819f91eddf220c5b] = env->getStaticMethodID(cls, "digit", "(II)I");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_forDigit_fc758e31b1fe694a] = env->getStaticMethodID(cls, "forDigit", "(II)C");
        mids$[mid_getDirectionality_731379c577217b6e] = env->getStaticMethodID(cls, "getDirectionality", "(C)B");
        mids$[mid_getDirectionality_aadb1e26b1fc3f0a] = env->getStaticMethodID(cls, "getDirectionality", "(I)B");
        mids$[mid_getName_8cc8a10236476f23] = env->getStaticMethodID(cls, "getName", "(I)Ljava/lang/String;");
        mids$[mid_getNumericValue_d31f2b475a1ea885] = env->getStaticMethodID(cls, "getNumericValue", "(C)I");
        mids$[mid_getNumericValue_2235cd056f5a882b] = env->getStaticMethodID(cls, "getNumericValue", "(I)I");
        mids$[mid_getType_d31f2b475a1ea885] = env->getStaticMethodID(cls, "getType", "(C)I");
        mids$[mid_getType_2235cd056f5a882b] = env->getStaticMethodID(cls, "getType", "(I)I");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_d31f2b475a1ea885] = env->getStaticMethodID(cls, "hashCode", "(C)I");
        mids$[mid_highSurrogate_9d4c2604195fbadb] = env->getStaticMethodID(cls, "highSurrogate", "(I)C");
        mids$[mid_isAlphabetic_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isAlphabetic", "(I)Z");
        mids$[mid_isBmpCodePoint_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isBmpCodePoint", "(I)Z");
        mids$[mid_isDefined_75aee5383fa9200e] = env->getStaticMethodID(cls, "isDefined", "(C)Z");
        mids$[mid_isDefined_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isDefined", "(I)Z");
        mids$[mid_isDigit_75aee5383fa9200e] = env->getStaticMethodID(cls, "isDigit", "(C)Z");
        mids$[mid_isDigit_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isDigit", "(I)Z");
        mids$[mid_isHighSurrogate_75aee5383fa9200e] = env->getStaticMethodID(cls, "isHighSurrogate", "(C)Z");
        mids$[mid_isISOControl_75aee5383fa9200e] = env->getStaticMethodID(cls, "isISOControl", "(C)Z");
        mids$[mid_isISOControl_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isISOControl", "(I)Z");
        mids$[mid_isIdentifierIgnorable_75aee5383fa9200e] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(C)Z");
        mids$[mid_isIdentifierIgnorable_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isIdentifierIgnorable", "(I)Z");
        mids$[mid_isIdeographic_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isIdeographic", "(I)Z");
        mids$[mid_isJavaIdentifierPart_75aee5383fa9200e] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(C)Z");
        mids$[mid_isJavaIdentifierPart_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isJavaIdentifierPart", "(I)Z");
        mids$[mid_isJavaIdentifierStart_75aee5383fa9200e] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(C)Z");
        mids$[mid_isJavaIdentifierStart_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isJavaIdentifierStart", "(I)Z");
        mids$[mid_isJavaLetter_75aee5383fa9200e] = env->getStaticMethodID(cls, "isJavaLetter", "(C)Z");
        mids$[mid_isJavaLetterOrDigit_75aee5383fa9200e] = env->getStaticMethodID(cls, "isJavaLetterOrDigit", "(C)Z");
        mids$[mid_isLetter_75aee5383fa9200e] = env->getStaticMethodID(cls, "isLetter", "(C)Z");
        mids$[mid_isLetter_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isLetter", "(I)Z");
        mids$[mid_isLetterOrDigit_75aee5383fa9200e] = env->getStaticMethodID(cls, "isLetterOrDigit", "(C)Z");
        mids$[mid_isLetterOrDigit_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isLetterOrDigit", "(I)Z");
        mids$[mid_isLowSurrogate_75aee5383fa9200e] = env->getStaticMethodID(cls, "isLowSurrogate", "(C)Z");
        mids$[mid_isLowerCase_75aee5383fa9200e] = env->getStaticMethodID(cls, "isLowerCase", "(C)Z");
        mids$[mid_isLowerCase_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isLowerCase", "(I)Z");
        mids$[mid_isMirrored_75aee5383fa9200e] = env->getStaticMethodID(cls, "isMirrored", "(C)Z");
        mids$[mid_isMirrored_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isMirrored", "(I)Z");
        mids$[mid_isSpace_75aee5383fa9200e] = env->getStaticMethodID(cls, "isSpace", "(C)Z");
        mids$[mid_isSpaceChar_75aee5383fa9200e] = env->getStaticMethodID(cls, "isSpaceChar", "(C)Z");
        mids$[mid_isSpaceChar_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isSpaceChar", "(I)Z");
        mids$[mid_isSupplementaryCodePoint_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isSupplementaryCodePoint", "(I)Z");
        mids$[mid_isSurrogate_75aee5383fa9200e] = env->getStaticMethodID(cls, "isSurrogate", "(C)Z");
        mids$[mid_isSurrogatePair_8fd095b4916b50a5] = env->getStaticMethodID(cls, "isSurrogatePair", "(CC)Z");
        mids$[mid_isTitleCase_75aee5383fa9200e] = env->getStaticMethodID(cls, "isTitleCase", "(C)Z");
        mids$[mid_isTitleCase_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isTitleCase", "(I)Z");
        mids$[mid_isUnicodeIdentifierPart_75aee5383fa9200e] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(C)Z");
        mids$[mid_isUnicodeIdentifierPart_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isUnicodeIdentifierPart", "(I)Z");
        mids$[mid_isUnicodeIdentifierStart_75aee5383fa9200e] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(C)Z");
        mids$[mid_isUnicodeIdentifierStart_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isUnicodeIdentifierStart", "(I)Z");
        mids$[mid_isUpperCase_75aee5383fa9200e] = env->getStaticMethodID(cls, "isUpperCase", "(C)Z");
        mids$[mid_isUpperCase_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isUpperCase", "(I)Z");
        mids$[mid_isValidCodePoint_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isValidCodePoint", "(I)Z");
        mids$[mid_isWhitespace_75aee5383fa9200e] = env->getStaticMethodID(cls, "isWhitespace", "(C)Z");
        mids$[mid_isWhitespace_b6e9be1df30aebaf] = env->getStaticMethodID(cls, "isWhitespace", "(I)Z");
        mids$[mid_lowSurrogate_9d4c2604195fbadb] = env->getStaticMethodID(cls, "lowSurrogate", "(I)C");
        mids$[mid_offsetByCodePoints_c028f0c47f9d8f31] = env->getStaticMethodID(cls, "offsetByCodePoints", "(Ljava/lang/CharSequence;II)I");
        mids$[mid_offsetByCodePoints_9f320347b8952a1f] = env->getStaticMethodID(cls, "offsetByCodePoints", "([CIIII)I");
        mids$[mid_reverseBytes_d815256387095baa] = env->getStaticMethodID(cls, "reverseBytes", "(C)C");
        mids$[mid_toChars_4f5eb2f2ac6b9f67] = env->getStaticMethodID(cls, "toChars", "(I)[C");
        mids$[mid_toChars_c9f91c61afb7a615] = env->getStaticMethodID(cls, "toChars", "(I[CI)I");
        mids$[mid_toCodePoint_dd48bf2aa6dfbaa3] = env->getStaticMethodID(cls, "toCodePoint", "(CC)I");
        mids$[mid_toLowerCase_d815256387095baa] = env->getStaticMethodID(cls, "toLowerCase", "(C)C");
        mids$[mid_toLowerCase_2235cd056f5a882b] = env->getStaticMethodID(cls, "toLowerCase", "(I)I");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_3371cef512ec7a0c] = env->getStaticMethodID(cls, "toString", "(C)Ljava/lang/String;");
        mids$[mid_toString_8cc8a10236476f23] = env->getStaticMethodID(cls, "toString", "(I)Ljava/lang/String;");
        mids$[mid_toTitleCase_d815256387095baa] = env->getStaticMethodID(cls, "toTitleCase", "(C)C");
        mids$[mid_toTitleCase_2235cd056f5a882b] = env->getStaticMethodID(cls, "toTitleCase", "(I)I");
        mids$[mid_toUpperCase_d815256387095baa] = env->getStaticMethodID(cls, "toUpperCase", "(C)C");
        mids$[mid_toUpperCase_2235cd056f5a882b] = env->getStaticMethodID(cls, "toUpperCase", "(I)I");
        mids$[mid_valueOf_7fb548ed576b085d] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/Character;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        COMBINING_SPACING_MARK = env->getStaticByteField(cls, "COMBINING_SPACING_MARK");
        CONNECTOR_PUNCTUATION = env->getStaticByteField(cls, "CONNECTOR_PUNCTUATION");
        CONTROL = env->getStaticByteField(cls, "CONTROL");
        CURRENCY_SYMBOL = env->getStaticByteField(cls, "CURRENCY_SYMBOL");
        DASH_PUNCTUATION = env->getStaticByteField(cls, "DASH_PUNCTUATION");
        DECIMAL_DIGIT_NUMBER = env->getStaticByteField(cls, "DECIMAL_DIGIT_NUMBER");
        DIRECTIONALITY_ARABIC_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_ARABIC_NUMBER");
        DIRECTIONALITY_BOUNDARY_NEUTRAL = env->getStaticByteField(cls, "DIRECTIONALITY_BOUNDARY_NEUTRAL");
        DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER");
        DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR");
        DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = env->getStaticByteField(cls, "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR");
        DIRECTIONALITY_FIRST_STRONG_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_FIRST_STRONG_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT");
        DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING");
        DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE");
        DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE");
        DIRECTIONALITY_NONSPACING_MARK = env->getStaticByteField(cls, "DIRECTIONALITY_NONSPACING_MARK");
        DIRECTIONALITY_OTHER_NEUTRALS = env->getStaticByteField(cls, "DIRECTIONALITY_OTHER_NEUTRALS");
        DIRECTIONALITY_PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_PARAGRAPH_SEPARATOR");
        DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT");
        DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT");
        DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC");
        DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING");
        DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE");
        DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = env->getStaticByteField(cls, "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE");
        DIRECTIONALITY_SEGMENT_SEPARATOR = env->getStaticByteField(cls, "DIRECTIONALITY_SEGMENT_SEPARATOR");
        DIRECTIONALITY_UNDEFINED = env->getStaticByteField(cls, "DIRECTIONALITY_UNDEFINED");
        DIRECTIONALITY_WHITESPACE = env->getStaticByteField(cls, "DIRECTIONALITY_WHITESPACE");
        ENCLOSING_MARK = env->getStaticByteField(cls, "ENCLOSING_MARK");
        END_PUNCTUATION = env->getStaticByteField(cls, "END_PUNCTUATION");
        FINAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "FINAL_QUOTE_PUNCTUATION");
        FORMAT = env->getStaticByteField(cls, "FORMAT");
        INITIAL_QUOTE_PUNCTUATION = env->getStaticByteField(cls, "INITIAL_QUOTE_PUNCTUATION");
        LETTER_NUMBER = env->getStaticByteField(cls, "LETTER_NUMBER");
        LINE_SEPARATOR = env->getStaticByteField(cls, "LINE_SEPARATOR");
        LOWERCASE_LETTER = env->getStaticByteField(cls, "LOWERCASE_LETTER");
        MATH_SYMBOL = env->getStaticByteField(cls, "MATH_SYMBOL");
        MAX_CODE_POINT = env->getStaticIntField(cls, "MAX_CODE_POINT");
        MAX_HIGH_SURROGATE = env->getStaticCharField(cls, "MAX_HIGH_SURROGATE");
        MAX_LOW_SURROGATE = env->getStaticCharField(cls, "MAX_LOW_SURROGATE");
        MAX_RADIX = env->getStaticIntField(cls, "MAX_RADIX");
        MAX_SURROGATE = env->getStaticCharField(cls, "MAX_SURROGATE");
        MAX_VALUE = env->getStaticCharField(cls, "MAX_VALUE");
        MIN_CODE_POINT = env->getStaticIntField(cls, "MIN_CODE_POINT");
        MIN_HIGH_SURROGATE = env->getStaticCharField(cls, "MIN_HIGH_SURROGATE");
        MIN_LOW_SURROGATE = env->getStaticCharField(cls, "MIN_LOW_SURROGATE");
        MIN_RADIX = env->getStaticIntField(cls, "MIN_RADIX");
        MIN_SUPPLEMENTARY_CODE_POINT = env->getStaticIntField(cls, "MIN_SUPPLEMENTARY_CODE_POINT");
        MIN_SURROGATE = env->getStaticCharField(cls, "MIN_SURROGATE");
        MIN_VALUE = env->getStaticCharField(cls, "MIN_VALUE");
        MODIFIER_LETTER = env->getStaticByteField(cls, "MODIFIER_LETTER");
        MODIFIER_SYMBOL = env->getStaticByteField(cls, "MODIFIER_SYMBOL");
        NON_SPACING_MARK = env->getStaticByteField(cls, "NON_SPACING_MARK");
        OTHER_LETTER = env->getStaticByteField(cls, "OTHER_LETTER");
        OTHER_NUMBER = env->getStaticByteField(cls, "OTHER_NUMBER");
        OTHER_PUNCTUATION = env->getStaticByteField(cls, "OTHER_PUNCTUATION");
        OTHER_SYMBOL = env->getStaticByteField(cls, "OTHER_SYMBOL");
        PARAGRAPH_SEPARATOR = env->getStaticByteField(cls, "PARAGRAPH_SEPARATOR");
        PRIVATE_USE = env->getStaticByteField(cls, "PRIVATE_USE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        SPACE_SEPARATOR = env->getStaticByteField(cls, "SPACE_SEPARATOR");
        START_PUNCTUATION = env->getStaticByteField(cls, "START_PUNCTUATION");
        SURROGATE = env->getStaticByteField(cls, "SURROGATE");
        TITLECASE_LETTER = env->getStaticByteField(cls, "TITLECASE_LETTER");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        UNASSIGNED = env->getStaticByteField(cls, "UNASSIGNED");
        UPPERCASE_LETTER = env->getStaticByteField(cls, "UPPERCASE_LETTER");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Character::Character(jchar a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_636c0bbb96cab723, a0)) {}

    jint Character::charCount(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_charCount_2235cd056f5a882b], a0);
    }

    jchar Character::charValue() const
    {
      return env->callCharMethod(this$, mids$[mid_charValue_7818f5b58320cd1f]);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_59f9c2d0435954b6], a0.this$, a1);
    }

    jint Character::codePointAt(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_72df1bce0f4d6206], a0.this$, a1);
    }

    jint Character::codePointAt(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointAt_e1525dbb996fb0b1], a0.this$, a1, a2);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_59f9c2d0435954b6], a0.this$, a1);
    }

    jint Character::codePointBefore(const ::java::lang::CharSequence & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_72df1bce0f4d6206], a0.this$, a1);
    }

    jint Character::codePointBefore(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointBefore_e1525dbb996fb0b1], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_e1525dbb996fb0b1], a0.this$, a1, a2);
    }

    jint Character::codePointCount(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointCount_c028f0c47f9d8f31], a0.this$, a1, a2);
    }

    jint Character::codePointOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_codePointOf_02f02486e9727d8f], a0.this$);
    }

    jint Character::compare(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_dd48bf2aa6dfbaa3], a0, a1);
    }

    jint Character::compareTo(const Character & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_d3818e483000ff27], a0.this$);
    }

    jint Character::digit(jchar a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_508f62e89e997929], a0, a1);
    }

    jint Character::digit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_digit_819f91eddf220c5b], a0, a1);
    }

    jboolean Character::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jchar Character::forDigit(jint a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_forDigit_fc758e31b1fe694a], a0, a1);
    }

    jbyte Character::getDirectionality(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_731379c577217b6e], a0);
    }

    jbyte Character::getDirectionality(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_getDirectionality_aadb1e26b1fc3f0a], a0);
    }

    ::java::lang::String Character::getName(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getName_8cc8a10236476f23], a0));
    }

    jint Character::getNumericValue(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_d31f2b475a1ea885], a0);
    }

    jint Character::getNumericValue(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getNumericValue_2235cd056f5a882b], a0);
    }

    jint Character::getType(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_d31f2b475a1ea885], a0);
    }

    jint Character::getType(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_getType_2235cd056f5a882b], a0);
    }

    jint Character::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint Character::hashCode(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_d31f2b475a1ea885], a0);
    }

    jchar Character::highSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_highSurrogate_9d4c2604195fbadb], a0);
    }

    jboolean Character::isAlphabetic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isAlphabetic_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isBmpCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isBmpCodePoint_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isDefined(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_75aee5383fa9200e], a0);
    }

    jboolean Character::isDefined(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDefined_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_75aee5383fa9200e], a0);
    }

    jboolean Character::isDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isDigit_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isHighSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isHighSurrogate_75aee5383fa9200e], a0);
    }

    jboolean Character::isISOControl(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_75aee5383fa9200e], a0);
    }

    jboolean Character::isISOControl(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isISOControl_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isIdentifierIgnorable(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_75aee5383fa9200e], a0);
    }

    jboolean Character::isIdentifierIgnorable(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdentifierIgnorable_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isIdeographic(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isIdeographic_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isJavaIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_75aee5383fa9200e], a0);
    }

    jboolean Character::isJavaIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierPart_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isJavaIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_75aee5383fa9200e], a0);
    }

    jboolean Character::isJavaIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaIdentifierStart_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isJavaLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetter_75aee5383fa9200e], a0);
    }

    jboolean Character::isJavaLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isJavaLetterOrDigit_75aee5383fa9200e], a0);
    }

    jboolean Character::isLetter(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_75aee5383fa9200e], a0);
    }

    jboolean Character::isLetter(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetter_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isLetterOrDigit(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_75aee5383fa9200e], a0);
    }

    jboolean Character::isLetterOrDigit(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLetterOrDigit_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isLowSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowSurrogate_75aee5383fa9200e], a0);
    }

    jboolean Character::isLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_75aee5383fa9200e], a0);
    }

    jboolean Character::isLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isLowerCase_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isMirrored(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_75aee5383fa9200e], a0);
    }

    jboolean Character::isMirrored(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isMirrored_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isSpace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpace_75aee5383fa9200e], a0);
    }

    jboolean Character::isSpaceChar(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_75aee5383fa9200e], a0);
    }

    jboolean Character::isSpaceChar(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSpaceChar_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isSupplementaryCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSupplementaryCodePoint_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isSurrogate(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogate_75aee5383fa9200e], a0);
    }

    jboolean Character::isSurrogatePair(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isSurrogatePair_8fd095b4916b50a5], a0, a1);
    }

    jboolean Character::isTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_75aee5383fa9200e], a0);
    }

    jboolean Character::isTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isTitleCase_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_75aee5383fa9200e], a0);
    }

    jboolean Character::isUnicodeIdentifierPart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierPart_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_75aee5383fa9200e], a0);
    }

    jboolean Character::isUnicodeIdentifierStart(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUnicodeIdentifierStart_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_75aee5383fa9200e], a0);
    }

    jboolean Character::isUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isUpperCase_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isValidCodePoint(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isValidCodePoint_b6e9be1df30aebaf], a0);
    }

    jboolean Character::isWhitespace(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_75aee5383fa9200e], a0);
    }

    jboolean Character::isWhitespace(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isWhitespace_b6e9be1df30aebaf], a0);
    }

    jchar Character::lowSurrogate(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_lowSurrogate_9d4c2604195fbadb], a0);
    }

    jint Character::offsetByCodePoints(const ::java::lang::CharSequence & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_c028f0c47f9d8f31], a0.this$, a1, a2);
    }

    jint Character::offsetByCodePoints(const JArray< jchar > & a0, jint a1, jint a2, jint a3, jint a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_offsetByCodePoints_9f320347b8952a1f], a0.this$, a1, a2, a3, a4);
    }

    jchar Character::reverseBytes(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_reverseBytes_d815256387095baa], a0);
    }

    JArray< jchar > Character::toChars(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_toChars_4f5eb2f2ac6b9f67], a0));
    }

    jint Character::toChars(jint a0, const JArray< jchar > & a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toChars_c9f91c61afb7a615], a0, a1.this$, a2);
    }

    jint Character::toCodePoint(jchar a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toCodePoint_dd48bf2aa6dfbaa3], a0, a1);
    }

    jchar Character::toLowerCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toLowerCase_d815256387095baa], a0);
    }

    jint Character::toLowerCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toLowerCase_2235cd056f5a882b], a0);
    }

    ::java::lang::String Character::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    ::java::lang::String Character::toString(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_3371cef512ec7a0c], a0));
    }

    ::java::lang::String Character::toString(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_8cc8a10236476f23], a0));
    }

    jchar Character::toTitleCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toTitleCase_d815256387095baa], a0);
    }

    jint Character::toTitleCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toTitleCase_2235cd056f5a882b], a0);
    }

    jchar Character::toUpperCase(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticCharMethod(cls, mids$[mid_toUpperCase_d815256387095baa], a0);
    }

    jint Character::toUpperCase(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUpperCase_2235cd056f5a882b], a0);
    }

    Character Character::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Character(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7fb548ed576b085d], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_charValue(t_Character *self);
    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg);
    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_equals(t_Character *self, PyObject *args);
    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args);
    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toString(t_Character *self, PyObject *args);
    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args);
    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Character__methods_[] = {
      DECLARE_METHOD(t_Character, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, charValue, METH_NOARGS),
      DECLARE_METHOD(t_Character, codePointAt, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointBefore, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointCount, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, codePointOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, compareTo, METH_O),
      DECLARE_METHOD(t_Character, digit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, equals, METH_VARARGS),
      DECLARE_METHOD(t_Character, forDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getDirectionality, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getName, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, getNumericValue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, getType, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Character, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, highSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isAlphabetic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isBmpCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isDefined, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isHighSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isISOControl, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdentifierIgnorable, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isIdeographic, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetter, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isJavaLetterOrDigit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLetterOrDigit, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isMirrored, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpace, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSpaceChar, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isSupplementaryCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isSurrogatePair, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierPart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUnicodeIdentifierStart, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, isValidCodePoint, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, isWhitespace, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, lowSurrogate, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, offsetByCodePoints, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Character, toChars, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toCodePoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toLowerCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toString, METH_VARARGS),
      DECLARE_METHOD(t_Character, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toTitleCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, toUpperCase, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Character, valueOf, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Character)[] = {
      { Py_tp_methods, t_Character__methods_ },
      { Py_tp_init, (void *) t_Character_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Character)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Character, t_Character, Character);

    void t_Character::install(PyObject *module)
    {
      installType(&PY_TYPE(Character), &PY_TYPE_DEF(Character), module, "Character", 0);
    }

    void t_Character::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "class_", make_descriptor(Character::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "wrapfn_", make_descriptor(unboxCharacter));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "boxfn_", make_descriptor(boxCharacter));
      env->getClass(Character::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "BYTES", make_descriptor(Character::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "COMBINING_SPACING_MARK", make_descriptor(Character::COMBINING_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONNECTOR_PUNCTUATION", make_descriptor(Character::CONNECTOR_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CONTROL", make_descriptor(Character::CONTROL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "CURRENCY_SYMBOL", make_descriptor(Character::CURRENCY_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DASH_PUNCTUATION", make_descriptor(Character::DASH_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DECIMAL_DIGIT_NUMBER", make_descriptor(Character::DECIMAL_DIGIT_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_ARABIC_NUMBER", make_descriptor(Character::DIRECTIONALITY_ARABIC_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_BOUNDARY_NEUTRAL", make_descriptor(Character::DIRECTIONALITY_BOUNDARY_NEUTRAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", make_descriptor(Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_FIRST_STRONG_ISOLATE", make_descriptor(Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_NONSPACING_MARK", make_descriptor(Character::DIRECTIONALITY_NONSPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_OTHER_NEUTRALS", make_descriptor(Character::DIRECTIONALITY_OTHER_NEUTRALS));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_PARAGRAPH_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE", make_descriptor(Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", make_descriptor(Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_SEGMENT_SEPARATOR", make_descriptor(Character::DIRECTIONALITY_SEGMENT_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_UNDEFINED", make_descriptor(Character::DIRECTIONALITY_UNDEFINED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "DIRECTIONALITY_WHITESPACE", make_descriptor(Character::DIRECTIONALITY_WHITESPACE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "ENCLOSING_MARK", make_descriptor(Character::ENCLOSING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "END_PUNCTUATION", make_descriptor(Character::END_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FINAL_QUOTE_PUNCTUATION", make_descriptor(Character::FINAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "FORMAT", make_descriptor(Character::FORMAT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "INITIAL_QUOTE_PUNCTUATION", make_descriptor(Character::INITIAL_QUOTE_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LETTER_NUMBER", make_descriptor(Character::LETTER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LINE_SEPARATOR", make_descriptor(Character::LINE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "LOWERCASE_LETTER", make_descriptor(Character::LOWERCASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MATH_SYMBOL", make_descriptor(Character::MATH_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_CODE_POINT", make_descriptor(Character::MAX_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_HIGH_SURROGATE", make_descriptor(Character::MAX_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_LOW_SURROGATE", make_descriptor(Character::MAX_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_RADIX", make_descriptor(Character::MAX_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_SURROGATE", make_descriptor(Character::MAX_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MAX_VALUE", make_descriptor(Character::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_CODE_POINT", make_descriptor(Character::MIN_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_HIGH_SURROGATE", make_descriptor(Character::MIN_HIGH_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_LOW_SURROGATE", make_descriptor(Character::MIN_LOW_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_RADIX", make_descriptor(Character::MIN_RADIX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SUPPLEMENTARY_CODE_POINT", make_descriptor(Character::MIN_SUPPLEMENTARY_CODE_POINT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_SURROGATE", make_descriptor(Character::MIN_SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MIN_VALUE", make_descriptor(Character::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_LETTER", make_descriptor(Character::MODIFIER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "MODIFIER_SYMBOL", make_descriptor(Character::MODIFIER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "NON_SPACING_MARK", make_descriptor(Character::NON_SPACING_MARK));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_LETTER", make_descriptor(Character::OTHER_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_NUMBER", make_descriptor(Character::OTHER_NUMBER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_PUNCTUATION", make_descriptor(Character::OTHER_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "OTHER_SYMBOL", make_descriptor(Character::OTHER_SYMBOL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PARAGRAPH_SEPARATOR", make_descriptor(Character::PARAGRAPH_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "PRIVATE_USE", make_descriptor(Character::PRIVATE_USE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SIZE", make_descriptor(Character::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SPACE_SEPARATOR", make_descriptor(Character::SPACE_SEPARATOR));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "START_PUNCTUATION", make_descriptor(Character::START_PUNCTUATION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "SURROGATE", make_descriptor(Character::SURROGATE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TITLECASE_LETTER", make_descriptor(Character::TITLECASE_LETTER));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Character::TYPE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UNASSIGNED", make_descriptor(Character::UNASSIGNED));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Character), "UPPERCASE_LETTER", make_descriptor(Character::UPPERCASE_LETTER));
    }

    static PyObject *t_Character_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Character::initializeClass, 1)))
        return NULL;
      return t_Character::wrap_Object(Character(((t_Character *) arg)->object.this$));
    }
    static PyObject *t_Character_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Character::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Character_init_(t_Character *self, PyObject *args, PyObject *kwds)
    {
      jchar a0;
      Character object((jobject) NULL);

      if (!parseArgs(args, "C", &a0))
      {
        INT_CALL(object = Character(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Character_charCount(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::charCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "charCount", arg);
      return NULL;
    }

    static PyObject *t_Character_charValue(t_Character *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.charValue());
      return c2p(result);
    }

    static PyObject *t_Character_codePointAt(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1));
            return PyLong_FromLong((long) result);
          }
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
            OBJ_CALL(result = ::java::lang::Character::codePointAt(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointAt", args);
      return NULL;
    }

    static PyObject *t_Character_codePointBefore(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "OI", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1));
            return PyLong_FromLong((long) result);
          }
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
            OBJ_CALL(result = ::java::lang::Character::codePointBefore(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointBefore", args);
      return NULL;
    }

    static PyObject *t_Character_codePointCount(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::codePointCount(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_Character_codePointOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::codePointOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "codePointOf", arg);
      return NULL;
    }

    static PyObject *t_Character_compare(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Character_compareTo(t_Character *self, PyObject *arg)
    {
      Character a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Character), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Character_digit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Character::digit(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "digit", args);
      return NULL;
    }

    static PyObject *t_Character_equals(t_Character *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Character_forDigit(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jchar result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::forDigit(a0, a1));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "forDigit", args);
      return NULL;
    }

    static PyObject *t_Character_getDirectionality(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jbyte result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jbyte result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getDirectionality(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDirectionality", args);
      return NULL;
    }

    static PyObject *t_Character_getName(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::getName(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "getName", arg);
      return NULL;
    }

    static PyObject *t_Character_getNumericValue(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getNumericValue(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumericValue", args);
      return NULL;
    }

    static PyObject *t_Character_getType(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jint result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::getType(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "getType", args);
      return NULL;
    }

    static PyObject *t_Character_hashCode(t_Character *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Character_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jint result;

      if (!parseArgs(args, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Character_highSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::highSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "highSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isAlphabetic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isAlphabetic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isAlphabetic", arg);
      return NULL;
    }

    static PyObject *t_Character_isBmpCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isBmpCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isBmpCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isDefined(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDefined(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDefined", args);
      return NULL;
    }

    static PyObject *t_Character_isDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isHighSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isHighSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isHighSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isISOControl(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isISOControl(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isISOControl", args);
      return NULL;
    }

    static PyObject *t_Character_isIdentifierIgnorable(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isIdentifierIgnorable(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isIdentifierIgnorable", args);
      return NULL;
    }

    static PyObject *t_Character_isIdeographic(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isIdeographic(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isIdeographic", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isJavaIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isJavaIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetter(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetter(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetter", arg);
      return NULL;
    }

    static PyObject *t_Character_isJavaLetterOrDigit(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isJavaLetterOrDigit(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isJavaLetterOrDigit", arg);
      return NULL;
    }

    static PyObject *t_Character_isLetter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetter(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetter", args);
      return NULL;
    }

    static PyObject *t_Character_isLetterOrDigit(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLetterOrDigit(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLetterOrDigit", args);
      return NULL;
    }

    static PyObject *t_Character_isLowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isLowSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isLowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isLowerCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_isMirrored(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isMirrored(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isMirrored", args);
      return NULL;
    }

    static PyObject *t_Character_isSpace(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSpace(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSpace", arg);
      return NULL;
    }

    static PyObject *t_Character_isSpaceChar(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isSpaceChar(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isSpaceChar", args);
      return NULL;
    }

    static PyObject *t_Character_isSupplementaryCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSupplementaryCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSupplementaryCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jboolean result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogate(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_isSurrogatePair(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jboolean result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::isSurrogatePair(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isSurrogatePair", args);
      return NULL;
    }

    static PyObject *t_Character_isTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isTitleCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierPart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierPart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierPart", args);
      return NULL;
    }

    static PyObject *t_Character_isUnicodeIdentifierStart(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUnicodeIdentifierStart(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUnicodeIdentifierStart", args);
      return NULL;
    }

    static PyObject *t_Character_isUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isUpperCase(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_isValidCodePoint(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jboolean result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::isValidCodePoint(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isValidCodePoint", arg);
      return NULL;
    }

    static PyObject *t_Character_isWhitespace(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jboolean result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          jint a0;
          jboolean result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::isWhitespace(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError(type, "isWhitespace", args);
      return NULL;
    }

    static PyObject *t_Character_lowSurrogate(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::lowSurrogate(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "lowSurrogate", arg);
      return NULL;
    }

    static PyObject *t_Character_offsetByCodePoints(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint result;

          if (!parseArgs(args, "[CIIII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::lang::Character::offsetByCodePoints(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_Character_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      jchar result;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::reverseBytes(a0));
        return c2p(result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Character_toChars(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint result;

          if (!parseArgs(args, "I[CI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Character::toChars(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toChars", args);
      return NULL;
    }

    static PyObject *t_Character_toCodePoint(PyTypeObject *type, PyObject *args)
    {
      jchar a0;
      jchar a1;
      jint result;

      if (!parseArgs(args, "CC", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Character::toCodePoint(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toCodePoint", args);
      return NULL;
    }

    static PyObject *t_Character_toLowerCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toLowerCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_Character_toString(t_Character *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Character), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Character_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toString(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Character_toTitleCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toTitleCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toTitleCase", args);
      return NULL;
    }

    static PyObject *t_Character_toUpperCase(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          jchar result;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return c2p(result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::Character::toUpperCase(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_Character_valueOf(PyTypeObject *type, PyObject *arg)
    {
      jchar a0;
      Character result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = ::java::lang::Character::valueOf(a0));
        return t_Character::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "valueOf", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::EPOCH = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DDOT = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DDOT = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DDOT = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_ab30e674d5bdf428] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/StateVector;)Z");
                mids$[mid_valueOf_a5c77010a5841215] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");
                mids$[mid_values_dfa9e768bed2b9ea] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                EPOCH = new StateVectorKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_ab30e674d5bdf428], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a5c77010a5841215], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_dfa9e768bed2b9ea]));
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
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "EPOCH", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
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
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getIodSsr_570ce0828f81a2c1] = env->getMethodID(cls, "getIodSsr", "()I");
                mids$[mid_getSsrEpoch1s_dff5885c2c873297] = env->getMethodID(cls, "getSsrEpoch1s", "()D");
                mids$[mid_getSsrMultipleMessageIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getSsrMultipleMessageIndicator", "()I");
                mids$[mid_getSsrProviderId_570ce0828f81a2c1] = env->getMethodID(cls, "getSsrProviderId", "()I");
                mids$[mid_getSsrSolutionId_570ce0828f81a2c1] = env->getMethodID(cls, "getSsrSolutionId", "()I");
                mids$[mid_getSsrUpdateInterval_570ce0828f81a2c1] = env->getMethodID(cls, "getSsrUpdateInterval", "()I");
                mids$[mid_setIodSsr_99803b0791f320ff] = env->getMethodID(cls, "setIodSsr", "(I)V");
                mids$[mid_setSsrEpoch1s_17db3a65980d3441] = env->getMethodID(cls, "setSsrEpoch1s", "(D)V");
                mids$[mid_setSsrMultipleMessageIndicator_99803b0791f320ff] = env->getMethodID(cls, "setSsrMultipleMessageIndicator", "(I)V");
                mids$[mid_setSsrProviderId_99803b0791f320ff] = env->getMethodID(cls, "setSsrProviderId", "(I)V");
                mids$[mid_setSsrSolutionId_99803b0791f320ff] = env->getMethodID(cls, "setSsrSolutionId", "(I)V");
                mids$[mid_setSsrUpdateInterval_99803b0791f320ff] = env->getMethodID(cls, "setSsrUpdateInterval", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrHeader::SsrHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jint SsrHeader::getIodSsr() const
            {
              return env->callIntMethod(this$, mids$[mid_getIodSsr_570ce0828f81a2c1]);
            }

            jdouble SsrHeader::getSsrEpoch1s() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSsrEpoch1s_dff5885c2c873297]);
            }

            jint SsrHeader::getSsrMultipleMessageIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrMultipleMessageIndicator_570ce0828f81a2c1]);
            }

            jint SsrHeader::getSsrProviderId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrProviderId_570ce0828f81a2c1]);
            }

            jint SsrHeader::getSsrSolutionId() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrSolutionId_570ce0828f81a2c1]);
            }

            jint SsrHeader::getSsrUpdateInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getSsrUpdateInterval_570ce0828f81a2c1]);
            }

            void SsrHeader::setIodSsr(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIodSsr_99803b0791f320ff], a0);
            }

            void SsrHeader::setSsrEpoch1s(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrEpoch1s_17db3a65980d3441], a0);
            }

            void SsrHeader::setSsrMultipleMessageIndicator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrMultipleMessageIndicator_99803b0791f320ff], a0);
            }

            void SsrHeader::setSsrProviderId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrProviderId_99803b0791f320ff], a0);
            }

            void SsrHeader::setSsrSolutionId(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrSolutionId_99803b0791f320ff], a0);
            }

            void SsrHeader::setSsrUpdateInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSsrUpdateInterval_99803b0791f320ff], a0);
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
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GoalType::class$ = NULL;
          jmethodID *GoalType::mids$ = NULL;
          bool GoalType::live$ = false;
          GoalType *GoalType::MAXIMIZE = NULL;
          GoalType *GoalType::MINIMIZE = NULL;

          jclass GoalType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GoalType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_30ead9f687148074] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_values_a8b0f5c40a2beb91] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MAXIMIZE = new GoalType(env->getStaticObjectField(cls, "MAXIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              MINIMIZE = new GoalType(env->getStaticObjectField(cls, "MINIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GoalType GoalType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return GoalType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_30ead9f687148074], a0.this$));
          }

          JArray< GoalType > GoalType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< GoalType >(env->callStaticObjectMethod(cls, mids$[mid_values_a8b0f5c40a2beb91]));
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
          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args);
          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_GoalType_values(PyTypeObject *type);
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data);
          static PyGetSetDef t_GoalType__fields_[] = {
            DECLARE_GET_FIELD(t_GoalType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GoalType__methods_[] = {
            DECLARE_METHOD(t_GoalType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, of_, METH_VARARGS),
            DECLARE_METHOD(t_GoalType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GoalType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GoalType)[] = {
            { Py_tp_methods, t_GoalType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GoalType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GoalType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(GoalType, t_GoalType, GoalType);
          PyObject *t_GoalType::wrap_Object(const GoalType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GoalType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GoalType::install(PyObject *module)
          {
            installType(&PY_TYPE(GoalType), &PY_TYPE_DEF(GoalType), module, "GoalType", 0);
          }

          void t_GoalType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "class_", make_descriptor(GoalType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "wrapfn_", make_descriptor(t_GoalType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "boxfn_", make_descriptor(boxObject));
            env->getClass(GoalType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MAXIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MAXIMIZE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MINIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MINIMIZE)));
          }

          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GoalType::initializeClass, 1)))
              return NULL;
            return t_GoalType::wrap_Object(GoalType(((t_GoalType *) arg)->object.this$));
          }
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GoalType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            GoalType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::valueOf(a0));
              return t_GoalType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_GoalType_values(PyTypeObject *type)
          {
            JArray< GoalType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::values());
            return JArray<jobject>(result.this$).wrap(t_GoalType::wrap_jobject);
          }
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data)
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
#include "org/orekit/models/earth/EarthStandardAtmosphereRefraction.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthStandardAtmosphereRefraction::class$ = NULL;
        jmethodID *EarthStandardAtmosphereRefraction::mids$ = NULL;
        bool EarthStandardAtmosphereRefraction::live$ = false;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE = (jdouble) 0;

        jclass EarthStandardAtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthStandardAtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPressure_dff5885c2c873297] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getRefraction_dcbc7ce2902fa136] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTemperature_dff5885c2c873297] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_setPressure_17db3a65980d3441] = env->getMethodID(cls, "setPressure", "(D)V");
            mids$[mid_setTemperature_17db3a65980d3441] = env->getMethodID(cls, "setTemperature", "(D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CORRECTION_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_CORRECTION_FACTOR");
            DEFAULT_PRESSURE = env->getStaticDoubleField(cls, "DEFAULT_PRESSURE");
            DEFAULT_TEMPERATURE = env->getStaticDoubleField(cls, "DEFAULT_TEMPERATURE");
            STANDARD_ATM_PRESSURE = env->getStaticDoubleField(cls, "STANDARD_ATM_PRESSURE");
            STANDARD_ATM_TEMPERATURE = env->getStaticDoubleField(cls, "STANDARD_ATM_TEMPERATURE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble EarthStandardAtmosphereRefraction::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_dff5885c2c873297]);
        }

        jdouble EarthStandardAtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_dcbc7ce2902fa136], a0);
        }

        jdouble EarthStandardAtmosphereRefraction::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_dff5885c2c873297]);
        }

        void EarthStandardAtmosphereRefraction::setPressure(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressure_17db3a65980d3441], a0);
        }

        void EarthStandardAtmosphereRefraction::setTemperature(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTemperature_17db3a65980d3441], a0);
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
        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_EarthStandardAtmosphereRefraction__fields_[] = {
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, pressure),
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthStandardAtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setPressure, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setTemperature, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthStandardAtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthStandardAtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthStandardAtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthStandardAtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthStandardAtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthStandardAtmosphereRefraction, t_EarthStandardAtmosphereRefraction, EarthStandardAtmosphereRefraction);

        void t_EarthStandardAtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthStandardAtmosphereRefraction), &PY_TYPE_DEF(EarthStandardAtmosphereRefraction), module, "EarthStandardAtmosphereRefraction", 0);
        }

        void t_EarthStandardAtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "class_", make_descriptor(EarthStandardAtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthStandardAtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(EarthStandardAtmosphereRefraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_CORRECTION_FACTOR", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE));
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthStandardAtmosphereRefraction::wrap_Object(EarthStandardAtmosphereRefraction(((t_EarthStandardAtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              INT_CALL(object = EarthStandardAtmosphereRefraction());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = EarthStandardAtmosphereRefraction(a0, a1));
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

        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPressure(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressure", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTemperature(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTemperature", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPressure(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressure", arg);
          return -1;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTemperature(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "temperature", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SimplexSolver.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SimplexSolver::class$ = NULL;
        jmethodID *SimplexSolver::mids$ = NULL;
        bool SimplexSolver::live$ = false;

        jclass SimplexSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SimplexSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_98483f586918b5b8] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_doOptimize_4ae915e35f441d39] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_optimize_d70788483e9a9a2c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_doIteration_f720eabeace587f9] = env->getMethodID(cls, "doIteration", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");
            mids$[mid_solvePhase1_f720eabeace587f9] = env->getMethodID(cls, "solvePhase1", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimplexSolver::SimplexSolver() : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        SimplexSolver::SimplexSolver(jdouble a0) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1, jdouble a2) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_98483f586918b5b8, a0, a1, a2)) {}

        ::org::hipparchus::optim::PointValuePair SimplexSolver::doOptimize() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_doOptimize_4ae915e35f441d39]));
        }

        ::org::hipparchus::optim::PointValuePair SimplexSolver::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d70788483e9a9a2c], a0.this$));
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
      namespace linear {
        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args);
        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self);
        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args);
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data);
        static PyGetSetDef t_SimplexSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SimplexSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimplexSolver__methods_[] = {
          DECLARE_METHOD(t_SimplexSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimplexSolver, doOptimize, METH_NOARGS),
          DECLARE_METHOD(t_SimplexSolver, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimplexSolver)[] = {
          { Py_tp_methods, t_SimplexSolver__methods_ },
          { Py_tp_init, (void *) t_SimplexSolver_init_ },
          { Py_tp_getset, t_SimplexSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimplexSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::linear::LinearOptimizer),
          NULL
        };

        DEFINE_TYPE(SimplexSolver, t_SimplexSolver, SimplexSolver);
        PyObject *t_SimplexSolver::wrap_Object(const SimplexSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimplexSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimplexSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SimplexSolver), &PY_TYPE_DEF(SimplexSolver), module, "SimplexSolver", 0);
        }

        void t_SimplexSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "class_", make_descriptor(SimplexSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "wrapfn_", make_descriptor(t_SimplexSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimplexSolver::initializeClass, 1)))
            return NULL;
          return t_SimplexSolver::wrap_Object(SimplexSolver(((t_SimplexSolver *) arg)->object.this$));
        }
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimplexSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimplexSolver object((jobject) NULL);

              INT_CALL(object = SimplexSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
           case 1:
            {
              jdouble a0;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SimplexSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jint a1;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = SimplexSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = SimplexSolver(a0, a1, a2));
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

        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.doOptimize());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SimplexSolver), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivative::class$ = NULL;
        jmethodID *FieldDerivative::mids$ = NULL;
        bool FieldDerivative::live$ = false;

        jclass FieldDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_46366c1e17d1d442] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_eba8e72a22c984ac] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint FieldDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        jint FieldDerivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_46366c1e17d1d442], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_eba8e72a22c984ac]));
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
        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args);
        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg);
        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data);
        static PyGetSetDef t_FieldDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivative, order),
          DECLARE_GET_FIELD(t_FieldDerivative, value),
          DECLARE_GET_FIELD(t_FieldDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivative)[] = {
          { Py_tp_methods, t_FieldDerivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(FieldDerivative, t_FieldDerivative, FieldDerivative);
        PyObject *t_FieldDerivative::wrap_Object(const FieldDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivative), &PY_TYPE_DEF(FieldDerivative), module, "FieldDerivative", 0);
        }

        void t_FieldDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "class_", make_descriptor(FieldDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "wrapfn_", make_descriptor(t_FieldDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldDerivative::wrap_Object(FieldDerivative(((t_FieldDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldLongitudeCrossingDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldLongitudeCrossingDetector::class$ = NULL;
        jmethodID *FieldLongitudeCrossingDetector::mids$ = NULL;
        bool FieldLongitudeCrossingDetector::live$ = false;

        jclass FieldLongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldLongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5d0d2e5636982682] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_275c74b6b22ce273] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_000d48aad6c74b0a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_dff5885c2c873297] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_9b540ff770cf94fe] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5d0d2e5636982682, a0.this$, a1.this$, a2)) {}

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_275c74b6b22ce273, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLongitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_000d48aad6c74b0a]));
        }

        jdouble FieldLongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_dff5885c2c873297]);
        }

        void FieldLongitudeCrossingDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_FieldLongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldLongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldLongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_FieldLongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_FieldLongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_FieldLongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldLongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldLongitudeCrossingDetector, t_FieldLongitudeCrossingDetector, FieldLongitudeCrossingDetector);
        PyObject *t_FieldLongitudeCrossingDetector::wrap_Object(const FieldLongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldLongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldLongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldLongitudeCrossingDetector), &PY_TYPE_DEF(FieldLongitudeCrossingDetector), module, "FieldLongitudeCrossingDetector", 0);
        }

        void t_FieldLongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "class_", make_descriptor(FieldLongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "wrapfn_", make_descriptor(t_FieldLongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_FieldLongitudeCrossingDetector::wrap_Object(FieldLongitudeCrossingDetector(((t_FieldLongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              jdouble a2;
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GeometryFreeCombination::class$ = NULL;
          jmethodID *GeometryFreeCombination::mids$ = NULL;
          bool GeometryFreeCombination::live$ = false;

          jclass GeometryFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GeometryFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_e0f2baaf2a2ab093] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_6baf140b93832af8] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
        namespace gnss {
          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GeometryFreeCombination__methods_[] = {
            DECLARE_METHOD(t_GeometryFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometryFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometryFreeCombination)[] = {
            { Py_tp_methods, t_GeometryFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometryFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GeometryFreeCombination, t_GeometryFreeCombination, GeometryFreeCombination);

          void t_GeometryFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometryFreeCombination), &PY_TYPE_DEF(GeometryFreeCombination), module, "GeometryFreeCombination", 0);
          }

          void t_GeometryFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "class_", make_descriptor(GeometryFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "wrapfn_", make_descriptor(t_GeometryFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometryFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometryFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometryFreeCombination::initializeClass, 1)))
              return NULL;
            return t_GeometryFreeCombination::wrap_Object(GeometryFreeCombination(((t_GeometryFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_GeometryFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometryFreeCombination::initializeClass, 0))
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
#include "org/hipparchus/fitting/WeightedObservedPoints.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoints::class$ = NULL;
      jmethodID *WeightedObservedPoints::mids$ = NULL;
      bool WeightedObservedPoints::live$ = false;

      jclass WeightedObservedPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_00b9567804672335] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fitting/WeightedObservedPoint;)V");
          mids$[mid_add_8f2e782d5278b131] = env->getMethodID(cls, "add", "(DD)V");
          mids$[mid_add_2c56b6dd4d4b1dec] = env->getMethodID(cls, "add", "(DDD)V");
          mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_toList_2afa36052df4765d] = env->getMethodID(cls, "toList", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoints::WeightedObservedPoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void WeightedObservedPoints::add(const ::org::hipparchus::fitting::WeightedObservedPoint & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_00b9567804672335], a0.this$);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_add_8f2e782d5278b131], a0, a1);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_add_2c56b6dd4d4b1dec], a0, a1, a2);
      }

      void WeightedObservedPoints::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
      }

      ::java::util::List WeightedObservedPoints::toList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_toList_2afa36052df4765d]));
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
      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args);
      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self);
      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self);

      static PyMethodDef t_WeightedObservedPoints__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, add, METH_VARARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, clear, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, toList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoints)[] = {
        { Py_tp_methods, t_WeightedObservedPoints__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoints_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoints, t_WeightedObservedPoints, WeightedObservedPoints);

      void t_WeightedObservedPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoints), &PY_TYPE_DEF(WeightedObservedPoints), module, "WeightedObservedPoints", 0);
      }

      void t_WeightedObservedPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "class_", make_descriptor(WeightedObservedPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "wrapfn_", make_descriptor(t_WeightedObservedPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoints::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoints::wrap_Object(WeightedObservedPoints(((t_WeightedObservedPoints *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds)
      {
        WeightedObservedPoints object((jobject) NULL);

        INT_CALL(object = WeightedObservedPoints());
        self->object = object;

        return 0;
      }

      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::fitting::WeightedObservedPoint a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::fitting::WeightedObservedPoint::initializeClass, &a0))
            {
              OBJ_CALL(self->object.add(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(self->object.add(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.add(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.toList());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::fitting::PY_TYPE(WeightedObservedPoint));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/PythonAbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonAbstractBuilder::class$ = NULL;
          jmethodID *PythonAbstractBuilder::mids$ = NULL;
          bool PythonAbstractBuilder::live$ = false;

          jclass PythonAbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonAbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d1492e6ffa3d6576] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
              mids$[mid_create_56bdb47287753acf] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractBuilder::PythonAbstractBuilder(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a5) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_d1492e6ffa3d6576, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          void PythonAbstractBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args);
          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self);
          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5);
          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data);
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractBuilder, t_PythonAbstractBuilder, PythonAbstractBuilder);
          PyObject *t_PythonAbstractBuilder::wrap_Object(const PythonAbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractBuilder), &PY_TYPE_DEF(PythonAbstractBuilder), module, "PythonAbstractBuilder", 1);
          }

          void t_PythonAbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "class_", make_descriptor(PythonAbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "wrapfn_", make_descriptor(t_PythonAbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;", (void *) t_PythonAbstractBuilder_create0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractBuilder::wrap_Object(PythonAbstractBuilder(((t_PythonAbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a5((jobject) NULL);
            PythonAbstractBuilder object((jobject) NULL);

            if (!parseArgs(args, "KDDkkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PythonAbstractBuilder(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::ndm::AbstractBuilder value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
            PyObject *o3 = ::org::orekit::data::t_DataContext::wrap_Object(::org::orekit::data::DataContext(a3));
            PyObject *o4 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a4));
            PyObject *o5 = ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(a5));
            PyObject *result = PyObject_CallMethod(obj, "create", "OddOOO", o0, (double) a1, (double) a2, o3, o4, o5);
            Py_DECREF(o0);
            Py_DECREF(o3);
            Py_DECREF(o4);
            Py_DECREF(o5);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::AbstractBuilder::initializeClass, &value))
            {
              throwTypeError("create", result);
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

          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data)
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
              mids$[mid_getIncoming_f2380c628c611b07] = env->getMethodID(cls, "getIncoming", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");
              mids$[mid_getLocation_fe1c7ad511d8448b] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getOutgoing_f2380c628c611b07] = env->getMethodID(cls, "getOutgoing", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getIncoming() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getIncoming_f2380c628c611b07]));
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Vertex::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getLocation_fe1c7ad511d8448b]));
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getOutgoing() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getOutgoing_f2380c628c611b07]));
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
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldOfViewDetector::class$ = NULL;
        jmethodID *FieldOfViewDetector::mids$ = NULL;
        bool FieldOfViewDetector::live$ = false;

        jclass FieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_88e88207e394fac1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_init$_3b99f36d85bf753a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/propagation/events/VisibilityTrigger;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_8e0c5ec4b28dcc17] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getPVTarget_903aca6bb4523e29] = env->getMethodID(cls, "getPVTarget", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_7186cbf8e1bab58c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_88e88207e394fac1, a0.this$, a1.this$)) {}

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2, const ::org::orekit::geometry::fov::FieldOfView & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3b99f36d85bf753a, a0.this$, a1, a2.this$, a3.this$)) {}

        jdouble FieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView FieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_8e0c5ec4b28dcc17]));
        }

        ::org::orekit::utils::PVCoordinatesProvider FieldOfViewDetector::getPVTarget() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVTarget_903aca6bb4523e29]));
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
        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args);
        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args);
        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data);
        static PyGetSetDef t_FieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, pVTarget),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_FieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getPVTarget, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfViewDetector)[] = {
          { Py_tp_methods, t_FieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_FieldOfViewDetector_init_ },
          { Py_tp_getset, t_FieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldOfViewDetector, t_FieldOfViewDetector, FieldOfViewDetector);
        PyObject *t_FieldOfViewDetector::wrap_Object(const FieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfViewDetector), &PY_TYPE_DEF(FieldOfViewDetector), module, "FieldOfViewDetector", 0);
        }

        void t_FieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "class_", make_descriptor(FieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "wrapfn_", make_descriptor(t_FieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_FieldOfViewDetector::wrap_Object(FieldOfViewDetector(((t_FieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::geometry::fov::FieldOfView a3((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kDKk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_, &a3))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
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

        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/String.h"
#include "java/lang/StringBuilder.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/Iterable.h"
#include "java/util/Locale.h"
#include "java/util/stream/Stream.h"
#include "java/util/Comparator.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *String::class$ = NULL;
    jmethodID *String::mids$ = NULL;
    bool String::live$ = false;
    ::java::util::Comparator *String::CASE_INSENSITIVE_ORDER = NULL;

    jclass String::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/String");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_c736565a86f3e46c] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuffer;)V");
        mids$[mid_init$_fb2243bad23af5ae] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuilder;)V");
        mids$[mid_init$_20012b3010a39c05] = env->getMethodID(cls, "<init>", "([B)V");
        mids$[mid_init$_3534e8e092c162a5] = env->getMethodID(cls, "<init>", "([C)V");
        mids$[mid_init$_bf0e85c813575f9f] = env->getMethodID(cls, "<init>", "([BLjava/lang/String;)V");
        mids$[mid_init$_96122b01d902d997] = env->getMethodID(cls, "<init>", "([BI)V");
        mids$[mid_init$_d7af9aedcdd3845b] = env->getMethodID(cls, "<init>", "([BII)V");
        mids$[mid_init$_44aecef33af91018] = env->getMethodID(cls, "<init>", "([CII)V");
        mids$[mid_init$_503826ec0042272d] = env->getMethodID(cls, "<init>", "([III)V");
        mids$[mid_init$_bc959a9eb70e99ec] = env->getMethodID(cls, "<init>", "([BIILjava/lang/String;)V");
        mids$[mid_init$_a04357e2a7d2670c] = env->getMethodID(cls, "<init>", "([BIII)V");
        mids$[mid_charAt_9d4c2604195fbadb] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_2235cd056f5a882b] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_2235cd056f5a882b] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_819f91eddf220c5b] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_02f02486e9727d8f] = env->getMethodID(cls, "compareTo", "(Ljava/lang/String;)I");
        mids$[mid_compareToIgnoreCase_02f02486e9727d8f] = env->getMethodID(cls, "compareToIgnoreCase", "(Ljava/lang/String;)I");
        mids$[mid_concat_92807efd57acb082] = env->getMethodID(cls, "concat", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_contains_fbd87e4016dad4aa] = env->getMethodID(cls, "contains", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_contentEquals_6ce03af34b269366] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/StringBuffer;)Z");
        mids$[mid_contentEquals_fbd87e4016dad4aa] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_copyValueOf_1ecedce87d38e8f2] = env->getStaticMethodID(cls, "copyValueOf", "([C)Ljava/lang/String;");
        mids$[mid_copyValueOf_ee201a4067d63b32] = env->getStaticMethodID(cls, "copyValueOf", "([CII)Ljava/lang/String;");
        mids$[mid_endsWith_7edad2c2f64f4d68] = env->getMethodID(cls, "endsWith", "(Ljava/lang/String;)Z");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_equalsIgnoreCase_7edad2c2f64f4d68] = env->getMethodID(cls, "equalsIgnoreCase", "(Ljava/lang/String;)Z");
        mids$[mid_format_f5b4dd623dba97e9] = env->getStaticMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_9466e64decd6a405] = env->getStaticMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_getBytes_d1c0cd497c1897cd] = env->getMethodID(cls, "getBytes", "()[B");
        mids$[mid_getBytes_155563b72e02774f] = env->getMethodID(cls, "getBytes", "(Ljava/lang/String;)[B");
        mids$[mid_getBytes_70bc49679ed117f2] = env->getMethodID(cls, "getBytes", "(II[BI)V");
        mids$[mid_getChars_805ac8fcb83c07e9] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_02f02486e9727d8f] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_2235cd056f5a882b] = env->getMethodID(cls, "indexOf", "(I)I");
        mids$[mid_indexOf_01c41545a950bc7c] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_indexOf_819f91eddf220c5b] = env->getMethodID(cls, "indexOf", "(II)I");
        mids$[mid_intern_11b109bd155ca898] = env->getMethodID(cls, "intern", "()Ljava/lang/String;");
        mids$[mid_isBlank_b108b35ef48e27bd] = env->getMethodID(cls, "isBlank", "()Z");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_join_84b31266508c9c49] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_join_8644ab475918f376] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;");
        mids$[mid_lastIndexOf_02f02486e9727d8f] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_2235cd056f5a882b] = env->getMethodID(cls, "lastIndexOf", "(I)I");
        mids$[mid_lastIndexOf_01c41545a950bc7c] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_lastIndexOf_819f91eddf220c5b] = env->getMethodID(cls, "lastIndexOf", "(II)I");
        mids$[mid_length_570ce0828f81a2c1] = env->getMethodID(cls, "length", "()I");
        mids$[mid_lines_20f6d2b462aaef4b] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_matches_7edad2c2f64f4d68] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
        mids$[mid_offsetByCodePoints_819f91eddf220c5b] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_regionMatches_9f0940db23f45f2a] = env->getMethodID(cls, "regionMatches", "(ILjava/lang/String;II)Z");
        mids$[mid_regionMatches_79a54a9d8a991b7c] = env->getMethodID(cls, "regionMatches", "(ZILjava/lang/String;II)Z");
        mids$[mid_repeat_8cc8a10236476f23] = env->getMethodID(cls, "repeat", "(I)Ljava/lang/String;");
        mids$[mid_replace_a6d86b276213a2d5] = env->getMethodID(cls, "replace", "(CC)Ljava/lang/String;");
        mids$[mid_replace_446f566a5a1a40d2] = env->getMethodID(cls, "replace", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_replaceAll_d3f6016a3bf93dcd] = env->getMethodID(cls, "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_replaceFirst_d3f6016a3bf93dcd] = env->getMethodID(cls, "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_split_f96e27ad15cba282] = env->getMethodID(cls, "split", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_split_2e41084c19bacd70] = env->getMethodID(cls, "split", "(Ljava/lang/String;I)[Ljava/lang/String;");
        mids$[mid_startsWith_7edad2c2f64f4d68] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;)Z");
        mids$[mid_startsWith_0594bb83145ef6ac] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;I)Z");
        mids$[mid_strip_11b109bd155ca898] = env->getMethodID(cls, "strip", "()Ljava/lang/String;");
        mids$[mid_stripLeading_11b109bd155ca898] = env->getMethodID(cls, "stripLeading", "()Ljava/lang/String;");
        mids$[mid_stripTrailing_11b109bd155ca898] = env->getMethodID(cls, "stripTrailing", "()Ljava/lang/String;");
        mids$[mid_subSequence_be25fa7011a1ec8f] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_8cc8a10236476f23] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_5d51f1f447446760] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toCharArray_1c41284d788a6957] = env->getMethodID(cls, "toCharArray", "()[C");
        mids$[mid_toLowerCase_11b109bd155ca898] = env->getMethodID(cls, "toLowerCase", "()Ljava/lang/String;");
        mids$[mid_toLowerCase_3cd873bfb132c4fd] = env->getMethodID(cls, "toLowerCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_11b109bd155ca898] = env->getMethodID(cls, "toUpperCase", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_3cd873bfb132c4fd] = env->getMethodID(cls, "toUpperCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_trim_11b109bd155ca898] = env->getMethodID(cls, "trim", "()Ljava/lang/String;");
        mids$[mid_valueOf_1ecedce87d38e8f2] = env->getStaticMethodID(cls, "valueOf", "([C)Ljava/lang/String;");
        mids$[mid_valueOf_924df160f5ad43c5] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_3371cef512ec7a0c] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/String;");
        mids$[mid_valueOf_e8f51f84167aafbd] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_fd11166b57af1364] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_8cc8a10236476f23] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/String;");
        mids$[mid_valueOf_e816b890c4273bbd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_valueOf_b42814811762ffb5] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/String;");
        mids$[mid_valueOf_ee201a4067d63b32] = env->getStaticMethodID(cls, "valueOf", "([CII)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CASE_INSENSITIVE_ORDER = new ::java::util::Comparator(env->getStaticObjectField(cls, "CASE_INSENSITIVE_ORDER", "Ljava/util/Comparator;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    String::String() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    String::String(const ::java::lang::StringBuffer & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c736565a86f3e46c, a0.this$)) {}

    String::String(const ::java::lang::StringBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb2243bad23af5ae, a0.this$)) {}

    String::String(const JArray< jbyte > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_20012b3010a39c05, a0.this$)) {}

    String::String(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3534e8e092c162a5, a0.this$)) {}

    String::String(const JArray< jbyte > & a0, const String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf0e85c813575f9f, a0.this$, a1.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96122b01d902d997, a0.this$, a1)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d7af9aedcdd3845b, a0.this$, a1, a2)) {}

    String::String(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44aecef33af91018, a0.this$, a1, a2)) {}

    String::String(const JArray< jint > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_503826ec0042272d, a0.this$, a1, a2)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, const String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc959a9eb70e99ec, a0.this$, a1, a2, a3.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a04357e2a7d2670c, a0.this$, a1, a2, a3)) {}

    jchar String::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_9d4c2604195fbadb], a0);
    }

    jint String::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_2235cd056f5a882b], a0);
    }

    jint String::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_2235cd056f5a882b], a0);
    }

    jint String::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_819f91eddf220c5b], a0, a1);
    }

    jint String::compareTo(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_02f02486e9727d8f], a0.this$);
    }

    jint String::compareToIgnoreCase(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareToIgnoreCase_02f02486e9727d8f], a0.this$);
    }

    String String::concat(const String & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_concat_92807efd57acb082], a0.this$));
    }

    jboolean String::contains(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_fbd87e4016dad4aa], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::StringBuffer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_6ce03af34b269366], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_fbd87e4016dad4aa], a0.this$);
    }

    String String::copyValueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_1ecedce87d38e8f2], a0.this$));
    }

    String String::copyValueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_ee201a4067d63b32], a0.this$, a1, a2));
    }

    jboolean String::endsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_endsWith_7edad2c2f64f4d68], a0.this$);
    }

    jboolean String::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    jboolean String::equalsIgnoreCase(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equalsIgnoreCase_7edad2c2f64f4d68], a0.this$);
    }

    String String::format(const String & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_f5b4dd623dba97e9], a0.this$, a1.this$));
    }

    String String::format(const ::java::util::Locale & a0, const String & a1, const JArray< ::java::lang::Object > & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_9466e64decd6a405], a0.this$, a1.this$, a2.this$));
    }

    JArray< jbyte > String::getBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_d1c0cd497c1897cd]));
    }

    JArray< jbyte > String::getBytes(const String & a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_155563b72e02774f], a0.this$));
    }

    void String::getBytes(jint a0, jint a1, const JArray< jbyte > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getBytes_70bc49679ed117f2], a0, a1, a2.this$, a3);
    }

    void String::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_805ac8fcb83c07e9], a0, a1, a2.this$, a3);
    }

    jint String::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jint String::indexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_02f02486e9727d8f], a0.this$);
    }

    jint String::indexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_2235cd056f5a882b], a0);
    }

    jint String::indexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_01c41545a950bc7c], a0.this$, a1);
    }

    jint String::indexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_819f91eddf220c5b], a0, a1);
    }

    String String::intern() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_intern_11b109bd155ca898]));
    }

    jboolean String::isBlank() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isBlank_b108b35ef48e27bd]);
    }

    jboolean String::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    String String::join(const ::java::lang::CharSequence & a0, const JArray< ::java::lang::CharSequence > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_84b31266508c9c49], a0.this$, a1.this$));
    }

    String String::join(const ::java::lang::CharSequence & a0, const ::java::lang::Iterable & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_8644ab475918f376], a0.this$, a1.this$));
    }

    jint String::lastIndexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_02f02486e9727d8f], a0.this$);
    }

    jint String::lastIndexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_2235cd056f5a882b], a0);
    }

    jint String::lastIndexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_01c41545a950bc7c], a0.this$, a1);
    }

    jint String::lastIndexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_819f91eddf220c5b], a0, a1);
    }

    jint String::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_570ce0828f81a2c1]);
    }

    ::java::util::stream::Stream String::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_20f6d2b462aaef4b]));
    }

    jboolean String::matches(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_matches_7edad2c2f64f4d68], a0.this$);
    }

    jint String::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_819f91eddf220c5b], a0, a1);
    }

    jboolean String::regionMatches(jint a0, const String & a1, jint a2, jint a3) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_9f0940db23f45f2a], a0, a1.this$, a2, a3);
    }

    jboolean String::regionMatches(jboolean a0, jint a1, const String & a2, jint a3, jint a4) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_79a54a9d8a991b7c], a0, a1, a2.this$, a3, a4);
    }

    String String::repeat(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_repeat_8cc8a10236476f23], a0));
    }

    String String::replace(jchar a0, jchar a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_a6d86b276213a2d5], a0, a1));
    }

    String String::replace(const ::java::lang::CharSequence & a0, const ::java::lang::CharSequence & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_446f566a5a1a40d2], a0.this$, a1.this$));
    }

    String String::replaceAll(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceAll_d3f6016a3bf93dcd], a0.this$, a1.this$));
    }

    String String::replaceFirst(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceFirst_d3f6016a3bf93dcd], a0.this$, a1.this$));
    }

    JArray< String > String::split(const String & a0) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_f96e27ad15cba282], a0.this$));
    }

    JArray< String > String::split(const String & a0, jint a1) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_2e41084c19bacd70], a0.this$, a1));
    }

    jboolean String::startsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_7edad2c2f64f4d68], a0.this$);
    }

    jboolean String::startsWith(const String & a0, jint a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_0594bb83145ef6ac], a0.this$, a1);
    }

    String String::strip() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_strip_11b109bd155ca898]));
    }

    String String::stripLeading() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripLeading_11b109bd155ca898]));
    }

    String String::stripTrailing() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripTrailing_11b109bd155ca898]));
    }

    ::java::lang::CharSequence String::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_be25fa7011a1ec8f], a0, a1));
    }

    String String::substring(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_8cc8a10236476f23], a0));
    }

    String String::substring(jint a0, jint a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_5d51f1f447446760], a0, a1));
    }

    JArray< jchar > String::toCharArray() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_toCharArray_1c41284d788a6957]));
    }

    String String::toLowerCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_11b109bd155ca898]));
    }

    String String::toLowerCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_3cd873bfb132c4fd], a0.this$));
    }

    String String::toString() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }

    String String::toUpperCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_11b109bd155ca898]));
    }

    String String::toUpperCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_3cd873bfb132c4fd], a0.this$));
    }

    String String::trim() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_trim_11b109bd155ca898]));
    }

    String String::valueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1ecedce87d38e8f2], a0.this$));
    }

    String String::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_924df160f5ad43c5], a0));
    }

    String String::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3371cef512ec7a0c], a0));
    }

    String String::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e8f51f84167aafbd], a0));
    }

    String String::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fd11166b57af1364], a0));
    }

    String String::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8cc8a10236476f23], a0));
    }

    String String::valueOf(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e816b890c4273bbd], a0.this$));
    }

    String String::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b42814811762ffb5], a0));
    }

    String String::valueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ee201a4067d63b32], a0.this$, a1, a2));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg);
    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds);
    static PyObject *t_String_charAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointCount(t_String *self, PyObject *args);
    static PyObject *t_String_compareTo(t_String *self, PyObject *arg);
    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_concat(t_String *self, PyObject *arg);
    static PyObject *t_String_contains(t_String *self, PyObject *arg);
    static PyObject *t_String_contentEquals(t_String *self, PyObject *args);
    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_endsWith(t_String *self, PyObject *arg);
    static PyObject *t_String_equals(t_String *self, PyObject *args);
    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_format(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_getBytes(t_String *self, PyObject *args);
    static PyObject *t_String_getChars(t_String *self, PyObject *args);
    static PyObject *t_String_hashCode(t_String *self, PyObject *args);
    static PyObject *t_String_indexOf(t_String *self, PyObject *args);
    static PyObject *t_String_intern(t_String *self);
    static PyObject *t_String_isBlank(t_String *self);
    static PyObject *t_String_isEmpty(t_String *self);
    static PyObject *t_String_join(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args);
    static PyObject *t_String_length(t_String *self);
    static PyObject *t_String_lines(t_String *self);
    static PyObject *t_String_matches(t_String *self, PyObject *arg);
    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args);
    static PyObject *t_String_regionMatches(t_String *self, PyObject *args);
    static PyObject *t_String_repeat(t_String *self, PyObject *arg);
    static PyObject *t_String_replace(t_String *self, PyObject *args);
    static PyObject *t_String_replaceAll(t_String *self, PyObject *args);
    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args);
    static PyObject *t_String_split(t_String *self, PyObject *args);
    static PyObject *t_String_startsWith(t_String *self, PyObject *args);
    static PyObject *t_String_strip(t_String *self);
    static PyObject *t_String_stripLeading(t_String *self);
    static PyObject *t_String_stripTrailing(t_String *self);
    static PyObject *t_String_subSequence(t_String *self, PyObject *args);
    static PyObject *t_String_substring(t_String *self, PyObject *args);
    static PyObject *t_String_toCharArray(t_String *self);
    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args);
    static PyObject *t_String_toString(t_String *self, PyObject *args);
    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args);
    static PyObject *t_String_trim(t_String *self);
    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_get__blank(t_String *self, void *data);
    static PyObject *t_String_get__bytes(t_String *self, void *data);
    static PyObject *t_String_get__empty(t_String *self, void *data);
    static PyGetSetDef t_String__fields_[] = {
      DECLARE_GET_FIELD(t_String, blank),
      DECLARE_GET_FIELD(t_String, bytes),
      DECLARE_GET_FIELD(t_String, empty),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_String__methods_[] = {
      DECLARE_METHOD(t_String, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, charAt, METH_O),
      DECLARE_METHOD(t_String, codePointAt, METH_O),
      DECLARE_METHOD(t_String, codePointBefore, METH_O),
      DECLARE_METHOD(t_String, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_String, compareTo, METH_O),
      DECLARE_METHOD(t_String, compareToIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, concat, METH_O),
      DECLARE_METHOD(t_String, contains, METH_O),
      DECLARE_METHOD(t_String, contentEquals, METH_VARARGS),
      DECLARE_METHOD(t_String, copyValueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, endsWith, METH_O),
      DECLARE_METHOD(t_String, equals, METH_VARARGS),
      DECLARE_METHOD(t_String, equalsIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, format, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, getBytes, METH_VARARGS),
      DECLARE_METHOD(t_String, getChars, METH_VARARGS),
      DECLARE_METHOD(t_String, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_String, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, intern, METH_NOARGS),
      DECLARE_METHOD(t_String, isBlank, METH_NOARGS),
      DECLARE_METHOD(t_String, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_String, join, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, length, METH_NOARGS),
      DECLARE_METHOD(t_String, lines, METH_NOARGS),
      DECLARE_METHOD(t_String, matches, METH_O),
      DECLARE_METHOD(t_String, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_String, regionMatches, METH_VARARGS),
      DECLARE_METHOD(t_String, repeat, METH_O),
      DECLARE_METHOD(t_String, replace, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceAll, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceFirst, METH_VARARGS),
      DECLARE_METHOD(t_String, split, METH_VARARGS),
      DECLARE_METHOD(t_String, startsWith, METH_VARARGS),
      DECLARE_METHOD(t_String, strip, METH_NOARGS),
      DECLARE_METHOD(t_String, stripLeading, METH_NOARGS),
      DECLARE_METHOD(t_String, stripTrailing, METH_NOARGS),
      DECLARE_METHOD(t_String, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_String, substring, METH_VARARGS),
      DECLARE_METHOD(t_String, toCharArray, METH_NOARGS),
      DECLARE_METHOD(t_String, toLowerCase, METH_VARARGS),
      DECLARE_METHOD(t_String, toString, METH_VARARGS),
      DECLARE_METHOD(t_String, toUpperCase, METH_VARARGS),
      DECLARE_METHOD(t_String, trim, METH_NOARGS),
      DECLARE_METHOD(t_String, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(String)[] = {
      { Py_tp_methods, t_String__methods_ },
      { Py_tp_init, (void *) t_String_init_ },
      { Py_tp_getset, t_String__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(String)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(String, t_String, String);

    void t_String::install(PyObject *module)
    {
      installType(&PY_TYPE(String), &PY_TYPE_DEF(String), module, "String", 0);
    }

    void t_String::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "class_", make_descriptor(String::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "wrapfn_", make_descriptor(unboxString));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "boxfn_", make_descriptor(boxString));
      env->getClass(String::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "CASE_INSENSITIVE_ORDER", make_descriptor(::java::util::t_Comparator::wrap_Object(*String::CASE_INSENSITIVE_ORDER)));
    }

    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, String::initializeClass, 1)))
        return NULL;
      return t_String::wrap_Object(String(((t_String *) arg)->object.this$));
    }
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, String::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String object((jobject) NULL);

          INT_CALL(object = String());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::StringBuilder a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuilder::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          String a1((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[Bs", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String a3((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIII", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
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

    static PyObject *t_String_charAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "charAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointBefore", arg);
      return NULL;
    }

    static PyObject *t_String_codePointCount(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_String_compareTo(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareToIgnoreCase(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareToIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_concat(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.concat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "concat", arg);
      return NULL;
    }

    static PyObject *t_String_contains(t_String *self, PyObject *arg)
    {
      ::java::lang::CharSequence a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_String_contentEquals(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "contentEquals", args);
      return NULL;
    }

    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "copyValueOf", args);
      return NULL;
    }

    static PyObject *t_String_endsWith(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.endsWith(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "endsWith", arg);
      return NULL;
    }

    static PyObject *t_String_equals(t_String *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.equalsIgnoreCase(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equalsIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_format(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "format", args);
      return NULL;
    }

    static PyObject *t_String_getBytes(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jbyte > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBytes());
          return result.wrap();
        }
        break;
       case 1:
        {
          String a0((jobject) NULL);
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          jint a0;
          jint a1;
          JArray< jbyte > a2((jobject) NULL);
          jint a3;

          if (!parseArgs(args, "II[BI", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.getBytes(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getBytes", args);
      return NULL;
    }

    static PyObject *t_String_getChars(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "getChars", args);
      return NULL;
    }

    static PyObject *t_String_hashCode(t_String *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_String_indexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", args);
      return NULL;
    }

    static PyObject *t_String_intern(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.intern());
      return j2p(result);
    }

    static PyObject *t_String_isBlank(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isBlank());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_isEmpty(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_join(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          JArray< ::java::lang::CharSequence > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "O[O", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::Iterable a1((jobject) NULL);
          PyTypeObject **p1;
          String result((jobject) NULL);

          if (!parseArgs(args, "OK", ::java::lang::PY_TYPE(CharSequence), ::java::lang::Iterable::initializeClass, &a0, &a1, &p1, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "join", args);
      return NULL;
    }

    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", args);
      return NULL;
    }

    static PyObject *t_String_length(t_String *self)
    {
      jint result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_String_lines(t_String *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_String_matches(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.matches(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "matches", arg);
      return NULL;
    }

    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_String_regionMatches(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          jint a0;
          String a1((jobject) NULL);
          jint a2;
          jint a3;
          jboolean result;

          if (!parseArgs(args, "IsII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 5:
        {
          jboolean a0;
          jint a1;
          String a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean result;

          if (!parseArgs(args, "ZIsII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3, a4));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "regionMatches", args);
      return NULL;
    }

    static PyObject *t_String_repeat(t_String *self, PyObject *arg)
    {
      jint a0;
      String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.repeat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "repeat", arg);
      return NULL;
    }

    static PyObject *t_String_replace(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jchar a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "CC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::CharSequence a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "OO", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_String_replaceAll(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceAll(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceFirst(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceFirst", args);
      return NULL;
    }

    static PyObject *t_String_split(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.split(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.split(a0, a1));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "split", args);
      return NULL;
    }

    static PyObject *t_String_startsWith(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.startsWith(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jboolean result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.startsWith(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "startsWith", args);
      return NULL;
    }

    static PyObject *t_String_strip(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.strip());
      return j2p(result);
    }

    static PyObject *t_String_stripLeading(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripLeading());
      return j2p(result);
    }

    static PyObject *t_String_stripTrailing(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripTrailing());
      return j2p(result);
    }

    static PyObject *t_String_subSequence(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subSequence", args);
      return NULL;
    }

    static PyObject *t_String_substring(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "substring", args);
      return NULL;
    }

    static PyObject *t_String_toCharArray(t_String *self)
    {
      JArray< jchar > result((jobject) NULL);
      OBJ_CALL(result = self->object.toCharArray());
      return result.wrap();
    }

    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toLowerCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toLowerCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_String_toString(t_String *self, PyObject *args)
    {
      String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toUpperCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toUpperCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_String_trim(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.trim());
      return j2p(result);
    }

    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jboolean a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jchar a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jdouble a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jfloat a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_String_get__blank(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isBlank());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_String_get__bytes(t_String *self, void *data)
    {
      JArray< jbyte > value((jobject) NULL);
      OBJ_CALL(value = self->object.getBytes());
      return value.wrap();
    }

    static PyObject *t_String_get__empty(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_27e8a13692420753] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_671c616b00968fb2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_efe7600dfa7391ad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_35ddb209b3ddae90] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_50fda38caa7cada8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_71d13b0508f8d325] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_723bc419bc453bc3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_cde93a4d3deef6f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_9699e1e4e93262a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_654e1af68d0dc653] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_d88346aabaf42630] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_ee94ff43d4b7d233] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_11f9b44e1ad8f777] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_c9d4e35f6d86458b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_a7554bf778bede47] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_2a41742e55413acf] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_331faca126df5b56] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_getM2_456d9a2f64d6b28d] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getM2_e912d21057defe63] = env->getMethodID(cls, "getM2", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_e754bc7a54a8a8cc] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_7e8354b496e2a6c1] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_24c065641ce262aa] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_7bc0fd76ee915b72] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_b2aaf6a3ad1afcea] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_c76342d42407aa3d] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_27e8a13692420753, a0.this$, a1.this$, a2)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_671c616b00968fb2, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_efe7600dfa7391ad, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_35ddb209b3ddae90, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_50fda38caa7cada8, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_71d13b0508f8d325, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_723bc419bc453bc3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_cde93a4d3deef6f7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9699e1e4e93262a7, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_654e1af68d0dc653, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d88346aabaf42630, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ee94ff43d4b7d233, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_11f9b44e1ad8f777, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c9d4e35f6d86458b, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_a7554bf778bede47], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_2a41742e55413acf], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_331faca126df5b56], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        jdouble FieldBrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_456d9a2f64d6b28d]);
        }

        jdouble FieldBrouwerLyddanePropagator::getM2(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_e912d21057defe63], a0.this$);
        }

        ::java::util::List FieldBrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_e754bc7a54a8a8cc], a0.this$, a1.this$));
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_7e8354b496e2a6c1], a0.this$, a1.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_24c065641ce262aa], a0.this$, a1.this$, a2, a3);
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
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractMessageWriter::class$ = NULL;
            jmethodID *PythonAbstractMessageWriter::mids$ = NULL;
            bool PythonAbstractMessageWriter::live$ = false;

            jclass PythonAbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_478a9a59660d41ab] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractMessageWriter::PythonAbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_478a9a59660d41ab, a0.this$, a1.this$, a2, a3.this$)) {}

            void PythonAbstractMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonAbstractMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonAbstractMessageWriter::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args);
            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self);
            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args);
            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data);
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageWriter)[] = {
              { Py_tp_methods, t_PythonAbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractMessageWriter_init_ },
              { Py_tp_getset, t_PythonAbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageWriter, t_PythonAbstractMessageWriter, PythonAbstractMessageWriter);
            PyObject *t_PythonAbstractMessageWriter::wrap_Object(const PythonAbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageWriter), &PY_TYPE_DEF(PythonAbstractMessageWriter), module, "PythonAbstractMessageWriter", 1);
            }

            void t_PythonAbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "class_", make_descriptor(PythonAbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "wrapfn_", make_descriptor(t_PythonAbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageWriter_pythonDecRef0 },
                { "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonAbstractMessageWriter_writeSegmentContent1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageWriter::wrap_Object(PythonAbstractMessageWriter(((t_PythonAbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              PythonAbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractMessageWriter(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o2 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a2));
              PyObject *result = PyObject_CallMethod(obj, "writeSegmentContent", "OdO", o0, (double) a1, o2);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data)
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
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/DiskGenerator.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *DiskGenerator::class$ = NULL;
          jmethodID *DiskGenerator::mids$ = NULL;
          bool DiskGenerator::live$ = false;

          jclass DiskGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/DiskGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_5189031e8a0790ca] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DiskGenerator::DiskGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall DiskGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_5189031e8a0790ca], a0.this$));
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
          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg);

          static PyMethodDef t_DiskGenerator__methods_[] = {
            DECLARE_METHOD(t_DiskGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiskGenerator)[] = {
            { Py_tp_methods, t_DiskGenerator__methods_ },
            { Py_tp_init, (void *) t_DiskGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiskGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DiskGenerator, t_DiskGenerator, DiskGenerator);

          void t_DiskGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(DiskGenerator), &PY_TYPE_DEF(DiskGenerator), module, "DiskGenerator", 0);
          }

          void t_DiskGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "class_", make_descriptor(DiskGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "wrapfn_", make_descriptor(t_DiskGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiskGenerator::initializeClass, 1)))
              return NULL;
            return t_DiskGenerator::wrap_Object(DiskGenerator(((t_DiskGenerator *) arg)->object.this$));
          }
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiskGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds)
          {
            DiskGenerator object((jobject) NULL);

            INT_CALL(object = DiskGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepInterpolator::class$ = NULL;
        jmethodID *OrekitStepInterpolator::mids$ = NULL;
        bool OrekitStepInterpolator::live$ = false;

        jclass OrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getInterpolatedState_889031abe87f3b14] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPreviousState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_da619a9456840a3b] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/sampling/OrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_dd3e4a8d51055f1f]));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_889031abe87f3b14], a0.this$));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates OrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::SpacecraftState OrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_dd3e4a8d51055f1f]));
        }

        jboolean OrekitStepInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db]);
        }

        jboolean OrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        jboolean OrekitStepInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db]);
        }

        OrekitStepInterpolator OrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return OrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_da619a9456840a3b], a0.this$, a1.this$));
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
        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self);
        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data);
        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_OrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_OrekitStepInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_OrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_OrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepInterpolator)[] = {
          { Py_tp_methods, t_OrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(OrekitStepInterpolator, t_OrekitStepInterpolator, OrekitStepInterpolator);

        void t_OrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepInterpolator), &PY_TYPE_DEF(OrekitStepInterpolator), module, "OrekitStepInterpolator", 0);
        }

        void t_OrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "class_", make_descriptor(OrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "wrapfn_", make_descriptor(t_OrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_OrekitStepInterpolator::wrap_Object(OrekitStepInterpolator(((t_OrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepInterpolator_getCurrentState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_getInterpolatedState(t_OrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_getPVCoordinates(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(OrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_OrekitStepInterpolator_getPreviousState(t_OrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_OrekitStepInterpolator_isCurrentStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isForward(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_isPreviousStateInterpolated(t_OrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OrekitStepInterpolator_restrictStep(t_OrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          OrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_OrekitStepInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_OrekitStepInterpolator_get__currentState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__currentStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__forward(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousState(t_OrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_OrekitStepInterpolator_get__previousStateInterpolated(t_OrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$UnitListConsumer::class$ = NULL;
            jmethodID *ParseToken$UnitListConsumer::mids$ = NULL;
            bool ParseToken$UnitListConsumer::live$ = false;

            jclass ParseToken$UnitListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_65de9727799c5641] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$UnitListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_65de9727799c5641], a0.this$);
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
            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$UnitListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$UnitListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$UnitListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$UnitListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$UnitListConsumer, t_ParseToken$UnitListConsumer, ParseToken$UnitListConsumer);

            void t_ParseToken$UnitListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$UnitListConsumer), &PY_TYPE_DEF(ParseToken$UnitListConsumer), module, "ParseToken$UnitListConsumer", 0);
            }

            void t_ParseToken$UnitListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "class_", make_descriptor(ParseToken$UnitListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "wrapfn_", make_descriptor(t_ParseToken$UnitListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$UnitListConsumer::wrap_Object(ParseToken$UnitListConsumer(((t_ParseToken$UnitListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TDOA::class$ = NULL;
        jmethodID *TDOA::mids$ = NULL;
        bool TDOA::live$ = false;
        ::java::lang::String *TDOA::MEASUREMENT_TYPE = NULL;

        jclass TDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_09e77fb07b836cc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDOA::TDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_09e77fb07b836cc0, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_4a0fede0c03d79b0]));
        }

        ::org::orekit::estimation::measurements::GroundStation TDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_4a0fede0c03d79b0]));
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
        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args);
        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self);
        static PyObject *t_TDOA_getSecondStation(t_TDOA *self);
        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data);
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data);
        static PyGetSetDef t_TDOA__fields_[] = {
          DECLARE_GET_FIELD(t_TDOA, primeStation),
          DECLARE_GET_FIELD(t_TDOA, secondStation),
          DECLARE_GET_FIELD(t_TDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDOA__methods_[] = {
          DECLARE_METHOD(t_TDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_TDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_TDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDOA)[] = {
          { Py_tp_methods, t_TDOA__methods_ },
          { Py_tp_init, (void *) t_TDOA_init_ },
          { Py_tp_getset, t_TDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TDOA, t_TDOA, TDOA);
        PyObject *t_TDOA::wrap_Object(const TDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TDOA *self = (t_TDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(TDOA), &PY_TYPE_DEF(TDOA), module, "TDOA", 0);
        }

        void t_TDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "class_", make_descriptor(TDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "wrapfn_", make_descriptor(t_TDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(TDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*TDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDOA::initializeClass, 1)))
            return NULL;
          return t_TDOA::wrap_Object(TDOA(((t_TDOA *) arg)->object.this$));
        }
        static PyObject *t_TDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TDOA_of_(t_TDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TDOA_init_(t_TDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TDOA object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TDOA(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_TDOA_getPrimeStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TDOA_getSecondStation(t_TDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TDOA_get__parameters_(t_TDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TDOA_get__primeStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TDOA_get__secondStation(t_TDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianAnomalyUtility.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianAnomalyUtility::class$ = NULL;
      jmethodID *KeplerianAnomalyUtility::mids$ = NULL;
      bool KeplerianAnomalyUtility::live$ = false;

      jclass KeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_824133ce4aec3505] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(DD)D");
          mids$[mid_ellipticEccentricToTrue_824133ce4aec3505] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(DD)D");
          mids$[mid_ellipticMeanToEccentric_824133ce4aec3505] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(DD)D");
          mids$[mid_ellipticMeanToTrue_824133ce4aec3505] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(DD)D");
          mids$[mid_ellipticTrueToEccentric_824133ce4aec3505] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(DD)D");
          mids$[mid_ellipticTrueToMean_824133ce4aec3505] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToMean_824133ce4aec3505] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(DD)D");
          mids$[mid_hyperbolicEccentricToTrue_824133ce4aec3505] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(DD)D");
          mids$[mid_hyperbolicMeanToEccentric_824133ce4aec3505] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(DD)D");
          mids$[mid_hyperbolicMeanToTrue_824133ce4aec3505] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(DD)D");
          mids$[mid_hyperbolicTrueToEccentric_824133ce4aec3505] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(DD)D");
          mids$[mid_hyperbolicTrueToMean_824133ce4aec3505] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToMean_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticEccentricToTrue_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToEccentric_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticMeanToTrue_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToEccentric_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::ellipticTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ellipticTrueToMean_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToMean_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicEccentricToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicEccentricToTrue_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToEccentric_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicMeanToTrue(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicMeanToTrue_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToEccentric(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToEccentric_824133ce4aec3505], a0, a1);
      }

      jdouble KeplerianAnomalyUtility::hyperbolicTrueToMean(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hyperbolicTrueToMean_824133ce4aec3505], a0, a1);
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
      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_KeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_KeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_KeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_KeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(KeplerianAnomalyUtility, t_KeplerianAnomalyUtility, KeplerianAnomalyUtility);

      void t_KeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianAnomalyUtility), &PY_TYPE_DEF(KeplerianAnomalyUtility), module, "KeplerianAnomalyUtility", 0);
      }

      void t_KeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "class_", make_descriptor(KeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_KeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_KeplerianAnomalyUtility::wrap_Object(KeplerianAnomalyUtility(((t_KeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_KeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_KeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::orbits::KeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/ISAACRandom.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ISAACRandom::class$ = NULL;
      jmethodID *ISAACRandom::mids$ = NULL;
      bool ISAACRandom::live$ = false;

      jclass ISAACRandom::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ISAACRandom");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ISAACRandom::ISAACRandom() : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ISAACRandom::ISAACRandom(const JArray< jint > & a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      ISAACRandom::ISAACRandom(jlong a0) : ::org::hipparchus::random::IntRandomGenerator(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint ISAACRandom::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      void ISAACRandom::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
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
      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args);
      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args);
      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data);
      static PyGetSetDef t_ISAACRandom__fields_[] = {
        DECLARE_SET_FIELD(t_ISAACRandom, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ISAACRandom__methods_[] = {
        DECLARE_METHOD(t_ISAACRandom, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ISAACRandom, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ISAACRandom, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ISAACRandom)[] = {
        { Py_tp_methods, t_ISAACRandom__methods_ },
        { Py_tp_init, (void *) t_ISAACRandom_init_ },
        { Py_tp_getset, t_ISAACRandom__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ISAACRandom)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(ISAACRandom, t_ISAACRandom, ISAACRandom);

      void t_ISAACRandom::install(PyObject *module)
      {
        installType(&PY_TYPE(ISAACRandom), &PY_TYPE_DEF(ISAACRandom), module, "ISAACRandom", 0);
      }

      void t_ISAACRandom::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "class_", make_descriptor(ISAACRandom::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "wrapfn_", make_descriptor(t_ISAACRandom::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ISAACRandom), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ISAACRandom_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ISAACRandom::initializeClass, 1)))
          return NULL;
        return t_ISAACRandom::wrap_Object(ISAACRandom(((t_ISAACRandom *) arg)->object.this$));
      }
      static PyObject *t_ISAACRandom_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ISAACRandom::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ISAACRandom_init_(t_ISAACRandom *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ISAACRandom object((jobject) NULL);

            INT_CALL(object = ISAACRandom());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            ISAACRandom object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = ISAACRandom(a0));
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

      static PyObject *t_ISAACRandom_nextInt(t_ISAACRandom *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_ISAACRandom_setSeed(t_ISAACRandom *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ISAACRandom), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_ISAACRandom_set__seed(t_ISAACRandom *self, PyObject *arg, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1058::class$ = NULL;
              jmethodID *Rtcm1058::mids$ = NULL;
              bool Rtcm1058::live$ = false;

              jclass Rtcm1058::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3e6a4f6a0e2f98dc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1058::Rtcm1058(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_3e6a4f6a0e2f98dc, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args);
              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data);
              static PyGetSetDef t_Rtcm1058__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1058, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1058__methods_[] = {
                DECLARE_METHOD(t_Rtcm1058, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1058)[] = {
                { Py_tp_methods, t_Rtcm1058__methods_ },
                { Py_tp_init, (void *) t_Rtcm1058_init_ },
                { Py_tp_getset, t_Rtcm1058__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1058)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1058, t_Rtcm1058, Rtcm1058);
              PyObject *t_Rtcm1058::wrap_Object(const Rtcm1058& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1058::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1058::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1058), &PY_TYPE_DEF(Rtcm1058), module, "Rtcm1058", 0);
              }

              void t_Rtcm1058::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "class_", make_descriptor(Rtcm1058::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "wrapfn_", make_descriptor(t_Rtcm1058::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1058::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1058::wrap_Object(Rtcm1058(((t_Rtcm1058 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1058::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1058 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1058(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TimingSystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TimingSystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$TimingSystemConfiguration::live$ = false;

        jclass CRDConfiguration$TimingSystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEpochDelayCorrection_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpochDelayCorrection", "()D");
            mids$[mid_getFrequencySource_0090f7797e403f43] = env->getMethodID(cls, "getFrequencySource", "()Ljava/lang/String;");
            mids$[mid_getLocalTimingId_0090f7797e403f43] = env->getMethodID(cls, "getLocalTimingId", "()Ljava/lang/String;");
            mids$[mid_getTimeSource_0090f7797e403f43] = env->getMethodID(cls, "getTimeSource", "()Ljava/lang/String;");
            mids$[mid_getTimer_0090f7797e403f43] = env->getMethodID(cls, "getTimer", "()Ljava/lang/String;");
            mids$[mid_getTimerSerialNumber_0090f7797e403f43] = env->getMethodID(cls, "getTimerSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setEpochDelayCorrection_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEpochDelayCorrection", "(D)V");
            mids$[mid_setFrequencySource_e939c6558ae8d313] = env->getMethodID(cls, "setFrequencySource", "(Ljava/lang/String;)V");
            mids$[mid_setLocalTimingId_e939c6558ae8d313] = env->getMethodID(cls, "setLocalTimingId", "(Ljava/lang/String;)V");
            mids$[mid_setTimeSource_e939c6558ae8d313] = env->getMethodID(cls, "setTimeSource", "(Ljava/lang/String;)V");
            mids$[mid_setTimer_e939c6558ae8d313] = env->getMethodID(cls, "setTimer", "(Ljava/lang/String;)V");
            mids$[mid_setTimerSerialNumber_e939c6558ae8d313] = env->getMethodID(cls, "setTimerSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TimingSystemConfiguration::CRDConfiguration$TimingSystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble CRDConfiguration$TimingSystemConfiguration::getEpochDelayCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochDelayCorrection_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getFrequencySource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrequencySource_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getLocalTimingId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalTimingId_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimeSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSource_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimer_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::getTimerSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimerSerialNumber_0090f7797e403f43]));
        }

        void CRDConfiguration$TimingSystemConfiguration::setEpochDelayCorrection(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochDelayCorrection_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$TimingSystemConfiguration::setFrequencySource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFrequencySource_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setLocalTimingId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLocalTimingId_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimeSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSource_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimer_e939c6558ae8d313], a0.this$);
        }

        void CRDConfiguration$TimingSystemConfiguration::setTimerSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimerSerialNumber_e939c6558ae8d313], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$TimingSystemConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data);
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TimingSystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, epochDelayCorrection),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, frequencySource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, localTimingId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timeSource),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TimingSystemConfiguration, timerSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TimingSystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getEpochDelayCorrection, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getFrequencySource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getLocalTimingId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimeSource, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, getTimerSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setEpochDelayCorrection, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setFrequencySource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setLocalTimingId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimeSource, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, setTimerSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TimingSystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TimingSystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TimingSystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TimingSystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TimingSystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TimingSystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TimingSystemConfiguration, t_CRDConfiguration$TimingSystemConfiguration, CRDConfiguration$TimingSystemConfiguration);

        void t_CRDConfiguration$TimingSystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TimingSystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$TimingSystemConfiguration), module, "CRDConfiguration$TimingSystemConfiguration", 0);
        }

        void t_CRDConfiguration$TimingSystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "class_", make_descriptor(CRDConfiguration$TimingSystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TimingSystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TimingSystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TimingSystemConfiguration::wrap_Object(CRDConfiguration$TimingSystemConfiguration(((t_CRDConfiguration$TimingSystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TimingSystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TimingSystemConfiguration_init_(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TimingSystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TimingSystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencySource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getLocalTimingId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSource());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimer(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_getTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimerSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setEpochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochDelayCorrection(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochDelayCorrection", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setFrequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFrequencySource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFrequencySource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setLocalTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setLocalTimingId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLocalTimingId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimeSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSource", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_setTimerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTimerSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimerSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toCrdString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_toString(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TimingSystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochDelayCorrection());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__epochDelayCorrection(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochDelayCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochDelayCorrection", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencySource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__frequencySource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFrequencySource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "frequencySource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalTimingId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__localTimingId(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setLocalTimingId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "localTimingId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSource());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timeSource(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimeSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSource", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timer(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimer());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timer(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TimingSystemConfiguration_get__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimerSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$TimingSystemConfiguration_set__timerSerialNumber(t_CRDConfiguration$TimingSystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTimerSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timerSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceKeplerianHermiteInterpolator::class$ = NULL;
      jmethodID *StateCovarianceKeplerianHermiteInterpolator::mids$ = NULL;
      bool StateCovarianceKeplerianHermiteInterpolator::live$ = false;

      jclass StateCovarianceKeplerianHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_593cd2b7d0317f07] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_21f4c17d68bba5ef] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_bf5c99df9f26b339] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_8971be620ebbf42d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_08a6959f18a33e09] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_827e3ea27712ae63] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_457f891f62d6f597] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_init$_43e3a99a8bd4ae9a] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/time/TimeInterpolator;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_getFilter_237181d932324188] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_9c0671e111b7adfc] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::LOFType & a1) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_593cd2b7d0317f07, a0.this$, a1.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_21f4c17d68bba5ef, a0, a1.this$, a2.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(const ::org::orekit::time::TimeInterpolator & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_bf5c99df9f26b339, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::LOFType & a3) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8971be620ebbf42d, a0, a1.this$, a2.this$, a3.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_08a6959f18a33e09, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::LOFType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_827e3ea27712ae63, a0, a1, a2.this$, a3.this$, a4.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::orbits::OrbitType & a4, const ::org::orekit::orbits::PositionAngleType & a5) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_457f891f62d6f597, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      StateCovarianceKeplerianHermiteInterpolator::StateCovarianceKeplerianHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::org::orekit::frames::Frame & a4, const ::org::orekit::orbits::OrbitType & a5, const ::org::orekit::orbits::PositionAngleType & a6) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_43e3a99a8bd4ae9a, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter StateCovarianceKeplerianHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_237181d932324188]));
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
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args);
      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data);
      static PyGetSetDef t_StateCovarianceKeplerianHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_StateCovarianceKeplerianHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceKeplerianHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_StateCovarianceKeplerianHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceKeplerianHermiteInterpolator)[] = {
        { Py_tp_methods, t_StateCovarianceKeplerianHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceKeplerianHermiteInterpolator_init_ },
        { Py_tp_getset, t_StateCovarianceKeplerianHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceKeplerianHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceKeplerianHermiteInterpolator, t_StateCovarianceKeplerianHermiteInterpolator, StateCovarianceKeplerianHermiteInterpolator);
      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(const StateCovarianceKeplerianHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceKeplerianHermiteInterpolator *self = (t_StateCovarianceKeplerianHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), &PY_TYPE_DEF(StateCovarianceKeplerianHermiteInterpolator), module, "StateCovarianceKeplerianHermiteInterpolator", 0);
      }

      void t_StateCovarianceKeplerianHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "class_", make_descriptor(StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "wrapfn_", make_descriptor(t_StateCovarianceKeplerianHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceKeplerianHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceKeplerianHermiteInterpolator::wrap_Object(StateCovarianceKeplerianHermiteInterpolator(((t_StateCovarianceKeplerianHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceKeplerianHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_of_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceKeplerianHermiteInterpolator_init_(t_StateCovarianceKeplerianHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOFType a1((jobject) NULL);
            PyTypeObject **p1;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::orbits::OrbitType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::LOFType a3((jobject) NULL);
            PyTypeObject **p3;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::LOFType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::orbits::OrbitType a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::orbits::PositionAngleType a5((jobject) NULL);
            PyTypeObject **p5;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &a4, &p4, ::org::orekit::orbits::t_OrbitType::parameters_, &a5, &p5, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::Frame a4((jobject) NULL);
            ::org::orekit::orbits::OrbitType a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            StateCovarianceKeplerianHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDKKkKK", ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &a5, &p5, ::org::orekit::orbits::t_OrbitType::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceKeplerianHermiteInterpolator(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_getFilter(t_StateCovarianceKeplerianHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__parameters_(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_StateCovarianceKeplerianHermiteInterpolator_get__filter(t_StateCovarianceKeplerianHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateVectorFunction::class$ = NULL;
      jmethodID *UnivariateVectorFunction::mids$ = NULL;
      bool UnivariateVectorFunction::live$ = false;

      jclass UnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_e6753bb90e47a158] = env->getMethodID(cls, "value", "(D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > UnivariateVectorFunction::value(jdouble a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_e6753bb90e47a158], a0));
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
      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunction)[] = {
        { Py_tp_methods, t_UnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateVectorFunction, t_UnivariateVectorFunction, UnivariateVectorFunction);

      void t_UnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateVectorFunction), &PY_TYPE_DEF(UnivariateVectorFunction), module, "UnivariateVectorFunction", 0);
      }

      void t_UnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "class_", make_descriptor(UnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "wrapfn_", make_descriptor(t_UnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateVectorFunction::wrap_Object(UnivariateVectorFunction(((t_UnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateVectorFunction_value(t_UnivariateVectorFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationDetector::class$ = NULL;
        jmethodID *AngularSeparationDetector::mids$ = NULL;
        bool AngularSeparationDetector::live$ = false;

        jclass AngularSeparationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_716a45c480ef72cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBeacon_7044cb1966c8a481] = env->getMethodID(cls, "getBeacon", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getObserver_7044cb1966c8a481] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_create_72ab361d3ab665c8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationDetector::AngularSeparationDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_716a45c480ef72cc, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getBeacon() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getBeacon_7044cb1966c8a481]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getObserver() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getObserver_7044cb1966c8a481]));
        }

        jdouble AngularSeparationDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_456d9a2f64d6b28d]);
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
        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args);
        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self);
        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data);
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationDetector, beacon),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, observer),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getBeacon, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationDetector, getProximityAngle, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationDetector)[] = {
          { Py_tp_methods, t_AngularSeparationDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationDetector_init_ },
          { Py_tp_getset, t_AngularSeparationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationDetector, t_AngularSeparationDetector, AngularSeparationDetector);
        PyObject *t_AngularSeparationDetector::wrap_Object(const AngularSeparationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationDetector *self = (t_AngularSeparationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationDetector), &PY_TYPE_DEF(AngularSeparationDetector), module, "AngularSeparationDetector", 0);
        }

        void t_AngularSeparationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "class_", make_descriptor(AngularSeparationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "wrapfn_", make_descriptor(t_AngularSeparationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationDetector::wrap_Object(AngularSeparationDetector(((t_AngularSeparationDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationDetector_of_(t_AngularSeparationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationDetector_init_(t_AngularSeparationDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationDetector_g(t_AngularSeparationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationDetector_getBeacon(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getObserver(t_AngularSeparationDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationDetector_getProximityAngle(t_AngularSeparationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_AngularSeparationDetector_get__parameters_(t_AngularSeparationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationDetector_get__beacon(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getBeacon());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__observer(t_AngularSeparationDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationDetector_get__proximityAngle(t_AngularSeparationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHull2D::class$ = NULL;
            jmethodID *ConvexHull2D::mids$ = NULL;
            bool ConvexHull2D::live$ = false;

            jclass ConvexHull2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_47d19e3a4a08b3a4] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
                mids$[mid_createRegion_9552c312bc09a7e5] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
                mids$[mid_getLineSegments_4bc91cd0e314a202] = env->getMethodID(cls, "getLineSegments", "()[Lorg/hipparchus/geometry/euclidean/twod/Segment;");
                mids$[mid_getVertices_420b11245beef53d] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ConvexHull2D::ConvexHull2D(const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47d19e3a4a08b3a4, a0.this$, a1)) {}

            ::org::hipparchus::geometry::partitioning::Region ConvexHull2D::createRegion() const
            {
              return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_9552c312bc09a7e5]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > ConvexHull2D::getLineSegments() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Segment >(env->callObjectMethod(this$, mids$[mid_getLineSegments_4bc91cd0e314a202]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > ConvexHull2D::getVertices() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D >(env->callObjectMethod(this$, mids$[mid_getVertices_420b11245beef53d]));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data);
            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data);
            static PyGetSetDef t_ConvexHull2D__fields_[] = {
              DECLARE_GET_FIELD(t_ConvexHull2D, lineSegments),
              DECLARE_GET_FIELD(t_ConvexHull2D, vertices),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ConvexHull2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHull2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, createRegion, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getLineSegments, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getVertices, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHull2D)[] = {
              { Py_tp_methods, t_ConvexHull2D__methods_ },
              { Py_tp_init, (void *) t_ConvexHull2D_init_ },
              { Py_tp_getset, t_ConvexHull2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHull2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ConvexHull2D, t_ConvexHull2D, ConvexHull2D);

            void t_ConvexHull2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHull2D), &PY_TYPE_DEF(ConvexHull2D), module, "ConvexHull2D", 0);
            }

            void t_ConvexHull2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "class_", make_descriptor(ConvexHull2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "wrapfn_", make_descriptor(t_ConvexHull2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHull2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHull2D::wrap_Object(ConvexHull2D(((t_ConvexHull2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHull2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a0((jobject) NULL);
              jdouble a1;
              ConvexHull2D object((jobject) NULL);

              if (!parseArgs(args, "[kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConvexHull2D(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self)
            {
              ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
              OBJ_CALL(result = self->object.createRegion());
              return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > result((jobject) NULL);
              OBJ_CALL(result = self->object.getLineSegments());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > result((jobject) NULL);
              OBJ_CALL(result = self->object.getVertices());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > value((jobject) NULL);
              OBJ_CALL(value = self->object.getLineSegments());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > value((jobject) NULL);
              OBJ_CALL(value = self->object.getVertices());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldLine::class$ = NULL;
          jmethodID *FieldLine::mids$ = NULL;
          bool FieldLine::live$ = false;

          jclass FieldLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_85c6fbe901c5f370] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)V");
              mids$[mid_closestPoint_80232c7072707623] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_contains_f61e2266bee942fa] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
              mids$[mid_contains_c8fb5394ceb559de] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_0a7109b183d5c7e5] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_561f21e3ac14fa34] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_5f51423dbe425445] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_561f21e3ac14fa34] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_5f51423dbe425445] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDirection_5791f80683b5227e] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getOrigin_5791f80683b5227e] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_80232c7072707623] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_isSimilarTo_758d116bd2fac12a] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Z");
              mids$[mid_pointAt_14b0f58c06667f17] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_pointAt_3023f195d3eecf7e] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_reset_d35296e3a83f651e] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_revert_40eb47b2eaf09cd1] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLine::FieldLine(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85c6fbe901c5f370, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::closestPoint(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_80232c7072707623], a0.this$));
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_f61e2266bee942fa], a0.this$);
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_c8fb5394ceb559de], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const FieldLine & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_0a7109b183d5c7e5], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_561f21e3ac14fa34], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_5f51423dbe425445], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_561f21e3ac14fa34], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_5f51423dbe425445], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDirection_5791f80683b5227e]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_5791f80683b5227e]));
          }

          jdouble FieldLine::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::intersection(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_intersection_80232c7072707623], a0.this$));
          }

          jboolean FieldLine::isSimilarTo(const FieldLine & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_758d116bd2fac12a], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_14b0f58c06667f17], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_3023f195d3eecf7e], a0.this$));
          }

          void FieldLine::reset(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_d35296e3a83f651e], a0.this$, a1.this$);
          }

          FieldLine FieldLine::revert() const
          {
            return FieldLine(env->callObjectMethod(this$, mids$[mid_revert_40eb47b2eaf09cd1]));
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
          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args);
          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getDirection(t_FieldLine *self);
          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self);
          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self);
          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_revert(t_FieldLine *self);
          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data);
          static PyGetSetDef t_FieldLine__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLine, direction),
            DECLARE_GET_FIELD(t_FieldLine, origin),
            DECLARE_GET_FIELD(t_FieldLine, tolerance),
            DECLARE_GET_FIELD(t_FieldLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLine__methods_[] = {
            DECLARE_METHOD(t_FieldLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, closestPoint, METH_O),
            DECLARE_METHOD(t_FieldLine, contains, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getAbscissa, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, intersection, METH_O),
            DECLARE_METHOD(t_FieldLine, isSimilarTo, METH_O),
            DECLARE_METHOD(t_FieldLine, pointAt, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, reset, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLine)[] = {
            { Py_tp_methods, t_FieldLine__methods_ },
            { Py_tp_init, (void *) t_FieldLine_init_ },
            { Py_tp_getset, t_FieldLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldLine, t_FieldLine, FieldLine);
          PyObject *t_FieldLine::wrap_Object(const FieldLine& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLine::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLine::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLine), &PY_TYPE_DEF(FieldLine), module, "FieldLine", 0);
          }

          void t_FieldLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "class_", make_descriptor(FieldLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "wrapfn_", make_descriptor(t_FieldLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLine::initializeClass, 1)))
              return NULL;
            return t_FieldLine::wrap_Object(FieldLine(((t_FieldLine *) arg)->object.this$));
          }
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldLine object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
            {
              INT_CALL(object = FieldLine(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                jboolean result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "contains", args);
            return NULL;
          }

          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldLine a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getDirection(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", args);
            return NULL;
          }

          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_FieldLine_revert(t_FieldLine *self)
          {
            FieldLine result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldLine::wrap_Object(result, self->parameters[0]);
          }
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonAbstractSelfFeedingLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *PythonAbstractSelfFeedingLoader::mids$ = NULL;
      bool PythonAbstractSelfFeedingLoader::live$ = false;

      jclass PythonAbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractSelfFeedingLoader::PythonAbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PythonAbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_PythonAbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(PythonAbstractSelfFeedingLoader, t_PythonAbstractSelfFeedingLoader, PythonAbstractSelfFeedingLoader);

      void t_PythonAbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractSelfFeedingLoader), &PY_TYPE_DEF(PythonAbstractSelfFeedingLoader), module, "PythonAbstractSelfFeedingLoader", 0);
      }

      void t_PythonAbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "class_", make_descriptor(PythonAbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_PythonAbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PythonAbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractSelfFeedingLoader::wrap_Object(PythonAbstractSelfFeedingLoader(((t_PythonAbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractSelfFeedingLoader_init_(t_PythonAbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        PythonAbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = PythonAbstractSelfFeedingLoader(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultFieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixChangingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixChangingVisitor::live$ = false;

      jclass DefaultFieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d517a7265f416cee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_7e89936bdf79375b] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_ad4e446b355be785] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixChangingVisitor::DefaultFieldMatrixChangingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d517a7265f416cee, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_7e89936bdf79375b]));
      }

      void DefaultFieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement DefaultFieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_ad4e446b355be785], a0, a1, a2.this$));
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
      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixChangingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixChangingVisitor, t_DefaultFieldMatrixChangingVisitor, DefaultFieldMatrixChangingVisitor);
      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_Object(const DefaultFieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixChangingVisitor *self = (t_DefaultFieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixChangingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixChangingVisitor), module, "DefaultFieldMatrixChangingVisitor", 0);
      }

      void t_DefaultFieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "class_", make_descriptor(DefaultFieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixChangingVisitor::wrap_Object(DefaultFieldMatrixChangingVisitor(((t_DefaultFieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_of_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixChangingVisitor_init_(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixChangingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixChangingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_end(t_DefaultFieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_start(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixChangingVisitor_visit(t_DefaultFieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixChangingVisitor_get__parameters_(t_DefaultFieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *FrequencyPattern::class$ = NULL;
        jmethodID *FrequencyPattern::mids$ = NULL;
        bool FrequencyPattern::live$ = false;
        FrequencyPattern *FrequencyPattern::ZERO_CORRECTION = NULL;

        jclass FrequencyPattern::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/FrequencyPattern");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c7311ce76e74007] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;)V");
            mids$[mid_getEccentricities_17a952530a808943] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getPhaseCenterVariation_80b2470b9511edd1] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getPhaseCenterVariationFunction_c31e4831a8342524] = env->getMethodID(cls, "getPhaseCenterVariationFunction", "()Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ZERO_CORRECTION = new FrequencyPattern(env->getStaticObjectField(cls, "ZERO_CORRECTION", "Lorg/orekit/gnss/antenna/FrequencyPattern;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FrequencyPattern::FrequencyPattern(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::gnss::antenna::PhaseCenterVariationFunction & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c7311ce76e74007, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FrequencyPattern::getEccentricities() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_17a952530a808943]));
        }

        jdouble FrequencyPattern::getPhaseCenterVariation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_80b2470b9511edd1], a0.this$);
        }

        ::org::orekit::gnss::antenna::PhaseCenterVariationFunction FrequencyPattern::getPhaseCenterVariationFunction() const
        {
          return ::org::orekit::gnss::antenna::PhaseCenterVariationFunction(env->callObjectMethod(this$, mids$[mid_getPhaseCenterVariationFunction_c31e4831a8342524]));
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
        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data);
        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data);
        static PyGetSetDef t_FrequencyPattern__fields_[] = {
          DECLARE_GET_FIELD(t_FrequencyPattern, eccentricities),
          DECLARE_GET_FIELD(t_FrequencyPattern, phaseCenterVariationFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FrequencyPattern__methods_[] = {
          DECLARE_METHOD(t_FrequencyPattern, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, getEccentricities, METH_NOARGS),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariation, METH_O),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariationFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FrequencyPattern)[] = {
          { Py_tp_methods, t_FrequencyPattern__methods_ },
          { Py_tp_init, (void *) t_FrequencyPattern_init_ },
          { Py_tp_getset, t_FrequencyPattern__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FrequencyPattern)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FrequencyPattern, t_FrequencyPattern, FrequencyPattern);

        void t_FrequencyPattern::install(PyObject *module)
        {
          installType(&PY_TYPE(FrequencyPattern), &PY_TYPE_DEF(FrequencyPattern), module, "FrequencyPattern", 0);
        }

        void t_FrequencyPattern::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "class_", make_descriptor(FrequencyPattern::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "wrapfn_", make_descriptor(t_FrequencyPattern::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "boxfn_", make_descriptor(boxObject));
          env->getClass(FrequencyPattern::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "ZERO_CORRECTION", make_descriptor(t_FrequencyPattern::wrap_Object(*FrequencyPattern::ZERO_CORRECTION)));
        }

        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FrequencyPattern::initializeClass, 1)))
            return NULL;
          return t_FrequencyPattern::wrap_Object(FrequencyPattern(((t_FrequencyPattern *) arg)->object.this$));
        }
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FrequencyPattern::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction a1((jobject) NULL);
          FrequencyPattern object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::gnss::antenna::PhaseCenterVariationFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FrequencyPattern(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", arg);
          return NULL;
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/ModifiedFrame.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *ModifiedFrame::class$ = NULL;
          jmethodID *ModifiedFrame::mids$ = NULL;
          bool ModifiedFrame::live$ = false;

          jclass ModifiedFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/ModifiedFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_845bb5fbf46ce78e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/bodies/CelestialBody;Ljava/lang/String;)V");
              mids$[mid_getCenterName_0090f7797e403f43] = env->getMethodID(cls, "getCenterName", "()Ljava/lang/String;");
              mids$[mid_getRefFrame_00a4299572a8abf7] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedFrame::ModifiedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::bodies::CelestialBody & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_845bb5fbf46ce78e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::String ModifiedFrame::getCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCenterName_0090f7797e403f43]));
          }

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame ModifiedFrame::getRefFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_getRefFrame_00a4299572a8abf7]));
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
          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data);
          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data);
          static PyGetSetDef t_ModifiedFrame__fields_[] = {
            DECLARE_GET_FIELD(t_ModifiedFrame, centerName),
            DECLARE_GET_FIELD(t_ModifiedFrame, refFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ModifiedFrame__methods_[] = {
            DECLARE_METHOD(t_ModifiedFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, getCenterName, METH_NOARGS),
            DECLARE_METHOD(t_ModifiedFrame, getRefFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedFrame)[] = {
            { Py_tp_methods, t_ModifiedFrame__methods_ },
            { Py_tp_init, (void *) t_ModifiedFrame_init_ },
            { Py_tp_getset, t_ModifiedFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedFrame)[] = {
            &PY_TYPE_DEF(::org::orekit::frames::Frame),
            NULL
          };

          DEFINE_TYPE(ModifiedFrame, t_ModifiedFrame, ModifiedFrame);

          void t_ModifiedFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedFrame), &PY_TYPE_DEF(ModifiedFrame), module, "ModifiedFrame", 0);
          }

          void t_ModifiedFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "class_", make_descriptor(ModifiedFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "wrapfn_", make_descriptor(t_ModifiedFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedFrame::initializeClass, 1)))
              return NULL;
            return t_ModifiedFrame::wrap_Object(ModifiedFrame(((t_ModifiedFrame *) arg)->object.this$));
          }
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ModifiedFrame object((jobject) NULL);

            if (!parseArgs(args, "kKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &a3))
            {
              INT_CALL(object = ModifiedFrame(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterName());
            return j2p(result);
          }

          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterName());
            return j2p(value);
          }

          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame value((jobject) NULL);
            OBJ_CALL(value = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Header::class$ = NULL;
              jmethodID *SsrIgm02Header::mids$ = NULL;
              bool SsrIgm02Header::live$ = false;

              jclass SsrIgm02Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Header::SsrIgm02Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm02Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Header)[] = {
                { Py_tp_methods, t_SsrIgm02Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Header, t_SsrIgm02Header, SsrIgm02Header);

              void t_SsrIgm02Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Header), &PY_TYPE_DEF(SsrIgm02Header), module, "SsrIgm02Header", 0);
              }

              void t_SsrIgm02Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "class_", make_descriptor(SsrIgm02Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "wrapfn_", make_descriptor(t_SsrIgm02Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Header::wrap_Object(SsrIgm02Header(((t_SsrIgm02Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Header object((jobject) NULL);

                INT_CALL(object = SsrIgm02Header());
                self->object = object;

                return 0;
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
#include "java/util/Random.h"
#include "java/util/stream/DoubleStream.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Random::class$ = NULL;
    jmethodID *Random::mids$ = NULL;
    bool Random::live$ = false;

    jclass Random::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Random");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_doubles_2c8690a58875e3ae] = env->getMethodID(cls, "doubles", "()Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_19dd39eae6a70cf7] = env->getMethodID(cls, "doubles", "(J)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_253831d37af3b2cf] = env->getMethodID(cls, "doubles", "(DD)Ljava/util/stream/DoubleStream;");
        mids$[mid_doubles_ff691104e83f6c94] = env->getMethodID(cls, "doubles", "(JDD)Ljava/util/stream/DoubleStream;");
        mids$[mid_nextBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "nextBoolean", "()Z");
        mids$[mid_nextBytes_9c4b35f0a6dc87f3] = env->getMethodID(cls, "nextBytes", "([B)V");
        mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");
        mids$[mid_nextFloat_966c782d3223854d] = env->getMethodID(cls, "nextFloat", "()F");
        mids$[mid_nextGaussian_456d9a2f64d6b28d] = env->getMethodID(cls, "nextGaussian", "()D");
        mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
        mids$[mid_nextInt_38565d58479aa24a] = env->getMethodID(cls, "nextInt", "(I)I");
        mids$[mid_nextLong_a27fc9afd27e559d] = env->getMethodID(cls, "nextLong", "()J");
        mids$[mid_setSeed_fefb08975c10f0a1] = env->getMethodID(cls, "setSeed", "(J)V");
        mids$[mid_next_38565d58479aa24a] = env->getMethodID(cls, "next", "(I)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Random::Random() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    Random::Random(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

    ::java::util::stream::DoubleStream Random::doubles() const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_2c8690a58875e3ae]));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_19dd39eae6a70cf7], a0));
    }

    ::java::util::stream::DoubleStream Random::doubles(jdouble a0, jdouble a1) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_253831d37af3b2cf], a0, a1));
    }

    ::java::util::stream::DoubleStream Random::doubles(jlong a0, jdouble a1, jdouble a2) const
    {
      return ::java::util::stream::DoubleStream(env->callObjectMethod(this$, mids$[mid_doubles_ff691104e83f6c94], a0, a1, a2));
    }

    jboolean Random::nextBoolean() const
    {
      return env->callBooleanMethod(this$, mids$[mid_nextBoolean_e470b6d9e0d979db]);
    }

    void Random::nextBytes(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_nextBytes_9c4b35f0a6dc87f3], a0.this$);
    }

    jdouble Random::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
    }

    jfloat Random::nextFloat() const
    {
      return env->callFloatMethod(this$, mids$[mid_nextFloat_966c782d3223854d]);
    }

    jdouble Random::nextGaussian() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextGaussian_456d9a2f64d6b28d]);
    }

    jint Random::nextInt() const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
    }

    jint Random::nextInt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_nextInt_38565d58479aa24a], a0);
    }

    jlong Random::nextLong() const
    {
      return env->callLongMethod(this$, mids$[mid_nextLong_a27fc9afd27e559d]);
    }

    void Random::setSeed(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeed_fefb08975c10f0a1], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Random_doubles(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextBoolean(t_Random *self);
    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg);
    static PyObject *t_Random_nextDouble(t_Random *self);
    static PyObject *t_Random_nextFloat(t_Random *self);
    static PyObject *t_Random_nextGaussian(t_Random *self);
    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args);
    static PyObject *t_Random_nextLong(t_Random *self);
    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg);
    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data);
    static PyGetSetDef t_Random__fields_[] = {
      DECLARE_SET_FIELD(t_Random, seed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Random__methods_[] = {
      DECLARE_METHOD(t_Random, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Random, doubles, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextBoolean, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextBytes, METH_O),
      DECLARE_METHOD(t_Random, nextDouble, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextFloat, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextGaussian, METH_NOARGS),
      DECLARE_METHOD(t_Random, nextInt, METH_VARARGS),
      DECLARE_METHOD(t_Random, nextLong, METH_NOARGS),
      DECLARE_METHOD(t_Random, setSeed, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Random)[] = {
      { Py_tp_methods, t_Random__methods_ },
      { Py_tp_init, (void *) t_Random_init_ },
      { Py_tp_getset, t_Random__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Random)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Random, t_Random, Random);

    void t_Random::install(PyObject *module)
    {
      installType(&PY_TYPE(Random), &PY_TYPE_DEF(Random), module, "Random", 0);
    }

    void t_Random::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "class_", make_descriptor(Random::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "wrapfn_", make_descriptor(t_Random::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Random), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Random_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Random::initializeClass, 1)))
        return NULL;
      return t_Random::wrap_Object(Random(((t_Random *) arg)->object.this$));
    }
    static PyObject *t_Random_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Random::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Random_init_(t_Random *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Random object((jobject) NULL);

          INT_CALL(object = Random());
          self->object = object;
          break;
        }
       case 1:
        {
          jlong a0;
          Random object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Random(a0));
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

    static PyObject *t_Random_doubles(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::stream::DoubleStream result((jobject) NULL);
          OBJ_CALL(result = self->object.doubles());
          return ::java::util::stream::t_DoubleStream::wrap_Object(result);
        }
        break;
       case 1:
        {
          jlong a0;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.doubles(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          jdouble a0;
          jdouble a1;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          jlong a0;
          jdouble a1;
          jdouble a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "JDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.doubles(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "doubles", args);
      return NULL;
    }

    static PyObject *t_Random_nextBoolean(t_Random *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.nextBoolean());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Random_nextBytes(t_Random *self, PyObject *arg)
    {
      JArray< jbyte > a0((jobject) NULL);

      if (!parseArg(arg, "[B", &a0))
      {
        OBJ_CALL(self->object.nextBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "nextBytes", arg);
      return NULL;
    }

    static PyObject *t_Random_nextDouble(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextDouble());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextFloat(t_Random *self)
    {
      jfloat result;
      OBJ_CALL(result = self->object.nextFloat());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextGaussian(t_Random *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextGaussian());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Random_nextInt(t_Random *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.nextInt(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "nextInt", args);
      return NULL;
    }

    static PyObject *t_Random_nextLong(t_Random *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.nextLong());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Random_setSeed(t_Random *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setSeed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeed", arg);
      return NULL;
    }

    static int t_Random_set__seed(t_Random *self, PyObject *arg, void *data)
    {
      {
        jlong value;
        if (!parseArg(arg, "J", &value))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceType::class$ = NULL;
              jmethodID *AttitudeCovarianceType::mids$ = NULL;
              bool AttitudeCovarianceType::live$ = false;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_GYROBIAS = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_GYROBIAS = NULL;

              jclass AttitudeCovarianceType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_a6156df500549a58] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_valueOf_18043573ef393c52] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_values_826de9b6d8b092cd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeCovarianceType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_a6156df500549a58]));
              }

              AttitudeCovarianceType AttitudeCovarianceType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_18043573ef393c52], a0.this$));
              }

              JArray< AttitudeCovarianceType > AttitudeCovarianceType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_826de9b6d8b092cd]));
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
              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self);
              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data);
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, units),
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceType__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceType)[] = {
                { Py_tp_methods, t_AttitudeCovarianceType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceType, t_AttitudeCovarianceType, AttitudeCovarianceType);
              PyObject *t_AttitudeCovarianceType::wrap_Object(const AttitudeCovarianceType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceType), &PY_TYPE_DEF(AttitudeCovarianceType), module, "AttitudeCovarianceType", 0);
              }

              void t_AttitudeCovarianceType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "class_", make_descriptor(AttitudeCovarianceType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "wrapfn_", make_descriptor(t_AttitudeCovarianceType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_GYROBIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_GYROBIAS)));
              }

              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceType::wrap_Object(AttitudeCovarianceType(((t_AttitudeCovarianceType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::valueOf(a0));
                  return t_AttitudeCovarianceType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceType::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParserBuilder::class$ = NULL;
          jmethodID *ParserBuilder::mids$ = NULL;
          bool ParserBuilder::live$ = false;

          jclass ParserBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParserBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_959fe257032a39c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
              mids$[mid_buildAcmParser_947301af1f78d177] = env->getMethodID(cls, "buildAcmParser", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;");
              mids$[mid_buildAemParser_a521a10fa0afb7a8] = env->getMethodID(cls, "buildAemParser", "()Lorg/orekit/files/ccsds/ndm/adm/aem/AemParser;");
              mids$[mid_buildApmParser_39a3e263417fb16a] = env->getMethodID(cls, "buildApmParser", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmParser;");
              mids$[mid_buildCdmParser_5a3feed7e94cb024] = env->getMethodID(cls, "buildCdmParser", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;");
              mids$[mid_buildNdmParser_06cb4bcb2e551b39] = env->getMethodID(cls, "buildNdmParser", "()Lorg/orekit/files/ccsds/ndm/NdmParser;");
              mids$[mid_buildOcmParser_bcfdac7bd2fb1fb9] = env->getMethodID(cls, "buildOcmParser", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;");
              mids$[mid_buildOemParser_b3d83353bf139cc7] = env->getMethodID(cls, "buildOemParser", "()Lorg/orekit/files/ccsds/ndm/odm/oem/OemParser;");
              mids$[mid_buildOmmParser_2ed58f50ecbc9ddc] = env->getMethodID(cls, "buildOmmParser", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmParser;");
              mids$[mid_buildOpmParser_ac7edc69e86b2960] = env->getMethodID(cls, "buildOpmParser", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmParser;");
              mids$[mid_buildTdmParser_37304adf258fdd12] = env->getMethodID(cls, "buildTdmParser", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmParser;");
              mids$[mid_getDefaultInterpolationDegree_f2f64475e4580546] = env->getMethodID(cls, "getDefaultInterpolationDegree", "()I");
              mids$[mid_getDefaultMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getDefaultMass", "()D");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getParsedUnitsBehavior_edbef281f8882e84] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_isSimpleEOP_e470b6d9e0d979db] = env->getMethodID(cls, "isSimpleEOP", "()Z");
              mids$[mid_withDefaultInterpolationDegree_e074bb5e775f62c4] = env->getMethodID(cls, "withDefaultInterpolationDegree", "(I)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withDefaultMass_5968e9ea0c47f65c] = env->getMethodID(cls, "withDefaultMass", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withMu_5968e9ea0c47f65c] = env->getMethodID(cls, "withMu", "(D)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withParsedUnitsBehavior_ad84a428c034e27e] = env->getMethodID(cls, "withParsedUnitsBehavior", "(Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_withSimpleEOP_39ec0c9fe47b180e] = env->getMethodID(cls, "withSimpleEOP", "(Z)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");
              mids$[mid_create_6dc8d722eee6ba84] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/ParserBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ParserBuilder::ParserBuilder() : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ParserBuilder::ParserBuilder(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_959fe257032a39c0, a0.this$)) {}

          ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser ParserBuilder::buildAcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser(env->callObjectMethod(this$, mids$[mid_buildAcmParser_947301af1f78d177]));
          }

          ::org::orekit::files::ccsds::ndm::adm::aem::AemParser ParserBuilder::buildAemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::aem::AemParser(env->callObjectMethod(this$, mids$[mid_buildAemParser_a521a10fa0afb7a8]));
          }

          ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser ParserBuilder::buildApmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser(env->callObjectMethod(this$, mids$[mid_buildApmParser_39a3e263417fb16a]));
          }

          ::org::orekit::files::ccsds::ndm::cdm::CdmParser ParserBuilder::buildCdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::cdm::CdmParser(env->callObjectMethod(this$, mids$[mid_buildCdmParser_5a3feed7e94cb024]));
          }

          ::org::orekit::files::ccsds::ndm::NdmParser ParserBuilder::buildNdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::NdmParser(env->callObjectMethod(this$, mids$[mid_buildNdmParser_06cb4bcb2e551b39]));
          }

          ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser ParserBuilder::buildOcmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser(env->callObjectMethod(this$, mids$[mid_buildOcmParser_bcfdac7bd2fb1fb9]));
          }

          ::org::orekit::files::ccsds::ndm::odm::oem::OemParser ParserBuilder::buildOemParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::oem::OemParser(env->callObjectMethod(this$, mids$[mid_buildOemParser_b3d83353bf139cc7]));
          }

          ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser ParserBuilder::buildOmmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser(env->callObjectMethod(this$, mids$[mid_buildOmmParser_2ed58f50ecbc9ddc]));
          }

          ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser ParserBuilder::buildOpmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser(env->callObjectMethod(this$, mids$[mid_buildOpmParser_ac7edc69e86b2960]));
          }

          ::org::orekit::files::ccsds::ndm::tdm::TdmParser ParserBuilder::buildTdmParser() const
          {
            return ::org::orekit::files::ccsds::ndm::tdm::TdmParser(env->callObjectMethod(this$, mids$[mid_buildTdmParser_37304adf258fdd12]));
          }

          jint ParserBuilder::getDefaultInterpolationDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getDefaultInterpolationDegree_f2f64475e4580546]);
          }

          jdouble ParserBuilder::getDefaultMass() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDefaultMass_456d9a2f64d6b28d]);
          }

          jdouble ParserBuilder::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ParserBuilder::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_edbef281f8882e84]));
          }

          jboolean ParserBuilder::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_e470b6d9e0d979db]);
          }

          ParserBuilder ParserBuilder::withDefaultInterpolationDegree(jint a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultInterpolationDegree_e074bb5e775f62c4], a0));
          }

          ParserBuilder ParserBuilder::withDefaultMass(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withDefaultMass_5968e9ea0c47f65c], a0));
          }

          ParserBuilder ParserBuilder::withMu(jdouble a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withMu_5968e9ea0c47f65c], a0));
          }

          ParserBuilder ParserBuilder::withParsedUnitsBehavior(const ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior & a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withParsedUnitsBehavior_ad84a428c034e27e], a0.this$));
          }

          ParserBuilder ParserBuilder::withSimpleEOP(jboolean a0) const
          {
            return ParserBuilder(env->callObjectMethod(this$, mids$[mid_withSimpleEOP_39ec0c9fe47b180e], a0));
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
          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args);
          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self);
          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg);
          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data);
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data);
          static PyGetSetDef t_ParserBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_ParserBuilder, defaultInterpolationDegree),
            DECLARE_GET_FIELD(t_ParserBuilder, defaultMass),
            DECLARE_GET_FIELD(t_ParserBuilder, mu),
            DECLARE_GET_FIELD(t_ParserBuilder, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ParserBuilder, simpleEOP),
            DECLARE_GET_FIELD(t_ParserBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParserBuilder__methods_[] = {
            DECLARE_METHOD(t_ParserBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParserBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildAemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildApmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildCdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildNdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOcmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOemParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOmmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildOpmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, buildTdmParser, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultInterpolationDegree, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getDefaultMass, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getMu, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, isSimpleEOP, METH_NOARGS),
            DECLARE_METHOD(t_ParserBuilder, withDefaultInterpolationDegree, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withDefaultMass, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withMu, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withParsedUnitsBehavior, METH_O),
            DECLARE_METHOD(t_ParserBuilder, withSimpleEOP, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParserBuilder)[] = {
            { Py_tp_methods, t_ParserBuilder__methods_ },
            { Py_tp_init, (void *) t_ParserBuilder_init_ },
            { Py_tp_getset, t_ParserBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParserBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(ParserBuilder, t_ParserBuilder, ParserBuilder);
          PyObject *t_ParserBuilder::wrap_Object(const ParserBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParserBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParserBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParserBuilder *self = (t_ParserBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParserBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(ParserBuilder), &PY_TYPE_DEF(ParserBuilder), module, "ParserBuilder", 0);
          }

          void t_ParserBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "class_", make_descriptor(ParserBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "wrapfn_", make_descriptor(t_ParserBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParserBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParserBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParserBuilder::initializeClass, 1)))
              return NULL;
            return t_ParserBuilder::wrap_Object(ParserBuilder(((t_ParserBuilder *) arg)->object.this$));
          }
          static PyObject *t_ParserBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParserBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParserBuilder_of_(t_ParserBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ParserBuilder_init_(t_ParserBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ParserBuilder object((jobject) NULL);

                INT_CALL(object = ParserBuilder());
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                break;
              }
             case 1:
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                ParserBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = ParserBuilder(a0));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::PY_TYPE(ParserBuilder);
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ParserBuilder_buildAcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAcmParser());
            return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildAemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::aem::AemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildAemParser());
            return ::org::orekit::files::ccsds::ndm::adm::aem::t_AemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildApmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::adm::apm::ApmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildApmParser());
            return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildCdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::cdm::CdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildCdmParser());
            return ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildNdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::NdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildNdmParser());
            return ::org::orekit::files::ccsds::ndm::t_NdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOcmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOcmParser());
            return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOemParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::oem::OemParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOemParser());
            return ::org::orekit::files::ccsds::ndm::odm::oem::t_OemParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOmmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::omm::OmmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOmmParser());
            return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildOpmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::odm::opm::OpmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildOpmParser());
            return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_buildTdmParser(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::tdm::TdmParser result((jobject) NULL);
            OBJ_CALL(result = self->object.buildTdmParser());
            return ::org::orekit::files::ccsds::ndm::tdm::t_TdmParser::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_getDefaultInterpolationDegree(t_ParserBuilder *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParserBuilder_getDefaultMass(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getMu(t_ParserBuilder *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ParserBuilder_getParsedUnitsBehavior(t_ParserBuilder *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ParserBuilder_isSimpleEOP(t_ParserBuilder *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ParserBuilder_withDefaultInterpolationDegree(t_ParserBuilder *self, PyObject *arg)
          {
            jint a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultInterpolationDegree(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultInterpolationDegree", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withDefaultMass(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withDefaultMass(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withDefaultMass", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withMu(t_ParserBuilder *self, PyObject *arg)
          {
            jdouble a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.withMu(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withMu", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withParsedUnitsBehavior(t_ParserBuilder *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior a0((jobject) NULL);
            PyTypeObject **p0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::parameters_))
            {
              OBJ_CALL(result = self->object.withParsedUnitsBehavior(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withParsedUnitsBehavior", arg);
            return NULL;
          }

          static PyObject *t_ParserBuilder_withSimpleEOP(t_ParserBuilder *self, PyObject *arg)
          {
            jboolean a0;
            ParserBuilder result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withSimpleEOP(a0));
              return t_ParserBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSimpleEOP", arg);
            return NULL;
          }
          static PyObject *t_ParserBuilder_get__parameters_(t_ParserBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_ParserBuilder_get__defaultInterpolationDegree(t_ParserBuilder *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDefaultInterpolationDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ParserBuilder_get__defaultMass(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDefaultMass());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__mu(t_ParserBuilder *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ParserBuilder_get__parsedUnitsBehavior(t_ParserBuilder *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ParserBuilder_get__simpleEOP(t_ParserBuilder *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *InertialFrameId::class$ = NULL;
        jmethodID *InertialFrameId::mids$ = NULL;
        bool InertialFrameId::live$ = false;
        InertialFrameId *InertialFrameId::EME2000 = NULL;
        InertialFrameId *InertialFrameId::GCRF = NULL;
        InertialFrameId *InertialFrameId::MOD = NULL;
        InertialFrameId *InertialFrameId::TOD = NULL;
        InertialFrameId *InertialFrameId::VEIS1950 = NULL;

        jclass InertialFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/InertialFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_fc03650940d93693] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/InertialFrameId;");
            mids$[mid_values_c8ee9c64bce68cea] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/InertialFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EME2000 = new InertialFrameId(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/rugged/api/InertialFrameId;"));
            GCRF = new InertialFrameId(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/rugged/api/InertialFrameId;"));
            MOD = new InertialFrameId(env->getStaticObjectField(cls, "MOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            TOD = new InertialFrameId(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/rugged/api/InertialFrameId;"));
            VEIS1950 = new InertialFrameId(env->getStaticObjectField(cls, "VEIS1950", "Lorg/orekit/rugged/api/InertialFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InertialFrameId InertialFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return InertialFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fc03650940d93693], a0.this$));
        }

        JArray< InertialFrameId > InertialFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< InertialFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_c8ee9c64bce68cea]));
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
        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args);
        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_InertialFrameId_values(PyTypeObject *type);
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data);
        static PyGetSetDef t_InertialFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_InertialFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InertialFrameId__methods_[] = {
          DECLARE_METHOD(t_InertialFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_InertialFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InertialFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InertialFrameId)[] = {
          { Py_tp_methods, t_InertialFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_InertialFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InertialFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(InertialFrameId, t_InertialFrameId, InertialFrameId);
        PyObject *t_InertialFrameId::wrap_Object(const InertialFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InertialFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InertialFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InertialFrameId *self = (t_InertialFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InertialFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(InertialFrameId), &PY_TYPE_DEF(InertialFrameId), module, "InertialFrameId", 0);
        }

        void t_InertialFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "class_", make_descriptor(InertialFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "wrapfn_", make_descriptor(t_InertialFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(InertialFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "EME2000", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::EME2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "GCRF", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::GCRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "MOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::MOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "TOD", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::TOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InertialFrameId), "VEIS1950", make_descriptor(t_InertialFrameId::wrap_Object(*InertialFrameId::VEIS1950)));
        }

        static PyObject *t_InertialFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InertialFrameId::initializeClass, 1)))
            return NULL;
          return t_InertialFrameId::wrap_Object(InertialFrameId(((t_InertialFrameId *) arg)->object.this$));
        }
        static PyObject *t_InertialFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InertialFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InertialFrameId_of_(t_InertialFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_InertialFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          InertialFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::valueOf(a0));
            return t_InertialFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_InertialFrameId_values(PyTypeObject *type)
        {
          JArray< InertialFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::InertialFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_InertialFrameId::wrap_jobject);
        }
        static PyObject *t_InertialFrameId_get__parameters_(t_InertialFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *EphemerisGenerator::class$ = NULL;
      jmethodID *EphemerisGenerator::mids$ = NULL;
      bool EphemerisGenerator::live$ = false;

      jclass EphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/EphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_e29a1189b47e1aad] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::BoundedPropagator EphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_e29a1189b47e1aad]));
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
      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self);
      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data);
      static PyGetSetDef t_EphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_EphemerisGenerator, generatedEphemeris),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_EphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EphemerisGenerator)[] = {
        { Py_tp_methods, t_EphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EphemerisGenerator, t_EphemerisGenerator, EphemerisGenerator);

      void t_EphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(EphemerisGenerator), &PY_TYPE_DEF(EphemerisGenerator), module, "EphemerisGenerator", 0);
      }

      void t_EphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "class_", make_descriptor(EphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "wrapfn_", make_descriptor(t_EphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_EphemerisGenerator::wrap_Object(EphemerisGenerator(((t_EphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self)
      {
        ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
      }

      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouAlmanac::class$ = NULL;
            jmethodID *BeidouAlmanac::mids$ = NULL;
            bool BeidouAlmanac::live$ = false;

            jclass BeidouAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getHealth_f2f64475e4580546] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_setHealth_0a2a1ac2721c0336] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setI0_1d715fa3b7b756e1] = env->getMethodID(cls, "setI0", "(DD)V");
                mids$[mid_setSqrtA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouAlmanac::BeidouAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jint BeidouAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_f2f64475e4580546]);
            }

            void BeidouAlmanac::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_0a2a1ac2721c0336], a0);
            }

            void BeidouAlmanac::setI0(jdouble a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_1d715fa3b7b756e1], a0, a1);
            }

            void BeidouAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self);
            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args);
            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg);
            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data);
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouAlmanac__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouAlmanac, health),
              DECLARE_SET_FIELD(t_BeidouAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouAlmanac__methods_[] = {
              DECLARE_METHOD(t_BeidouAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouAlmanac, setI0, METH_VARARGS),
              DECLARE_METHOD(t_BeidouAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouAlmanac)[] = {
              { Py_tp_methods, t_BeidouAlmanac__methods_ },
              { Py_tp_init, (void *) t_BeidouAlmanac_init_ },
              { Py_tp_getset, t_BeidouAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(BeidouAlmanac, t_BeidouAlmanac, BeidouAlmanac);

            void t_BeidouAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouAlmanac), &PY_TYPE_DEF(BeidouAlmanac), module, "BeidouAlmanac", 0);
            }

            void t_BeidouAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "class_", make_descriptor(BeidouAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "wrapfn_", make_descriptor(t_BeidouAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_BeidouAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouAlmanac::initializeClass, 1)))
                return NULL;
              return t_BeidouAlmanac::wrap_Object(BeidouAlmanac(((t_BeidouAlmanac *) arg)->object.this$));
            }
            static PyObject *t_BeidouAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouAlmanac_init_(t_BeidouAlmanac *self, PyObject *args, PyObject *kwds)
            {
              BeidouAlmanac object((jobject) NULL);

              INT_CALL(object = BeidouAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_BeidouAlmanac_getHealth(t_BeidouAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouAlmanac_setHealth(t_BeidouAlmanac *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_setI0(t_BeidouAlmanac *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(self->object.setI0(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(BeidouAlmanac), (PyObject *) self, "setI0", args, 2);
            }

            static PyObject *t_BeidouAlmanac_setSqrtA(t_BeidouAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static PyObject *t_BeidouAlmanac_get__health(t_BeidouAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouAlmanac_set__health(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static int t_BeidouAlmanac_set__sqrtA(t_BeidouAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "java/lang/Throwable.h"
#include "java/lang/Throwable.h"
#include "java/io/Serializable.h"
#include "java/io/PrintWriter.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Throwable::class$ = NULL;
    jmethodID *Throwable::mids$ = NULL;
    bool Throwable::live$ = false;

    jclass Throwable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Throwable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_addSuppressed_ea7f4d04e27238a7] = env->getMethodID(cls, "addSuppressed", "(Ljava/lang/Throwable;)V");
        mids$[mid_fillInStackTrace_67c131e34276cda8] = env->getMethodID(cls, "fillInStackTrace", "()Ljava/lang/Throwable;");
        mids$[mid_getCause_67c131e34276cda8] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getLocalizedMessage_0090f7797e403f43] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
        mids$[mid_getMessage_0090f7797e403f43] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
        mids$[mid_getStackTrace_e6bb52718778b305] = env->getMethodID(cls, "getStackTrace", "()[Ljava/lang/StackTraceElement;");
        mids$[mid_getSuppressed_4781de9358fe92cb] = env->getMethodID(cls, "getSuppressed", "()[Ljava/lang/Throwable;");
        mids$[mid_initCause_adb273fe246ba153] = env->getMethodID(cls, "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;");
        mids$[mid_printStackTrace_7ae3461a92a43152] = env->getMethodID(cls, "printStackTrace", "()V");
        mids$[mid_printStackTrace_97a189d81f6ca857] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintStream;)V");
        mids$[mid_printStackTrace_6f85f82c503eab85] = env->getMethodID(cls, "printStackTrace", "(Ljava/io/PrintWriter;)V");
        mids$[mid_setStackTrace_45423f0d633b7091] = env->getMethodID(cls, "setStackTrace", "([Ljava/lang/StackTraceElement;)V");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Throwable::Throwable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    Throwable::Throwable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Throwable::Throwable(const ::java::lang::String & a0, const Throwable & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}

    void Throwable::addSuppressed(const Throwable & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addSuppressed_ea7f4d04e27238a7], a0.this$);
    }

    Throwable Throwable::fillInStackTrace() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_fillInStackTrace_67c131e34276cda8]));
    }

    Throwable Throwable::getCause() const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_getCause_67c131e34276cda8]));
    }

    ::java::lang::String Throwable::getLocalizedMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_0090f7797e403f43]));
    }

    ::java::lang::String Throwable::getMessage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_0090f7797e403f43]));
    }

    JArray< ::java::lang::StackTraceElement > Throwable::getStackTrace() const
    {
      return JArray< ::java::lang::StackTraceElement >(env->callObjectMethod(this$, mids$[mid_getStackTrace_e6bb52718778b305]));
    }

    JArray< Throwable > Throwable::getSuppressed() const
    {
      return JArray< Throwable >(env->callObjectMethod(this$, mids$[mid_getSuppressed_4781de9358fe92cb]));
    }

    Throwable Throwable::initCause(const Throwable & a0) const
    {
      return Throwable(env->callObjectMethod(this$, mids$[mid_initCause_adb273fe246ba153], a0.this$));
    }

    void Throwable::printStackTrace() const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_7ae3461a92a43152]);
    }

    void Throwable::printStackTrace(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_97a189d81f6ca857], a0.this$);
    }

    void Throwable::printStackTrace(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_printStackTrace_6f85f82c503eab85], a0.this$);
    }

    void Throwable::setStackTrace(const JArray< ::java::lang::StackTraceElement > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setStackTrace_45423f0d633b7091], a0.this$);
    }

    ::java::lang::String Throwable::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getCause(t_Throwable *self);
    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self);
    static PyObject *t_Throwable_getMessage(t_Throwable *self);
    static PyObject *t_Throwable_getStackTrace(t_Throwable *self);
    static PyObject *t_Throwable_getSuppressed(t_Throwable *self);
    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg);
    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args);
    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data);
    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data);
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data);
    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data);
    static PyGetSetDef t_Throwable__fields_[] = {
      DECLARE_GET_FIELD(t_Throwable, cause),
      DECLARE_GET_FIELD(t_Throwable, localizedMessage),
      DECLARE_GET_FIELD(t_Throwable, message),
      DECLARE_GETSET_FIELD(t_Throwable, stackTrace),
      DECLARE_GET_FIELD(t_Throwable, suppressed),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Throwable__methods_[] = {
      DECLARE_METHOD(t_Throwable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Throwable, addSuppressed, METH_O),
      DECLARE_METHOD(t_Throwable, fillInStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getCause, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getLocalizedMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getMessage, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getStackTrace, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, getSuppressed, METH_NOARGS),
      DECLARE_METHOD(t_Throwable, initCause, METH_O),
      DECLARE_METHOD(t_Throwable, printStackTrace, METH_VARARGS),
      DECLARE_METHOD(t_Throwable, setStackTrace, METH_O),
      DECLARE_METHOD(t_Throwable, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Throwable)[] = {
      { Py_tp_methods, t_Throwable__methods_ },
      { Py_tp_init, (void *) t_Throwable_init_ },
      { Py_tp_getset, t_Throwable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Throwable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Throwable, t_Throwable, Throwable);

    void t_Throwable::install(PyObject *module)
    {
      installType(&PY_TYPE(Throwable), &PY_TYPE_DEF(Throwable), module, "Throwable", 0);
    }

    void t_Throwable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "class_", make_descriptor(Throwable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "wrapfn_", make_descriptor(t_Throwable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Throwable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Throwable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Throwable::initializeClass, 1)))
        return NULL;
      return t_Throwable::wrap_Object(Throwable(((t_Throwable *) arg)->object.this$));
    }
    static PyObject *t_Throwable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Throwable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Throwable_init_(t_Throwable *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Throwable object((jobject) NULL);

          INT_CALL(object = Throwable());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Throwable(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Throwable a1((jobject) NULL);
          Throwable object((jobject) NULL);

          if (!parseArgs(args, "sk", Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Throwable(a0, a1));
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

    static PyObject *t_Throwable_addSuppressed(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(self->object.addSuppressed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addSuppressed", arg);
      return NULL;
    }

    static PyObject *t_Throwable_fillInStackTrace(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.fillInStackTrace());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getCause(t_Throwable *self)
    {
      Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getCause());
      return t_Throwable::wrap_Object(result);
    }

    static PyObject *t_Throwable_getLocalizedMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocalizedMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getMessage(t_Throwable *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getMessage());
      return j2p(result);
    }

    static PyObject *t_Throwable_getStackTrace(t_Throwable *self)
    {
      JArray< ::java::lang::StackTraceElement > result((jobject) NULL);
      OBJ_CALL(result = self->object.getStackTrace());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }

    static PyObject *t_Throwable_getSuppressed(t_Throwable *self)
    {
      JArray< Throwable > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuppressed());
      return JArray<jobject>(result.this$).wrap(t_Throwable::wrap_jobject);
    }

    static PyObject *t_Throwable_initCause(t_Throwable *self, PyObject *arg)
    {
      Throwable a0((jobject) NULL);
      Throwable result((jobject) NULL);

      if (!parseArg(arg, "k", Throwable::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.initCause(a0));
        return t_Throwable::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "initCause", arg);
      return NULL;
    }

    static PyObject *t_Throwable_printStackTrace(t_Throwable *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.printStackTrace());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.printStackTrace(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printStackTrace", args);
      return NULL;
    }

    static PyObject *t_Throwable_setStackTrace(t_Throwable *self, PyObject *arg)
    {
      JArray< ::java::lang::StackTraceElement > a0((jobject) NULL);

      if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setStackTrace(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setStackTrace", arg);
      return NULL;
    }

    static PyObject *t_Throwable_toString(t_Throwable *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Throwable), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Throwable_get__cause(t_Throwable *self, void *data)
    {
      Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return t_Throwable::wrap_Object(value);
    }

    static PyObject *t_Throwable_get__localizedMessage(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocalizedMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__message(t_Throwable *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getMessage());
      return j2p(value);
    }

    static PyObject *t_Throwable_get__stackTrace(t_Throwable *self, void *data)
    {
      JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
      OBJ_CALL(value = self->object.getStackTrace());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_StackTraceElement::wrap_jobject);
    }
    static int t_Throwable_set__stackTrace(t_Throwable *self, PyObject *arg, void *data)
    {
      {
        JArray< ::java::lang::StackTraceElement > value((jobject) NULL);
        if (!parseArg(arg, "[k", ::java::lang::StackTraceElement::initializeClass, &value))
        {
          INT_CALL(self->object.setStackTrace(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "stackTrace", arg);
      return -1;
    }

    static PyObject *t_Throwable_get__suppressed(t_Throwable *self, void *data)
    {
      JArray< Throwable > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuppressed());
      return JArray<jobject>(value.this$).wrap(t_Throwable::wrap_jobject);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpDec.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpDec::class$ = NULL;
      jmethodID *DfpDec::mids$ = NULL;
      bool DfpDec::live$ = false;

      jclass DfpDec::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpDec");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_afbcdba9812369ae] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/dfp/Dfp;)V");
          mids$[mid_newInstance_20a565cdc6596121] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_3f89d25657eee84e] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f0d5166eeb6b0680] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_970ab21c4d121514] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_5caa6ddeafdf80db] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f72d07eb955b446b] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_aaf2a1c8efdefd0f] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_7c8aa6cad7f772b2] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_f0d5166eeb6b0680] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getDecimalDigits_f2f64475e4580546] = env->getMethodID(cls, "getDecimalDigits", "()I");
          mids$[mid_round_38565d58479aa24a] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpDec::DfpDec(const ::org::hipparchus::dfp::Dfp & a0) : ::org::hipparchus::dfp::Dfp(env->newObject(initializeClass, &mids$, mid_init$_afbcdba9812369ae, a0.this$)) {}

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_3f89d25657eee84e], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_970ab21c4d121514], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_5caa6ddeafdf80db], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f72d07eb955b446b], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_aaf2a1c8efdefd0f], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_7c8aa6cad7f772b2], a0, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::nextAfter(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_f0d5166eeb6b0680], a0.this$));
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
      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args);
      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args);

      static PyMethodDef t_DfpDec__methods_[] = {
        DECLARE_METHOD(t_DfpDec, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_DfpDec, nextAfter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpDec)[] = {
        { Py_tp_methods, t_DfpDec__methods_ },
        { Py_tp_init, (void *) t_DfpDec_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpDec)[] = {
        &PY_TYPE_DEF(::org::hipparchus::dfp::Dfp),
        NULL
      };

      DEFINE_TYPE(DfpDec, t_DfpDec, DfpDec);

      void t_DfpDec::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpDec), &PY_TYPE_DEF(DfpDec), module, "DfpDec", 0);
      }

      void t_DfpDec::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "class_", make_descriptor(DfpDec::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "wrapfn_", make_descriptor(t_DfpDec::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpDec::initializeClass, 1)))
          return NULL;
        return t_DfpDec::wrap_Object(DfpDec(((t_DfpDec *) arg)->object.this$));
      }
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpDec::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        DfpDec object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          INT_CALL(object = DfpDec(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "newInstance", args, 2);
      }

      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "nextAfter", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParameters::class$ = NULL;
            jmethodID *AdditionalParameters::mids$ = NULL;
            bool AdditionalParameters::live$ = false;

            jclass AdditionalParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getApoapsisAltitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getApoapsisAltitude", "()D");
                mids$[mid_getAreaDRG_456d9a2f64d6b28d] = env->getMethodID(cls, "getAreaDRG", "()D");
                mids$[mid_getAreaPC_456d9a2f64d6b28d] = env->getMethodID(cls, "getAreaPC", "()D");
                mids$[mid_getAreaPCMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getAreaPCMax", "()D");
                mids$[mid_getAreaPCMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getAreaPCMin", "()D");
                mids$[mid_getAreaSRP_456d9a2f64d6b28d] = env->getMethodID(cls, "getAreaSRP", "()D");
                mids$[mid_getCDAreaOverMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getCDAreaOverMass", "()D");
                mids$[mid_getCRAreaOverMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getCRAreaOverMass", "()D");
                mids$[mid_getCovConfidence_456d9a2f64d6b28d] = env->getMethodID(cls, "getCovConfidence", "()D");
                mids$[mid_getCovConfidenceMethod_0090f7797e403f43] = env->getMethodID(cls, "getCovConfidenceMethod", "()Ljava/lang/String;");
                mids$[mid_getHbr_456d9a2f64d6b28d] = env->getMethodID(cls, "getHbr", "()D");
                mids$[mid_getInclination_456d9a2f64d6b28d] = env->getMethodID(cls, "getInclination", "()D");
                mids$[mid_getMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getPeriapsisAltitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getPeriapsisAltitude", "()D");
                mids$[mid_getSedr_456d9a2f64d6b28d] = env->getMethodID(cls, "getSedr", "()D");
                mids$[mid_getThrustAcceleration_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustAcceleration", "()D");
                mids$[mid_setApoapsisAltitude_77e0f9a1f260e2e5] = env->getMethodID(cls, "setApoapsisAltitude", "(D)V");
                mids$[mid_setAreaDRG_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAreaDRG", "(D)V");
                mids$[mid_setAreaPC_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAreaPC", "(D)V");
                mids$[mid_setAreaPCMax_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAreaPCMax", "(D)V");
                mids$[mid_setAreaPCMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAreaPCMin", "(D)V");
                mids$[mid_setAreaSRP_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAreaSRP", "(D)V");
                mids$[mid_setCDAreaOverMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCDAreaOverMass", "(D)V");
                mids$[mid_setCRAreaOverMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCRAreaOverMass", "(D)V");
                mids$[mid_setCovConfidence_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                mids$[mid_setCovConfidenceMethod_e939c6558ae8d313] = env->getMethodID(cls, "setCovConfidenceMethod", "(Ljava/lang/String;)V");
                mids$[mid_setHbr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setHbr", "(D)V");
                mids$[mid_setInclination_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInclination", "(D)V");
                mids$[mid_setMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setPeriapsisAltitude_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPeriapsisAltitude", "(D)V");
                mids$[mid_setSedr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSedr", "(D)V");
                mids$[mid_setThrustAcceleration_77e0f9a1f260e2e5] = env->getMethodID(cls, "setThrustAcceleration", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalParameters::AdditionalParameters() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble AdditionalParameters::getApoapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApoapsisAltitude_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getAreaDRG() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaDRG_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getAreaPC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPC_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getAreaPCMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMax_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getAreaPCMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMin_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getAreaSRP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaSRP_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getCDAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCDAreaOverMass_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getCRAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCRAreaOverMass_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getCovConfidence() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_456d9a2f64d6b28d]);
            }

            ::java::lang::String AdditionalParameters::getCovConfidenceMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovConfidenceMethod_0090f7797e403f43]));
            }

            jdouble AdditionalParameters::getHbr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHbr_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getInclination() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInclination_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getPeriapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPeriapsisAltitude_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getSedr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSedr_456d9a2f64d6b28d]);
            }

            jdouble AdditionalParameters::getThrustAcceleration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThrustAcceleration_456d9a2f64d6b28d]);
            }

            void AdditionalParameters::setApoapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApoapsisAltitude_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setAreaDRG(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaDRG_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setAreaPC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPC_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setAreaPCMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMax_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setAreaPCMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMin_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setAreaSRP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaSRP_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setCDAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCDAreaOverMass_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setCRAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCRAreaOverMass_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setCovConfidence(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidence_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setCovConfidenceMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidenceMethod_e939c6558ae8d313], a0.this$);
            }

            void AdditionalParameters::setHbr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHbr_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setInclination(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInclination_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setPeriapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPeriapsisAltitude_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setSedr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSedr_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::setThrustAcceleration(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setThrustAcceleration_77e0f9a1f260e2e5], a0);
            }

            void AdditionalParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args);
            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalParameters, apoapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaDRG),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPC),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMax),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMin),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaSRP),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cDAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cRAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidence),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidenceMethod),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, hbr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, inclination),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, mass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, periapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, sedr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, thrustAcceleration),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParameters__methods_[] = {
              DECLARE_METHOD(t_AdditionalParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, getApoapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaDRG, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPC, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaSRP, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCDAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCRAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidence, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidenceMethod, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getHbr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getInclination, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getPeriapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getSedr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getThrustAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, setApoapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaDRG, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPC, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMax, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMin, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaSRP, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCDAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCRAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidence, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidenceMethod, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setHbr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setInclination, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setPeriapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setSedr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setThrustAcceleration, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParameters)[] = {
              { Py_tp_methods, t_AdditionalParameters__methods_ },
              { Py_tp_init, (void *) t_AdditionalParameters_init_ },
              { Py_tp_getset, t_AdditionalParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
              NULL
            };

            DEFINE_TYPE(AdditionalParameters, t_AdditionalParameters, AdditionalParameters);

            void t_AdditionalParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParameters), &PY_TYPE_DEF(AdditionalParameters), module, "AdditionalParameters", 0);
            }

            void t_AdditionalParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "class_", make_descriptor(AdditionalParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "wrapfn_", make_descriptor(t_AdditionalParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParameters::initializeClass, 1)))
                return NULL;
              return t_AdditionalParameters::wrap_Object(AdditionalParameters(((t_AdditionalParameters *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds)
            {
              AdditionalParameters object((jobject) NULL);

              INT_CALL(object = AdditionalParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovConfidenceMethod());
              return j2p(result);
            }

            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHbr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInclination());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSedr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApoapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApoapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaDRG(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaDRG", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPC", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaSRP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaSRP", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCDAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCDAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCRAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCRAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCovConfidence(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovConfidenceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidenceMethod", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHbr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHbr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setInclination(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInclination", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPeriapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPeriapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSedr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setThrustAcceleration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setThrustAcceleration", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApoapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "apoapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaDRG(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaDRG", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPC());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPC", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaSRP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaSRP", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCDAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cDAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCRAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cRAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCovConfidence(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovConfidenceMethod());
              return j2p(value);
            }
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovConfidenceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidenceMethod", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHbr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHbr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "hbr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInclination());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setInclination(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "inclination", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPeriapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "periapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSedr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSedr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sedr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setThrustAcceleration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "thrustAcceleration", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}

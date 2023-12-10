#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
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
            mids$[mid_init$_e49eabe56de25bd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_c587039edb9cccee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_280657998b1e993a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_504d5315f949fe5f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_ec4cb8b6da5ffd65] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_93bd05c102ce315a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_4a608526ee523830] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_e6e6d08cca347010] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_ca81bc3db3056d46] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_86281233528e311a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_34a0dab3c03a36d1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_0fc57aacdd580695] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_fdfda92b27ded57f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_392970fb57450e06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_6f5614b7cadcb0a2] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_8f32593fd62e6b9f] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_f4e88f7c904f6f3c] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_42f2f175e134d0e9] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
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

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e49eabe56de25bd5, a0.this$, a1.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c587039edb9cccee, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_280657998b1e993a, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_504d5315f949fe5f, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ec4cb8b6da5ffd65, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_93bd05c102ce315a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_4a608526ee523830, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e6e6d08cca347010, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ca81bc3db3056d46, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_86281233528e311a, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_34a0dab3c03a36d1, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0fc57aacdd580695, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_fdfda92b27ded57f, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_392970fb57450e06, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_6f5614b7cadcb0a2], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_8f32593fd62e6b9f], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_f4e88f7c904f6f3c], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        ::java::util::List FieldEcksteinHechlerPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        ::org::orekit::orbits::FieldCartesianOrbit FieldEcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_42f2f175e134d0e9], a0.this$, a1.this$));
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_c0db61abf5db836e], a0.this$, a1.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
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
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *FieldODEIntegratorBuilder::mids$ = NULL;
        bool FieldODEIntegratorBuilder::live$ = false;

        jclass FieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_c6b1aa22e8585e91] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_c6b1aa22e8585e91], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_FieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_FieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEIntegratorBuilder, t_FieldODEIntegratorBuilder, FieldODEIntegratorBuilder);
        PyObject *t_FieldODEIntegratorBuilder::wrap_Object(const FieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEIntegratorBuilder), &PY_TYPE_DEF(FieldODEIntegratorBuilder), module, "FieldODEIntegratorBuilder", 0);
        }

        void t_FieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "class_", make_descriptor(FieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_FieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_FieldODEIntegratorBuilder::wrap_Object(FieldODEIntegratorBuilder(((t_FieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeIonosphericDelayModifier::live$ = false;

          jclass BaseRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorIonosphericModel_03cd5a2e88a0f0f6] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeErrorIonosphericModel_08d2a35aee39232b] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getIonoModel_f6314816f66aaed0] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeIonosphericDelayModifier, t_BaseRangeIonosphericDelayModifier, BaseRangeIonosphericDelayModifier);

          void t_BaseRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeIonosphericDelayModifier), module, "BaseRangeIonosphericDelayModifier", 0);
          }

          void t_BaseRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "class_", make_descriptor(BaseRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeIonosphericDelayModifier::wrap_Object(BaseRangeIonosphericDelayModifier(((t_BaseRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/attitudes/CelestialBodyPointed.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *CelestialBodyPointed::class$ = NULL;
      jmethodID *CelestialBodyPointed::mids$ = NULL;
      bool CelestialBodyPointed::live$ = false;

      jclass CelestialBodyPointed::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/CelestialBodyPointed");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_06df8e8f4b63281a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CelestialBodyPointed::CelestialBodyPointed(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06df8e8f4b63281a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::attitudes::FieldAttitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args);

      static PyMethodDef t_CelestialBodyPointed__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyPointed, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, getAttitude, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyPointed)[] = {
        { Py_tp_methods, t_CelestialBodyPointed__methods_ },
        { Py_tp_init, (void *) t_CelestialBodyPointed_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyPointed)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyPointed, t_CelestialBodyPointed, CelestialBodyPointed);

      void t_CelestialBodyPointed::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyPointed), &PY_TYPE_DEF(CelestialBodyPointed), module, "CelestialBodyPointed", 0);
      }

      void t_CelestialBodyPointed::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "class_", make_descriptor(CelestialBodyPointed::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "wrapfn_", make_descriptor(t_CelestialBodyPointed::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyPointed::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyPointed::wrap_Object(CelestialBodyPointed(((t_CelestialBodyPointed *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyPointed::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
        CelestialBodyPointed object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CelestialBodyPointed(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractFieldODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractFieldODEStateInterpolator::mids$ = NULL;
        bool AbstractFieldODEStateInterpolator::live$ = false;

        jclass AbstractFieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_ad18f3cde52c81b9] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_7194dd3ba3cbc7e8] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_a1f0e19bf87f7a7b] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");
            mids$[mid_getMapper_49938af8a63b9487] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_23997ceac6beb25e] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/FieldEquationsMapper;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_create_fe27d20fc1a25788] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_7194dd3ba3cbc7e8]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_7194dd3ba3cbc7e8]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_7194dd3ba3cbc7e8]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_ad18f3cde52c81b9], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_7194dd3ba3cbc7e8]));
        }

        jboolean AbstractFieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd]);
        }

        jboolean AbstractFieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        jboolean AbstractFieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd]);
        }

        AbstractFieldODEStateInterpolator AbstractFieldODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return AbstractFieldODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_a1f0e19bf87f7a7b], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractFieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractFieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEStateInterpolator, t_AbstractFieldODEStateInterpolator, AbstractFieldODEStateInterpolator);
        PyObject *t_AbstractFieldODEStateInterpolator::wrap_Object(const AbstractFieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEStateInterpolator), &PY_TYPE_DEF(AbstractFieldODEStateInterpolator), module, "AbstractFieldODEStateInterpolator", 0);
        }

        void t_AbstractFieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "class_", make_descriptor(AbstractFieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEStateInterpolator::wrap_Object(AbstractFieldODEStateInterpolator(((t_AbstractFieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          AbstractFieldODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractFieldODEStateInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
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
#include "org/orekit/propagation/analytical/AggregateBoundedPropagator.h"
#include "java/util/Collection.h"
#include "java/util/NavigableMap.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AggregateBoundedPropagator::class$ = NULL;
        jmethodID *AggregateBoundedPropagator::mids$ = NULL;
        bool AggregateBoundedPropagator::live$ = false;

        jclass AggregateBoundedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AggregateBoundedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_init$_d766e632da5d7770] = env->getMethodID(cls, "<init>", "(Ljava/util/NavigableMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPropagators_d71603ad1730c5c7] = env->getMethodID(cls, "getPropagators", "()Ljava/util/NavigableMap;");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_basicPropagate_fbff2ff5554d95e1] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::Collection & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::NavigableMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d766e632da5d7770, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::propagation::SpacecraftState AggregateBoundedPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_c6311115fea01a34]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates AggregateBoundedPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
        }

        ::java::util::NavigableMap AggregateBoundedPropagator::getPropagators() const
        {
          return ::java::util::NavigableMap(env->callObjectMethod(this$, mids$[mid_getPropagators_d71603ad1730c5c7]));
        }

        void AggregateBoundedPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
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
        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data);
        static PyGetSetDef t_AggregateBoundedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, initialState),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, maxDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, minDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, propagators),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregateBoundedPropagator__methods_[] = {
          DECLARE_METHOD(t_AggregateBoundedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPropagators, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedPropagator)[] = {
          { Py_tp_methods, t_AggregateBoundedPropagator__methods_ },
          { Py_tp_init, (void *) t_AggregateBoundedPropagator_init_ },
          { Py_tp_getset, t_AggregateBoundedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregateBoundedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AggregateBoundedPropagator, t_AggregateBoundedPropagator, AggregateBoundedPropagator);

        void t_AggregateBoundedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregateBoundedPropagator), &PY_TYPE_DEF(AggregateBoundedPropagator), module, "AggregateBoundedPropagator", 0);
        }

        void t_AggregateBoundedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "class_", make_descriptor(AggregateBoundedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "wrapfn_", make_descriptor(t_AggregateBoundedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregateBoundedPropagator::initializeClass, 1)))
            return NULL;
          return t_AggregateBoundedPropagator::wrap_Object(AggregateBoundedPropagator(((t_AggregateBoundedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregateBoundedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::NavigableMap a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::java::util::NavigableMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &a2))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0, a1, a2));
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

        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self)
        {
          ::java::util::NavigableMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data)
        {
          ::java::util::NavigableMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *MultivariateJacobianFunction::class$ = NULL;
            jmethodID *MultivariateJacobianFunction::mids$ = NULL;
            bool MultivariateJacobianFunction::live$ = false;

            jclass MultivariateJacobianFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_value_f3b8dd3e226035d1] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::util::Pair MultivariateJacobianFunction::value(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_f3b8dd3e226035d1], a0.this$));
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
            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg);

            static PyMethodDef t_MultivariateJacobianFunction__methods_[] = {
              DECLARE_METHOD(t_MultivariateJacobianFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultivariateJacobianFunction, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultivariateJacobianFunction)[] = {
              { Py_tp_methods, t_MultivariateJacobianFunction__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultivariateJacobianFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MultivariateJacobianFunction, t_MultivariateJacobianFunction, MultivariateJacobianFunction);

            void t_MultivariateJacobianFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(MultivariateJacobianFunction), &PY_TYPE_DEF(MultivariateJacobianFunction), module, "MultivariateJacobianFunction", 0);
            }

            void t_MultivariateJacobianFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "class_", make_descriptor(MultivariateJacobianFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "wrapfn_", make_descriptor(t_MultivariateJacobianFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateJacobianFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultivariateJacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultivariateJacobianFunction::initializeClass, 1)))
                return NULL;
              return t_MultivariateJacobianFunction::wrap_Object(MultivariateJacobianFunction(((t_MultivariateJacobianFunction *) arg)->object.this$));
            }
            static PyObject *t_MultivariateJacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultivariateJacobianFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MultivariateJacobianFunction_value(t_MultivariateJacobianFunction *self, PyObject *arg)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *FieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool FieldAbstractAnalyticalPropagator::live$ = false;

        jclass FieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_f929ebd2a84dbfe7] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_54ac43f1e933cf20] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_d973c40fc0211a5b] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");
            mids$[mid_propagate_fc770c29e3468de8] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_acceptStep_cd5c14894c08dcb4] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator$FieldBasicStepInterpolator;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagateOrbit_3de5e0312fd3e848] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_getMass_2a5f05be83ff251d] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_33f1c56ea7775d4e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_basicPropagate_f6f1ea8aef3019eb] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_f929ebd2a84dbfe7], a0.this$);
        }

        void FieldAbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0fa09c18fee449d5]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_54ac43f1e933cf20]));
        }

        ::java::util::Collection FieldAbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_37528d110cff6b74]));
        }

        ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_d973c40fc0211a5b]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractAnalyticalPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fc770c29e3468de8], a0.this$, a1.this$));
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
        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self);
        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, pvProvider),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractAnalyticalPropagator, t_FieldAbstractAnalyticalPropagator, FieldAbstractAnalyticalPropagator);
        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_Object(const FieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(FieldAbstractAnalyticalPropagator), module, "FieldAbstractAnalyticalPropagator", 0);
        }

        void t_FieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "class_", make_descriptor(FieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_FieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractAnalyticalPropagator::wrap_Object(FieldAbstractAnalyticalPropagator(((t_FieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/text/NumberFormat.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldVector3D::class$ = NULL;
          jmethodID *FieldVector3D::mids$ = NULL;
          bool FieldVector3D::live$ = false;

          jclass FieldVector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldVector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_72479ee08453ef97] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_ad32522e5930a207] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_a10b3e52820c4332] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_0f8ae3b7a8c2efe4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_53343a27568c8665] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_eee0c82b0b9e16e9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_82fa7e789a6ae1f6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_dd5e6f81820c071a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_0d386383f9d751b1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_952ae6ca33b5ca7b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_787507660b5345da] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_2a7620523897e25e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_1a3e2f5679cdf6cc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_a7e0c5fb28eb8bfe] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_0900299079acfdca] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_3b1182b8003be140] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_a173408e2b1f78b2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_7a9aa2e8b906f1a5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_36f09bdcd3459c44] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_0a08f5ab3829235f] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_be17efda88c8b2a8] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_582f02609e2e5273] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_angle_664dcb5ef2f7cc2b] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_dafa2886884c755a] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_659f5a2caf346aee] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_blendArithmeticallyWith_8611389cf23e9404] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_a173408e2b1f78b2] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_7a9aa2e8b906f1a5] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_9dc4d243618c0821] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_a32a7e5b76d39058] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_13c107d11bb0484c] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_distance_11b158fbf85bdc54] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_2f5dcdf943d50d31] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_664dcb5ef2f7cc2b] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_659f5a2caf346aee] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_dafa2886884c755a] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_11b158fbf85bdc54] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_2f5dcdf943d50d31] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_664dcb5ef2f7cc2b] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_659f5a2caf346aee] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_dafa2886884c755a] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_11b158fbf85bdc54] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_2f5dcdf943d50d31] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_664dcb5ef2f7cc2b] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_659f5a2caf346aee] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_dafa2886884c755a] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_11b158fbf85bdc54] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_2f5dcdf943d50d31] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_664dcb5ef2f7cc2b] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_dafa2886884c755a] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_659f5a2caf346aee] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_11b158fbf85bdc54] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_2f5dcdf943d50d31] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_664dcb5ef2f7cc2b] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_659f5a2caf346aee] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_dafa2886884c755a] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_eba8e72a22c984ac] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDelta_eba8e72a22c984ac] = env->getMethodID(cls, "getDelta", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMinusI_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusJ_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusK_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getMinusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNaN_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNegativeInfinity_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNorm_eba8e72a22c984ac] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_eba8e72a22c984ac] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_eba8e72a22c984ac] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_eba8e72a22c984ac] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusJ_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusK_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getPlusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPositiveInfinity_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getX_eba8e72a22c984ac] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_eba8e72a22c984ac] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZ_eba8e72a22c984ac] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_202e7b3b5ed01afc] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_716f50c86ffc8da7] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_normalize_716f50c86ffc8da7] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_orthogonal_716f50c86ffc8da7] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_3e101a58a2527fdf] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_e0e563985265c470] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_a173408e2b1f78b2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_7a9aa2e8b906f1a5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_36f09bdcd3459c44] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_0a08f5ab3829235f] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_be17efda88c8b2a8] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_582f02609e2e5273] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_toArray_226a0b2040b1d2e1] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_7b429db583278c20] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector3D_d52645e0d4c07563] = env->getMethodID(cls, "toVector3D", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector3D::FieldVector3D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72479ee08453ef97, a0.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ad32522e5930a207, a0, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a10b3e52820c4332, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f8ae3b7a8c2efe4, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53343a27568c8665, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eee0c82b0b9e16e9, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82fa7e789a6ae1f6, a0.this$, a1.this$, a2.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd5e6f81820c071a, a0, a1.this$, a2, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d386383f9d751b1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_952ae6ca33b5ca7b, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_787507660b5345da, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a7620523897e25e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a3e2f5679cdf6cc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5, jdouble a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7e0c5fb28eb8bfe, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0900299079acfdca, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b1182b8003be140, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D FieldVector3D::add(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_a173408e2b1f78b2], a0.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_7a9aa2e8b906f1a5], a0.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_36f09bdcd3459c44], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_0a08f5ab3829235f], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_be17efda88c8b2a8], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_582f02609e2e5273], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_664dcb5ef2f7cc2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_dafa2886884c755a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_659f5a2caf346aee], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::blendArithmeticallyWith(const FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_8611389cf23e9404], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_a173408e2b1f78b2], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_7a9aa2e8b906f1a5], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_9dc4d243618c0821], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_a32a7e5b76d39058], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_13c107d11bb0484c], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_11b158fbf85bdc54], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_2f5dcdf943d50d31], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_664dcb5ef2f7cc2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_659f5a2caf346aee], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_dafa2886884c755a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_11b158fbf85bdc54], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_2f5dcdf943d50d31], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_664dcb5ef2f7cc2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_659f5a2caf346aee], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_dafa2886884c755a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_11b158fbf85bdc54], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_2f5dcdf943d50d31], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_664dcb5ef2f7cc2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_659f5a2caf346aee], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_dafa2886884c755a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_11b158fbf85bdc54], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_2f5dcdf943d50d31], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_664dcb5ef2f7cc2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_dafa2886884c755a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_659f5a2caf346aee], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_11b158fbf85bdc54], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_2f5dcdf943d50d31], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_664dcb5ef2f7cc2b], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_659f5a2caf346aee], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_dafa2886884c755a], a0.this$, a1.this$));
          }

          jboolean FieldVector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getAlpha() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getDelta() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDelta_eba8e72a22c984ac]));
          }

          FieldVector3D FieldVector3D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_202e7b3b5ed01afc], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_202e7b3b5ed01afc], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusK_202e7b3b5ed01afc], a0.this$));
          }

          FieldVector3D FieldVector3D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_202e7b3b5ed01afc], a0.this$));
          }

          FieldVector3D FieldVector3D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_202e7b3b5ed01afc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_eba8e72a22c984ac]));
          }

          FieldVector3D FieldVector3D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_202e7b3b5ed01afc], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_202e7b3b5ed01afc], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusK_202e7b3b5ed01afc], a0.this$));
          }

          FieldVector3D FieldVector3D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_202e7b3b5ed01afc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getZ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZ_eba8e72a22c984ac]));
          }

          FieldVector3D FieldVector3D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getZero_202e7b3b5ed01afc], a0.this$));
          }

          jint FieldVector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean FieldVector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
          }

          jboolean FieldVector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
          }

          FieldVector3D FieldVector3D::negate() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_negate_716f50c86ffc8da7]));
          }

          FieldVector3D FieldVector3D::normalize() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_normalize_716f50c86ffc8da7]));
          }

          FieldVector3D FieldVector3D::orthogonal() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_716f50c86ffc8da7]));
          }

          FieldVector3D FieldVector3D::scalarMultiply(jdouble a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_3e101a58a2527fdf], a0));
          }

          FieldVector3D FieldVector3D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_e0e563985265c470], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_a173408e2b1f78b2], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_7a9aa2e8b906f1a5], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_36f09bdcd3459c44], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_0a08f5ab3829235f], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_be17efda88c8b2a8], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_582f02609e2e5273], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector3D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_226a0b2040b1d2e1]));
          }

          ::java::lang::String FieldVector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          ::java::lang::String FieldVector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7b429db583278c20], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldVector3D::toVector3D() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toVector3D_d52645e0d4c07563]));
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
          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args);
          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data);
          static PyGetSetDef t_FieldVector3D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector3D, alpha),
            DECLARE_GET_FIELD(t_FieldVector3D, delta),
            DECLARE_GET_FIELD(t_FieldVector3D, infinite),
            DECLARE_GET_FIELD(t_FieldVector3D, naN),
            DECLARE_GET_FIELD(t_FieldVector3D, norm),
            DECLARE_GET_FIELD(t_FieldVector3D, norm1),
            DECLARE_GET_FIELD(t_FieldVector3D, normInf),
            DECLARE_GET_FIELD(t_FieldVector3D, normSq),
            DECLARE_GET_FIELD(t_FieldVector3D, x),
            DECLARE_GET_FIELD(t_FieldVector3D, y),
            DECLARE_GET_FIELD(t_FieldVector3D, z),
            DECLARE_GET_FIELD(t_FieldVector3D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector3D__methods_[] = {
            DECLARE_METHOD(t_FieldVector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, blendArithmeticallyWith, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toVector3D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector3D)[] = {
            { Py_tp_methods, t_FieldVector3D__methods_ },
            { Py_tp_init, (void *) t_FieldVector3D_init_ },
            { Py_tp_getset, t_FieldVector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector3D, t_FieldVector3D, FieldVector3D);
          PyObject *t_FieldVector3D::wrap_Object(const FieldVector3D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector3D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector3D), &PY_TYPE_DEF(FieldVector3D), module, "FieldVector3D", 0);
          }

          void t_FieldVector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "class_", make_descriptor(FieldVector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "wrapfn_", make_descriptor(t_FieldVector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector3D::initializeClass, 1)))
              return NULL;
            return t_FieldVector3D::wrap_Object(FieldVector3D(((t_FieldVector3D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_, &a6, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args)
          {
            FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
              return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
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

          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelta());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNaN(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNegativeInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPositiveInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getZ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getZero(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args)
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

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector3D());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelta());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getZ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnDecreasing.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnDecreasing::class$ = NULL;
          jmethodID *FieldStopOnDecreasing::mids$ = NULL;
          bool FieldStopOnDecreasing::live$ = false;

          jclass FieldStopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_fc49a7ff6cb062a2] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnDecreasing::FieldStopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnDecreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_fc49a7ff6cb062a2], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args);
          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnDecreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnDecreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnDecreasing)[] = {
            { Py_tp_methods, t_FieldStopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnDecreasing_init_ },
            { Py_tp_getset, t_FieldStopOnDecreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnDecreasing, t_FieldStopOnDecreasing, FieldStopOnDecreasing);
          PyObject *t_FieldStopOnDecreasing::wrap_Object(const FieldStopOnDecreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnDecreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnDecreasing), &PY_TYPE_DEF(FieldStopOnDecreasing), module, "FieldStopOnDecreasing", 0);
          }

          void t_FieldStopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "class_", make_descriptor(FieldStopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "wrapfn_", make_descriptor(t_FieldStopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnDecreasing::wrap_Object(FieldStopOnDecreasing(((t_FieldStopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnDecreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/Collection.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
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
              mids$[mid_init$_16720c819e7ee0c1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
              mids$[mid_init$_ab7da0e7cb0692d7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_init$_48f8035a5cda539d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/propagation/PropagationType;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_addForceModel_8788ca485d7d47e4] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel;)V");
              mids$[mid_computeMeanState_83170c771fb244f1] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeMeanState_7e87a80fc0ee5537] = env->getStaticMethodID(cls, "computeMeanState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;DI)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeOsculatingState_83170c771fb244f1] = env->getStaticMethodID(cls, "computeOsculatingState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/AttitudeProvider;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getAllForceModels_2afa36052df4765d] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
              mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getSatelliteRevolution_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteRevolution", "()I");
              mids$[mid_getSelectedCoefficients_015730311a5bacdc] = env->getMethodID(cls, "getSelectedCoefficients", "()Ljava/util/Set;");
              mids$[mid_getShortPeriodTerms_2afa36052df4765d] = env->getMethodID(cls, "getShortPeriodTerms", "()Ljava/util/List;");
              mids$[mid_getShortPeriodTermsValue_cb44069ef445f941] = env->getMethodID(cls, "getShortPeriodTermsValue", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_initialIsOsculating_b108b35ef48e27bd] = env->getMethodID(cls, "initialIsOsculating", "()Z");
              mids$[mid_removeForceModels_0fa09c18fee449d5] = env->getMethodID(cls, "removeForceModels", "()V");
              mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_setInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setInitialState_49bd3c28fa9b4521] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
              mids$[mid_setInterpolationGridToFixedNumberOfPoints_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationGridToFixedNumberOfPoints", "(I)V");
              mids$[mid_setInterpolationGridToMaxTimeGap_17db3a65980d3441] = env->getMethodID(cls, "setInterpolationGridToMaxTimeGap", "(D)V");
              mids$[mid_setMu_17db3a65980d3441] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_setSatelliteRevolution_99803b0791f320ff] = env->getMethodID(cls, "setSatelliteRevolution", "(I)V");
              mids$[mid_setSelectedCoefficients_d8e4bbe7420244b7] = env->getMethodID(cls, "setSelectedCoefficients", "(Ljava/util/Set;)V");
              mids$[mid_setShortPeriodTerms_de3e021e7266b71e] = env->getMethodID(cls, "setShortPeriodTerms", "(Ljava/util/List;)V");
              mids$[mid_tolerances_a8c32749a23019c2] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_tolerances_2339ca44155876e5] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;)[[D");
              mids$[mid_beforeIntegration_826b4eda94da4e78] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_afterIntegration_0fa09c18fee449d5] = env->getMethodID(cls, "afterIntegration", "()V");
              mids$[mid_getInitialIntegrationState_c6311115fea01a34] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_createMapper_2bea84b26b1efc07] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
              mids$[mid_getMainStateEquations_e1fa3ce287fe2655] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
              mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_setUpStmAndJacobianGenerators_0fa09c18fee449d5] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_16720c819e7ee0c1, a0.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_ab7da0e7cb0692d7, a0.this$, a1.this$)) {}

          DSSTPropagator::DSSTPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::propagation::PropagationType & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_48f8035a5cda539d, a0.this$, a1.this$, a2.this$)) {}

          void DSSTPropagator::addForceModel(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTForceModel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addForceModel_8788ca485d7d47e4], a0.this$);
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_83170c771fb244f1], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeMeanState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2, jdouble a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeMeanState_7e87a80fc0ee5537], a0.this$, a1.this$, a2.this$, a3, a4));
          }

          ::org::orekit::propagation::SpacecraftState DSSTPropagator::computeOsculatingState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::java::util::Collection & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::SpacecraftState(env->callStaticObjectMethod(cls, mids$[mid_computeOsculatingState_83170c771fb244f1], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List DSSTPropagator::getAllForceModels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_2afa36052df4765d]));
          }

          ::org::orekit::orbits::OrbitType DSSTPropagator::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
          }

          ::org::orekit::orbits::PositionAngleType DSSTPropagator::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
          }

          jint DSSTPropagator::getSatelliteRevolution() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteRevolution_570ce0828f81a2c1]);
          }

          ::java::util::Set DSSTPropagator::getSelectedCoefficients() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getSelectedCoefficients_015730311a5bacdc]));
          }

          ::java::util::List DSSTPropagator::getShortPeriodTerms() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShortPeriodTerms_2afa36052df4765d]));
          }

          JArray< jdouble > DSSTPropagator::getShortPeriodTermsValue(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getShortPeriodTermsValue_cb44069ef445f941], a0.this$));
          }

          jboolean DSSTPropagator::initialIsOsculating() const
          {
            return env->callBooleanMethod(this$, mids$[mid_initialIsOsculating_b108b35ef48e27bd]);
          }

          void DSSTPropagator::removeForceModels() const
          {
            env->callVoidMethod(this$, mids$[mid_removeForceModels_0fa09c18fee449d5]);
          }

          void DSSTPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
          }

          void DSSTPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_0ee5c56004643a2e], a0.this$);
          }

          void DSSTPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setInitialState_49bd3c28fa9b4521], a0.this$, a1.this$);
          }

          void DSSTPropagator::setInterpolationGridToFixedNumberOfPoints(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToFixedNumberOfPoints_99803b0791f320ff], a0);
          }

          void DSSTPropagator::setInterpolationGridToMaxTimeGap(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterpolationGridToMaxTimeGap_17db3a65980d3441], a0);
          }

          void DSSTPropagator::setMu(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMu_17db3a65980d3441], a0);
          }

          void DSSTPropagator::setSatelliteRevolution(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteRevolution_99803b0791f320ff], a0);
          }

          void DSSTPropagator::setSelectedCoefficients(const ::java::util::Set & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSelectedCoefficients_d8e4bbe7420244b7], a0.this$);
          }

          void DSSTPropagator::setShortPeriodTerms(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setShortPeriodTerms_de3e021e7266b71e], a0.this$);
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_a8c32749a23019c2], a0, a1.this$));
          }

          JArray< JArray< jdouble > > DSSTPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_2339ca44155876e5], a0, a1, a2.this$));
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
#include "org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *HexadecimalSequenceEncodedMessage::class$ = NULL;
          jmethodID *HexadecimalSequenceEncodedMessage::mids$ = NULL;
          bool HexadecimalSequenceEncodedMessage::live$ = false;

          jclass HexadecimalSequenceEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5e688138ffe60231] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
              mids$[mid_start_0fa09c18fee449d5] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_570ce0828f81a2c1] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HexadecimalSequenceEncodedMessage::HexadecimalSequenceEncodedMessage(const ::java::lang::CharSequence & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_5e688138ffe60231, a0.this$)) {}

          void HexadecimalSequenceEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0fa09c18fee449d5]);
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
        namespace parser {
          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args);

          static PyMethodDef t_HexadecimalSequenceEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HexadecimalSequenceEncodedMessage)[] = {
            { Py_tp_methods, t_HexadecimalSequenceEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_HexadecimalSequenceEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HexadecimalSequenceEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(HexadecimalSequenceEncodedMessage, t_HexadecimalSequenceEncodedMessage, HexadecimalSequenceEncodedMessage);

          void t_HexadecimalSequenceEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(HexadecimalSequenceEncodedMessage), &PY_TYPE_DEF(HexadecimalSequenceEncodedMessage), module, "HexadecimalSequenceEncodedMessage", 0);
          }

          void t_HexadecimalSequenceEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "class_", make_descriptor(HexadecimalSequenceEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "wrapfn_", make_descriptor(t_HexadecimalSequenceEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_HexadecimalSequenceEncodedMessage::wrap_Object(HexadecimalSequenceEncodedMessage(((t_HexadecimalSequenceEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::CharSequence a0((jobject) NULL);
            HexadecimalSequenceEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
            {
              INT_CALL(object = HexadecimalSequenceEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(HexadecimalSequenceEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DiagonalMatrix::class$ = NULL;
      jmethodID *DiagonalMatrix::mids$ = NULL;
      bool DiagonalMatrix::live$ = false;

      jclass DiagonalMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DiagonalMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_a47a33f7938e1575] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_add_7a737158a7bf2d27] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_addToEntry_1506189166690b5e] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_688b496048ff947b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_4410ec92987b66e9] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_0358d8ea02f2cdb1] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_60c7040667a7dc5c] = env->getMethodID(cls, "getDataRef", "()[D");
          mids$[mid_getEntry_dbbe5f05149dbf73] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_inverse_c1458e35d8bd3b65] = env->getMethodID(cls, "inverse", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_inverse_7e8ba41b8af4d349] = env->getMethodID(cls, "inverse", "(D)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_isSingular_2e401133981893e4] = env->getMethodID(cls, "isSingular", "(D)Z");
          mids$[mid_multiply_7a737158a7bf2d27] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiply_e9b72403ad502221] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_1506189166690b5e] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_7a737158a7bf2d27] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_multiplyTransposed_e9b72403ad502221] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_ac3d742ccc742f22] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_ac3d742ccc742f22] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_preMultiply_613347e28dd909cd] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_setEntry_1506189166690b5e] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_7a737158a7bf2d27] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_7a737158a7bf2d27] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/DiagonalMatrix;)Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_transposeMultiply_e9b72403ad502221] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      DiagonalMatrix::DiagonalMatrix(jint a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      DiagonalMatrix::DiagonalMatrix(const JArray< jdouble > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a47a33f7938e1575, a0.this$, a1)) {}

      DiagonalMatrix DiagonalMatrix::add(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_add_7a737158a7bf2d27], a0.this$));
      }

      void DiagonalMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_1506189166690b5e], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4410ec92987b66e9], a0, a1));
      }

      jint DiagonalMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      JArray< JArray< jdouble > > DiagonalMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_0358d8ea02f2cdb1]));
      }

      JArray< jdouble > DiagonalMatrix::getDataRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDataRef_60c7040667a7dc5c]));
      }

      jdouble DiagonalMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_dbbe5f05149dbf73], a0, a1);
      }

      jint DiagonalMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      DiagonalMatrix DiagonalMatrix::inverse() const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_c1458e35d8bd3b65]));
      }

      DiagonalMatrix DiagonalMatrix::inverse(jdouble a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_inverse_7e8ba41b8af4d349], a0));
      }

      jboolean DiagonalMatrix::isSingular(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSingular_2e401133981893e4], a0);
      }

      DiagonalMatrix DiagonalMatrix::multiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiply_7a737158a7bf2d27], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e9b72403ad502221], a0.this$));
      }

      void DiagonalMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_1506189166690b5e], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::multiplyTransposed(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_7a737158a7bf2d27], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e9b72403ad502221], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_ac3d742ccc742f22], a0.this$));
      }

      JArray< jdouble > DiagonalMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_ac3d742ccc742f22], a0.this$));
      }

      ::org::hipparchus::linear::RealVector DiagonalMatrix::preMultiply(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_preMultiply_613347e28dd909cd], a0.this$));
      }

      void DiagonalMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_1506189166690b5e], a0, a1, a2);
      }

      DiagonalMatrix DiagonalMatrix::subtract(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_subtract_7a737158a7bf2d27], a0.this$));
      }

      DiagonalMatrix DiagonalMatrix::transposeMultiply(const DiagonalMatrix & a0) const
      {
        return DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_7a737158a7bf2d27], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DiagonalMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e9b72403ad502221], a0.this$));
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
      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self);
      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg);
      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args);
      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data);
      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data);
      static PyGetSetDef t_DiagonalMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_DiagonalMatrix, columnDimension),
        DECLARE_GET_FIELD(t_DiagonalMatrix, data),
        DECLARE_GET_FIELD(t_DiagonalMatrix, dataRef),
        DECLARE_GET_FIELD(t_DiagonalMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DiagonalMatrix__methods_[] = {
        DECLARE_METHOD(t_DiagonalMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DiagonalMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, inverse, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, isSingular, METH_O),
        DECLARE_METHOD(t_DiagonalMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_DiagonalMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DiagonalMatrix)[] = {
        { Py_tp_methods, t_DiagonalMatrix__methods_ },
        { Py_tp_init, (void *) t_DiagonalMatrix_init_ },
        { Py_tp_getset, t_DiagonalMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DiagonalMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(DiagonalMatrix, t_DiagonalMatrix, DiagonalMatrix);

      void t_DiagonalMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(DiagonalMatrix), &PY_TYPE_DEF(DiagonalMatrix), module, "DiagonalMatrix", 0);
      }

      void t_DiagonalMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "class_", make_descriptor(DiagonalMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "wrapfn_", make_descriptor(t_DiagonalMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DiagonalMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DiagonalMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DiagonalMatrix::initializeClass, 1)))
          return NULL;
        return t_DiagonalMatrix::wrap_Object(DiagonalMatrix(((t_DiagonalMatrix *) arg)->object.this$));
      }
      static PyObject *t_DiagonalMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DiagonalMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DiagonalMatrix_init_(t_DiagonalMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DiagonalMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jboolean a1;
            DiagonalMatrix object((jobject) NULL);

            if (!parseArgs(args, "[DZ", &a0, &a1))
            {
              INT_CALL(object = DiagonalMatrix(a0, a1));
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

      static PyObject *t_DiagonalMatrix_add(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_DiagonalMatrix_addToEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_copy(t_DiagonalMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_DiagonalMatrix_createMatrix(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getColumnDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getData(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getDataRef(t_DiagonalMatrix *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return result.wrap();
      }

      static PyObject *t_DiagonalMatrix_getEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_getRowDimension(t_DiagonalMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_DiagonalMatrix_inverse(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            DiagonalMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.inverse());
            return t_DiagonalMatrix::wrap_Object(result);
          }
          break;
         case 1:
          {
            jdouble a0;
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.inverse(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "inverse", args);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_isSingular(t_DiagonalMatrix *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isSingular(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSingular", arg);
        return NULL;
      }

      static PyObject *t_DiagonalMatrix_multiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_multiplyTransposed(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_DiagonalMatrix_operate(t_DiagonalMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_DiagonalMatrix_preMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_setEntry(t_DiagonalMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_DiagonalMatrix_subtract(t_DiagonalMatrix *self, PyObject *args)
      {
        DiagonalMatrix a0((jobject) NULL);
        DiagonalMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_DiagonalMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_DiagonalMatrix_transposeMultiply(t_DiagonalMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            DiagonalMatrix a0((jobject) NULL);
            DiagonalMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", DiagonalMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_DiagonalMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DiagonalMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_DiagonalMatrix_get__columnDimension(t_DiagonalMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DiagonalMatrix_get__data(t_DiagonalMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_DiagonalMatrix_get__dataRef(t_DiagonalMatrix *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return value.wrap();
      }

      static PyObject *t_DiagonalMatrix_get__rowDimension(t_DiagonalMatrix *self, void *data)
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
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ReferenceClock::class$ = NULL;
          jmethodID *RinexClock$ReferenceClock::mids$ = NULL;
          bool RinexClock$ReferenceClock::live$ = false;

          jclass RinexClock$ReferenceClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ReferenceClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_52aa0b8ea90f2a77] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getClockConstraint_dff5885c2c873297] = env->getMethodID(cls, "getClockConstraint", "()D");
              mids$[mid_getClockID_11b109bd155ca898] = env->getMethodID(cls, "getClockID", "()Ljava/lang/String;");
              mids$[mid_getEndDate_85703d13e302437e] = env->getMethodID(cls, "getEndDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceName_11b109bd155ca898] = env->getMethodID(cls, "getReferenceName", "()Ljava/lang/String;");
              mids$[mid_getStartDate_85703d13e302437e] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ReferenceClock::RinexClock$ReferenceClock(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52aa0b8ea90f2a77, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

          jdouble RinexClock$ReferenceClock::getClockConstraint() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockConstraint_dff5885c2c873297]);
          }

          ::java::lang::String RinexClock$ReferenceClock::getClockID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClockID_11b109bd155ca898]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getEndDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_85703d13e302437e]));
          }

          ::java::lang::String RinexClock$ReferenceClock::getReferenceName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReferenceName_11b109bd155ca898]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ReferenceClock::getStartDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartDate_85703d13e302437e]));
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
          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self);
          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data);
          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data);
          static PyGetSetDef t_RinexClock$ReferenceClock__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockConstraint),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, clockID),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, endDate),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, referenceName),
            DECLARE_GET_FIELD(t_RinexClock$ReferenceClock, startDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ReferenceClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ReferenceClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockConstraint, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getClockID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getEndDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getReferenceName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ReferenceClock, getStartDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ReferenceClock)[] = {
            { Py_tp_methods, t_RinexClock$ReferenceClock__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ReferenceClock_init_ },
            { Py_tp_getset, t_RinexClock$ReferenceClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ReferenceClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ReferenceClock, t_RinexClock$ReferenceClock, RinexClock$ReferenceClock);

          void t_RinexClock$ReferenceClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ReferenceClock), &PY_TYPE_DEF(RinexClock$ReferenceClock), module, "RinexClock$ReferenceClock", 0);
          }

          void t_RinexClock$ReferenceClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "class_", make_descriptor(RinexClock$ReferenceClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "wrapfn_", make_descriptor(t_RinexClock$ReferenceClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ReferenceClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ReferenceClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ReferenceClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ReferenceClock::wrap_Object(RinexClock$ReferenceClock(((t_RinexClock$ReferenceClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ReferenceClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ReferenceClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ReferenceClock_init_(t_RinexClock$ReferenceClock *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            RinexClock$ReferenceClock object((jobject) NULL);

            if (!parseArgs(args, "ssDkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$ReferenceClock(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockConstraint(t_RinexClock$ReferenceClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getClockID(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockID());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getEndDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getReferenceName(t_RinexClock$ReferenceClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_getStartDate(t_RinexClock$ReferenceClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockConstraint(t_RinexClock$ReferenceClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockConstraint());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__clockID(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockID());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__endDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEndDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__referenceName(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ReferenceClock_get__startDate(t_RinexClock$ReferenceClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimator::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_processMeasurements_3f953d279000cee1] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_3b3c487cb3322691] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_e05aaef10b06b09b] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_3f953d279000cee1], a0.this$));
        }

        void SemiAnalyticalUnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_3b3c487cb3322691], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalUnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimator, t_SemiAnalyticalUnscentedKalmanEstimator, SemiAnalyticalUnscentedKalmanEstimator);

        void t_SemiAnalyticalUnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimator), module, "SemiAnalyticalUnscentedKalmanEstimator", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(SemiAnalyticalUnscentedKalmanEstimator(((t_SemiAnalyticalUnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
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

        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder.h"
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

            ::java::lang::Class *UserDefinedXmlTokenBuilder::class$ = NULL;
            jmethodID *UserDefinedXmlTokenBuilder::mids$ = NULL;
            bool UserDefinedXmlTokenBuilder::live$ = false;

            jclass UserDefinedXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_e5e9154f880f1aad] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedXmlTokenBuilder::UserDefinedXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::java::util::List UserDefinedXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
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
            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_UserDefinedXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedXmlTokenBuilder)[] = {
              { Py_tp_methods, t_UserDefinedXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_UserDefinedXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserDefinedXmlTokenBuilder, t_UserDefinedXmlTokenBuilder, UserDefinedXmlTokenBuilder);

            void t_UserDefinedXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedXmlTokenBuilder), &PY_TYPE_DEF(UserDefinedXmlTokenBuilder), module, "UserDefinedXmlTokenBuilder", 0);
            }

            void t_UserDefinedXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "class_", make_descriptor(UserDefinedXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "wrapfn_", make_descriptor(t_UserDefinedXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_UserDefinedXmlTokenBuilder::wrap_Object(UserDefinedXmlTokenBuilder(((t_UserDefinedXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              UserDefinedXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = UserDefinedXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args)
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
#include "org/hipparchus/linear/QRDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposer::class$ = NULL;
      jmethodID *QRDecomposer::mids$ = NULL;
      bool QRDecomposer::live$ = false;

      jclass QRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_6832546eac694082] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposer::QRDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver QRDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_6832546eac694082], a0.this$));
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
      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg);

      static PyMethodDef t_QRDecomposer__methods_[] = {
        DECLARE_METHOD(t_QRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposer)[] = {
        { Py_tp_methods, t_QRDecomposer__methods_ },
        { Py_tp_init, (void *) t_QRDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposer, t_QRDecomposer, QRDecomposer);

      void t_QRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposer), &PY_TYPE_DEF(QRDecomposer), module, "QRDecomposer", 0);
      }

      void t_QRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "class_", make_descriptor(QRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "wrapfn_", make_descriptor(t_QRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposer::initializeClass, 1)))
          return NULL;
        return t_QRDecomposer::wrap_Object(QRDecomposer(((t_QRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposer_init_(t_QRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        QRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = QRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_QRDecomposer_decompose(t_QRDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/AbstractOrbitInterpolator.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractOrbitInterpolator::mids$ = NULL;
      bool AbstractOrbitInterpolator::live$ = false;

      jclass AbstractOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2ee482a4c6f42d96] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_checkOrbitsConsistency_f72f53318f80c525] = env->getStaticMethodID(cls, "checkOrbitsConsistency", "(Ljava/util/Collection;)V");
          mids$[mid_getOutputInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_df64ba85d4130bf6] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractOrbitInterpolator::AbstractOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ee482a4c6f42d96, a0, a1, a2.this$)) {}

      void AbstractOrbitInterpolator::checkOrbitsConsistency(const ::java::util::Collection & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrbitsConsistency_f72f53318f80c525], a0.this$);
      }

      ::org::orekit::frames::Frame AbstractOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::orbits::Orbit AbstractOrbitInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_interpolate_df64ba85d4130bf6], a0.this$, a1.this$));
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
      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args);
      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self);
      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, checkOrbitsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractOrbitInterpolator, t_AbstractOrbitInterpolator, AbstractOrbitInterpolator);
      PyObject *t_AbstractOrbitInterpolator::wrap_Object(const AbstractOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractOrbitInterpolator *self = (t_AbstractOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractOrbitInterpolator), &PY_TYPE_DEF(AbstractOrbitInterpolator), module, "AbstractOrbitInterpolator", 0);
      }

      void t_AbstractOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "class_", make_descriptor(AbstractOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractOrbitInterpolator::wrap_Object(AbstractOrbitInterpolator(((t_AbstractOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractOrbitInterpolator_of_(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractOrbitInterpolator_init_(t_AbstractOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractOrbitInterpolator(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractOrbitInterpolator_checkOrbitsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(::org::orekit::orbits::AbstractOrbitInterpolator::checkOrbitsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkOrbitsConsistency", arg);
        return NULL;
      }

      static PyObject *t_AbstractOrbitInterpolator_getOutputInertialFrame(t_AbstractOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractOrbitInterpolator_interpolate(t_AbstractOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::Orbit result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(AbstractOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractOrbitInterpolator_get__parameters_(t_AbstractOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractOrbitInterpolator_get__outputInertialFrame(t_AbstractOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonPartialsObserver.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonPartialsObserver::class$ = NULL;
        jmethodID *PythonPartialsObserver::mids$ = NULL;
        bool PythonPartialsObserver::live$ = false;

        jclass PythonPartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonPartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_partialsComputed_747d586861d6528b] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPartialsObserver::PythonPartialsObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonPartialsObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonPartialsObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonPartialsObserver::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self);
        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args);
        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data);
        static PyGetSetDef t_PythonPartialsObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPartialsObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPartialsObserver__methods_[] = {
          DECLARE_METHOD(t_PythonPartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPartialsObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPartialsObserver)[] = {
          { Py_tp_methods, t_PythonPartialsObserver__methods_ },
          { Py_tp_init, (void *) t_PythonPartialsObserver_init_ },
          { Py_tp_getset, t_PythonPartialsObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPartialsObserver, t_PythonPartialsObserver, PythonPartialsObserver);

        void t_PythonPartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPartialsObserver), &PY_TYPE_DEF(PythonPartialsObserver), module, "PythonPartialsObserver", 1);
        }

        void t_PythonPartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "class_", make_descriptor(PythonPartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "wrapfn_", make_descriptor(t_PythonPartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPartialsObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonPartialsObserver_partialsComputed0 },
            { "pythonDecRef", "()V", (void *) t_PythonPartialsObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPartialsObserver::initializeClass, 1)))
            return NULL;
          return t_PythonPartialsObserver::wrap_Object(PythonPartialsObserver(((t_PythonPartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonPartialsObserver object((jobject) NULL);

          INT_CALL(object = PythonPartialsObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args)
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

        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "partialsComputed", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareComparator::class$ = NULL;
          jmethodID *IntegerLeastSquareComparator::mids$ = NULL;
          bool IntegerLeastSquareComparator::live$ = false;

          jclass IntegerLeastSquareComparator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_compare_4d9ee7b457024673] = env->getMethodID(cls, "compare", "(Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerLeastSquareComparator::IntegerLeastSquareComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          jint IntegerLeastSquareComparator::compare(const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution & a1) const
          {
            return env->callIntMethod(this$, mids$[mid_compare_4d9ee7b457024673], a0.this$, a1.this$);
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
          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareComparator__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareComparator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareComparator, compare, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareComparator)[] = {
            { Py_tp_methods, t_IntegerLeastSquareComparator__methods_ },
            { Py_tp_init, (void *) t_IntegerLeastSquareComparator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareComparator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareComparator, t_IntegerLeastSquareComparator, IntegerLeastSquareComparator);

          void t_IntegerLeastSquareComparator::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareComparator), &PY_TYPE_DEF(IntegerLeastSquareComparator), module, "IntegerLeastSquareComparator", 0);
          }

          void t_IntegerLeastSquareComparator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "class_", make_descriptor(IntegerLeastSquareComparator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "wrapfn_", make_descriptor(t_IntegerLeastSquareComparator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareComparator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareComparator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareComparator::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareComparator::wrap_Object(IntegerLeastSquareComparator(((t_IntegerLeastSquareComparator *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareComparator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareComparator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerLeastSquareComparator_init_(t_IntegerLeastSquareComparator *self, PyObject *args, PyObject *kwds)
          {
            IntegerLeastSquareComparator object((jobject) NULL);

            INT_CALL(object = IntegerLeastSquareComparator());
            self->object = object;

            return 0;
          }

          static PyObject *t_IntegerLeastSquareComparator_compare(t_IntegerLeastSquareComparator *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.compare(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "compare", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Variance::class$ = NULL;
          jmethodID *Variance::mids$ = NULL;
          bool Variance::live$ = false;

          jclass Variance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Variance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_7d2491dc61f6c936] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_2e37288d51fb7ec1] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_aggregate_193b2539f8f1ef0d] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Variance;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_69ecd18766deb58c] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Variance;");
              mids$[mid_evaluate_1c41301ff6e224e7] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_81770d1e77838f28] = env->getMethodID(cls, "evaluate", "([D[DD)D");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_2634be61548fc62b] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_evaluate_82195b7753559055] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_evaluate_70750df077661d7e] = env->getMethodID(cls, "evaluate", "([D[DDII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_b108b35ef48e27bd] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_cff1120d0d93730e] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/Variance;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Variance::Variance() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          Variance::Variance(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7d2491dc61f6c936, a0.this$)) {}

          Variance::Variance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

          Variance::Variance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_2e37288d51fb7ec1, a0, a1.this$)) {}

          void Variance::aggregate(const Variance & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_193b2539f8f1ef0d], a0.this$);
          }

          void Variance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Variance Variance::copy() const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_copy_69ecd18766deb58c]));
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1c41301ff6e224e7], a0.this$, a1);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_81770d1e77838f28], a0.this$, a1.this$, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_2634be61548fc62b], a0.this$, a1.this$, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_82195b7753559055], a0.this$, a1, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jint a3, jint a4) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_70750df077661d7e], a0.this$, a1.this$, a2, a3, a4);
          }

          jlong Variance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Variance::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Variance::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
          }

          jboolean Variance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_b108b35ef48e27bd]);
          }

          Variance Variance::withBiasCorrection(jboolean a0) const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_cff1120d0d93730e], a0));
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
        namespace moment {
          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_isBiasCorrected(t_Variance *self);
          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data);
          static PyObject *t_Variance_get__n(t_Variance *self, void *data);
          static PyObject *t_Variance_get__result(t_Variance *self, void *data);
          static PyGetSetDef t_Variance__fields_[] = {
            DECLARE_GET_FIELD(t_Variance, biasCorrected),
            DECLARE_GET_FIELD(t_Variance, n),
            DECLARE_GET_FIELD(t_Variance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Variance__methods_[] = {
            DECLARE_METHOD(t_Variance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, aggregate, METH_O),
            DECLARE_METHOD(t_Variance, clear, METH_VARARGS),
            DECLARE_METHOD(t_Variance, copy, METH_VARARGS),
            DECLARE_METHOD(t_Variance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getN, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Variance, increment, METH_VARARGS),
            DECLARE_METHOD(t_Variance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_Variance, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Variance)[] = {
            { Py_tp_methods, t_Variance__methods_ },
            { Py_tp_init, (void *) t_Variance_init_ },
            { Py_tp_getset, t_Variance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Variance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Variance, t_Variance, Variance);

          void t_Variance::install(PyObject *module)
          {
            installType(&PY_TYPE(Variance), &PY_TYPE_DEF(Variance), module, "Variance", 0);
          }

          void t_Variance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "class_", make_descriptor(Variance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "wrapfn_", make_descriptor(t_Variance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Variance::initializeClass, 1)))
              return NULL;
            return t_Variance::wrap_Object(Variance(((t_Variance *) arg)->object.this$));
          }
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Variance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Variance object((jobject) NULL);

                INT_CALL(object = Variance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Variance(a0, a1));
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

          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg)
          {
            Variance a0((jobject) NULL);

            if (!parseArg(arg, "k", Variance::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args)
          {
            Variance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Variance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 5:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jint a4;
                jdouble result;

                if (!parseArgs(args, "[D[DDII", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Variance_isBiasCorrected(t_Variance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg)
          {
            jboolean a0;
            Variance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_Variance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Variance_get__n(t_Variance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Variance_get__result(t_Variance *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MendesPavlisModel::class$ = NULL;
          jmethodID *MendesPavlisModel::mids$ = NULL;
          bool MendesPavlisModel::live$ = false;

          jclass MendesPavlisModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MendesPavlisModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_computeZenithDelay_dcd2d94aeb49e9c9] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_computeZenithDelay_61c3b5679b3be385] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_680d82503d452153] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MendesPavlisModel;");
              mids$[mid_mappingFactors_7ef12dc9276409e6] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6f55c0ac27817ed2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MendesPavlisModel::MendesPavlisModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_dcd2d94aeb49e9c9], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_61c3b5679b3be385], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List MendesPavlisModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          MendesPavlisModel MendesPavlisModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MendesPavlisModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_680d82503d452153], a0));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7ef12dc9276409e6], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MendesPavlisModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6f55c0ac27817ed2], a0, a1.this$, a2.this$));
          }

          jdouble MendesPavlisModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MendesPavlisModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self);
          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data);
          static PyGetSetDef t_MendesPavlisModel__fields_[] = {
            DECLARE_GET_FIELD(t_MendesPavlisModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MendesPavlisModel__methods_[] = {
            DECLARE_METHOD(t_MendesPavlisModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MendesPavlisModel)[] = {
            { Py_tp_methods, t_MendesPavlisModel__methods_ },
            { Py_tp_init, (void *) t_MendesPavlisModel_init_ },
            { Py_tp_getset, t_MendesPavlisModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MendesPavlisModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MendesPavlisModel, t_MendesPavlisModel, MendesPavlisModel);

          void t_MendesPavlisModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MendesPavlisModel), &PY_TYPE_DEF(MendesPavlisModel), module, "MendesPavlisModel", 0);
          }

          void t_MendesPavlisModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "class_", make_descriptor(MendesPavlisModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "wrapfn_", make_descriptor(t_MendesPavlisModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MendesPavlisModel::initializeClass, 1)))
              return NULL;
            return t_MendesPavlisModel::wrap_Object(MendesPavlisModel(((t_MendesPavlisModel *) arg)->object.this$));
          }
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MendesPavlisModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MendesPavlisModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MendesPavlisModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MendesPavlisModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MendesPavlisModel::getStandardModel(a0));
              return t_MendesPavlisModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data)
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
#include "org/orekit/rugged/utils/RoughVisibilityEstimator.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *RoughVisibilityEstimator::class$ = NULL;
        jmethodID *RoughVisibilityEstimator::mids$ = NULL;
        bool RoughVisibilityEstimator::live$ = false;

        jclass RoughVisibilityEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/RoughVisibilityEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a71eb4c5896e379d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/frames/Frame;Ljava/util/List;)V");
            mids$[mid_estimateVisibility_d34d014949a48859] = env->getMethodID(cls, "estimateVisibility", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RoughVisibilityEstimator::RoughVisibilityEstimator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::frames::Frame & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71eb4c5896e379d, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::time::AbsoluteDate RoughVisibilityEstimator::estimateVisibility(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_estimateVisibility_d34d014949a48859], a0.this$));
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
      namespace utils {
        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg);

        static PyMethodDef t_RoughVisibilityEstimator__methods_[] = {
          DECLARE_METHOD(t_RoughVisibilityEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, estimateVisibility, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RoughVisibilityEstimator)[] = {
          { Py_tp_methods, t_RoughVisibilityEstimator__methods_ },
          { Py_tp_init, (void *) t_RoughVisibilityEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RoughVisibilityEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RoughVisibilityEstimator, t_RoughVisibilityEstimator, RoughVisibilityEstimator);

        void t_RoughVisibilityEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(RoughVisibilityEstimator), &PY_TYPE_DEF(RoughVisibilityEstimator), module, "RoughVisibilityEstimator", 0);
        }

        void t_RoughVisibilityEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "class_", make_descriptor(RoughVisibilityEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "wrapfn_", make_descriptor(t_RoughVisibilityEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RoughVisibilityEstimator::initializeClass, 1)))
            return NULL;
          return t_RoughVisibilityEstimator::wrap_Object(RoughVisibilityEstimator(((t_RoughVisibilityEstimator *) arg)->object.this$));
        }
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RoughVisibilityEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          RoughVisibilityEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkK", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = RoughVisibilityEstimator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimateVisibility(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateVisibility", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/utils/ElevationMask.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationDetector::class$ = NULL;
        jmethodID *FieldElevationDetector::mids$ = NULL;
        bool FieldElevationDetector::live$ = false;

        jclass FieldElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3d7271a8ea288af2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_28fe72372b8ccb78] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevationMask_a2b53d9e5ddb8a2d] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_dff5885c2c873297] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_d9410499a2583f14] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_e17d4157ae504252] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_d52caa8299348415] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withElevationMask_3cb4267e55a79185] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_withRefraction_81ee95c06209bf51] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/FieldElevationDetector;");
            mids$[mid_create_3709f95b71d31737] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3d7271a8ea288af2, a0.this$, a1.this$)) {}

        FieldElevationDetector::FieldElevationDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_28fe72372b8ccb78, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::utils::ElevationMask FieldElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_a2b53d9e5ddb8a2d]));
        }

        jdouble FieldElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_dff5885c2c873297]);
        }

        ::org::orekit::models::AtmosphericRefractionModel FieldElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_d9410499a2583f14]));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_e17d4157ae504252]));
        }

        FieldElevationDetector FieldElevationDetector::withConstantElevation(jdouble a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_d52caa8299348415], a0));
        }

        FieldElevationDetector FieldElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_3cb4267e55a79185], a0.this$));
        }

        FieldElevationDetector FieldElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return FieldElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_81ee95c06209bf51], a0.this$));
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
        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args);
        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args);
        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self);
        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data);
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data);
        static PyGetSetDef t_FieldElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_FieldElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_FieldElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_FieldElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_FieldElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationDetector)[] = {
          { Py_tp_methods, t_FieldElevationDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationDetector_init_ },
          { Py_tp_getset, t_FieldElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationDetector, t_FieldElevationDetector, FieldElevationDetector);
        PyObject *t_FieldElevationDetector::wrap_Object(const FieldElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationDetector *self = (t_FieldElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationDetector), &PY_TYPE_DEF(FieldElevationDetector), module, "FieldElevationDetector", 0);
        }

        void t_FieldElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "class_", make_descriptor(FieldElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "wrapfn_", make_descriptor(t_FieldElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationDetector::wrap_Object(FieldElevationDetector(((t_FieldElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationDetector_of_(t_FieldElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationDetector_init_(t_FieldElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationDetector_g(t_FieldElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationDetector_getElevationMask(t_FieldElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getMinElevation(t_FieldElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldElevationDetector_getRefractionModel(t_FieldElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_getTopocentricFrame(t_FieldElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_FieldElevationDetector_withConstantElevation(t_FieldElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withElevationMask(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationDetector_withRefraction(t_FieldElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          FieldElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_FieldElevationDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_FieldElevationDetector_get__parameters_(t_FieldElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationDetector_get__elevationMask(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__minElevation(t_FieldElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldElevationDetector_get__refractionModel(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_FieldElevationDetector_get__topocentricFrame(t_FieldElevationDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Header::class$ = NULL;
              jmethodID *SsrIm201Header::mids$ = NULL;
              bool SsrIm201Header::live$ = false;

              jclass SsrIm201Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfIonosphericLayers_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfIonosphericLayers", "()I");
                  mids$[mid_getVtecQualityIndicator_dff5885c2c873297] = env->getMethodID(cls, "getVtecQualityIndicator", "()D");
                  mids$[mid_setNumberOfIonosphericLayers_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfIonosphericLayers", "(I)V");
                  mids$[mid_setVtecQualityIndicator_17db3a65980d3441] = env->getMethodID(cls, "setVtecQualityIndicator", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Header::SsrIm201Header() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint SsrIm201Header::getNumberOfIonosphericLayers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfIonosphericLayers_570ce0828f81a2c1]);
              }

              jdouble SsrIm201Header::getVtecQualityIndicator() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getVtecQualityIndicator_dff5885c2c873297]);
              }

              void SsrIm201Header::setNumberOfIonosphericLayers(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfIonosphericLayers_99803b0791f320ff], a0);
              }

              void SsrIm201Header::setVtecQualityIndicator(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setVtecQualityIndicator_17db3a65980d3441], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Header, numberOfIonosphericLayers),
                DECLARE_GETSET_FIELD(t_SsrIm201Header, vtecQualityIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Header__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, getNumberOfIonosphericLayers, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, getVtecQualityIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, setNumberOfIonosphericLayers, METH_O),
                DECLARE_METHOD(t_SsrIm201Header, setVtecQualityIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Header)[] = {
                { Py_tp_methods, t_SsrIm201Header__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Header_init_ },
                { Py_tp_getset, t_SsrIm201Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIm201Header, t_SsrIm201Header, SsrIm201Header);

              void t_SsrIm201Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Header), &PY_TYPE_DEF(SsrIm201Header), module, "SsrIm201Header", 0);
              }

              void t_SsrIm201Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "class_", make_descriptor(SsrIm201Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "wrapfn_", make_descriptor(t_SsrIm201Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Header::wrap_Object(SsrIm201Header(((t_SsrIm201Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Header object((jobject) NULL);

                INT_CALL(object = SsrIm201Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfIonosphericLayers(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfIonosphericLayers", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setVtecQualityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setVtecQualityIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfIonosphericLayers(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfIonosphericLayers", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setVtecQualityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "vtecQualityIndicator", arg);
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
#include "org/orekit/data/PythonSeriesTerm.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonSeriesTerm::class$ = NULL;
      jmethodID *PythonSeriesTerm::mids$ = NULL;
      bool PythonSeriesTerm::live$ = false;

      jclass PythonSeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonSeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_argument_bea6276a59f3cdf6] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_2748c478a8009c37] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_bea6276a59f3cdf6] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argumentDerivative_2748c478a8009c37] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSeriesTerm::PythonSeriesTerm() : ::org::orekit::data::SeriesTerm(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonSeriesTerm::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonSeriesTerm::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonSeriesTerm::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self);
      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args);
      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data);
      static PyGetSetDef t_PythonSeriesTerm__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSeriesTerm, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSeriesTerm__methods_[] = {
        DECLARE_METHOD(t_PythonSeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSeriesTerm, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSeriesTerm)[] = {
        { Py_tp_methods, t_PythonSeriesTerm__methods_ },
        { Py_tp_init, (void *) t_PythonSeriesTerm_init_ },
        { Py_tp_getset, t_PythonSeriesTerm__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSeriesTerm)[] = {
        &PY_TYPE_DEF(::org::orekit::data::SeriesTerm),
        NULL
      };

      DEFINE_TYPE(PythonSeriesTerm, t_PythonSeriesTerm, PythonSeriesTerm);

      void t_PythonSeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSeriesTerm), &PY_TYPE_DEF(PythonSeriesTerm), module, "PythonSeriesTerm", 1);
      }

      void t_PythonSeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "class_", make_descriptor(PythonSeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "wrapfn_", make_descriptor(t_PythonSeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSeriesTerm::initializeClass);
        JNINativeMethod methods[] = {
          { "argument", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argument0 },
          { "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argument1 },
          { "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argumentDerivative2 },
          { "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argumentDerivative3 },
          { "pythonDecRef", "()V", (void *) t_PythonSeriesTerm_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSeriesTerm::initializeClass, 1)))
          return NULL;
        return t_PythonSeriesTerm::wrap_Object(PythonSeriesTerm(((t_PythonSeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds)
      {
        PythonSeriesTerm object((jobject) NULL);

        INT_CALL(object = PythonSeriesTerm());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args)
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

      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argument", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argument", result);
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

      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argumentDerivative", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argumentDerivative", result);
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

      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/GridAxis.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *GridAxis::class$ = NULL;
        jmethodID *GridAxis::mids$ = NULL;
        bool GridAxis::live$ = false;

        jclass GridAxis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/GridAxis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_338593130772139f] = env->getMethodID(cls, "<init>", "([DI)V");
            mids$[mid_getN_570ce0828f81a2c1] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_interpolationIndex_4508852644846c83] = env->getMethodID(cls, "interpolationIndex", "(D)I");
            mids$[mid_node_46f85b53d9aedd96] = env->getMethodID(cls, "node", "(I)D");
            mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GridAxis::GridAxis(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_338593130772139f, a0.this$, a1)) {}

        jint GridAxis::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_570ce0828f81a2c1]);
        }

        jint GridAxis::interpolationIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_interpolationIndex_4508852644846c83], a0);
        }

        jdouble GridAxis::node(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_node_46f85b53d9aedd96], a0);
        }

        jint GridAxis::size() const
        {
          return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
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
        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GridAxis_getN(t_GridAxis *self);
        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_size(t_GridAxis *self);
        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data);
        static PyGetSetDef t_GridAxis__fields_[] = {
          DECLARE_GET_FIELD(t_GridAxis, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GridAxis__methods_[] = {
          DECLARE_METHOD(t_GridAxis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, getN, METH_NOARGS),
          DECLARE_METHOD(t_GridAxis, interpolationIndex, METH_O),
          DECLARE_METHOD(t_GridAxis, node, METH_O),
          DECLARE_METHOD(t_GridAxis, size, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridAxis)[] = {
          { Py_tp_methods, t_GridAxis__methods_ },
          { Py_tp_init, (void *) t_GridAxis_init_ },
          { Py_tp_getset, t_GridAxis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridAxis)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridAxis, t_GridAxis, GridAxis);

        void t_GridAxis::install(PyObject *module)
        {
          installType(&PY_TYPE(GridAxis), &PY_TYPE_DEF(GridAxis), module, "GridAxis", 0);
        }

        void t_GridAxis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "class_", make_descriptor(GridAxis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "wrapfn_", make_descriptor(t_GridAxis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridAxis::initializeClass, 1)))
            return NULL;
          return t_GridAxis::wrap_Object(GridAxis(((t_GridAxis *) arg)->object.this$));
        }
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridAxis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          GridAxis object((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            INT_CALL(object = GridAxis(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GridAxis_getN(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.interpolationIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolationIndex", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.node(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "node", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_size(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.size());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticField::class$ = NULL;
        jmethodID *GeoMagneticField::mids$ = NULL;
        bool GeoMagneticField::live$ = false;

        jclass GeoMagneticField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_calculateField_3b6e25dbcc3ddd45] = env->getMethodID(cls, "calculateField", "(DDD)Lorg/orekit/models/earth/GeoMagneticElements;");
            mids$[mid_getDecimalYear_3d407e6a8cf9e8ca] = env->getStaticMethodID(cls, "getDecimalYear", "(III)D");
            mids$[mid_getEpoch_dff5885c2c873297] = env->getMethodID(cls, "getEpoch", "()D");
            mids$[mid_getModelName_11b109bd155ca898] = env->getMethodID(cls, "getModelName", "()Ljava/lang/String;");
            mids$[mid_supportsTimeTransform_b108b35ef48e27bd] = env->getMethodID(cls, "supportsTimeTransform", "()Z");
            mids$[mid_transformModel_11ad1d91265636f7] = env->getMethodID(cls, "transformModel", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_transformModel_39245caac2ba5683] = env->getMethodID(cls, "transformModel", "(Lorg/orekit/models/earth/GeoMagneticField;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_validFrom_dff5885c2c873297] = env->getMethodID(cls, "validFrom", "()D");
            mids$[mid_validTo_dff5885c2c873297] = env->getMethodID(cls, "validTo", "()D");
            mids$[mid_setMainFieldCoefficients_d472661d1e6c4e58] = env->getMethodID(cls, "setMainFieldCoefficients", "(IIDD)V");
            mids$[mid_setSecularVariationCoefficients_d472661d1e6c4e58] = env->getMethodID(cls, "setSecularVariationCoefficients", "(IIDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticElements GeoMagneticField::calculateField(jdouble a0, jdouble a1, jdouble a2) const
        {
          return ::org::orekit::models::earth::GeoMagneticElements(env->callObjectMethod(this$, mids$[mid_calculateField_3b6e25dbcc3ddd45], a0, a1, a2));
        }

        jdouble GeoMagneticField::getDecimalYear(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDecimalYear_3d407e6a8cf9e8ca], a0, a1, a2);
        }

        jdouble GeoMagneticField::getEpoch() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpoch_dff5885c2c873297]);
        }

        ::java::lang::String GeoMagneticField::getModelName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModelName_11b109bd155ca898]));
        }

        jboolean GeoMagneticField::supportsTimeTransform() const
        {
          return env->callBooleanMethod(this$, mids$[mid_supportsTimeTransform_b108b35ef48e27bd]);
        }

        GeoMagneticField GeoMagneticField::transformModel(jdouble a0) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_11ad1d91265636f7], a0));
        }

        GeoMagneticField GeoMagneticField::transformModel(const GeoMagneticField & a0, jdouble a1) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_39245caac2ba5683], a0.this$, a1));
        }

        jdouble GeoMagneticField::validFrom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validFrom_dff5885c2c873297]);
        }

        jdouble GeoMagneticField::validTo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validTo_dff5885c2c873297]);
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
        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data);
        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data);
        static PyGetSetDef t_GeoMagneticField__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticField, epoch),
          DECLARE_GET_FIELD(t_GeoMagneticField, modelName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticField__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, calculateField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, getDecimalYear, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, getModelName, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, supportsTimeTransform, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, transformModel, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, validFrom, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, validTo, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticField)[] = {
          { Py_tp_methods, t_GeoMagneticField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticField, t_GeoMagneticField, GeoMagneticField);

        void t_GeoMagneticField::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticField), &PY_TYPE_DEF(GeoMagneticField), module, "GeoMagneticField", 0);
        }

        void t_GeoMagneticField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "class_", make_descriptor(GeoMagneticField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "wrapfn_", make_descriptor(t_GeoMagneticField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticField::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticField::wrap_Object(GeoMagneticField(((t_GeoMagneticField *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ::org::orekit::models::earth::GeoMagneticElements result((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.calculateField(a0, a1, a2));
            return ::org::orekit::models::earth::t_GeoMagneticElements::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "calculateField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticField::getDecimalYear(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDecimalYear", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpoch());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getModelName());
          return j2p(result);
        }

        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.supportsTimeTransform());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.transformModel(a0));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              GeoMagneticField a0((jobject) NULL);
              jdouble a1;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "kD", GeoMagneticField::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformModel(a0, a1));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformModel", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validFrom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validTo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpoch());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getModelName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiTheta.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiTheta::class$ = NULL;
          jmethodID *JacobiTheta::mids$ = NULL;
          bool JacobiTheta::live$ = false;

          jclass JacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getQ_dff5885c2c873297] = env->getMethodID(cls, "getQ", "()D");
              mids$[mid_values_1e18df667ca04dbb] = env->getMethodID(cls, "values", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/Theta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JacobiTheta::JacobiTheta(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          jdouble JacobiTheta::getQ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ_dff5885c2c873297]);
          }

          ::org::hipparchus::special::elliptic::jacobi::Theta JacobiTheta::values(const ::org::hipparchus::complex::Complex & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::Theta(env->callObjectMethod(this$, mids$[mid_values_1e18df667ca04dbb], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self);
          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg);
          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data);
          static PyGetSetDef t_JacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiTheta, q),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiTheta__methods_[] = {
            DECLARE_METHOD(t_JacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_JacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiTheta)[] = {
            { Py_tp_methods, t_JacobiTheta__methods_ },
            { Py_tp_init, (void *) t_JacobiTheta_init_ },
            { Py_tp_getset, t_JacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiTheta, t_JacobiTheta, JacobiTheta);

          void t_JacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiTheta), &PY_TYPE_DEF(JacobiTheta), module, "JacobiTheta", 0);
          }

          void t_JacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "class_", make_descriptor(JacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "wrapfn_", make_descriptor(t_JacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiTheta::initializeClass, 1)))
              return NULL;
            return t_JacobiTheta::wrap_Object(JacobiTheta(((t_JacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = JacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::org::hipparchus::special::elliptic::jacobi::Theta result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_Theta::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }

          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}

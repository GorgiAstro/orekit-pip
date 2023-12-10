#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldEquinoctialOrbit::class$ = NULL;
      jmethodID *FieldEquinoctialOrbit::mids$ = NULL;
      bool FieldEquinoctialOrbit::live$ = false;

      jclass FieldEquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldEquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1cbcb2601e7d1334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_4bcbd36786bb8c5b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/EquinoctialOrbit;)V");
          mids$[mid_init$_726dc2bf140240a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a1d831f131e24bc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_960ad4c09c9f5686] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b6f9c400578e2bc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_2a14969bf128ed41] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_4e49f6ed48591ef2] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_eba8e72a22c984ac] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_eba8e72a22c984ac] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_eba8e72a22c984ac] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_eba8e72a22c984ac] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_eba8e72a22c984ac] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_aefb08df7a137c22] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_aefb08df7a137c22] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_eba8e72a22c984ac] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_eba8e72a22c984ac] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_eba8e72a22c984ac] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_b108b35ef48e27bd] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_c5eb5fa07f240484] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_2e616af03dcaacde] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_ac5fff805c5ae8d8] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_toOrbit_28c4204b9c4d2027] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_716f50c86ffc8da7] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_1cbcb2601e7d1334, a0.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::EquinoctialOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_4bcbd36786bb8c5b, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_726dc2bf140240a1, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_a1d831f131e24bc0, a0.this$, a1.this$, a2.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_960ad4c09c9f5686, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b6f9c400578e2bc2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_2a14969bf128ed41, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldEquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_4e49f6ed48591ef2], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_eba8e72a22c984ac]));
      }

      ::org::orekit::orbits::PositionAngleType FieldEquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_aefb08df7a137c22], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_aefb08df7a137c22], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_eba8e72a22c984ac]));
      }

      ::org::orekit::orbits::OrbitType FieldEquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean FieldEquinoctialOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_b108b35ef48e27bd]);
      }

      jboolean FieldEquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::removeRates() const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_c5eb5fa07f240484]));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_2e616af03dcaacde], a0));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_ac5fff805c5ae8d8], a0.this$));
      }

      ::org::orekit::orbits::EquinoctialOrbit FieldEquinoctialOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_28c4204b9c4d2027]));
      }

      ::java::lang::String FieldEquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args);
      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data);
      static PyGetSetDef t_FieldEquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, type),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldEquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquinoctialOrbit)[] = {
        { Py_tp_methods, t_FieldEquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldEquinoctialOrbit_init_ },
        { Py_tp_getset, t_FieldEquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldEquinoctialOrbit, t_FieldEquinoctialOrbit, FieldEquinoctialOrbit);
      PyObject *t_FieldEquinoctialOrbit::wrap_Object(const FieldEquinoctialOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquinoctialOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquinoctialOrbit), &PY_TYPE_DEF(FieldEquinoctialOrbit), module, "FieldEquinoctialOrbit", 0);
      }

      void t_FieldEquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "class_", make_descriptor(FieldEquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "wrapfn_", make_descriptor(t_FieldEquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldEquinoctialOrbit::wrap_Object(FieldEquinoctialOrbit(((t_FieldEquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::EquinoctialOrbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::EquinoctialOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self)
      {
        FieldEquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonStartStopEventsTrigger::class$ = NULL;
          jmethodID *PythonStartStopEventsTrigger::mids$ = NULL;
          bool PythonStartStopEventsTrigger::live$ = false;

          jclass PythonStartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e90d7c371515b67f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertStartDetector_904dccaacafa0db1] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_904dccaacafa0db1] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStartStopEventsTrigger::PythonStartStopEventsTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0, const ::org::orekit::propagation::events::AbstractDetector & a1) : ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger(env->newObject(initializeClass, &mids$, mid_init$_e90d7c371515b67f, a0.this$, a1.this$)) {}

          void PythonStartStopEventsTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonStartStopEventsTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonStartStopEventsTrigger::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self);
          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data);
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_PythonStartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, self),
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStartStopEventsTrigger)[] = {
            { Py_tp_methods, t_PythonStartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonStartStopEventsTrigger_init_ },
            { Py_tp_getset, t_PythonStartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger),
            NULL
          };

          DEFINE_TYPE(PythonStartStopEventsTrigger, t_PythonStartStopEventsTrigger, PythonStartStopEventsTrigger);
          PyObject *t_PythonStartStopEventsTrigger::wrap_Object(const PythonStartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonStartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonStartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStartStopEventsTrigger), &PY_TYPE_DEF(PythonStartStopEventsTrigger), module, "PythonStartStopEventsTrigger", 1);
          }

          void t_PythonStartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "class_", make_descriptor(PythonStartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "wrapfn_", make_descriptor(t_PythonStartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStartStopEventsTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStartDetector0 },
              { "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStopDetector1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonStartStopEventsTrigger_getParametersDrivers2 },
              { "pythonDecRef", "()V", (void *) t_PythonStartStopEventsTrigger_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonStartStopEventsTrigger::wrap_Object(PythonStartStopEventsTrigger(((t_PythonStartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::AbstractDetector a1((jobject) NULL);
            PyTypeObject **p1;
            PythonStartStopEventsTrigger object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::AbstractDetector::initializeClass, ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonStartStopEventsTrigger(a0, a1));
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

          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStartDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStartDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStopDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStopDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_492808a339bfa35f]);
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

          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data)
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
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data)
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
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStream::class$ = NULL;
    jmethodID *InputStream::mids$ = NULL;
    bool InputStream::live$ = false;

    jclass InputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_available_570ce0828f81a2c1] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_99803b0791f320ff] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_b108b35ef48e27bd] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullInputStream_51fdc45647b8e866] = env->getStaticMethodID(cls, "nullInputStream", "()Ljava/io/InputStream;");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_5702323b606d072b] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_619434785725cc72] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readAllBytes_d1c0cd497c1897cd] = env->getMethodID(cls, "readAllBytes", "()[B");
        mids$[mid_readNBytes_7f79e47f12cfba98] = env->getMethodID(cls, "readNBytes", "(I)[B");
        mids$[mid_readNBytes_619434785725cc72] = env->getMethodID(cls, "readNBytes", "([BII)I");
        mids$[mid_reset_0fa09c18fee449d5] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_02b241598e254a3f] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_f60a6bdc9571a688] = env->getMethodID(cls, "transferTo", "(Ljava/io/OutputStream;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStream::InputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    jint InputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_570ce0828f81a2c1]);
    }

    void InputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void InputStream::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_99803b0791f320ff], a0);
    }

    jboolean InputStream::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_b108b35ef48e27bd]);
    }

    InputStream InputStream::nullInputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return InputStream(env->callStaticObjectMethod(cls, mids$[mid_nullInputStream_51fdc45647b8e866]));
    }

    jint InputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint InputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_5702323b606d072b], a0.this$);
    }

    jint InputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_619434785725cc72], a0.this$, a1, a2);
    }

    JArray< jbyte > InputStream::readAllBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readAllBytes_d1c0cd497c1897cd]));
    }

    JArray< jbyte > InputStream::readNBytes(jint a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readNBytes_7f79e47f12cfba98], a0));
    }

    jint InputStream::readNBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_readNBytes_619434785725cc72], a0.this$, a1, a2);
    }

    void InputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0fa09c18fee449d5]);
    }

    jlong InputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_02b241598e254a3f], a0);
    }

    jlong InputStream::transferTo(const ::java::io::OutputStream & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_f60a6bdc9571a688], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStream_available(t_InputStream *self);
    static PyObject *t_InputStream_close(t_InputStream *self);
    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_markSupported(t_InputStream *self);
    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type);
    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_readAllBytes(t_InputStream *self);
    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_reset(t_InputStream *self);
    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg);

    static PyMethodDef t_InputStream__methods_[] = {
      DECLARE_METHOD(t_InputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, available, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, mark, METH_O),
      DECLARE_METHOD(t_InputStream, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, nullInputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_InputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, readAllBytes, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, readNBytes, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, skip, METH_O),
      DECLARE_METHOD(t_InputStream, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStream)[] = {
      { Py_tp_methods, t_InputStream__methods_ },
      { Py_tp_init, (void *) t_InputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(InputStream, t_InputStream, InputStream);

    void t_InputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStream), &PY_TYPE_DEF(InputStream), module, "InputStream", 0);
    }

    void t_InputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "class_", make_descriptor(InputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "wrapfn_", make_descriptor(t_InputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStream::initializeClass, 1)))
        return NULL;
      return t_InputStream::wrap_Object(InputStream(((t_InputStream *) arg)->object.this$));
    }
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds)
    {
      InputStream object((jobject) NULL);

      INT_CALL(object = InputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_InputStream_available(t_InputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.available());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_InputStream_close(t_InputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_InputStream_markSupported(t_InputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type)
    {
      InputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::InputStream::nullInputStream());
      return t_InputStream::wrap_Object(result);
    }

    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_InputStream_readAllBytes(t_InputStream *self)
    {
      JArray< jbyte > result((jobject) NULL);
      OBJ_CALL(result = self->object.readAllBytes());
      return result.wrap();
    }

    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.readNBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.readNBytes(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readNBytes", args);
      return NULL;
    }

    static PyObject *t_InputStream_reset(t_InputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3b483c7f2fc93c86] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_194bff03a32ceae7] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_acd6f33dacb379ff] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(const ::java::lang::String & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_3b483c7f2fc93c86, a0.this$, a1.this$, a2)) {}

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
              }

              jlong PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
              }

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), module, "PythonAbstractShortTermEncounter1DNumerical2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0 },
                  { "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(((t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                jint a2;
                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "skI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(a0, a1, a2));
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

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::FieldUnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOOi", o0, o1, o2, o3, o4, o5, (int) a6);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                Py_DECREF(o5);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_UnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::UnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "dddddOi", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4, o5, (int) a6);
                Py_DECREF(o5);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
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

              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data)
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
#include "org/orekit/errors/OrekitIOException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIOException::class$ = NULL;
      jmethodID *OrekitIOException::mids$ = NULL;
      bool OrekitIOException::live$ = false;

      jclass OrekitIOException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIOException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIOException::OrekitIOException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIOException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitIOException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitIOException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIOException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable OrekitIOException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data);
      static PyGetSetDef t_OrekitIOException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIOException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIOException, message),
        DECLARE_GET_FIELD(t_OrekitIOException, parts),
        DECLARE_GET_FIELD(t_OrekitIOException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIOException__methods_[] = {
        DECLARE_METHOD(t_OrekitIOException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIOException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIOException)[] = {
        { Py_tp_methods, t_OrekitIOException__methods_ },
        { Py_tp_init, (void *) t_OrekitIOException_init_ },
        { Py_tp_getset, t_OrekitIOException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIOException)[] = {
        &PY_TYPE_DEF(::java::io::IOException),
        NULL
      };

      DEFINE_TYPE(OrekitIOException, t_OrekitIOException, OrekitIOException);

      void t_OrekitIOException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIOException), &PY_TYPE_DEF(OrekitIOException), module, "OrekitIOException", 0);
      }

      void t_OrekitIOException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "class_", make_descriptor(OrekitIOException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "wrapfn_", make_descriptor(t_OrekitIOException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIOException::initializeClass, 1)))
          return NULL;
        return t_OrekitIOException::wrap_Object(OrekitIOException(((t_OrekitIOException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIOException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIOException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIOException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *TimeSystem::class$ = NULL;
      jmethodID *TimeSystem::mids$ = NULL;
      bool TimeSystem::live$ = false;
      TimeSystem *TimeSystem::BEIDOU = NULL;
      TimeSystem *TimeSystem::GALILEO = NULL;
      TimeSystem *TimeSystem::GLONASS = NULL;
      TimeSystem *TimeSystem::GMT = NULL;
      TimeSystem *TimeSystem::GPS = NULL;
      TimeSystem *TimeSystem::IRNSS = NULL;
      TimeSystem *TimeSystem::QZSS = NULL;
      TimeSystem *TimeSystem::SBAS = NULL;
      TimeSystem *TimeSystem::TAI = NULL;
      TimeSystem *TimeSystem::UNKNOWN = NULL;
      TimeSystem *TimeSystem::UTC = NULL;

      jclass TimeSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/TimeSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_11b109bd155ca898] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getTimeScale_1598586664182696] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_parseOneLetterCode_2455d5b96aa125d5] = env->getStaticMethodID(cls, "parseOneLetterCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTimeSystem_2455d5b96aa125d5] = env->getStaticMethodID(cls, "parseTimeSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTwoLettersCode_2455d5b96aa125d5] = env->getStaticMethodID(cls, "parseTwoLettersCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_valueOf_2455d5b96aa125d5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_values_9188c62a7e6b3007] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/TimeSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new TimeSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/TimeSystem;"));
          GALILEO = new TimeSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/TimeSystem;"));
          GLONASS = new TimeSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/TimeSystem;"));
          GMT = new TimeSystem(env->getStaticObjectField(cls, "GMT", "Lorg/orekit/gnss/TimeSystem;"));
          GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/TimeSystem;"));
          IRNSS = new TimeSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/TimeSystem;"));
          QZSS = new TimeSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/TimeSystem;"));
          SBAS = new TimeSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/TimeSystem;"));
          TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/gnss/TimeSystem;"));
          UNKNOWN = new TimeSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/gnss/TimeSystem;"));
          UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/gnss/TimeSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TimeSystem::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_11b109bd155ca898]));
      }

      ::org::orekit::time::TimeScale TimeSystem::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_1598586664182696], a0.this$));
      }

      TimeSystem TimeSystem::parseOneLetterCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseOneLetterCode_2455d5b96aa125d5], a0.this$));
      }

      TimeSystem TimeSystem::parseTimeSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTimeSystem_2455d5b96aa125d5], a0.this$));
      }

      TimeSystem TimeSystem::parseTwoLettersCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTwoLettersCode_2455d5b96aa125d5], a0.this$));
      }

      TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2455d5b96aa125d5], a0.this$));
      }

      JArray< TimeSystem > TimeSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_9188c62a7e6b3007]));
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
      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self);
      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg);
      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeSystem_values(PyTypeObject *type);
      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data);
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
      static PyGetSetDef t_TimeSystem__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSystem, key),
        DECLARE_GET_FIELD(t_TimeSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSystem__methods_[] = {
        DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_TimeSystem, getTimeScale, METH_O),
        DECLARE_METHOD(t_TimeSystem, parseOneLetterCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTimeSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTwoLettersCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
        { Py_tp_methods, t_TimeSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
      PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
      }

      void t_TimeSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "BEIDOU", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GALILEO", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GLONASS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "IRNSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "QZSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SBAS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UNKNOWN", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UNKNOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
      }

      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
          return NULL;
        return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
      }
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseOneLetterCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseOneLetterCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTimeSystem(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTimeSystem", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTwoLettersCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTwoLettersCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::valueOf(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_TimeSystem_values(PyTypeObject *type)
      {
        JArray< TimeSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::values());
        return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
      }
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/LoessInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LoessInterpolator::class$ = NULL;
        jmethodID *LoessInterpolator::mids$ = NULL;
        bool LoessInterpolator::live$ = false;
        jdouble LoessInterpolator::DEFAULT_ACCURACY = (jdouble) 0;
        jdouble LoessInterpolator::DEFAULT_BANDWIDTH = (jdouble) 0;
        jint LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS = (jint) 0;

        jclass LoessInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LoessInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_98483f586918b5b8] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_interpolate_3eacf1659c4c06b1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_smooth_96bbba26ca51c0d1] = env->getMethodID(cls, "smooth", "([D[D)[D");
            mids$[mid_smooth_b3ff9f9f04cc80d3] = env->getMethodID(cls, "smooth", "([D[D[D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ACCURACY");
            DEFAULT_BANDWIDTH = env->getStaticDoubleField(cls, "DEFAULT_BANDWIDTH");
            DEFAULT_ROBUSTNESS_ITERS = env->getStaticIntField(cls, "DEFAULT_ROBUSTNESS_ITERS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LoessInterpolator::LoessInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

        LoessInterpolator::LoessInterpolator(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_98483f586918b5b8, a0, a1, a2)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LoessInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3eacf1659c4c06b1], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_96bbba26ca51c0d1], a0.this$, a1.this$));
        }

        JArray< jdouble > LoessInterpolator::smooth(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_smooth_b3ff9f9f04cc80d3], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args);
        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args);

        static PyMethodDef t_LoessInterpolator__methods_[] = {
          DECLARE_METHOD(t_LoessInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LoessInterpolator, interpolate, METH_VARARGS),
          DECLARE_METHOD(t_LoessInterpolator, smooth, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LoessInterpolator)[] = {
          { Py_tp_methods, t_LoessInterpolator__methods_ },
          { Py_tp_init, (void *) t_LoessInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LoessInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LoessInterpolator, t_LoessInterpolator, LoessInterpolator);

        void t_LoessInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LoessInterpolator), &PY_TYPE_DEF(LoessInterpolator), module, "LoessInterpolator", 0);
        }

        void t_LoessInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "class_", make_descriptor(LoessInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "wrapfn_", make_descriptor(t_LoessInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(LoessInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ACCURACY", make_descriptor(LoessInterpolator::DEFAULT_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_BANDWIDTH", make_descriptor(LoessInterpolator::DEFAULT_BANDWIDTH));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LoessInterpolator), "DEFAULT_ROBUSTNESS_ITERS", make_descriptor(LoessInterpolator::DEFAULT_ROBUSTNESS_ITERS));
        }

        static PyObject *t_LoessInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LoessInterpolator::initializeClass, 1)))
            return NULL;
          return t_LoessInterpolator::wrap_Object(LoessInterpolator(((t_LoessInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LoessInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LoessInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LoessInterpolator_init_(t_LoessInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LoessInterpolator object((jobject) NULL);

              INT_CALL(object = LoessInterpolator());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = LoessInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              LoessInterpolator object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = LoessInterpolator(a0, a1, a2));
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

        static PyObject *t_LoessInterpolator_interpolate(t_LoessInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }

        static PyObject *t_LoessInterpolator_smooth(t_LoessInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1));
                return result.wrap();
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.smooth(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "smooth", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContribution::class$ = NULL;
            jmethodID *AbstractGaussianContribution::mids$ = NULL;
            bool AbstractGaussianContribution::live$ = false;

            jclass AbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_getLLimits_7442885516ff2293] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_04690aaa2b6db52c] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getMeanElementRate_5ce81bda82dfab26] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_2fdd4ae6d3a08d37] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;DDLorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext;[D)[D");
                mids$[mid_getParametersDriversWithoutMu_2afa36052df4765d] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5dbca2d049b16b82], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_c0df8831049775b0], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743], a0.this$, a1.this$, a2.this$));
            }

            void AbstractGaussianContribution::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_3cff7c75ea06698c], a0.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9748e634dd1c969], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda], a0.this$, a1.this$);
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
            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self);
            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_AbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContribution, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, init, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_AbstractGaussianContribution, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContribution)[] = {
              { Py_tp_methods, t_AbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContribution, t_AbstractGaussianContribution, AbstractGaussianContribution);

            void t_AbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContribution), &PY_TYPE_DEF(AbstractGaussianContribution), module, "AbstractGaussianContribution", 0);
            }

            void t_AbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "class_", make_descriptor(AbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "wrapfn_", make_descriptor(t_AbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContribution::wrap_Object(AbstractGaussianContribution(((t_AbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
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
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
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
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg)
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

            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Scheduler::class$ = NULL;
          jmethodID *Scheduler::mids$ = NULL;
          bool Scheduler::live$ = false;

          jclass Scheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Scheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_e61f6829e4c9c5f5] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_63a5a16953d5c5b8] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet Scheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_e61f6829e4c9c5f5], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder Scheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_63a5a16953d5c5b8]));
          }

          void Scheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_a9e71d848b81c8f8], a0.this$, a1.this$);
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
          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg);
          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self);
          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data);
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data);
          static PyGetSetDef t_Scheduler__fields_[] = {
            DECLARE_GET_FIELD(t_Scheduler, builder),
            DECLARE_GET_FIELD(t_Scheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Scheduler__methods_[] = {
            DECLARE_METHOD(t_Scheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_Scheduler, generate, METH_O),
            DECLARE_METHOD(t_Scheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_Scheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Scheduler)[] = {
            { Py_tp_methods, t_Scheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Scheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Scheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Scheduler, t_Scheduler, Scheduler);
          PyObject *t_Scheduler::wrap_Object(const Scheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Scheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Scheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(Scheduler), &PY_TYPE_DEF(Scheduler), module, "Scheduler", 0);
          }

          void t_Scheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "class_", make_descriptor(Scheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "wrapfn_", make_descriptor(t_Scheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Scheduler::initializeClass, 1)))
              return NULL;
            return t_Scheduler::wrap_Object(Scheduler(((t_Scheduler *) arg)->object.this$));
          }
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Scheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *SpinStabilizedKey::class$ = NULL;
              jmethodID *SpinStabilizedKey::mids$ = NULL;
              bool SpinStabilizedKey::live$ = false;
              SpinStabilizedKey *SpinStabilizedKey::COMMENT = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PER = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PHASE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_B = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DIR = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_B = NULL;

              jclass SpinStabilizedKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_ca76c2515a12c56a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;)Z");
                  mids$[mid_valueOf_43a66864eb4c6c52] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");
                  mids$[mid_values_5065a5c731cb266d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new SpinStabilizedKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PER = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PER", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PHASE = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PHASE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DIR = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean SpinStabilizedKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_ca76c2515a12c56a], a0.this$, a1.this$, a2.this$);
              }

              SpinStabilizedKey SpinStabilizedKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return SpinStabilizedKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_43a66864eb4c6c52], a0.this$));
              }

              JArray< SpinStabilizedKey > SpinStabilizedKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< SpinStabilizedKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5065a5c731cb266d]));
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
              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type);
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data);
              static PyGetSetDef t_SpinStabilizedKey__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilizedKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilizedKey__methods_[] = {
                DECLARE_METHOD(t_SpinStabilizedKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, process, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilizedKey)[] = {
                { Py_tp_methods, t_SpinStabilizedKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_SpinStabilizedKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilizedKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(SpinStabilizedKey, t_SpinStabilizedKey, SpinStabilizedKey);
              PyObject *t_SpinStabilizedKey::wrap_Object(const SpinStabilizedKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_SpinStabilizedKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_SpinStabilizedKey::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilizedKey), &PY_TYPE_DEF(SpinStabilizedKey), module, "SpinStabilizedKey", 0);
              }

              void t_SpinStabilizedKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "class_", make_descriptor(SpinStabilizedKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "wrapfn_", make_descriptor(t_SpinStabilizedKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(SpinStabilizedKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "COMMENT", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PER", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PHASE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PHASE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DIR", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_B)));
              }

              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilizedKey::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilizedKey::wrap_Object(SpinStabilizedKey(((t_SpinStabilizedKey *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilizedKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                SpinStabilizedKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::valueOf(a0));
                  return t_SpinStabilizedKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type)
              {
                JArray< SpinStabilizedKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::values());
                return JArray<jobject>(result.this$).wrap(t_SpinStabilizedKey::wrap_jobject);
              }
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data)
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
#include "org/orekit/forces/empirical/PolynomialAccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PolynomialAccelerationModel::class$ = NULL;
        jmethodID *PolynomialAccelerationModel::mids$ = NULL;
        bool PolynomialAccelerationModel::live$ = false;

        jclass PolynomialAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PolynomialAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_78fab9ce536a813d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;I)V");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_8bdf60d5551eceaf] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_0b7191d207b9680f] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialAccelerationModel::PolynomialAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78fab9ce536a813d, a0.this$, a1.this$, a2)) {}

        ::java::util::List PolynomialAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        void PolynomialAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_8bdf60d5551eceaf], a0.this$, a1.this$));
        }

        jdouble PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_0b7191d207b9680f], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self);
        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data);
        static PyGetSetDef t_PolynomialAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PolynomialAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialAccelerationModel)[] = {
          { Py_tp_methods, t_PolynomialAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PolynomialAccelerationModel_init_ },
          { Py_tp_getset, t_PolynomialAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialAccelerationModel, t_PolynomialAccelerationModel, PolynomialAccelerationModel);

        void t_PolynomialAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialAccelerationModel), &PY_TYPE_DEF(PolynomialAccelerationModel), module, "PolynomialAccelerationModel", 0);
        }

        void t_PolynomialAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "class_", make_descriptor(PolynomialAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "wrapfn_", make_descriptor(t_PolynomialAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PolynomialAccelerationModel::wrap_Object(PolynomialAccelerationModel(((t_PolynomialAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          PolynomialAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PolynomialAccelerationModel(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args)
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

        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data)
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
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile$Location::class$ = NULL;
        jmethodID *Tile$Location::mids$ = NULL;
        bool Tile$Location::live$ = false;
        Tile$Location *Tile$Location::EAST = NULL;
        Tile$Location *Tile$Location::HAS_INTERPOLATION_NEIGHBORS = NULL;
        Tile$Location *Tile$Location::NORTH = NULL;
        Tile$Location *Tile$Location::NORTH_EAST = NULL;
        Tile$Location *Tile$Location::NORTH_WEST = NULL;
        Tile$Location *Tile$Location::SOUTH = NULL;
        Tile$Location *Tile$Location::SOUTH_EAST = NULL;
        Tile$Location *Tile$Location::SOUTH_WEST = NULL;
        Tile$Location *Tile$Location::WEST = NULL;

        jclass Tile$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_bff73828672ee26b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_values_81fe2d0c1339a248] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/raster/Tile$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            EAST = new Tile$Location(env->getStaticObjectField(cls, "EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            HAS_INTERPOLATION_NEIGHBORS = new Tile$Location(env->getStaticObjectField(cls, "HAS_INTERPOLATION_NEIGHBORS", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH = new Tile$Location(env->getStaticObjectField(cls, "NORTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            NORTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "NORTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH = new Tile$Location(env->getStaticObjectField(cls, "SOUTH", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_EAST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_EAST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            SOUTH_WEST = new Tile$Location(env->getStaticObjectField(cls, "SOUTH_WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            WEST = new Tile$Location(env->getStaticObjectField(cls, "WEST", "Lorg/orekit/rugged/raster/Tile$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tile$Location Tile$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Tile$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bff73828672ee26b], a0.this$));
        }

        JArray< Tile$Location > Tile$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Tile$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_81fe2d0c1339a248]));
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
      namespace raster {
        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args);
        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Tile$Location_values(PyTypeObject *type);
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data);
        static PyGetSetDef t_Tile$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Tile$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile$Location__methods_[] = {
          DECLARE_METHOD(t_Tile$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Tile$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Tile$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile$Location)[] = {
          { Py_tp_methods, t_Tile$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Tile$Location, t_Tile$Location, Tile$Location);
        PyObject *t_Tile$Location::wrap_Object(const Tile$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Tile$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Tile$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Tile$Location *self = (t_Tile$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Tile$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile$Location), &PY_TYPE_DEF(Tile$Location), module, "Tile$Location", 0);
        }

        void t_Tile$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "class_", make_descriptor(Tile$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "wrapfn_", make_descriptor(t_Tile$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Tile$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "HAS_INTERPOLATION_NEIGHBORS", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::HAS_INTERPOLATION_NEIGHBORS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "NORTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::NORTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_EAST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_EAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "SOUTH_WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::SOUTH_WEST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile$Location), "WEST", make_descriptor(t_Tile$Location::wrap_Object(*Tile$Location::WEST)));
        }

        static PyObject *t_Tile$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile$Location::initializeClass, 1)))
            return NULL;
          return t_Tile$Location::wrap_Object(Tile$Location(((t_Tile$Location *) arg)->object.this$));
        }
        static PyObject *t_Tile$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile$Location_of_(t_Tile$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Tile$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::valueOf(a0));
            return t_Tile$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Tile$Location_values(PyTypeObject *type)
        {
          JArray< Tile$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::raster::Tile$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Tile$Location::wrap_jobject);
        }
        static PyObject *t_Tile$Location_get__parameters_(t_Tile$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSRangeModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSRangeModifier::live$ = false;

          jclass ShapiroOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSRangeModifier::ShapiroOneWayGNSSRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::java::util::List ShapiroOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void ShapiroOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSRangeModifier, t_ShapiroOneWayGNSSRangeModifier, ShapiroOneWayGNSSRangeModifier);

          void t_ShapiroOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSRangeModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSRangeModifier), module, "ShapiroOneWayGNSSRangeModifier", 0);
          }

          void t_ShapiroOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "class_", make_descriptor(ShapiroOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSRangeModifier::wrap_Object(ShapiroOneWayGNSSRangeModifier(((t_ShapiroOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data)
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
#include "org/hipparchus/analysis/solvers/BisectionSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BisectionSolver::class$ = NULL;
        jmethodID *BisectionSolver::mids$ = NULL;
        bool BisectionSolver::live$ = false;

        jclass BisectionSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BisectionSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BisectionSolver::BisectionSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        BisectionSolver::BisectionSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        BisectionSolver::BisectionSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}
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
        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args);
        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data);
        static PyGetSetDef t_BisectionSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BisectionSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BisectionSolver__methods_[] = {
          DECLARE_METHOD(t_BisectionSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BisectionSolver)[] = {
          { Py_tp_methods, t_BisectionSolver__methods_ },
          { Py_tp_init, (void *) t_BisectionSolver_init_ },
          { Py_tp_getset, t_BisectionSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BisectionSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BisectionSolver, t_BisectionSolver, BisectionSolver);
        PyObject *t_BisectionSolver::wrap_Object(const BisectionSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BisectionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BisectionSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BisectionSolver), &PY_TYPE_DEF(BisectionSolver), module, "BisectionSolver", 0);
        }

        void t_BisectionSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "class_", make_descriptor(BisectionSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "wrapfn_", make_descriptor(t_BisectionSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BisectionSolver::initializeClass, 1)))
            return NULL;
          return t_BisectionSolver::wrap_Object(BisectionSolver(((t_BisectionSolver *) arg)->object.this$));
        }
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BisectionSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BisectionSolver object((jobject) NULL);

              INT_CALL(object = BisectionSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BisectionSolver(a0));
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
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BisectionSolver(a0, a1));
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
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GeographicZoneDetector::class$ = NULL;
        jmethodID *GeographicZoneDetector::mids$ = NULL;
        bool GeographicZoneDetector::live$ = false;

        jclass GeographicZoneDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GeographicZoneDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8e6e7fdc773af1b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_init$_138030571468d4c5] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/BodyShape;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f78da94fd048d9d] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getMargin_dff5885c2c873297] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getZone_5a6ba0b36fb0268c] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_withMargin_a856946e5d132bd1] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/GeographicZoneDetector;");
            mids$[mid_create_81d7f5811fc3c1a9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GeographicZoneDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeographicZoneDetector::GeographicZoneDetector(const ::org::orekit::bodies::BodyShape & a0, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8e6e7fdc773af1b1, a0.this$, a1.this$, a2)) {}

        GeographicZoneDetector::GeographicZoneDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a3, jdouble a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_138030571468d4c5, a0, a1, a2.this$, a3.this$, a4)) {}

        jdouble GeographicZoneDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::bodies::BodyShape GeographicZoneDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f78da94fd048d9d]));
        }

        jdouble GeographicZoneDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet GeographicZoneDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_5a6ba0b36fb0268c]));
        }

        GeographicZoneDetector GeographicZoneDetector::withMargin(jdouble a0) const
        {
          return GeographicZoneDetector(env->callObjectMethod(this$, mids$[mid_withMargin_a856946e5d132bd1], a0));
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
        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args);
        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args);
        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self);
        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg);
        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data);
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data);
        static PyGetSetDef t_GeographicZoneDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GeographicZoneDetector, body),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, margin),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, zone),
          DECLARE_GET_FIELD(t_GeographicZoneDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeographicZoneDetector__methods_[] = {
          DECLARE_METHOD(t_GeographicZoneDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeographicZoneDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, getZone, METH_NOARGS),
          DECLARE_METHOD(t_GeographicZoneDetector, withMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeographicZoneDetector)[] = {
          { Py_tp_methods, t_GeographicZoneDetector__methods_ },
          { Py_tp_init, (void *) t_GeographicZoneDetector_init_ },
          { Py_tp_getset, t_GeographicZoneDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeographicZoneDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GeographicZoneDetector, t_GeographicZoneDetector, GeographicZoneDetector);
        PyObject *t_GeographicZoneDetector::wrap_Object(const GeographicZoneDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeographicZoneDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeographicZoneDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeographicZoneDetector *self = (t_GeographicZoneDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeographicZoneDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GeographicZoneDetector), &PY_TYPE_DEF(GeographicZoneDetector), module, "GeographicZoneDetector", 0);
        }

        void t_GeographicZoneDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "class_", make_descriptor(GeographicZoneDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "wrapfn_", make_descriptor(t_GeographicZoneDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeographicZoneDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeographicZoneDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeographicZoneDetector::initializeClass, 1)))
            return NULL;
          return t_GeographicZoneDetector::wrap_Object(GeographicZoneDetector(((t_GeographicZoneDetector *) arg)->object.this$));
        }
        static PyObject *t_GeographicZoneDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeographicZoneDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeographicZoneDetector_of_(t_GeographicZoneDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GeographicZoneDetector_init_(t_GeographicZoneDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::bodies::BodyShape a0((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a2))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
                break;
              }
            }
            goto err;
           case 5:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::BodyShape a2((jobject) NULL);
              ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              GeographicZoneDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkKD", ::org::orekit::bodies::BodyShape::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a4))
              {
                INT_CALL(object = GeographicZoneDetector(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GeographicZoneDetector);
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

        static PyObject *t_GeographicZoneDetector_g(t_GeographicZoneDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeographicZoneDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GeographicZoneDetector_getBody(t_GeographicZoneDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_getMargin(t_GeographicZoneDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeographicZoneDetector_getZone(t_GeographicZoneDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }

        static PyObject *t_GeographicZoneDetector_withMargin(t_GeographicZoneDetector *self, PyObject *arg)
        {
          jdouble a0;
          GeographicZoneDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_GeographicZoneDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }
        static PyObject *t_GeographicZoneDetector_get__parameters_(t_GeographicZoneDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GeographicZoneDetector_get__body(t_GeographicZoneDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_GeographicZoneDetector_get__margin(t_GeographicZoneDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeographicZoneDetector_get__zone(t_GeographicZoneDetector *self, void *data)
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
#include "org/orekit/attitudes/PythonAttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProvider::class$ = NULL;
      jmethodID *PythonAttitudeProvider::mids$ = NULL;
      bool PythonAttitudeProvider::live$ = false;

      jclass PythonAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProvider::PythonAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self);
      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProvider, t_PythonAttitudeProvider, PythonAttitudeProvider);

      void t_PythonAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProvider), &PY_TYPE_DEF(PythonAttitudeProvider), module, "PythonAttitudeProvider", 1);
      }

      void t_PythonAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "class_", make_descriptor(PythonAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProvider_getAttitude1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProvider::wrap_Object(PythonAttitudeProvider(((t_PythonAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data)
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
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCartesianOrbit::class$ = NULL;
      jmethodID *FieldCartesianOrbit::mids$ = NULL;
      bool FieldCartesianOrbit::live$ = false;

      jclass FieldCartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1cbcb2601e7d1334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_684f6c773ca44aa7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CartesianOrbit;)V");
          mids$[mid_init$_726dc2bf140240a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a1d831f131e24bc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_960ad4c09c9f5686] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_4e49f6ed48591ef2] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_eba8e72a22c984ac] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_eba8e72a22c984ac] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_eba8e72a22c984ac] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_eba8e72a22c984ac] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_eba8e72a22c984ac] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_eba8e72a22c984ac] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_eba8e72a22c984ac] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_eba8e72a22c984ac] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_b108b35ef48e27bd] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_18c8876951dbdfac] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_shiftedBy_c17c53ec244d21e2] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_toOrbit_e5effdf9a992f1f2] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_716f50c86ffc8da7] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_1cbcb2601e7d1334, a0.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CartesianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_684f6c773ca44aa7, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_726dc2bf140240a1, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_a1d831f131e24bc0, a0.this$, a1.this$, a2.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_960ad4c09c9f5686, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      void FieldCartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_4e49f6ed48591ef2], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_eba8e72a22c984ac]));
      }

      ::org::orekit::orbits::OrbitType FieldCartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean FieldCartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_b108b35ef48e27bd]);
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_18c8876951dbdfac], a0));
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_c17c53ec244d21e2], a0.this$));
      }

      ::org::orekit::orbits::CartesianOrbit FieldCartesianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_e5effdf9a992f1f2]));
      }

      ::java::lang::String FieldCartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args);
      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data);
      static PyGetSetDef t_FieldCartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, a),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, e),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, i),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, type),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCartesianOrbit)[] = {
        { Py_tp_methods, t_FieldCartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCartesianOrbit_init_ },
        { Py_tp_getset, t_FieldCartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCartesianOrbit, t_FieldCartesianOrbit, FieldCartesianOrbit);
      PyObject *t_FieldCartesianOrbit::wrap_Object(const FieldCartesianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCartesianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCartesianOrbit), &PY_TYPE_DEF(FieldCartesianOrbit), module, "FieldCartesianOrbit", 0);
      }

      void t_FieldCartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "class_", make_descriptor(FieldCartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "wrapfn_", make_descriptor(t_FieldCartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCartesianOrbit::wrap_Object(FieldCartesianOrbit(((t_FieldCartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CartesianOrbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CartesianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldMultivariateVectorFunction::live$ = false;

      jclass CalculusFieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_401cf8a1b53fb909] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_401cf8a1b53fb909], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateVectorFunction, t_CalculusFieldMultivariateVectorFunction, CalculusFieldMultivariateVectorFunction);
      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_Object(const CalculusFieldMultivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldMultivariateVectorFunction), module, "CalculusFieldMultivariateVectorFunction", 0);
      }

      void t_CalculusFieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "class_", make_descriptor(CalculusFieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateVectorFunction::wrap_Object(CalculusFieldMultivariateVectorFunction(((t_CalculusFieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *BoundedPropagator::class$ = NULL;
      jmethodID *BoundedPropagator::mids$ = NULL;
      bool BoundedPropagator::live$ = false;

      jclass BoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/BoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
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
      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data);
      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data);
      static PyGetSetDef t_BoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_BoundedPropagator, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_BoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedPropagator)[] = {
        { Py_tp_methods, t_BoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::Propagator),
        NULL
      };

      DEFINE_TYPE(BoundedPropagator, t_BoundedPropagator, BoundedPropagator);

      void t_BoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedPropagator), &PY_TYPE_DEF(BoundedPropagator), module, "BoundedPropagator", 0);
      }

      void t_BoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "class_", make_descriptor(BoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "wrapfn_", make_descriptor(t_BoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_BoundedPropagator::wrap_Object(BoundedPropagator(((t_BoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeInterpolator.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeInterpolator::class$ = NULL;
      jmethodID *AttitudeInterpolator::mids$ = NULL;
      bool AttitudeInterpolator::live$ = false;

      jclass AttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d277e3ce43e2fd2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_1d0d15c75b6b7aca] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_76da488be1352f9b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AttitudeInterpolator::AttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1d277e3ce43e2fd2, a0.this$, a1.this$)) {}

      ::org::orekit::time::TimeInterpolator AttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_1d0d15c75b6b7aca]));
      }

      ::org::orekit::frames::Frame AttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
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
      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args);
      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self);
      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data);
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data);
      static PyGetSetDef t_AttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_AttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_AttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeInterpolator)[] = {
        { Py_tp_methods, t_AttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AttitudeInterpolator_init_ },
        { Py_tp_getset, t_AttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AttitudeInterpolator, t_AttitudeInterpolator, AttitudeInterpolator);
      PyObject *t_AttitudeInterpolator::wrap_Object(const AttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AttitudeInterpolator *self = (t_AttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeInterpolator), &PY_TYPE_DEF(AttitudeInterpolator), module, "AttitudeInterpolator", 0);
      }

      void t_AttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "class_", make_descriptor(AttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "wrapfn_", make_descriptor(t_AttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AttitudeInterpolator::wrap_Object(AttitudeInterpolator(((t_AttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeInterpolator_of_(t_AttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AttitudeInterpolator_init_(t_AttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        AttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
        {
          INT_CALL(object = AttitudeInterpolator(a0, a1));
          self->object = object;
          self->parameters[0] = ::org::orekit::attitudes::PY_TYPE(Attitude);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AttitudeInterpolator_getAngularInterpolator(t_AttitudeInterpolator *self)
      {
        ::org::orekit::time::TimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
      }

      static PyObject *t_AttitudeInterpolator_getReferenceFrame(t_AttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AttitudeInterpolator_get__parameters_(t_AttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AttitudeInterpolator_get__angularInterpolator(t_AttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_AttitudeInterpolator_get__referenceFrame(t_AttitudeInterpolator *self, void *data)
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
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSBuilder::class$ = NULL;
        jmethodID *LOSBuilder::mids$ = NULL;
        bool LOSBuilder::live$ = false;

        jclass LOSBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_addTransform_cd61dd8248b3f5f8] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/LOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_addTransform_3fca5e167b9283bf] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/TimeIndependentLOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_build_49fd8d1afbb96641] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/los/TimeDependentLOS;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LOSBuilder::LOSBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::LOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_cd61dd8248b3f5f8], a0.this$));
        }

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::TimeIndependentLOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_3fca5e167b9283bf], a0.this$));
        }

        ::org::orekit::rugged::los::TimeDependentLOS LOSBuilder::build() const
        {
          return ::org::orekit::rugged::los::TimeDependentLOS(env->callObjectMethod(this$, mids$[mid_build_49fd8d1afbb96641]));
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
      namespace los {
        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args);
        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self);

        static PyMethodDef t_LOSBuilder__methods_[] = {
          DECLARE_METHOD(t_LOSBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, addTransform, METH_VARARGS),
          DECLARE_METHOD(t_LOSBuilder, build, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSBuilder)[] = {
          { Py_tp_methods, t_LOSBuilder__methods_ },
          { Py_tp_init, (void *) t_LOSBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSBuilder, t_LOSBuilder, LOSBuilder);

        void t_LOSBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSBuilder), &PY_TYPE_DEF(LOSBuilder), module, "LOSBuilder", 0);
        }

        void t_LOSBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "class_", make_descriptor(LOSBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "wrapfn_", make_descriptor(t_LOSBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSBuilder::initializeClass, 1)))
            return NULL;
          return t_LOSBuilder::wrap_Object(LOSBuilder(((t_LOSBuilder *) arg)->object.this$));
        }
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          LOSBuilder object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = LOSBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::los::LOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::LOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::rugged::los::TimeIndependentLOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::TimeIndependentLOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addTransform", args);
          return NULL;
        }

        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self)
        {
          ::org::orekit::rugged::los::TimeDependentLOS result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::los::t_TimeDependentLOS::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocityKey::class$ = NULL;
              jmethodID *AngularVelocityKey::mids$ = NULL;
              bool AngularVelocityKey::live$ = false;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_FRAME = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_X = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Y = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Z = NULL;
              AngularVelocityKey *AngularVelocityKey::COMMENT = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_A = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_B = NULL;

              jclass AngularVelocityKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_2d34aa8a2c0fdf6a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;)Z");
                  mids$[mid_valueOf_aa3ff05e0636580c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");
                  mids$[mid_values_ceb94f79f7dbea70] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_X = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Y = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Z = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  COMMENT = new AngularVelocityKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_A = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_B = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AngularVelocityKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_2d34aa8a2c0fdf6a], a0.this$, a1.this$, a2.this$);
              }

              AngularVelocityKey AngularVelocityKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AngularVelocityKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aa3ff05e0636580c], a0.this$));
              }

              JArray< AngularVelocityKey > AngularVelocityKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AngularVelocityKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ceb94f79f7dbea70]));
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
              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type);
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data);
              static PyGetSetDef t_AngularVelocityKey__fields_[] = {
                DECLARE_GET_FIELD(t_AngularVelocityKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocityKey__methods_[] = {
                DECLARE_METHOD(t_AngularVelocityKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocityKey)[] = {
                { Py_tp_methods, t_AngularVelocityKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AngularVelocityKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocityKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AngularVelocityKey, t_AngularVelocityKey, AngularVelocityKey);
              PyObject *t_AngularVelocityKey::wrap_Object(const AngularVelocityKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AngularVelocityKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AngularVelocityKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocityKey), &PY_TYPE_DEF(AngularVelocityKey), module, "AngularVelocityKey", 0);
              }

              void t_AngularVelocityKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "class_", make_descriptor(AngularVelocityKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "wrapfn_", make_descriptor(t_AngularVelocityKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AngularVelocityKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_FRAME", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_X", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Y", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Z", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "COMMENT", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_A", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_B", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_B)));
              }

              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocityKey::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocityKey::wrap_Object(AngularVelocityKey(((t_AngularVelocityKey *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocityKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AngularVelocityKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::valueOf(a0));
                  return t_AngularVelocityKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type)
              {
                JArray< AngularVelocityKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::values());
                return JArray<jobject>(result.this$).wrap(t_AngularVelocityKey::wrap_jobject);
              }
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data)
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
#include "org/hipparchus/analysis/function/Asinh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asinh::class$ = NULL;
        jmethodID *Asinh::mids$ = NULL;
        bool Asinh::live$ = false;

        jclass Asinh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asinh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asinh::Asinh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Asinh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asinh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args);

        static PyMethodDef t_Asinh__methods_[] = {
          DECLARE_METHOD(t_Asinh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asinh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asinh)[] = {
          { Py_tp_methods, t_Asinh__methods_ },
          { Py_tp_init, (void *) t_Asinh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asinh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asinh, t_Asinh, Asinh);

        void t_Asinh::install(PyObject *module)
        {
          installType(&PY_TYPE(Asinh), &PY_TYPE_DEF(Asinh), module, "Asinh", 0);
        }

        void t_Asinh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "class_", make_descriptor(Asinh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "wrapfn_", make_descriptor(t_Asinh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asinh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asinh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asinh::initializeClass, 1)))
            return NULL;
          return t_Asinh::wrap_Object(Asinh(((t_Asinh *) arg)->object.this$));
        }
        static PyObject *t_Asinh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asinh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asinh_init_(t_Asinh *self, PyObject *args, PyObject *kwds)
        {
          Asinh object((jobject) NULL);

          INT_CALL(object = Asinh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asinh_value(t_Asinh *self, PyObject *args)
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
#include "org/orekit/data/AbstractSelfFeedingLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *AbstractSelfFeedingLoader::mids$ = NULL;
      bool AbstractSelfFeedingLoader::live$ = false;

      jclass AbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_getDataProvidersManager_69fa4d0abe16d651] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_feed_f6f5b9725927c27c] = env->getMethodID(cls, "feed", "(Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_setSupportedNames_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSupportedNames", "(Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractSelfFeedingLoader::AbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_AbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractSelfFeedingLoader, t_AbstractSelfFeedingLoader, AbstractSelfFeedingLoader);

      void t_AbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractSelfFeedingLoader), &PY_TYPE_DEF(AbstractSelfFeedingLoader), module, "AbstractSelfFeedingLoader", 0);
      }

      void t_AbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "class_", make_descriptor(AbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_AbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractSelfFeedingLoader::wrap_Object(AbstractSelfFeedingLoader(((t_AbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        AbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = AbstractSelfFeedingLoader(a0, a1));
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
#include "org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsMoultonIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonIntegratorBuilder::live$ = false;

        jclass AdamsMoultonIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonIntegratorBuilder::AdamsMoultonIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsMoultonIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsMoultonIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonIntegratorBuilder, t_AdamsMoultonIntegratorBuilder, AdamsMoultonIntegratorBuilder);

        void t_AdamsMoultonIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonIntegratorBuilder), module, "AdamsMoultonIntegratorBuilder", 0);
        }

        void t_AdamsMoultonIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "class_", make_descriptor(AdamsMoultonIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonIntegratorBuilder::wrap_Object(AdamsMoultonIntegratorBuilder(((t_AdamsMoultonIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsMoultonIntegratorBuilder_init_(t_AdamsMoultonIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonIntegratorBuilder_buildIntegrator(t_AdamsMoultonIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *StepHandlerMultiplexer::class$ = NULL;
        jmethodID *StepHandlerMultiplexer::mids$ = NULL;
        bool StepHandlerMultiplexer::live$ = false;

        jclass StepHandlerMultiplexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/StepHandlerMultiplexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_bacb99df21c3a796] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
            mids$[mid_add_768baea54d9d6ae5] = env->getMethodID(cls, "add", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getHandlers_2afa36052df4765d] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_aa75aa80a734fb3b] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_remove_6747b2cdc04692d7] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_remove_bacb99df21c3a796] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepHandlerMultiplexer::StepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void StepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_bacb99df21c3a796], a0.this$);
        }

        void StepHandlerMultiplexer::add(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_768baea54d9d6ae5], a0, a1.this$);
        }

        void StepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        void StepHandlerMultiplexer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
        }

        ::java::util::List StepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_2afa36052df4765d]));
        }

        void StepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_aa75aa80a734fb3b], a0.this$);
        }

        void StepHandlerMultiplexer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_6747b2cdc04692d7], a0.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_bacb99df21c3a796], a0.this$);
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
        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self);
        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg);
        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args);
        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data);
        static PyGetSetDef t_StepHandlerMultiplexer__fields_[] = {
          DECLARE_GET_FIELD(t_StepHandlerMultiplexer, handlers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepHandlerMultiplexer__methods_[] = {
          DECLARE_METHOD(t_StepHandlerMultiplexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, add, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, clear, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, finish, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, getHandlers, METH_NOARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, handleStep, METH_O),
          DECLARE_METHOD(t_StepHandlerMultiplexer, init, METH_VARARGS),
          DECLARE_METHOD(t_StepHandlerMultiplexer, remove, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepHandlerMultiplexer)[] = {
          { Py_tp_methods, t_StepHandlerMultiplexer__methods_ },
          { Py_tp_init, (void *) t_StepHandlerMultiplexer_init_ },
          { Py_tp_getset, t_StepHandlerMultiplexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepHandlerMultiplexer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepHandlerMultiplexer, t_StepHandlerMultiplexer, StepHandlerMultiplexer);

        void t_StepHandlerMultiplexer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepHandlerMultiplexer), &PY_TYPE_DEF(StepHandlerMultiplexer), module, "StepHandlerMultiplexer", 0);
        }

        void t_StepHandlerMultiplexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "class_", make_descriptor(StepHandlerMultiplexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "wrapfn_", make_descriptor(t_StepHandlerMultiplexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepHandlerMultiplexer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepHandlerMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepHandlerMultiplexer::initializeClass, 1)))
            return NULL;
          return t_StepHandlerMultiplexer::wrap_Object(StepHandlerMultiplexer(((t_StepHandlerMultiplexer *) arg)->object.this$));
        }
        static PyObject *t_StepHandlerMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepHandlerMultiplexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepHandlerMultiplexer_init_(t_StepHandlerMultiplexer *self, PyObject *args, PyObject *kwds)
        {
          StepHandlerMultiplexer object((jobject) NULL);

          INT_CALL(object = StepHandlerMultiplexer());
          self->object = object;

          return 0;
        }

        static PyObject *t_StepHandlerMultiplexer_add(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.add(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.add(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_clear(t_StepHandlerMultiplexer *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StepHandlerMultiplexer_finish(t_StepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_getHandlers(t_StepHandlerMultiplexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::sampling::PY_TYPE(OrekitStepHandler));
        }

        static PyObject *t_StepHandlerMultiplexer_handleStep(t_StepHandlerMultiplexer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_init(t_StepHandlerMultiplexer *self, PyObject *args)
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

        static PyObject *t_StepHandlerMultiplexer_remove(t_StepHandlerMultiplexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::sampling::OrekitFixedStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
              {
                OBJ_CALL(self->object.remove(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remove", args);
          return NULL;
        }

        static PyObject *t_StepHandlerMultiplexer_get__handlers(t_StepHandlerMultiplexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandlers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/MillerUpdatingRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MillerUpdatingRegression::class$ = NULL;
        jmethodID *MillerUpdatingRegression::mids$ = NULL;
        bool MillerUpdatingRegression::live$ = false;

        jclass MillerUpdatingRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MillerUpdatingRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f61a0322e15bde25] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_init$_8aa86769efed9c57] = env->getMethodID(cls, "<init>", "(IZD)V");
            mids$[mid_addObservation_bc1ff02eb3693128] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_38e689b845a7e4f9] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDiagonalOfHatMatrix_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "getDiagonalOfHatMatrix", "([D)D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getOrderOfRegressors_d0635cea09dc178c] = env->getMethodID(cls, "getOrderOfRegressors", "()[I");
            mids$[mid_getPartialCorrelations_abe82da4f5c7c981] = env->getMethodID(cls, "getPartialCorrelations", "(I)[D");
            mids$[mid_hasIntercept_b108b35ef48e27bd] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_0142096ec696b4f7] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_7a5a137e3f3bf403] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_8356b820807b832f] = env->getMethodID(cls, "regress", "(I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f61a0322e15bde25, a0, a1)) {}

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8aa86769efed9c57, a0, a1, a2)) {}

        void MillerUpdatingRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_bc1ff02eb3693128], a0.this$, a1);
        }

        void MillerUpdatingRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_38e689b845a7e4f9], a0.this$, a1.this$);
        }

        void MillerUpdatingRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        jdouble MillerUpdatingRegression::getDiagonalOfHatMatrix(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDiagonalOfHatMatrix_9dc1ec0bcc0a9a29], a0.this$);
        }

        jlong MillerUpdatingRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        JArray< jint > MillerUpdatingRegression::getOrderOfRegressors() const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getOrderOfRegressors_d0635cea09dc178c]));
        }

        JArray< jdouble > MillerUpdatingRegression::getPartialCorrelations(jint a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPartialCorrelations_abe82da4f5c7c981], a0));
        }

        jboolean MillerUpdatingRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_b108b35ef48e27bd]);
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_0142096ec696b4f7]));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_7a5a137e3f3bf403], a0.this$));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(jint a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_8356b820807b832f], a0));
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
        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data);
        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data);
        static PyGetSetDef t_MillerUpdatingRegression__fields_[] = {
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, n),
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, orderOfRegressors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MillerUpdatingRegression__methods_[] = {
          DECLARE_METHOD(t_MillerUpdatingRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getDiagonalOfHatMatrix, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getOrderOfRegressors, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getPartialCorrelations, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MillerUpdatingRegression)[] = {
          { Py_tp_methods, t_MillerUpdatingRegression__methods_ },
          { Py_tp_init, (void *) t_MillerUpdatingRegression_init_ },
          { Py_tp_getset, t_MillerUpdatingRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MillerUpdatingRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MillerUpdatingRegression, t_MillerUpdatingRegression, MillerUpdatingRegression);

        void t_MillerUpdatingRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MillerUpdatingRegression), &PY_TYPE_DEF(MillerUpdatingRegression), module, "MillerUpdatingRegression", 0);
        }

        void t_MillerUpdatingRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "class_", make_descriptor(MillerUpdatingRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "wrapfn_", make_descriptor(t_MillerUpdatingRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MillerUpdatingRegression::initializeClass, 1)))
            return NULL;
          return t_MillerUpdatingRegression::wrap_Object(MillerUpdatingRegression(((t_MillerUpdatingRegression *) arg)->object.this$));
        }
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MillerUpdatingRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jboolean a1;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jdouble a2;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZD", &a0, &a1, &a2))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1, a2));
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

        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.getDiagonalOfHatMatrix(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDiagonalOfHatMatrix", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self)
        {
          JArray< jint > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrderOfRegressors());
          return result.wrap();
        }

        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          jint a0;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialCorrelations(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialCorrelations", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data)
        {
          JArray< jint > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrderOfRegressors());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStepHandler::class$ = NULL;
        jmethodID *FieldODEStepHandler::mids$ = NULL;
        bool FieldODEStepHandler::live$ = false;

        jclass FieldODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_22d6c75b64070b54] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_f31e7e3a46e05334] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepHandler::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_22d6c75b64070b54], a0.this$);
        }

        void FieldODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_f31e7e3a46e05334], a0.this$);
        }

        void FieldODEStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
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
        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepHandler)[] = {
          { Py_tp_methods, t_FieldODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepHandler, t_FieldODEStepHandler, FieldODEStepHandler);
        PyObject *t_FieldODEStepHandler::wrap_Object(const FieldODEStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepHandler), &PY_TYPE_DEF(FieldODEStepHandler), module, "FieldODEStepHandler", 0);
        }

        void t_FieldODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "class_", make_descriptor(FieldODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "wrapfn_", make_descriptor(t_FieldODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepHandler::wrap_Object(FieldODEStepHandler(((t_FieldODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative1::class$ = NULL;
        jmethodID *UnivariateDerivative1::mids$ = NULL;
        bool UnivariateDerivative1::live$ = false;
        UnivariateDerivative1 *UnivariateDerivative1::PI = NULL;

        jclass UnivariateDerivative1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff2e40d13a189b48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_abs_81b5d8fdb5d06385] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acos_81b5d8fdb5d06385] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_acosh_81b5d8fdb5d06385] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_fbdfe4ad0fefc339] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_add_65c8eb73c3fa277c] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asin_81b5d8fdb5d06385] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_asinh_81b5d8fdb5d06385] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan_81b5d8fdb5d06385] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atan2_fbdfe4ad0fefc339] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_atanh_81b5d8fdb5d06385] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cbrt_81b5d8fdb5d06385] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ceil_81b5d8fdb5d06385] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_compareTo_d23fc20e566443fe] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)I");
            mids$[mid_compose_96f30ba8751ed2eb] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_fbdfe4ad0fefc339] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_copySign_65c8eb73c3fa277c] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cos_81b5d8fdb5d06385] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_cosh_81b5d8fdb5d06385] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_fbdfe4ad0fefc339] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_divide_65c8eb73c3fa277c] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_81b5d8fdb5d06385] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_expm1_81b5d8fdb5d06385] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_floor_81b5d8fdb5d06385] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getDerivative_46f85b53d9aedd96] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_4efec6a5aa4fd021] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1Field;");
            mids$[mid_getFirstDerivative_dff5885c2c873297] = env->getMethodID(cls, "getFirstDerivative", "()D");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_81b5d8fdb5d06385] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_fbdfe4ad0fefc339] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_f81f2f5ebd0efe47] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_b35c90aa9997a256] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;[Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_617a1ca33ab23843] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_a6d16fea2a095452] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_073d708533923ffb] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_1cd6b748bfdb22c3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_3c60fd27a9bb1859] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_linearCombination_6dd269fb356f90ca] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log_81b5d8fdb5d06385] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log10_81b5d8fdb5d06385] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_log1p_81b5d8fdb5d06385] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_fbdfe4ad0fefc339] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_65c8eb73c3fa277c] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_multiply_6f4d2a282bd8f60e] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_negate_81b5d8fdb5d06385] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_newInstance_65c8eb73c3fa277c] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_fbdfe4ad0fefc339] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_65c8eb73c3fa277c] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_6f4d2a282bd8f60e] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_pow_2295d0130ebbe5ed] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_reciprocal_81b5d8fdb5d06385] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_fbdfe4ad0fefc339] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_remainder_65c8eb73c3fa277c] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rint_81b5d8fdb5d06385] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_rootN_6f4d2a282bd8f60e] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_scalb_6f4d2a282bd8f60e] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sign_81b5d8fdb5d06385] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sin_81b5d8fdb5d06385] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_81b5d8fdb5d06385] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_81b5d8fdb5d06385] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_fbdfe4ad0fefc339] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_subtract_65c8eb73c3fa277c] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tan_81b5d8fdb5d06385] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_tanh_81b5d8fdb5d06385] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_taylor_dcbc7ce2902fa136] = env->getMethodID(cls, "taylor", "(D)D");
            mids$[mid_toDegrees_81b5d8fdb5d06385] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_toDerivativeStructure_73e277cbd957031a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_81b5d8fdb5d06385] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");
            mids$[mid_ulp_81b5d8fdb5d06385] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PI = new UnivariateDerivative1(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/analysis/differentiation/UnivariateDerivative1;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative1::UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_ff2e40d13a189b48, a0.this$)) {}

        UnivariateDerivative1::UnivariateDerivative1(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        UnivariateDerivative1 UnivariateDerivative1::abs() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_abs_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acos_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::acosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_acosh_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::add(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_add_65c8eb73c3fa277c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::asin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asin_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::asinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_asinh_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::atan2(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atan2_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::atanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_atanh_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cbrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cbrt_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ceil() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ceil_81b5d8fdb5d06385]));
        }

        jint UnivariateDerivative1::compareTo(const UnivariateDerivative1 & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_d23fc20e566443fe], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::compose(const JArray< jdouble > & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_compose_96f30ba8751ed2eb], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::copySign(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_copySign_65c8eb73c3fa277c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::cos() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cos_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::cosh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_cosh_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::divide(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_divide_65c8eb73c3fa277c], a0));
        }

        jboolean UnivariateDerivative1::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        UnivariateDerivative1 UnivariateDerivative1::exp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_exp_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::expm1() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_expm1_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::floor() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_floor_81b5d8fdb5d06385]));
        }

        jdouble UnivariateDerivative1::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_46f85b53d9aedd96], a0);
        }

        jint UnivariateDerivative1::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field UnivariateDerivative1::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field(env->callObjectMethod(this$, mids$[mid_getField_4efec6a5aa4fd021]));
        }

        jdouble UnivariateDerivative1::getFirstDerivative() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFirstDerivative_dff5885c2c873297]);
        }

        jint UnivariateDerivative1::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        UnivariateDerivative1 UnivariateDerivative1::getPi() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getPi_81b5d8fdb5d06385]));
        }

        jdouble UnivariateDerivative1::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        jdouble UnivariateDerivative1::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
        }

        jint UnivariateDerivative1::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        UnivariateDerivative1 UnivariateDerivative1::hypot(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_hypot_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< jdouble > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_f81f2f5ebd0efe47], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const JArray< UnivariateDerivative1 > & a0, const JArray< UnivariateDerivative1 > & a1) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_b35c90aa9997a256], a0.this$, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_617a1ca33ab23843], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_a6d16fea2a095452], a0, a1.this$, a2, a3.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_073d708533923ffb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_1cd6b748bfdb22c3], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(const UnivariateDerivative1 & a0, const UnivariateDerivative1 & a1, const UnivariateDerivative1 & a2, const UnivariateDerivative1 & a3, const UnivariateDerivative1 & a4, const UnivariateDerivative1 & a5, const UnivariateDerivative1 & a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_3c60fd27a9bb1859], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::linearCombination(jdouble a0, const UnivariateDerivative1 & a1, jdouble a2, const UnivariateDerivative1 & a3, jdouble a4, const UnivariateDerivative1 & a5, jdouble a6, const UnivariateDerivative1 & a7) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_linearCombination_6dd269fb356f90ca], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::log() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log10() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log10_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::log1p() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_log1p_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_65c8eb73c3fa277c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::multiply(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_multiply_6f4d2a282bd8f60e], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::negate() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_negate_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::newInstance(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_newInstance_65c8eb73c3fa277c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_65c8eb73c3fa277c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_pow_6f4d2a282bd8f60e], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::pow(jdouble a0, const UnivariateDerivative1 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative1(env->callStaticObjectMethod(cls, mids$[mid_pow_2295d0130ebbe5ed], a0, a1.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::reciprocal() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_reciprocal_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::remainder(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_remainder_65c8eb73c3fa277c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::rint() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rint_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::rootN(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_rootN_6f4d2a282bd8f60e], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::scalb(jint a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_scalb_6f4d2a282bd8f60e], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::sign() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sign_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sin() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sin_81b5d8fdb5d06385]));
        }

        ::org::hipparchus::util::FieldSinCos UnivariateDerivative1::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sinh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sinh_81b5d8fdb5d06385]));
        }

        ::org::hipparchus::util::FieldSinhCosh UnivariateDerivative1::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        UnivariateDerivative1 UnivariateDerivative1::sqrt() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_sqrt_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(const UnivariateDerivative1 & a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_fbdfe4ad0fefc339], a0.this$));
        }

        UnivariateDerivative1 UnivariateDerivative1::subtract(jdouble a0) const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_subtract_65c8eb73c3fa277c], a0));
        }

        UnivariateDerivative1 UnivariateDerivative1::tan() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tan_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::tanh() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_tanh_81b5d8fdb5d06385]));
        }

        jdouble UnivariateDerivative1::taylor(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_dcbc7ce2902fa136], a0);
        }

        UnivariateDerivative1 UnivariateDerivative1::toDegrees() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toDegrees_81b5d8fdb5d06385]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative1::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_73e277cbd957031a]));
        }

        UnivariateDerivative1 UnivariateDerivative1::toRadians() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_toRadians_81b5d8fdb5d06385]));
        }

        UnivariateDerivative1 UnivariateDerivative1::ulp() const
        {
          return UnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_ulp_81b5d8fdb5d06385]));
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
        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args);
        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self);
        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args);
        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data);
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data);
        static PyGetSetDef t_UnivariateDerivative1__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative1, exponent),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, field),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, firstDerivative),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, order),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, pi),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, real),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, value),
          DECLARE_GET_FIELD(t_UnivariateDerivative1, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative1__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, abs, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, acosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, add, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, asinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atan2, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, atanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ceil, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compareTo, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, compose, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, copySign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, cosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, divide, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, exp, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, expm1, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, floor, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getField, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getPi, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getReal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, getValue, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, hypot, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log10, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, log1p, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, multiply, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, negate, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative1, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, remainder, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rint, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, rootN, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, scalb, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sign, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sin, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, subtract, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tan, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, tanh, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, taylor, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative1, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative1, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative1)[] = {
          { Py_tp_methods, t_UnivariateDerivative1__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative1_init_ },
          { Py_tp_getset, t_UnivariateDerivative1__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative1)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::UnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative1, t_UnivariateDerivative1, UnivariateDerivative1);
        PyObject *t_UnivariateDerivative1::wrap_Object(const UnivariateDerivative1& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative1::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative1::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative1 *self = (t_UnivariateDerivative1 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative1::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative1), &PY_TYPE_DEF(UnivariateDerivative1), module, "UnivariateDerivative1", 0);
        }

        void t_UnivariateDerivative1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "class_", make_descriptor(UnivariateDerivative1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "wrapfn_", make_descriptor(t_UnivariateDerivative1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariateDerivative1::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative1), "PI", make_descriptor(t_UnivariateDerivative1::wrap_Object(*UnivariateDerivative1::PI)));
        }

        static PyObject *t_UnivariateDerivative1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative1::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative1::wrap_Object(UnivariateDerivative1(((t_UnivariateDerivative1 *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative1_of_(t_UnivariateDerivative1 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative1_init_(t_UnivariateDerivative1 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = UnivariateDerivative1(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              UnivariateDerivative1 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = UnivariateDerivative1(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1);
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

        static PyObject *t_UnivariateDerivative1_abs(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_acosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_add(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_asinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atan2(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_atanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cbrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ceil(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compareTo(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compareTo", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_compose(t_UnivariateDerivative1 *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "compose", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_copySign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_cosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_divide(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_equals(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_exp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_expm1(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_floor(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getDerivative(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getExponent(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getField(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getFirstDerivative(t_UnivariateDerivative1 *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateDerivative1_getOrder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getPi(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getReal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_getValue(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hashCode(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_hypot(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 a0((jobject) NULL);
          PyTypeObject **p0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_linearCombination(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              JArray< UnivariateDerivative1 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< UnivariateDerivative1 > a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              UnivariateDerivative1 a2((jobject) NULL);
              PyTypeObject **p2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              UnivariateDerivative1 a4((jobject) NULL);
              PyTypeObject **p4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              UnivariateDerivative1 a6((jobject) NULL);
              PyTypeObject **p6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &p2, t_UnivariateDerivative1::parameters_, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &p4, t_UnivariateDerivative1::parameters_, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &p6, t_UnivariateDerivative1::parameters_, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              UnivariateDerivative1 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              UnivariateDerivative1 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              UnivariateDerivative1 a7((jobject) NULL);
              PyTypeObject **p7;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_, &a2, &a3, &p3, t_UnivariateDerivative1::parameters_, &a4, &a5, &p5, t_UnivariateDerivative1::parameters_, &a6, &a7, &p7, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log10(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_log1p(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_multiply(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_negate(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_newInstance(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jint a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          UnivariateDerivative1 a1((jobject) NULL);
          PyTypeObject **p1;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "DK", UnivariateDerivative1::initializeClass, &a0, &a1, &p1, t_UnivariateDerivative1::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative1::pow(a0, a1));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_reciprocal(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_remainder(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rint(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_rootN(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_scalb(t_UnivariateDerivative1 *self, PyObject *args)
        {
          jint a0;
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sign(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sin(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinCos(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sinhCosh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_sqrt(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_subtract(t_UnivariateDerivative1 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              UnivariateDerivative1 a0((jobject) NULL);
              PyTypeObject **p0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "K", UnivariateDerivative1::initializeClass, &a0, &p0, t_UnivariateDerivative1::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              UnivariateDerivative1 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_UnivariateDerivative1::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tan(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_tanh(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_taylor(t_UnivariateDerivative1 *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative1_toDegrees(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toDerivativeStructure(t_UnivariateDerivative1 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_toRadians(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_UnivariateDerivative1_ulp(t_UnivariateDerivative1 *self, PyObject *args)
        {
          UnivariateDerivative1 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_UnivariateDerivative1::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative1), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_UnivariateDerivative1_get__parameters_(t_UnivariateDerivative1 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative1_get__exponent(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__field(t_UnivariateDerivative1 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative1Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__firstDerivative(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFirstDerivative());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__order(t_UnivariateDerivative1 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UnivariateDerivative1_get__pi(t_UnivariateDerivative1 *self, void *data)
        {
          UnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_UnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative1_get__real(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateDerivative1_get__value(t_UnivariateDerivative1 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}

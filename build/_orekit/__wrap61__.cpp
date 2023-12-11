#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldTuple::class$ = NULL;
      jmethodID *FieldTuple::mids$ = NULL;
      bool FieldTuple::live$ = false;

      jclass FieldTuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldTuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5d9c9afaca2e497c] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_465b8a728f915a54] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acos_465b8a728f915a54] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acosh_465b8a728f915a54] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_7aececefd0318ce7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_cdd4d2acf1e15014] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asin_465b8a728f915a54] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asinh_465b8a728f915a54] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan_465b8a728f915a54] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan2_7aececefd0318ce7] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atanh_465b8a728f915a54] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cbrt_465b8a728f915a54] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ceil_465b8a728f915a54] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_7aececefd0318ce7] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_cdd4d2acf1e15014] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cos_465b8a728f915a54] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cosh_465b8a728f915a54] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_7aececefd0318ce7] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_cdd4d2acf1e15014] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_465b8a728f915a54] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_expm1_465b8a728f915a54] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_floor_465b8a728f915a54] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getComponent_8b3a1c735adfa4bc] = env->getMethodID(cls, "getComponent", "(I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getComponents_41762fd4377ff26e] = env->getMethodID(cls, "getComponents", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_465b8a728f915a54] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_7aececefd0318ce7] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_c5b604b951e16c74] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_9fd49f2b01a2b9a1] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/FieldTuple;[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_e73da46f795e19a3] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_380735dfbf2d544c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_ac5cdccf2e031eba] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_a0a70b0a6df4461f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_cda3f07dc4985202] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_9bdb517d0c747c3d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log_465b8a728f915a54] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log10_465b8a728f915a54] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log1p_465b8a728f915a54] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_7aececefd0318ce7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_cdd4d2acf1e15014] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_45fc9944b12eba17] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_negate_465b8a728f915a54] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_newInstance_cdd4d2acf1e15014] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_7aececefd0318ce7] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_cdd4d2acf1e15014] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_45fc9944b12eba17] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_reciprocal_465b8a728f915a54] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_7aececefd0318ce7] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_cdd4d2acf1e15014] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rint_465b8a728f915a54] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rootN_45fc9944b12eba17] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_scalb_45fc9944b12eba17] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sign_465b8a728f915a54] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sin_465b8a728f915a54] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_465b8a728f915a54] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_465b8a728f915a54] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_7aececefd0318ce7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_cdd4d2acf1e15014] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tan_465b8a728f915a54] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tanh_465b8a728f915a54] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toDegrees_465b8a728f915a54] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toRadians_465b8a728f915a54] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ulp_465b8a728f915a54] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/FieldTuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTuple::FieldTuple(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d9c9afaca2e497c, a0.this$)) {}

      FieldTuple FieldTuple::abs() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_abs_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::acos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acos_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::acosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acosh_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::add(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::add(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_cdd4d2acf1e15014], a0));
      }

      FieldTuple FieldTuple::asin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asin_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::asinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asinh_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::atan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::atan2(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan2_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::atanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atanh_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::cbrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cbrt_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::ceil() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ceil_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::copySign(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::copySign(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_cdd4d2acf1e15014], a0));
      }

      FieldTuple FieldTuple::cos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cos_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::cosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cosh_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::divide(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::divide(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_cdd4d2acf1e15014], a0));
      }

      jboolean FieldTuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      FieldTuple FieldTuple::exp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_exp_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::expm1() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_expm1_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::floor() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_floor_465b8a728f915a54]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTuple::getComponent(jint a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getComponent_8b3a1c735adfa4bc], a0));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldTuple::getComponents() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getComponents_41762fd4377ff26e]));
      }

      jint FieldTuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::Field FieldTuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      FieldTuple FieldTuple::getPi() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_getPi_465b8a728f915a54]));
      }

      jdouble FieldTuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      jint FieldTuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      FieldTuple FieldTuple::hypot(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_hypot_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< jdouble > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_c5b604b951e16c74], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< FieldTuple > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_9fd49f2b01a2b9a1], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_e73da46f795e19a3], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_380735dfbf2d544c], a0, a1.this$, a2, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_ac5cdccf2e031eba], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_a0a70b0a6df4461f], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5, const FieldTuple & a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_cda3f07dc4985202], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5, jdouble a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_9bdb517d0c747c3d], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldTuple FieldTuple::log() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::log10() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log10_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::log1p() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log1p_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::multiply(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::multiply(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_cdd4d2acf1e15014], a0));
      }

      FieldTuple FieldTuple::multiply(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_45fc9944b12eba17], a0));
      }

      FieldTuple FieldTuple::negate() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_negate_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::newInstance(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_newInstance_cdd4d2acf1e15014], a0));
      }

      FieldTuple FieldTuple::pow(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::pow(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_cdd4d2acf1e15014], a0));
      }

      FieldTuple FieldTuple::pow(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_45fc9944b12eba17], a0));
      }

      FieldTuple FieldTuple::reciprocal() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_reciprocal_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::remainder(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::remainder(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_cdd4d2acf1e15014], a0));
      }

      FieldTuple FieldTuple::rint() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rint_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::rootN(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rootN_45fc9944b12eba17], a0));
      }

      FieldTuple FieldTuple::scalb(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_scalb_45fc9944b12eba17], a0));
      }

      FieldTuple FieldTuple::sign() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sign_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::sin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sin_465b8a728f915a54]));
      }

      ::org::hipparchus::util::FieldSinCos FieldTuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
      }

      FieldTuple FieldTuple::sinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sinh_465b8a728f915a54]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldTuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
      }

      FieldTuple FieldTuple::sqrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sqrt_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::subtract(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_7aececefd0318ce7], a0.this$));
      }

      FieldTuple FieldTuple::subtract(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_cdd4d2acf1e15014], a0));
      }

      FieldTuple FieldTuple::tan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tan_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::tanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tanh_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::toDegrees() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toDegrees_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::toRadians() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toRadians_465b8a728f915a54]));
      }

      FieldTuple FieldTuple::ulp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ulp_465b8a728f915a54]));
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
      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args);
      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTuple_abs(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_asin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self);
      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_cos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_exp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self);
      static PyObject *t_FieldTuple_floor(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getField(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_log(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log10(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self);
      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_negate(t_FieldTuple *self);
      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_rint(t_FieldTuple *self);
      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_sign(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_tan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data);
      static PyGetSetDef t_FieldTuple__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTuple, components),
        DECLARE_GET_FIELD(t_FieldTuple, dimension),
        DECLARE_GET_FIELD(t_FieldTuple, field),
        DECLARE_GET_FIELD(t_FieldTuple, pi),
        DECLARE_GET_FIELD(t_FieldTuple, real),
        DECLARE_GET_FIELD(t_FieldTuple, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTuple__methods_[] = {
        DECLARE_METHOD(t_FieldTuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan2, METH_O),
        DECLARE_METHOD(t_FieldTuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getComponent, METH_O),
        DECLARE_METHOD(t_FieldTuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, hypot, METH_O),
        DECLARE_METHOD(t_FieldTuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, newInstance, METH_O),
        DECLARE_METHOD(t_FieldTuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, rootN, METH_O),
        DECLARE_METHOD(t_FieldTuple, scalb, METH_O),
        DECLARE_METHOD(t_FieldTuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTuple)[] = {
        { Py_tp_methods, t_FieldTuple__methods_ },
        { Py_tp_init, (void *) t_FieldTuple_init_ },
        { Py_tp_getset, t_FieldTuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTuple, t_FieldTuple, FieldTuple);
      PyObject *t_FieldTuple::wrap_Object(const FieldTuple& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTuple::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTuple::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTuple), &PY_TYPE_DEF(FieldTuple), module, "FieldTuple", 0);
      }

      void t_FieldTuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "class_", make_descriptor(FieldTuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "wrapfn_", make_descriptor(t_FieldTuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTuple::initializeClass, 1)))
          return NULL;
        return t_FieldTuple::wrap_Object(FieldTuple(((t_FieldTuple *) arg)->object.this$));
      }
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple object((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTuple_abs(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_asin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_cos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldTuple_exp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_floor(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTuple_getField(t_FieldTuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldTuple > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple a6((jobject) NULL);
            PyTypeObject **p6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_, &a6, &p6, t_FieldTuple::parameters_, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_, &a6, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_log(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log10(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_negate(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg)
      {
        jdouble a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_rint(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_sign(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_tan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data)
      {
        FieldTuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldTuple::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *InertiaAxis::class$ = NULL;
      jmethodID *InertiaAxis::mids$ = NULL;
      bool InertiaAxis::live$ = false;

      jclass InertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/InertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getA_f88961cca75a2c0a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_negate_b822d9cbafca1aaf] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/InertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D InertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA_f88961cca75a2c0a]));
      }

      jdouble InertiaAxis::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
      }

      InertiaAxis InertiaAxis::negate() const
      {
        return InertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_b822d9cbafca1aaf]));
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
      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data);
      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data);
      static PyGetSetDef t_InertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_InertiaAxis, a),
        DECLARE_GET_FIELD(t_InertiaAxis, i),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InertiaAxis__methods_[] = {
        DECLARE_METHOD(t_InertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InertiaAxis)[] = {
        { Py_tp_methods, t_InertiaAxis__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_InertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InertiaAxis, t_InertiaAxis, InertiaAxis);

      void t_InertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(InertiaAxis), &PY_TYPE_DEF(InertiaAxis), module, "InertiaAxis", 0);
      }

      void t_InertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "class_", make_descriptor(InertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "wrapfn_", make_descriptor(t_InertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InertiaAxis::initializeClass, 1)))
          return NULL;
        return t_InertiaAxis::wrap_Object(InertiaAxis(((t_InertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self)
      {
        InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNormalizedCnm_21b81d54c06b64b0] = env->getMethodID(cls, "getNormalizedCnm", "(II)D");
              mids$[mid_getNormalizedSnm_21b81d54c06b64b0] = env->getMethodID(cls, "getNormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedCnm_21b81d54c06b64b0], a0, a1);
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedSnm_21b81d54c06b64b0], a0, a1);
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
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics);

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), module, "NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics", 0);
          }

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(((t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder$InterpolationFactory::class$ = NULL;
      jmethodID *WaypointPVBuilder$InterpolationFactory::mids$ = NULL;
      bool WaypointPVBuilder$InterpolationFactory::live$ = false;

      jclass WaypointPVBuilder$InterpolationFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder$InterpolationFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_439794ba61ea0c79] = env->getMethodID(cls, "create", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder$InterpolationFactory::create(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::bodies::GeodeticPoint & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_create_439794ba61ea0c79], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args);

      static PyMethodDef t_WaypointPVBuilder$InterpolationFactory__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, create, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder$InterpolationFactory)[] = {
        { Py_tp_methods, t_WaypointPVBuilder$InterpolationFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder$InterpolationFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder$InterpolationFactory, t_WaypointPVBuilder$InterpolationFactory, WaypointPVBuilder$InterpolationFactory);

      void t_WaypointPVBuilder$InterpolationFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder$InterpolationFactory), &PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory), module, "WaypointPVBuilder$InterpolationFactory", 0);
      }

      void t_WaypointPVBuilder$InterpolationFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "class_", make_descriptor(WaypointPVBuilder$InterpolationFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "wrapfn_", make_descriptor(t_WaypointPVBuilder$InterpolationFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder$InterpolationFactory::wrap_Object(WaypointPVBuilder$InterpolationFactory(((t_WaypointPVBuilder$InterpolationFactory *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.create(a0, a1, a2, a3, a4));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "create", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MappingFunction::class$ = NULL;
          jmethodID *MappingFunction::mids$ = NULL;
          bool MappingFunction::live$ = false;

          jclass MappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactors_e6ce6b157ff98280] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_964dc353437b5da2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MappingFunction::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_e6ce6b157ff98280], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MappingFunction::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_964dc353437b5da2], a0, a1.this$, a2.this$));
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
          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args);

          static PyMethodDef t_MappingFunction__methods_[] = {
            DECLARE_METHOD(t_MappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MappingFunction)[] = {
            { Py_tp_methods, t_MappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MappingFunction, t_MappingFunction, MappingFunction);

          void t_MappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(MappingFunction), &PY_TYPE_DEF(MappingFunction), module, "MappingFunction", 0);
          }

          void t_MappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "class_", make_descriptor(MappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "wrapfn_", make_descriptor(t_MappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MappingFunction::initializeClass, 1)))
              return NULL;
            return t_MappingFunction::wrap_Object(MappingFunction(((t_MappingFunction *) arg)->object.this$));
          }
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_69c6b2cabec159dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeIonosphericDelayModifier::BistaticRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_69c6b2cabec159dd, a0.this$, a1)) {}

          void BistaticRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void BistaticRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeIonosphericDelayModifier, t_BistaticRangeIonosphericDelayModifier, BistaticRangeIonosphericDelayModifier);

          void t_BistaticRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeIonosphericDelayModifier), module, "BistaticRangeIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeIonosphericDelayModifier::wrap_Object(BistaticRangeIonosphericDelayModifier(((t_BistaticRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/TimeSpanDragForce.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/List.h"
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
            mids$[mid_init$_36405303e879e795] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_init$_9273ddc3fafcf914] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addDragSensitiveValidAfter_f5af29df76f15be7] = env->getMethodID(cls, "addDragSensitiveValidAfter", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addDragSensitiveValidBefore_f5af29df76f15be7] = env->getMethodID(cls, "addDragSensitiveValidBefore", "(Lorg/orekit/forces/drag/DragSensitive;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_extractDragSensitiveRange_cdee4c9b841a225d] = env->getMethodID(cls, "extractDragSensitiveRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_2a4cb51cb18e4e8b] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_32c7759b5aba450d] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDragSensitive_29a3fe8bac56573a] = env->getMethodID(cls, "getDragSensitive", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/drag/DragSensitive;");
            mids$[mid_getDragSensitiveSpan_320d9b9cba67eeb8] = env->getMethodID(cls, "getDragSensitiveSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_2a24ed7b7f6cbca3] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_36405303e879e795, a0.this$, a1.this$)) {}

        TimeSpanDragForce::TimeSpanDragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_9273ddc3fafcf914, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanDragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        void TimeSpanDragForce::addDragSensitiveValidAfter(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidAfter_f5af29df76f15be7], a0.this$, a1.this$);
        }

        void TimeSpanDragForce::addDragSensitiveValidBefore(const ::org::orekit::forces::drag::DragSensitive & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDragSensitiveValidBefore_f5af29df76f15be7], a0.this$, a1.this$);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanDragForce::extractDragSensitiveRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractDragSensitiveRange_cdee4c9b841a225d], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanDragForce::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_2a4cb51cb18e4e8b], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanDragForce::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_32c7759b5aba450d], a0.this$, a1.this$));
        }

        ::org::orekit::forces::drag::DragSensitive TimeSpanDragForce::getDragSensitive(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getDragSensitive_29a3fe8bac56573a], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getDragSensitiveSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getDragSensitiveSpan_320d9b9cba67eeb8], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
        }

        ::java::util::stream::Stream TimeSpanDragForce::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanDragForce::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_2a24ed7b7f6cbca3]));
        }

        ::java::util::List TimeSpanDragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
#include "org/hipparchus/linear/FieldQRDecomposer.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposer::class$ = NULL;
      jmethodID *FieldQRDecomposer::mids$ = NULL;
      bool FieldQRDecomposer::live$ = false;

      jclass FieldQRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_decompose_b2f65345b24ac236] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposer::FieldQRDecomposer(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b2f65345b24ac236], a0.this$));
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
      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args);
      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data);
      static PyGetSetDef t_FieldQRDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposer)[] = {
        { Py_tp_methods, t_FieldQRDecomposer__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposer_init_ },
        { Py_tp_getset, t_FieldQRDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposer, t_FieldQRDecomposer, FieldQRDecomposer);
      PyObject *t_FieldQRDecomposer::wrap_Object(const FieldQRDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposer), &PY_TYPE_DEF(FieldQRDecomposer), module, "FieldQRDecomposer", 0);
      }

      void t_FieldQRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "class_", make_descriptor(FieldQRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "wrapfn_", make_descriptor(t_FieldQRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposer::wrap_Object(FieldQRDecomposer(((t_FieldQRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldQRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldQRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
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
            mids$[mid_init$_d026d5c1d05f1112] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBeacon_dec199e86bf037eb] = env->getMethodID(cls, "getBeacon", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getObserver_dec199e86bf037eb] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_557b8123390d8d0c] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_create_23891a671369bc56] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationDetector::AngularSeparationDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d026d5c1d05f1112, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getBeacon() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getBeacon_dec199e86bf037eb]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationDetector::getObserver() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getObserver_dec199e86bf037eb]));
        }

        jdouble AngularSeparationDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_557b8123390d8d0c]);
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
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadataKey::class$ = NULL;
            jmethodID *OdmMetadataKey::mids$ = NULL;
            bool OdmMetadataKey::live$ = false;
            OdmMetadataKey *OdmMetadataKey::OBJECT_NAME = NULL;

            jclass OdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_817926ffc925014a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmMetadata;)Z");
                mids$[mid_valueOf_2011d501e4da0a3f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");
                mids$[mid_values_97e2df4fd7b8b957] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_NAME = new OdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean OdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_817926ffc925014a], a0.this$, a1.this$, a2.this$);
            }

            OdmMetadataKey OdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return OdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2011d501e4da0a3f], a0.this$));
            }

            JArray< OdmMetadataKey > OdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< OdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_97e2df4fd7b8b957]));
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
            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data);
            static PyGetSetDef t_OdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_OdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_OdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadataKey)[] = {
              { Py_tp_methods, t_OdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(OdmMetadataKey, t_OdmMetadataKey, OdmMetadataKey);
            PyObject *t_OdmMetadataKey::wrap_Object(const OdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_OdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_OdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadataKey), &PY_TYPE_DEF(OdmMetadataKey), module, "OdmMetadataKey", 0);
            }

            void t_OdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "class_", make_descriptor(OdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "wrapfn_", make_descriptor(t_OdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(OdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "OBJECT_NAME", make_descriptor(t_OdmMetadataKey::wrap_Object(*OdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_OdmMetadataKey::wrap_Object(OdmMetadataKey(((t_OdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              OdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::valueOf(a0));
                return t_OdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< OdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_OdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data)
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
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList::class$ = NULL;
      jmethodID *ParameterDriversList::mids$ = NULL;
      bool ParameterDriversList::live$ = false;

      jclass ParameterDriversList::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_558cfe74a49f563f] = env->getMethodID(cls, "add", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_filter_ed2afdb8506b9742] = env->getMethodID(cls, "filter", "(Z)V");
          mids$[mid_findByName_2cfe42bb060aed43] = env->getMethodID(cls, "findByName", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriversList$DelegatingDriver;");
          mids$[mid_findDelegatingSpanNameBySpanName_60bb1b490b673cbf] = env->getMethodID(cls, "findDelegatingSpanNameBySpanName", "(Ljava/lang/String;)Ljava/lang/String;");
          mids$[mid_getDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
          mids$[mid_getNbParams_412668abc8d889e9] = env->getMethodID(cls, "getNbParams", "()I");
          mids$[mid_getNbValuesToEstimate_412668abc8d889e9] = env->getMethodID(cls, "getNbValuesToEstimate", "()I");
          mids$[mid_sort_0640e6acf969ed28] = env->getMethodID(cls, "sort", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriversList::ParameterDriversList() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void ParameterDriversList::add(const ::org::orekit::utils::ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_558cfe74a49f563f], a0.this$);
      }

      void ParameterDriversList::filter(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_filter_ed2afdb8506b9742], a0);
      }

      ::org::orekit::utils::ParameterDriversList$DelegatingDriver ParameterDriversList::findByName(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriversList$DelegatingDriver(env->callObjectMethod(this$, mids$[mid_findByName_2cfe42bb060aed43], a0.this$));
      }

      ::java::lang::String ParameterDriversList::findDelegatingSpanNameBySpanName(const ::java::lang::String & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_findDelegatingSpanNameBySpanName_60bb1b490b673cbf], a0.this$));
      }

      ::java::util::List ParameterDriversList::getDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDrivers_0d9551367f7ecdef]));
      }

      jint ParameterDriversList::getNbParams() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParams_412668abc8d889e9]);
      }

      jint ParameterDriversList::getNbValuesToEstimate() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbValuesToEstimate_412668abc8d889e9]);
      }

      void ParameterDriversList::sort() const
      {
        env->callVoidMethod(this$, mids$[mid_sort_0640e6acf969ed28]);
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
      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data);
      static PyGetSetDef t_ParameterDriversList__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList, drivers),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbParams),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbValuesToEstimate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, add, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, filter, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findByName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findDelegatingSpanNameBySpanName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, getDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbParams, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbValuesToEstimate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, sort, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList)[] = {
        { Py_tp_methods, t_ParameterDriversList__methods_ },
        { Py_tp_init, (void *) t_ParameterDriversList_init_ },
        { Py_tp_getset, t_ParameterDriversList__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList, t_ParameterDriversList, ParameterDriversList);

      void t_ParameterDriversList::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList), &PY_TYPE_DEF(ParameterDriversList), module, "ParameterDriversList", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "DelegatingDriver", make_descriptor(&PY_TYPE_DEF(ParameterDriversList$DelegatingDriver)));
      }

      void t_ParameterDriversList::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "class_", make_descriptor(ParameterDriversList::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "wrapfn_", make_descriptor(t_ParameterDriversList::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList::wrap_Object(ParameterDriversList(((t_ParameterDriversList *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds)
      {
        ParameterDriversList object((jobject) NULL);

        INT_CALL(object = ParameterDriversList());
        self->object = object;

        return 0;
      }

      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.add(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.filter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriversList$DelegatingDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findByName(a0));
          return ::org::orekit::utils::t_ParameterDriversList$DelegatingDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findByName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findDelegatingSpanNameBySpanName(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findDelegatingSpanNameBySpanName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriversList$DelegatingDriver));
      }

      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParams());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self)
      {
        OBJ_CALL(self->object.sort());
        Py_RETURN_NONE;
      }

      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParams());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *ParametricUnivariateFunction::class$ = NULL;
      jmethodID *ParametricUnivariateFunction::mids$ = NULL;
      bool ParametricUnivariateFunction::live$ = false;

      jclass ParametricUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/ParametricUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_gradient_31b9a2982d73e37a] = env->getMethodID(cls, "gradient", "(D[D)[D");
          mids$[mid_value_1bc40469b56f2c3c] = env->getMethodID(cls, "value", "(D[D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > ParametricUnivariateFunction::gradient(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_31b9a2982d73e37a], a0, a1.this$));
      }

      jdouble ParametricUnivariateFunction::value(jdouble a0, const JArray< jdouble > & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_1bc40469b56f2c3c], a0, a1.this$);
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
      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args);
      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args);

      static PyMethodDef t_ParametricUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_ParametricUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, gradient, METH_VARARGS),
        DECLARE_METHOD(t_ParametricUnivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParametricUnivariateFunction)[] = {
        { Py_tp_methods, t_ParametricUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParametricUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParametricUnivariateFunction, t_ParametricUnivariateFunction, ParametricUnivariateFunction);

      void t_ParametricUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(ParametricUnivariateFunction), &PY_TYPE_DEF(ParametricUnivariateFunction), module, "ParametricUnivariateFunction", 0);
      }

      void t_ParametricUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "class_", make_descriptor(ParametricUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "wrapfn_", make_descriptor(t_ParametricUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParametricUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParametricUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_ParametricUnivariateFunction::wrap_Object(ParametricUnivariateFunction(((t_ParametricUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_ParametricUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParametricUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParametricUnivariateFunction_gradient(t_ParametricUnivariateFunction *self, PyObject *args)
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

      static PyObject *t_ParametricUnivariateFunction_value(t_ParametricUnivariateFunction *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *PythonRangeUnitsConverter::class$ = NULL;
            jmethodID *PythonRangeUnitsConverter::mids$ = NULL;
            bool PythonRangeUnitsConverter::live$ = false;

            jclass PythonRangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_metersToRu_5e4513d7d070fbb0] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_ruToMeters_5e4513d7d070fbb0] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonRangeUnitsConverter::PythonRangeUnitsConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonRangeUnitsConverter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonRangeUnitsConverter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonRangeUnitsConverter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          namespace tdm {
            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self);
            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args);
            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data);
            static PyGetSetDef t_PythonRangeUnitsConverter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonRangeUnitsConverter, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonRangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_PythonRangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonRangeUnitsConverter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonRangeUnitsConverter)[] = {
              { Py_tp_methods, t_PythonRangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) t_PythonRangeUnitsConverter_init_ },
              { Py_tp_getset, t_PythonRangeUnitsConverter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonRangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonRangeUnitsConverter, t_PythonRangeUnitsConverter, PythonRangeUnitsConverter);

            void t_PythonRangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonRangeUnitsConverter), &PY_TYPE_DEF(PythonRangeUnitsConverter), module, "PythonRangeUnitsConverter", 1);
            }

            void t_PythonRangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "class_", make_descriptor(PythonRangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "wrapfn_", make_descriptor(t_PythonRangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonRangeUnitsConverter::initializeClass);
              JNINativeMethod methods[] = {
                { "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_metersToRu0 },
                { "pythonDecRef", "()V", (void *) t_PythonRangeUnitsConverter_pythonDecRef1 },
                { "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D", (void *) t_PythonRangeUnitsConverter_ruToMeters2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonRangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonRangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_PythonRangeUnitsConverter::wrap_Object(PythonRangeUnitsConverter(((t_PythonRangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_PythonRangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonRangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonRangeUnitsConverter_init_(t_PythonRangeUnitsConverter *self, PyObject *args, PyObject *kwds)
            {
              PythonRangeUnitsConverter object((jobject) NULL);

              INT_CALL(object = PythonRangeUnitsConverter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_finalize(t_PythonRangeUnitsConverter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonRangeUnitsConverter_pythonExtension(t_PythonRangeUnitsConverter *self, PyObject *args)
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

            static jdouble JNICALL t_PythonRangeUnitsConverter_metersToRu0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "metersToRu", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("metersToRu", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonRangeUnitsConverter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jdouble JNICALL t_PythonRangeUnitsConverter_ruToMeters2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonRangeUnitsConverter::mids$[PythonRangeUnitsConverter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::files::ccsds::ndm::tdm::t_TdmMetadata::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::TdmMetadata(a0));
              PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
              PyObject *result = PyObject_CallMethod(obj, "ruToMeters", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("ruToMeters", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static PyObject *t_PythonRangeUnitsConverter_get__self(t_PythonRangeUnitsConverter *self, void *data)
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
#include "org/hipparchus/distribution/continuous/ChiSquaredDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ChiSquaredDistribution::class$ = NULL;
        jmethodID *ChiSquaredDistribution::mids$ = NULL;
        bool ChiSquaredDistribution::live$ = false;

        jclass ChiSquaredDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ChiSquaredDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_557b8123390d8d0c] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble ChiSquaredDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble ChiSquaredDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble ChiSquaredDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_557b8123390d8d0c]);
        }

        jdouble ChiSquaredDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble ChiSquaredDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble ChiSquaredDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble ChiSquaredDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean ChiSquaredDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble ChiSquaredDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self);
        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data);
        static PyGetSetDef t_ChiSquaredDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ChiSquaredDistribution__methods_[] = {
          DECLARE_METHOD(t_ChiSquaredDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquaredDistribution)[] = {
          { Py_tp_methods, t_ChiSquaredDistribution__methods_ },
          { Py_tp_init, (void *) t_ChiSquaredDistribution_init_ },
          { Py_tp_getset, t_ChiSquaredDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquaredDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ChiSquaredDistribution, t_ChiSquaredDistribution, ChiSquaredDistribution);

        void t_ChiSquaredDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquaredDistribution), &PY_TYPE_DEF(ChiSquaredDistribution), module, "ChiSquaredDistribution", 0);
        }

        void t_ChiSquaredDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "class_", make_descriptor(ChiSquaredDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "wrapfn_", make_descriptor(t_ChiSquaredDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquaredDistribution::initializeClass, 1)))
            return NULL;
          return t_ChiSquaredDistribution::wrap_Object(ChiSquaredDistribution(((t_ChiSquaredDistribution *) arg)->object.this$));
        }
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquaredDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ChiSquaredDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ChiSquaredDistribution(a0, a1));
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

        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data)
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
#include "org/hipparchus/analysis/function/HarmonicOscillator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator::class$ = NULL;
        jmethodID *HarmonicOscillator::mids$ = NULL;
        bool HarmonicOscillator::live$ = false;

        jclass HarmonicOscillator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator::HarmonicOscillator(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble HarmonicOscillator::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative HarmonicOscillator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator)[] = {
          { Py_tp_methods, t_HarmonicOscillator__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator, t_HarmonicOscillator, HarmonicOscillator);

        void t_HarmonicOscillator::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator), &PY_TYPE_DEF(HarmonicOscillator), module, "HarmonicOscillator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "Parametric", make_descriptor(&PY_TYPE_DEF(HarmonicOscillator$Parametric)));
        }

        void t_HarmonicOscillator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "class_", make_descriptor(HarmonicOscillator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "wrapfn_", make_descriptor(t_HarmonicOscillator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator::wrap_Object(HarmonicOscillator(((t_HarmonicOscillator *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator_init_(t_HarmonicOscillator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HarmonicOscillator object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HarmonicOscillator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicOscillator_value(t_HarmonicOscillator *self, PyObject *args)
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
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator::live$ = false;

        jclass FieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_937202f702b471fa] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/FieldAdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_2ffeff0ffaf1deef] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_412668abc8d889e9] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_412668abc8d889e9] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_07866493eb3b3f17] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_3cffd47377eca18a] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_613c8f46c659f636] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPropagationType_81e4bfcfa9059f10] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_89b302893bdbe1f1] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_5324cbf9e5ce58fe] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagate_78f4b3ee8066e6b6] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_1ee4bed350fde589] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setResetAtEnd_ed2afdb8506b9742] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_setPositionAngleType_44c283653315b1a7] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_createMapper_ad7c2ac9dfe2008b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_setUpEventDetector_a8d25606874dccaf] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_setUpUserEventDetectors_0640e6acf969ed28] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");
            mids$[mid_getInitialIntegrationState_381b3e011cde018d] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_beforeIntegration_811e49dad2467b67] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_afterIntegration_0640e6acf969ed28] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getMainStateEquations_c822d3b1a2fa150a] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_initMapper_979ae7f57a96b096] = env->getMethodID(cls, "initMapper", "(Lorg/hipparchus/Field;)V");
            mids$[mid_setOrbitType_6ccfc646a24c9722] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_isMeanOrbit_81e4bfcfa9059f10] = env->getMethodID(cls, "isMeanOrbit", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getIntegrator_7ec434f55655b6ee] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_937202f702b471fa], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_2ffeff0ffaf1deef], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0640e6acf969ed28]);
        }

        ::java::util::List FieldAbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_0d9551367f7ecdef]));
        }

        jint FieldAbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_412668abc8d889e9]);
        }

        jint FieldAbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_412668abc8d889e9]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_07866493eb3b3f17]));
        }

        ::java::util::Collection FieldAbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_12ee61573a18f417]));
        }

        ::java::lang::String FieldAbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_3cffd47377eca18a]));
        }

        JArray< ::java::lang::String > FieldAbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_5d7d8c500345981d]));
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractIntegratedPropagator::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_613c8f46c659f636]));
        }

        ::org::orekit::propagation::PropagationType FieldAbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_81e4bfcfa9059f10]));
        }

        jboolean FieldAbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_89b302893bdbe1f1]);
        }

        jboolean FieldAbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe], a0.this$);
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_5324cbf9e5ce58fe], a0.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_78f4b3ee8066e6b6], a0.this$, a1.this$));
        }

        void FieldAbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_1ee4bed350fde589], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_ed2afdb8506b9742], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_FieldAbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, resetAtEnd),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator, t_FieldAbstractIntegratedPropagator, FieldAbstractIntegratedPropagator);
        PyObject *t_FieldAbstractIntegratedPropagator::wrap_Object(const FieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator), module, "FieldAbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_FieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "class_", make_descriptor(FieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator::wrap_Object(FieldAbstractIntegratedPropagator(((t_FieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::integration::t_FieldAdditionalDerivativesProvider::parameters_))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
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
            }
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
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

        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
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

        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonPropulsionModel::class$ = NULL;
          jmethodID *PythonPropulsionModel::mids$ = NULL;
          bool PythonPropulsionModel::live$ = false;

          jclass PythonPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAcceleration_53d7cdec4a9e3cd4] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_28694fea3dbf2005] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getMassDerivatives_810dcb8f9f5d191a] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_4ad317f7598a10a9] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPropulsionModel::PythonPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonPropulsionModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self);
          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPropulsionModel)[] = {
            { Py_tp_methods, t_PythonPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonPropulsionModel_init_ },
            { Py_tp_getset, t_PythonPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonPropulsionModel, t_PythonPropulsionModel, PythonPropulsionModel);

          void t_PythonPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPropulsionModel), &PY_TYPE_DEF(PythonPropulsionModel), module, "PythonPropulsionModel", 1);
          }

          void t_PythonPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "class_", make_descriptor(PythonPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "wrapfn_", make_descriptor(t_PythonPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonPropulsionModel_getAcceleration0 },
              { "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonPropulsionModel_getAcceleration1 },
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonPropulsionModel_getControl3DVectorCostType2 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonPropulsionModel_getMassDerivatives3 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonPropulsionModel_getMassDerivatives4 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonPropulsionModel_getName5 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonPropulsionModel_getParametersDrivers6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonPropulsionModel::wrap_Object(PythonPropulsionModel(((t_PythonPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_Attitude::wrap_Object(::org::orekit::attitudes::Attitude(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(::org::orekit::attitudes::FieldAttitude(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getMassDerivatives", result);
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

          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMassDerivatives", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
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

          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
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

          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
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

          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data)
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
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticElements::class$ = NULL;
        jmethodID *GeoMagneticElements::mids$ = NULL;
        bool GeoMagneticElements::live$ = false;

        jclass GeoMagneticElements::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticElements");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2810d2bec90e7b1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDeclination_557b8123390d8d0c] = env->getMethodID(cls, "getDeclination", "()D");
            mids$[mid_getFieldVector_f88961cca75a2c0a] = env->getMethodID(cls, "getFieldVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHorizontalIntensity_557b8123390d8d0c] = env->getMethodID(cls, "getHorizontalIntensity", "()D");
            mids$[mid_getInclination_557b8123390d8d0c] = env->getMethodID(cls, "getInclination", "()D");
            mids$[mid_getTotalIntensity_557b8123390d8d0c] = env->getMethodID(cls, "getTotalIntensity", "()D");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticElements::GeoMagneticElements(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2810d2bec90e7b1c, a0.this$)) {}

        jdouble GeoMagneticElements::getDeclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDeclination_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GeoMagneticElements::getFieldVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFieldVector_f88961cca75a2c0a]));
        }

        jdouble GeoMagneticElements::getHorizontalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHorizontalIntensity_557b8123390d8d0c]);
        }

        jdouble GeoMagneticElements::getInclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInclination_557b8123390d8d0c]);
        }

        jdouble GeoMagneticElements::getTotalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalIntensity_557b8123390d8d0c]);
        }

        ::java::lang::String GeoMagneticElements::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args);
        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data);
        static PyGetSetDef t_GeoMagneticElements__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticElements, declination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, fieldVector),
          DECLARE_GET_FIELD(t_GeoMagneticElements, horizontalIntensity),
          DECLARE_GET_FIELD(t_GeoMagneticElements, inclination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, totalIntensity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticElements__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticElements, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, getDeclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getFieldVector, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getHorizontalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getInclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getTotalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticElements)[] = {
          { Py_tp_methods, t_GeoMagneticElements__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticElements_init_ },
          { Py_tp_getset, t_GeoMagneticElements__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticElements)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticElements, t_GeoMagneticElements, GeoMagneticElements);

        void t_GeoMagneticElements::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticElements), &PY_TYPE_DEF(GeoMagneticElements), module, "GeoMagneticElements", 0);
        }

        void t_GeoMagneticElements::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "class_", make_descriptor(GeoMagneticElements::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "wrapfn_", make_descriptor(t_GeoMagneticElements::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticElements::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticElements::wrap_Object(GeoMagneticElements(((t_GeoMagneticElements *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticElements::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          GeoMagneticElements object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            INT_CALL(object = GeoMagneticElements(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDeclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(GeoMagneticElements), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDeclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ClassicalRungeKuttaFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder, t_ClassicalRungeKuttaFieldIntegratorBuilder, ClassicalRungeKuttaFieldIntegratorBuilder);
        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(const ClassicalRungeKuttaFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegratorBuilder), module, "ClassicalRungeKuttaFieldIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(ClassicalRungeKuttaFieldIntegratorBuilder(((t_ClassicalRungeKuttaFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
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

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStamped::class$ = NULL;
      jmethodID *FieldTimeStamped::mids$ = NULL;
      bool FieldTimeStamped::live$ = false;

      jclass FieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_57047f23e148cea9] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldTimeStamped;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldTimeStamped::durationFrom(const FieldTimeStamped & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_57047f23e148cea9], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStamped::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
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
      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args);
      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg);
      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self);
      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data);
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data);
      static PyGetSetDef t_FieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStamped, date),
        DECLARE_GET_FIELD(t_FieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_FieldTimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStamped)[] = {
        { Py_tp_methods, t_FieldTimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStamped, t_FieldTimeStamped, FieldTimeStamped);
      PyObject *t_FieldTimeStamped::wrap_Object(const FieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStamped), &PY_TYPE_DEF(FieldTimeStamped), module, "FieldTimeStamped", 0);
      }

      void t_FieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "class_", make_descriptor(FieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "wrapfn_", make_descriptor(t_FieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStamped::wrap_Object(FieldTimeStamped(((t_FieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg)
      {
        FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTimeStamped::initializeClass, &a0, &p0, t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *StationDisplacement::class$ = NULL;
          jmethodID *StationDisplacement::mids$ = NULL;
          bool StationDisplacement::live$ = false;

          jclass StationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/StationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_displacement_2092c3958d15642d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D StationDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_2092c3958d15642d], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args);

          static PyMethodDef t_StationDisplacement__methods_[] = {
            DECLARE_METHOD(t_StationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StationDisplacement)[] = {
            { Py_tp_methods, t_StationDisplacement__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StationDisplacement, t_StationDisplacement, StationDisplacement);

          void t_StationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(StationDisplacement), &PY_TYPE_DEF(StationDisplacement), module, "StationDisplacement", 0);
          }

          void t_StationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "class_", make_descriptor(StationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "wrapfn_", make_descriptor(t_StationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StationDisplacement::initializeClass, 1)))
              return NULL;
            return t_StationDisplacement::wrap_Object(StationDisplacement(((t_StationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceWriter::class$ = NULL;
            jmethodID *CartesianCovarianceWriter::mids$ = NULL;
            bool CartesianCovarianceWriter::live$ = false;

            jclass CartesianCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e67eb5a35bd229eb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovarianceWriter::CartesianCovarianceWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_e67eb5a35bd229eb, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CartesianCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceWriter)[] = {
              { Py_tp_methods, t_CartesianCovarianceWriter__methods_ },
              { Py_tp_init, (void *) t_CartesianCovarianceWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceWriter, t_CartesianCovarianceWriter, CartesianCovarianceWriter);

            void t_CartesianCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceWriter), &PY_TYPE_DEF(CartesianCovarianceWriter), module, "CartesianCovarianceWriter", 0);
            }

            void t_CartesianCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "class_", make_descriptor(CartesianCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "wrapfn_", make_descriptor(t_CartesianCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceWriter::wrap_Object(CartesianCovarianceWriter(((t_CartesianCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              CartesianCovarianceWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CartesianCovarianceWriter(a0, a1, a2));
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
#include "org/orekit/models/earth/troposphere/TroposphericModelUtils.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
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
              mids$[mid_computeHeightCorrection_2268d18be49a6087] = env->getStaticMethodID(cls, "computeHeightCorrection", "(DD)D");
              mids$[mid_computeHeightCorrection_1abe48422844d9d9] = env->getStaticMethodID(cls, "computeHeightCorrection", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFunction_79d60f5d1a9d8623] = env->getStaticMethodID(cls, "mappingFunction", "(DDDD)D");
              mids$[mid_mappingFunction_b36bbc15a8c16f64] = env->getStaticMethodID(cls, "mappingFunction", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble TroposphericModelUtils::computeHeightCorrection(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_computeHeightCorrection_2268d18be49a6087], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::computeHeightCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeHeightCorrection_1abe48422844d9d9], a0.this$, a1.this$, a2.this$));
          }

          jdouble TroposphericModelUtils::mappingFunction(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_mappingFunction_79d60f5d1a9d8623], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::mappingFunction(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_mappingFunction_b36bbc15a8c16f64], a0.this$, a1.this$, a2.this$, a3.this$));
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
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_631cad984dc812e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDOA::TDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_631cad984dc812e4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_2161f2a4a8c885ec]));
        }

        ::org::orekit::estimation::measurements::GroundStation TDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_2161f2a4a8c885ec]));
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
#include "java/util/TreeSet.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/io/Serializable.h"
#include "java/util/SortedSet.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TreeSet::class$ = NULL;
    jmethodID *TreeSet::mids$ = NULL;
    bool TreeSet::live$ = false;

    jclass TreeSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TreeSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_349032d04af23bed] = env->getMethodID(cls, "<init>", "(Ljava/util/Comparator;)V");
        mids$[mid_init$_dd1a69b50abe9a6d] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_ceiling_65d69db95c5eb156] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_comparator_b0b551d4a54c7150] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_834a3801c426326d] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_0617a74a450b6c8d] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_first_e661fe3ba2fafb22] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_floor_65d69db95c5eb156] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_3ca4ace183d6efe9] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_b83c282998266525] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_65d69db95c5eb156] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_last_e661fe3ba2fafb22] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_lower_65d69db95c5eb156] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_e661fe3ba2fafb22] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_ba202d431ff51666] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_95b7fdef68d2eb53] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_3ca4ace183d6efe9] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_b83c282998266525] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TreeSet::TreeSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    TreeSet::TreeSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::Comparator & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_349032d04af23bed, a0.this$)) {}

    TreeSet::TreeSet(const ::java::util::SortedSet & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_dd1a69b50abe9a6d, a0.this$)) {}

    jboolean TreeSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    jboolean TreeSet::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_15ecf331dcc5aaf3], a0.this$);
    }

    ::java::lang::Object TreeSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_65d69db95c5eb156], a0.this$));
    }

    void TreeSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    ::java::lang::Object TreeSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    ::java::util::Comparator TreeSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_b0b551d4a54c7150]));
    }

    jboolean TreeSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    ::java::util::Iterator TreeSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_834a3801c426326d]));
    }

    ::java::util::NavigableSet TreeSet::descendingSet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_0617a74a450b6c8d]));
    }

    ::java::lang::Object TreeSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_e661fe3ba2fafb22]));
    }

    ::java::lang::Object TreeSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_65d69db95c5eb156], a0.this$));
    }

    ::java::util::SortedSet TreeSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_3ca4ace183d6efe9], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_b83c282998266525], a0.this$, a1));
    }

    ::java::lang::Object TreeSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_65d69db95c5eb156], a0.this$));
    }

    jboolean TreeSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator TreeSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    ::java::lang::Object TreeSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_e661fe3ba2fafb22]));
    }

    ::java::lang::Object TreeSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_65d69db95c5eb156], a0.this$));
    }

    ::java::lang::Object TreeSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object TreeSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_e661fe3ba2fafb22]));
    }

    jboolean TreeSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jint TreeSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::util::Spliterator TreeSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }

    ::java::util::SortedSet TreeSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_ba202d431ff51666], a0.this$, a1.this$));
    }

    ::java::util::NavigableSet TreeSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_95b7fdef68d2eb53], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet TreeSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_3ca4ace183d6efe9], a0.this$));
    }

    ::java::util::NavigableSet TreeSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_b83c282998266525], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args);
    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_clone(t_TreeSet *self);
    static PyObject *t_TreeSet_comparator(t_TreeSet *self);
    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self);
    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self);
    static PyObject *t_TreeSet_first(t_TreeSet *self);
    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_last(t_TreeSet *self);
    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg);
    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self);
    static PyObject *t_TreeSet_pollLast(t_TreeSet *self);
    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args);
    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data);
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data);
    static PyGetSetDef t_TreeSet__fields_[] = {
      DECLARE_GET_FIELD(t_TreeSet, empty),
      DECLARE_GET_FIELD(t_TreeSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TreeSet__methods_[] = {
      DECLARE_METHOD(t_TreeSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TreeSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, add, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, addAll, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, ceiling, METH_O),
      DECLARE_METHOD(t_TreeSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, first, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, floor, METH_O),
      DECLARE_METHOD(t_TreeSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, higher, METH_O),
      DECLARE_METHOD(t_TreeSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, last, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, lower, METH_O),
      DECLARE_METHOD(t_TreeSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_TreeSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, size, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_TreeSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TreeSet)[] = {
      { Py_tp_methods, t_TreeSet__methods_ },
      { Py_tp_init, (void *) t_TreeSet_init_ },
      { Py_tp_getset, t_TreeSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_TreeSet *)) get_generic_iterator< t_TreeSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TreeSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(TreeSet, t_TreeSet, TreeSet);
    PyObject *t_TreeSet::wrap_Object(const TreeSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_TreeSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_TreeSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_TreeSet *self = (t_TreeSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_TreeSet::install(PyObject *module)
    {
      installType(&PY_TYPE(TreeSet), &PY_TYPE_DEF(TreeSet), module, "TreeSet", 0);
    }

    void t_TreeSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "class_", make_descriptor(TreeSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "wrapfn_", make_descriptor(t_TreeSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TreeSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_TreeSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TreeSet::initializeClass, 1)))
        return NULL;
      return t_TreeSet::wrap_Object(TreeSet(((t_TreeSet *) arg)->object.this$));
    }
    static PyObject *t_TreeSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TreeSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_TreeSet_of_(t_TreeSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_TreeSet_init_(t_TreeSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          TreeSet object((jobject) NULL);

          INT_CALL(object = TreeSet());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::SortedSet a0((jobject) NULL);
          PyTypeObject **p0;
          TreeSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
          {
            INT_CALL(object = TreeSet(a0));
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

    static PyObject *t_TreeSet_add(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_TreeSet_addAll(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_TreeSet_ceiling(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_clear(t_TreeSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_TreeSet_clone(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_comparator(t_TreeSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_TreeSet_contains(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_TreeSet_descendingIterator(t_TreeSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_descendingSet(t_TreeSet *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_TreeSet_first(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_floor(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_headSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_higher(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_isEmpty(t_TreeSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_TreeSet_iterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_TreeSet_last(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_lower(t_TreeSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_TreeSet_pollFirst(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_pollLast(t_TreeSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TreeSet_remove(t_TreeSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_TreeSet_size(t_TreeSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_TreeSet_spliterator(t_TreeSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(TreeSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_TreeSet_subSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_TreeSet_tailSet(t_TreeSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::util::NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", args);
      return NULL;
    }
    static PyObject *t_TreeSet_get__parameters_(t_TreeSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_TreeSet_get__empty(t_TreeSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *StartStopEventsTrigger::class$ = NULL;
          jmethodID *StartStopEventsTrigger::mids$ = NULL;
          bool StartStopEventsTrigger::live$ = false;

          jclass StartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getStartDetector_9cafaf54f10725f9] = env->getMethodID(cls, "getStartDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_getStopDetector_9cafaf54f10725f9] = env->getMethodID(cls, "getStopDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiringOnInitialState_1e4c79a00429445e] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_convertStartDetector_590bb38060674b63] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_590bb38060674b63] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStartDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStartDetector_9cafaf54f10725f9]));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStopDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStopDetector_9cafaf54f10725f9]));
          }

          void StartStopEventsTrigger::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_StartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, startDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, stopDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_StartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStartDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStopDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StartStopEventsTrigger)[] = {
            { Py_tp_methods, t_StartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(StartStopEventsTrigger, t_StartStopEventsTrigger, StartStopEventsTrigger);
          PyObject *t_StartStopEventsTrigger::wrap_Object(const StartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_StartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_StartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(StartStopEventsTrigger), &PY_TYPE_DEF(StartStopEventsTrigger), module, "StartStopEventsTrigger", 0);
          }

          void t_StartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "class_", make_descriptor(StartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "wrapfn_", make_descriptor(t_StartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_StartStopEventsTrigger::wrap_Object(StartStopEventsTrigger(((t_StartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStopDetector());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "init", args, 2);
          }
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStopDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldExpandableODE::class$ = NULL;
      jmethodID *FieldExpandableODE::mids$ = NULL;
      bool FieldExpandableODE::live$ = false;

      jclass FieldExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c4338558f7e8e9e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_32fc4a09aad6df09] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/FieldSecondaryODE;)I");
          mids$[mid_computeDerivatives_67a274b4fbd2dca4] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMapper_9b874f5c7e7ed33f] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
          mids$[mid_getPrimary_d4234cffdfa477d6] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;");
          mids$[mid_init_ee2fc63f2a26c007] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldExpandableODE::FieldExpandableODE(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c4338558f7e8e9e, a0.this$)) {}

      jint FieldExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::FieldSecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_32fc4a09aad6df09], a0.this$);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldExpandableODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_67a274b4fbd2dca4], a0.this$, a1.this$));
      }

      ::org::hipparchus::ode::FieldEquationsMapper FieldExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::FieldEquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_9b874f5c7e7ed33f]));
      }

      ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation FieldExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_d4234cffdfa477d6]));
      }

      void FieldExpandableODE::init(const ::org::hipparchus::ode::FieldODEState & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_ee2fc63f2a26c007], a0.this$, a1.this$);
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
      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args);
      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg);
      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data);
      static PyGetSetDef t_FieldExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldExpandableODE, mapper),
        DECLARE_GET_FIELD(t_FieldExpandableODE, primary),
        DECLARE_GET_FIELD(t_FieldExpandableODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldExpandableODE__methods_[] = {
        DECLARE_METHOD(t_FieldExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_FieldExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldExpandableODE)[] = {
        { Py_tp_methods, t_FieldExpandableODE__methods_ },
        { Py_tp_init, (void *) t_FieldExpandableODE_init_ },
        { Py_tp_getset, t_FieldExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldExpandableODE, t_FieldExpandableODE, FieldExpandableODE);
      PyObject *t_FieldExpandableODE::wrap_Object(const FieldExpandableODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldExpandableODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldExpandableODE), &PY_TYPE_DEF(FieldExpandableODE), module, "FieldExpandableODE", 0);
      }

      void t_FieldExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "class_", make_descriptor(FieldExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "wrapfn_", make_descriptor(t_FieldExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldExpandableODE::initializeClass, 1)))
          return NULL;
        return t_FieldExpandableODE::wrap_Object(FieldExpandableODE(((t_FieldExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
        PyTypeObject **p0;
        FieldExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_))
        {
          INT_CALL(object = FieldExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldSecondaryODE a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldSecondaryODE::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldSecondaryODE::parameters_))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldEquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEState a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldEquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(value);
      }

      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurement::class$ = NULL;
        jmethodID *EstimatedMeasurement::mids$ = NULL;
        bool EstimatedMeasurement::live$ = false;

        jclass EstimatedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f92fd0d275c4d59c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getDerivativesDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getDerivativesDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getParameterDerivatives_00b2044be7a3a4c5] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;)[D");
            mids$[mid_getParameterDerivatives_d8cf911e614780c8] = env->getMethodID(cls, "getParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_getStateDerivatives_ace8110626df0bb8] = env->getMethodID(cls, "getStateDerivatives", "(I)[[D");
            mids$[mid_getStateSize_412668abc8d889e9] = env->getMethodID(cls, "getStateSize", "()I");
            mids$[mid_setParameterDerivatives_fdd3af5690b10570] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/utils/TimeSpanMap;)V");
            mids$[mid_setParameterDerivatives_83d85c8b9fde2e36] = env->getMethodID(cls, "setParameterDerivatives", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_setStateDerivatives_03f9d79d0168ba0b] = env->getMethodID(cls, "setStateDerivatives", "(I[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurement::EstimatedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->newObject(initializeClass, &mids$, mid_init$_f92fd0d275c4d59c, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        ::java::util::stream::Stream EstimatedMeasurement::getDerivativesDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getDerivativesDrivers_d7cce92225eb0db2]));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_00b2044be7a3a4c5], a0.this$));
        }

        JArray< jdouble > EstimatedMeasurement::getParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameterDerivatives_d8cf911e614780c8], a0.this$, a1.this$));
        }

        JArray< JArray< jdouble > > EstimatedMeasurement::getStateDerivatives(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getStateDerivatives_ace8110626df0bb8], a0));
        }

        jint EstimatedMeasurement::getStateSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getStateSize_412668abc8d889e9]);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::utils::TimeSpanMap & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_fdd3af5690b10570], a0.this$, a1.this$);
        }

        void EstimatedMeasurement::setParameterDerivatives(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setParameterDerivatives_83d85c8b9fde2e36], a0.this$, a1.this$, a2.this$);
        }

        void EstimatedMeasurement::setStateDerivatives(jint a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setStateDerivatives_03f9d79d0168ba0b], a0, a1.this$);
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
        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args);
        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self);
        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args);
        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data);
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data);
        static PyGetSetDef t_EstimatedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurement, derivativesDrivers),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, stateSize),
          DECLARE_GET_FIELD(t_EstimatedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurement__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getDerivativesDrivers, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateDerivatives, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurement, getStateSize, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setParameterDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurement, setStateDerivatives, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurement)[] = {
          { Py_tp_methods, t_EstimatedMeasurement__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurement_init_ },
          { Py_tp_getset, t_EstimatedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::EstimatedMeasurementBase),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurement, t_EstimatedMeasurement, EstimatedMeasurement);
        PyObject *t_EstimatedMeasurement::wrap_Object(const EstimatedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurement *self = (t_EstimatedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurement), &PY_TYPE_DEF(EstimatedMeasurement), module, "EstimatedMeasurement", 0);
        }

        void t_EstimatedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "class_", make_descriptor(EstimatedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "wrapfn_", make_descriptor(t_EstimatedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurement::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurement::wrap_Object(EstimatedMeasurement(((t_EstimatedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurement_of_(t_EstimatedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurement_init_(t_EstimatedMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurement object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurement(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurement_getDerivativesDrivers(t_EstimatedMeasurement *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_EstimatedMeasurement_getParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0));
                return result.wrap();
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getParameterDerivatives(a0, a1));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateDerivatives(t_EstimatedMeasurement *self, PyObject *arg)
        {
          jint a0;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getStateDerivatives(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "getStateDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_getStateSize(t_EstimatedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStateSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurement_setParameterDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setParameterDerivatives(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setParameterDerivatives", args);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurement_setStateDerivatives(t_EstimatedMeasurement *self, PyObject *args)
        {
          jint a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "I[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.setStateDerivatives(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStateDerivatives", args);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurement_get__parameters_(t_EstimatedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurement_get__derivativesDrivers(t_EstimatedMeasurement *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativesDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurement_get__stateSize(t_EstimatedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStateSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *QZSSScale::class$ = NULL;
      jmethodID *QZSSScale::mids$ = NULL;
      bool QZSSScale::live$ = false;

      jclass QZSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/QZSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String QZSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble QZSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement QZSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble QZSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String QZSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_getName(t_QZSSScale *self);
      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data);
      static PyGetSetDef t_QZSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_QZSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QZSSScale__methods_[] = {
        DECLARE_METHOD(t_QZSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_QZSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QZSSScale)[] = {
        { Py_tp_methods, t_QZSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_QZSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QZSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QZSSScale, t_QZSSScale, QZSSScale);

      void t_QZSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(QZSSScale), &PY_TYPE_DEF(QZSSScale), module, "QZSSScale", 0);
      }

      void t_QZSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "class_", make_descriptor(QZSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "wrapfn_", make_descriptor(t_QZSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QZSSScale::initializeClass, 1)))
          return NULL;
        return t_QZSSScale::wrap_Object(QZSSScale(((t_QZSSScale *) arg)->object.this$));
      }
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QZSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_QZSSScale_getName(t_QZSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(QZSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthShape::class$ = NULL;
        jmethodID *EarthShape::mids$ = NULL;
        bool EarthShape::live$ = false;

        jclass EarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEllipsoid_576f0b44e8384336] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::ReferenceEllipsoid EarthShape::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_576f0b44e8384336]));
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
        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self);
        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data);
        static PyGetSetDef t_EarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_EarthShape, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthShape__methods_[] = {
          DECLARE_METHOD(t_EarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthShape, getEllipsoid, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthShape)[] = {
          { Py_tp_methods, t_EarthShape__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthShape)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::BodyShape),
          NULL
        };

        DEFINE_TYPE(EarthShape, t_EarthShape, EarthShape);

        void t_EarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthShape), &PY_TYPE_DEF(EarthShape), module, "EarthShape", 0);
        }

        void t_EarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "class_", make_descriptor(EarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "wrapfn_", make_descriptor(t_EarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthShape), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthShape::initializeClass, 1)))
            return NULL;
          return t_EarthShape::wrap_Object(EarthShape(((t_EarthShape *) arg)->object.this$));
        }
        static PyObject *t_EarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EarthShape_getEllipsoid(t_EarthShape *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_EarthShape_get__ellipsoid(t_EarthShape *self, void *data)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarC::class$ = NULL;
          jmethodID *CopolarC::mids$ = NULL;
          bool CopolarC::live$ = false;

          jclass CopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_557b8123390d8d0c] = env->getMethodID(cls, "dc", "()D");
              mids$[mid_nc_557b8123390d8d0c] = env->getMethodID(cls, "nc", "()D");
              mids$[mid_sc_557b8123390d8d0c] = env->getMethodID(cls, "sc", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarC::dc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_dc_557b8123390d8d0c]);
          }

          jdouble CopolarC::nc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nc_557b8123390d8d0c]);
          }

          jdouble CopolarC::sc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sc_557b8123390d8d0c]);
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
          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarC_dc(t_CopolarC *self);
          static PyObject *t_CopolarC_nc(t_CopolarC *self);
          static PyObject *t_CopolarC_sc(t_CopolarC *self);

          static PyMethodDef t_CopolarC__methods_[] = {
            DECLARE_METHOD(t_CopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_CopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarC)[] = {
            { Py_tp_methods, t_CopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarC, t_CopolarC, CopolarC);

          void t_CopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarC), &PY_TYPE_DEF(CopolarC), module, "CopolarC", 0);
          }

          void t_CopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "class_", make_descriptor(CopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "wrapfn_", make_descriptor(t_CopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarC::initializeClass, 1)))
              return NULL;
            return t_CopolarC::wrap_Object(CopolarC(((t_CopolarC *) arg)->object.this$));
          }
          static PyObject *t_CopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarC_dc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.dc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_nc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarC_sc(t_CopolarC *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sc());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefinedWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefinedWriter::class$ = NULL;
            jmethodID *UserDefinedWriter::mids$ = NULL;
            bool UserDefinedWriter::live$ = false;

            jclass UserDefinedWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefinedWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_365d9f0b1da278b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_writeContent_0503da09b1f1eb3c] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedWriter::UserDefinedWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_365d9f0b1da278b4, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_UserDefinedWriter__methods_[] = {
              DECLARE_METHOD(t_UserDefinedWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedWriter)[] = {
              { Py_tp_methods, t_UserDefinedWriter__methods_ },
              { Py_tp_init, (void *) t_UserDefinedWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(UserDefinedWriter, t_UserDefinedWriter, UserDefinedWriter);

            void t_UserDefinedWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedWriter), &PY_TYPE_DEF(UserDefinedWriter), module, "UserDefinedWriter", 0);
            }

            void t_UserDefinedWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "class_", make_descriptor(UserDefinedWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "wrapfn_", make_descriptor(t_UserDefinedWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedWriter::initializeClass, 1)))
                return NULL;
              return t_UserDefinedWriter::wrap_Object(UserDefinedWriter(((t_UserDefinedWriter *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a2((jobject) NULL);
              UserDefinedWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UserDefinedWriter(a0, a1, a2));
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
